-- RandomWords.lua
-- Reads word list from @Resources\Scripts\words.txt
-- Updates MeterWord1 through MeterWord20 directly

function Update()
    local filePath = SKIN:GetVariable('@') .. 'Scripts\\words.txt'
    local wordCount = 20
    local allowDuplicates = false   -- change to true if you want repeats

    -- Try to open the word list
    local file = io.open(filePath, 'r')
    if not file then
        for i = 1, wordCount do
            SKIN:Bang('!SetOption', 'MeterWord'..i, 'Text', 'missing')
        end
        return
    end

    -- Read all words from file (one per line)
    local words = {}
    for line in file:lines() do
        local w = line:match("^%s*(.-)%s*$")  -- trim whitespace
        if w ~= "" then
            table.insert(words, w)
        end
    end
    file:close()

    if #words == 0 then
        for i = 1, wordCount do
            SKIN:Bang('!SetOption', 'MeterWord'..i, 'Text', 'empty')
        end
        return
    end

    -- Select random words
    local selected = {}
    if allowDuplicates then
        for i = 1, wordCount do
            selected[i] = words[math.random(1, #words)]
        end
    else
        -- Shuffle a copy of the word list (Fisher-Yates)
        local shuffled = {}
        for i, v in ipairs(words) do shuffled[i] = v end
        for i = #shuffled, 2, -1 do
            local j = math.random(i)
            shuffled[i], shuffled[j] = shuffled[j], shuffled[i]
        end
        -- Pick 20, cycling if needed
        for i = 1, wordCount do
            local idx = (i - 1) % #shuffled + 1
            selected[i] = shuffled[idx]
        end
    end

    -- Update each meter's text
    for i = 1, wordCount do
        SKIN:Bang('!SetOption', 'MeterWord'..i, 'Text', selected[i])
    end
    SKIN:Bang('!Redraw')
end