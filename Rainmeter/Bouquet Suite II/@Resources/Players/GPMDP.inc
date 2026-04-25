[Player]
Measure=Plugin
Plugin =GPMDPPlugin

[Cover]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Cover
CoverPath=#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Title
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Artist
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Album
Substitute="0":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Progress

[Duration]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Duration
Substitute="0":"00:00"

[Position]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Position
Substitute="0":"00:00"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=State
IfCondition  =(#CurrentSection#=1)
IfTrueAction =[!SetOption PlayPause "Text" "[\xE9FE]"][!UpdateMeter PlayPause]
IfFalseAction=[!SetOption PlayPause "Text" "[\xE9FD]"][!UpdateMeter PlayPause]

DynamicVariables=1