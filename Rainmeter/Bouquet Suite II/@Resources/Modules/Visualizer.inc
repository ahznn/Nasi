
; ----------------------------------------- Smooth Calc

[SmoothCalc]
Measure=Calc
IfCondition  =(#Smooth#=0)
IfTrueAction =[!SetOptionGroup Bars "MeasureName" "Calc#*CurrentSection*#"][!SetOption 0 "MeasureName" "Calc#*CurrentSection*#"]
IfFalseAction=[!SetOptionGroup Bars "MeasureName" "Band#*CurrentSection*#"][!SetOption 0 "MeasureName" "Band#*CurrentSection*#"]

; ----------------------------------------- Bars

[0]
Meter     =Bar
Group     =
MeterStyle=Bar
X         =(#S#*8)
Y         =(#S#*(#SkinHeight#-#BarH#-8)+#ShadowR#)

[1]
Meter     =Bar
MeterStyle=Bar

[2]
Meter     =Bar
MeterStyle=Bar

[3]
Meter     =Bar
MeterStyle=Bar

[4]
Meter     =Bar
MeterStyle=Bar

[5]
Meter     =Bar
MeterStyle=Bar

[6]
Meter     =Bar
MeterStyle=Bar

[7]
Meter     =Bar
MeterStyle=Bar

[8]
Meter     =Bar
MeterStyle=Bar

[9]
Meter     =Bar
MeterStyle=Bar

[10]
Meter     =Bar
MeterStyle=Bar

[11]
Meter     =Bar
MeterStyle=Bar

[12]
Meter     =Bar
MeterStyle=Bar

[13]
Meter     =Bar
MeterStyle=Bar

[14]
Meter     =Bar
MeterStyle=Bar

[15]
Meter     =Bar
MeterStyle=Bar

[16]
Meter     =Bar
MeterStyle=Bar

[17]
Meter     =Bar
MeterStyle=Bar

[18]
Meter     =Bar
MeterStyle=Bar

[19]
Meter     =Bar
MeterStyle=Bar

[20]
Meter     =Bar
MeterStyle=Bar

[21]
Meter     =Bar
MeterStyle=Bar

[22]
Meter     =Bar
MeterStyle=Bar

[23]
Meter     =Bar
MeterStyle=Bar

[24]
Meter     =Bar
MeterStyle=Bar

[25]
Meter     =Bar
MeterStyle=Bar

[26]
Meter     =Bar
MeterStyle=Bar

[27]
Meter     =Bar
MeterStyle=Bar

[28]
Meter     =Bar
MeterStyle=Bar

[29]
Meter     =Bar
MeterStyle=Bar

[30]
Meter     =Bar
MeterStyle=Bar

[31]
Meter     =Bar
MeterStyle=Bar

[32]
Meter     =Bar
MeterStyle=Bar

[33]
Meter     =Bar
MeterStyle=Bar

[34]
Meter     =Bar
MeterStyle=Bar

[35]
Meter     =Bar
MeterStyle=Bar

[36]
Meter     =Bar
MeterStyle=Bar

[37]
Meter     =Bar
MeterStyle=Bar

[38]
Meter     =Bar
MeterStyle=Bar

[39]
Meter     =Bar
MeterStyle=Bar

[40]
Meter     =Bar
MeterStyle=Bar

[41]
Meter     =Bar
MeterStyle=Bar

[42]
Meter     =Bar
MeterStyle=Bar

[43]
Meter     =Bar
MeterStyle=Bar

[44]
Meter     =Bar
MeterStyle=Bar

[45]
Meter     =Bar
MeterStyle=Bar

[46]
Meter     =Bar
MeterStyle=Bar

[47]
Meter     =Bar
MeterStyle=Bar

[48]
Meter     =Bar
MeterStyle=Bar

[49]
Meter     =Bar
MeterStyle=Bar

[50]
Meter     =Bar
MeterStyle=Bar
