[Player]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=#Player#
PlayerType=FILE

[Cover]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Cover

[Track]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Title
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Artist
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Album
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Progress

[Duration]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Duration

[Position]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Position

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=State
IfCondition  =(#CurrentSection#=1)
IfTrueAction =[!SetOption PlayPause "Text" "[\xE9FE]"][!UpdateMeter PlayPause]
IfFalseAction=[!SetOption PlayPause "Text" "[\xE9FD]"][!UpdateMeter PlayPause]

DynamicVariables=1