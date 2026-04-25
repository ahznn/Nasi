-- CalendarLua.lua (each cell exactly 3 characters wide)
function Initialize()
    return ""
end

function Update()
    local now = os.date("*t")
    local year = now.year
    local month = now.month

    -- First day of month (0=Sunday .. 6=Saturday)
    local firstDayOfWeek = tonumber(os.date("%w", os.time({year=year, month=month, day=1})))
    -- Convert to Monday-first (0=Monday .. 6=Sunday)
    local offset = (firstDayOfWeek == 0) and 6 or (firstDayOfWeek - 1)

    local daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    if (year % 4 == 0 and year % 100 ~= 0) or (year % 400 == 0) then
        daysInMonth[2] = 29
    end
    local totalDays = daysInMonth[month]

    local gridLines = {}
    local dayCounter = 1
    for row = 1, 6 do
        local line = ""
        for col = 1, 7 do
            if row == 1 and col <= offset then
                -- Empty cell: exactly 3 spaces
                line = line .. "   "
            elseif dayCounter <= totalDays then
                -- Number cell: two digits + a space (total 3 characters)
                line = line .. string.format("%02d", dayCounter) .. " "
                dayCounter = dayCounter + 1
            else
                -- Empty cell after month ends
                line = line .. "   "
            end
        end
        -- Remove trailing space from the line (optional, keeps it clean)
        line = line:gsub("%s$", "")
        gridLines[#gridLines + 1] = line
        if dayCounter > totalDays then break end
    end

    return table.concat(gridLines, "\n")
end