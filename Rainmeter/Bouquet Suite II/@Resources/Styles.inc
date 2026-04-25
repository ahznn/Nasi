
; ----------------------------------------- Media Player

[TrackInfo]
MeasureName =Track
MeasureName2=Artist
MeasureName3=Album
InlineSetting =Face | #Font#
InlineSetting2=Size | (#S#*#FontSZ#)
InlineSetting3=Color| #ColorFG#
UpdateDivider =-1
StringAlign=#Align#Center
ClipString =1
Antialias  =#AA#
Group      =TrackInfo
X=(#S#*(#Album#=1 ? 15:20)+#ShadowR#)
H=(#S#*#FontSZ#+2)
W=(#S#*(#SkinWidth#-100))

[PosDur]
MeasureName =Position
MeasureName2=Duration
InlineSetting =Face | #Font#
InlineSetting2=Size | (#S#*#FontSZ#)
InlineSetting3=Color| #ColorFG#
InlineSetting4=Color| #ColorA1#
InlinePattern4="(.*) "
UpdateDivider =-1
StringAlign=CenterCenter
ClipString =1
Antialias  =#AA#
Hidden     =#Vis#
X=(#S#*(#Album#=1 ? 37:40)+#ShadowR#)
Y=(#S#*(#Album#=1 ? (#SkinHeight#-15):(#SkinHeight#-20))+#ShadowR#)
H=(#S#*#FontSZ#+2)

[Controls]
InlineSetting =Face | Siji
InlineSetting2=Size | (#S#*9)
InlineSetting3=Color| #ColorFG#
UpdateDivider =-1
StringAlign=CenterCenter
Antialias  =#AA#
Group      =Controls
X=(#S#*9)R
Y=(#S#*(#Album#=1 ? 15:20)+#ShadowR#)
H=(#S#*#FontSZ#)

[Bar]
MeasureName=Band#CurrentSection#
BarColor   =#ColorA1#
Group=Bars
Flip =#Flip#
H    =(#S#*#BarH#)
W    =(#S#*#BarW#)
X    =(#S#*#BarW#)R
Y    =r

DynamicVariables=(#BarN# > #CurrentSection# ? 1:0)
Hidden          =(#BarN# > #CurrentSection# ? 0:1)
UpdateDivider   =-1

; ----------------------------------------- Screenfetch

[Screenfetch]
MeasureName =Username
MeasureName2=OSVersion
MeasureName3=OSBits
MeasureName4=Uptime
MeasureName5=CPU
MeasureName6=RAM
InlineSetting =Face  | #Font#
InlineSetting2=Size  | (#S#*#FontSZ#)
InlineSetting3=Color | #ColorFG#
InlineSetting4=Color | #ColorA1#
InlinePattern4=\.\.\.(.*)
InlineSetting5=Color | #ColorFG#
InlinePattern5= h | m 
UpdateDivider =-1
ClipString =1
Antialias  =#AA#
X=(#S#*140+#ShadowR#)
Y=(#S#*9)R
H=(#S#*12)
W=(#S#*140)

[PowerBG]
UpdateDivider=-1
SolidColor   =#ColorA2#
Y=(#S#*145+#ShadowR#)
H=(#S#*030)
W=(#S#*030)

MouseOverAction =[!SetOption Title "Text" "#CurrentSection#"][!SetOption #CurrentSection# "SolidColor" "#ColorFG#,30"][!UpdateMeter #CurrentSection#][!UpdateMeter Title][!Redraw]
MouseLeaveAction=[!SetOption Title "Text" "SESSION CONTROL"]   [!SetOption #CurrentSection# "SolidColor" "#ColorA2#   "][!UpdateMeter #CurrentSection#][!UpdateMeter Title][!Redraw]

[PowerIcon]
InlineSetting =Face | Siji
InlineSetting2=Size | (#S#*9)
InlineSetting3=Color| 255,255,255
UpdateDivider =-1
StringAlign=CenterCenter
Antialias  =#AA#
X=(#S#*15)r
Y=(#S#*15)r

; ----------------------------------------- Launcher

[App]
InlineSetting =Face  | #Font#
InlineSetting2=Size  | (#S#*#FontSZ#)
InlineSetting3=Color | #ColorFG#
UpdateDivider =-1
StringAlign=CenterCenter
ClipString =1
SolidColor =#ColorFG#,40
Antialias  =#AA#
Group      =Apps | 1
X=(#S#*(#SkinWidth#/40))R
Y=r
H=(#S#*#SkinHeight#-20)
W=(#S#*(#SkinWidth#/06))

MouseOverAction    =[!SetOption #CurrentSection# "InlineSetting3" "Color|#ColorA1#"][!SetOption #CurrentSection# "SolidColor" "#ColorA2#,40"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction   =[!SetOption #CurrentSection# "InlineSetting3" "Color|#ColorFG#"][!SetOption #CurrentSection# "SolidColor" "#ColorFG#,40"][!UpdateMeter #CurrentSection#][!Redraw]
LeftMouseDownAction=[!SetOption #CurrentSection# "InlineSetting3" "Color|#ColorA2#"][!SetOption #CurrentSection# "SolidColor" "#ColorA2#,20"][!UpdateMeter #CurrentSection#][!Redraw]

; ----------------------------------------- Recycle Bin

[BinPrompt]
InlineSetting =Face | #Font#
InlineSetting2=Size | (#S#*#FontSZ#)
InlineSetting3=Color| #ColorFG#
UpdateDivider =-1
StringAlign=CenterCenter
Antialias  =#AA#
Hidden     =1
Group      =BinPrompt
Text       =#CurrentSection#
Y=r
W=(#S#*30)
H=(#S#*#FontSZ#*1.5)

MouseOverAction =[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,40"][!SetOption #CurrentSection# "InlineSetting3" "Color|#ColorA1#"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,00"][!SetOption #CurrentSection# "InlineSetting3" "Color|#ColorFG#"][!UpdateMeter #CurrentSection#][!Redraw]

; ----------------------------------------- Top Processes

[Process]
InlineSetting =Face  | #Font#
InlineSetting2=Size  | (#S#*#FontSZ#)
InlineSetting3=Color | #ColorFG#
InlineSetting4=Color | #ColorA1#
InlinePattern4=\.\.\.(.*)
StringCase=Proper
ClipString=1
Antialias =#AA#
Text=%1 ... %2%
X   =(#S#*15+#ShadowR#)
Y   =(#S#*10)R
W   =(#S#*#SkinWidth#-30)

; ----------------------------------------- Notes

[Text]
MeasureName   =TextString#RawString#
InlineSetting =Face  | #Font#
InlineSetting2=Size  | (#S#*#FontSZ#)
InlineSetting3=Color | #ColorFG#
ClipString    =1
Antialias     =#AA#
X=(#S#*10+#ShadowR#)
Y=(#S#*10+#ShadowR#)
W=(#S#*#SkinWidth# -20)
H=(#S#*#SkinHeight#-20)

InlineSetting4=Color|#ColorA1#,(#RawString#*255)
InlinePattern4=#LineBreak#|#Strikethru#|#Underline#|#Bolded#
InlineSetting5=Size|(#RawString#=1 ? #FontSZ#:1)
InlinePattern5=#LineBreak#|#Strikethru#|#Underline#|#Bolded#

InlineSetting6=Strikethrough
InlinePattern6=#Strikethru#(.*)#Strikethru#
InlineSetting7=Underline
InlinePattern7=#Underline#(.*)#Underline#
InlineSetting8=Weight|700
InlinePattern8=#Bolded#(.*)#Bolded#

LeftMouseUpAction=[!CommandMeasure #CurrentSection#Input "ExecuteBatch 1"]

; ----------------------------------------- Color Picker

[ColorLabel]
InlineSetting =Face | #Font#
InlineSetting2=Size | (#S#*#FontSZ#)
InlineSetting3=Color| #ColorFG#
InlineSetting4=Color| 250,100,100
InlineSetting5=Color| 100,250,100
InlineSetting6=Color| 100,100,250
InlinePattern4= (.*),
InlinePattern5=,(.*),
InlinePattern6=,[^,]*$
StringAlign=Center
Antialias  =#AA#
X=(#S#*(#SkinWidth# /02)+#ShadowR#)
Y=(#S#*(#SkinHeight#/80))R
W=(#S#*(#SkinWidth# -40))
H=(#S#*#FontSZ#)

[ColorSlider]
Mods  =Scale #S#,#S#,0,0 | StrokeWidth 0 
X=(#S#*10+#ShadowR#)
Y=(#S#*(#SkinHeight#/80))R
DynamicVariables=1

[SetColor]
Group         =SetColorVars
InlineSetting =Face | #Font#
InlineSetting2=Size | (#S#*#FontSZ#)
InlineSetting3=Color| #ColorFG#
StringAlign=Center
SolidColor =0,0,0,1
Antialias  =#AA#
Hidden     =1
X=(#S#*(#SkinWidth#/02)+#ShadowR#)
Y=(#S#*(#SkinWidth#-20)+#ShadowR#)

; ----------------------------------------- Settings

[Section]
InlineSetting =Face  | #Font#
InlineSetting2=Size  | (#S#*#FontSZ#)
InlineSetting3=Case  | Upper
Antialias     =#AA#
X   =(#S#*20+#ShadowR#)
Y=(#S#*25)r
W=(#S#*(#SkinWidth#-40))
H=(#S#*#FontSZ#*2)

Hidden          =([#CurrentSection#:Y]<(#S#*#ShadowR#) ? 1:(([#CurrentSection#:Y]+[#CurrentSection#:H])>(#S#*#SkinHeight#+#ShadowR#) ? 1:0))
DynamicVariables=1

[Swatch]
Mods=Scale #S#,#S#,0,0 | StrokeWidth 0
X   =(#S#*20+#ShadowR#)
Y   =(#S#*20)r

Hidden          =([#CurrentSection#:Y]<(#S#*#ShadowR#) ? 1:(([#CurrentSection#:Y]+[#CurrentSection#:H])>(#S#*#SkinHeight#+#ShadowR#) ? 1:0))
DynamicVariables=1

[OptionIT]
InlineSetting =Face  | #Font#
InlineSetting2=Color | #ColorFG#
InlineSetting3=Size  | (#S#*#FontSZ#)
InlineSetting4=Color | #ColorA1#
InlinePattern4=\.\.\.(.*)
Antialias     =#AA#
Padding       =(#S#*5),0,(#S#*5),0
X=(#S#*15+#ShadowR#)
Y=(#S#*20)r
W=(#S#*(#SkinWidth#-70))
H=(#S#*#FontSZ#+2)

MouseOverAction  =[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,90"][!UpdateMeter #CurrentSection#][!Update][!Redraw]
MouseLeaveAction =[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,00"][!UpdateMeter #CurrentSection#][!Update][!Redraw]
LeftMouseUpAction=[!CommandMeasure #CurrentSection#Input "ExecuteBatch 1"]
Hidden           =([#CurrentSection#:Y]<(#S#*#ShadowR#) ? 1:(([#CurrentSection#:Y]+[#CurrentSection#:H])>(#S#*#SkinHeight#+#ShadowR#) ? 1:0))
DynamicVariables =1

[OptionYN]
InlineSetting =Face  | #Font#
InlineSetting2=Color | #ColorFG#
InlineSetting3=Size  | (#S#*#FontSZ#)
InlineSetting4=Color | #YColor#
InlineSetting5=Color | #NColor#
InlinePattern4=1
InlinePattern5=0
Antialias     =#AA#
Padding       =(#S#*5),0,(#S#*5),0
X=(#S#*15+#ShadowR#)
Y=(#S#*20)r
W=(#S#*(#SkinWidth#-70))
H=(#S#*#FontSZ#+2)

MouseOverAction  =[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,90"][!UpdateMeter #CurrentSection#][!Update][!Redraw]
MouseLeaveAction =[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,00"][!UpdateMeter #CurrentSection#][!Update][!Redraw]
LeftMouseUpAction=[!CommandMeasure #CurrentSection#Input "ExecuteBatch 1"]
Hidden           =([#CurrentSection#:Y]<(#S#*#ShadowR#) ? 1:(([#CurrentSection#:Y]+[#CurrentSection#:H])>(#S#*#SkinHeight#+#ShadowR#) ? 1:0))
DynamicVariables =1

[OptionP]
InlineSetting =Face  | #Font#
InlineSetting2=Color | #ColorFG#
InlineSetting3=Size  | (#S#*#FontSZ#)
InlineSetting4=Color | #ColorA1#
InlinePattern4=#MedPlayer#
StringAlign=CenterCenter
SolidColor =0,0,0,1
Antialias  =#AA#
Text       =#CurrentSection#
X=(#S#*50)r
Y=r
W=(#S#*40)
H=(#S#*#FontSZ#*2)

DynamicVariables=1
MouseOverAction =[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,90"][!UpdateMeter #CurrentSection#][!Update][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# "SolidColor" "#ColorFG#,00"][!UpdateMeter #CurrentSection#][!Update][!Redraw]
Hidden          =([#CurrentSection#:Y]<(#S#*#ShadowR#) ? 1:(([#CurrentSection#:Y]+[#CurrentSection#:H])>(#S#*#SkinHeight#+#ShadowR#) ? 1:0))
DynamicVariables=1