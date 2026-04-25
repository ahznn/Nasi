[Player]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover

[Cover]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover
CoverPath =#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Title
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Artist
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Album
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Duration

[Position]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Position

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=State
IfCondition  =(#CurrentSection#=1)
IfTrueAction =[!SetOption PlayPause "Text" "[\xE9FE]"][!UpdateMeter PlayPause]
IfFalseAction=[!SetOption PlayPause "Text" "[\xE9FD]"][!UpdateMeter PlayPause]

DynamicVariables=1