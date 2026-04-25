; ----------------------------------------- Shadow

[Shadow]
Meter =Shape
; Sides
Shape =Rectangle (#S#*#SkinWidth#+#ShadowR#),(#S#*#ShadowR#),#ShadowR#,#SkinHeight# | Extend Mods | FillLinearGradient Grad1
Shape2=Rectangle (#S#*#ShadowR#),(#S#*#SkinHeight#+#ShadowR#),#SkinWidth#,#ShadowR# | Extend Mods | FillLinearGradient Grad2
Shape3=Rectangle 0,(#S#*#ShadowR#),#ShadowR#,#SkinHeight# | Extend Mods | FillLinearGradient Grad3
Shape4=Rectangle (#S#*#ShadowR#),0,#SkinWidth#,#ShadowR#  | Extend Mods | FillLinearGradient Grad4
; Corners
Shape5=Rectangle (#S#*#SkinWidth#+#ShadowR#),(#S#*#SkinHeight#+#ShadowR#),#ShadowR#,#ShadowR# | Extend Mods | FillRadialGradient Grad5
Shape6=Rectangle 0,(#S#*#SkinHeight#+#ShadowR#),#ShadowR#,#ShadowR# | Extend Mods | FillRadialGradient Grad6
Shape7=Rectangle 0,0,#ShadowR#,#ShadowR# | Extend Mods | FillRadialGradient Grad7
Shape8=Rectangle (#S#*#SkinWidth#+#ShadowR#),0,#ShadowR#,#ShadowR# | Extend Mods | FillRadialGradient Grad8
Mods  =Scale #S#,#S#, 0,0 | StrokeWidth 0
; Side Gradients
Grad1 =000 | 0,0,0,0; 0.0 |  0,0,0,20; 0.2 | 0,0,0,30; 0.4 | 0,0,0,40; 0.6 | 0,0,0,60; 0.8 | 0,0,0,100; 1.0
Grad2 =090 | 0,0,0,0; 0.0 |  0,0,0,20; 0.2 | 0,0,0,30; 0.4 | 0,0,0,40; 0.6 | 0,0,0,60; 0.8 | 0,0,0,100; 1.0
Grad3 =180 | 0,0,0,0; 0.0 |  0,0,0,20; 0.2 | 0,0,0,30; 0.4 | 0,0,0,40; 0.6 | 0,0,0,60; 0.8 | 0,0,0,100; 1.0
Grad4 =270 | 0,0,0,0; 0.0 |  0,0,0,20; 0.2 | 0,0,0,30; 0.4 | 0,0,0,40; 0.6 | 0,0,0,60; 0.8 | 0,0,0,100; 1.0
; Corner Gradients
Grad5 =(-#S#*#ShadowR#/2),(-#S#*#ShadowR#/2),0,0,(#S#*#ShadowR#),(#S#*#ShadowR#) | 0,0,0,0; 1.0 |  0,0,0,20; 0.8 | 0,0,0,30; 0.6 | 0,0,0,40; 0.4 | 0,0,0,60; 0.2 | 0,0,0,100; 0.0
Grad6 =( #S#*#ShadowR#/2),(-#S#*#ShadowR#/2),0,0,(#S#*#ShadowR#),(#S#*#ShadowR#) | 0,0,0,0; 1.0 |  0,0,0,20; 0.8 | 0,0,0,30; 0.6 | 0,0,0,40; 0.4 | 0,0,0,60; 0.2 | 0,0,0,100; 0.0
Grad7 =( #S#*#ShadowR#/2),( #S#*#ShadowR#/2),0,0,(#S#*#ShadowR#),(#S#*#ShadowR#) | 0,0,0,0; 1.0 |  0,0,0,20; 0.8 | 0,0,0,30; 0.6 | 0,0,0,40; 0.4 | 0,0,0,60; 0.2 | 0,0,0,100; 0.0
Grad8 =(-#S#*#ShadowR#/2),( #S#*#ShadowR#/2),0,0,(#S#*#ShadowR#),(#S#*#ShadowR#) | 0,0,0,0; 1.0 |  0,0,0,20; 0.8 | 0,0,0,30; 0.6 | 0,0,0,40; 0.4 | 0,0,0,60; 0.2 | 0,0,0,100; 0.0

UpdateDivider=-1
Hidden=(#ShadowR#=0 ? 1:0)

; ----------------------------------------- Background

[Background]
Meter =Shape
Shape =Rectangle (#S#*0),(#S#*0),(#SkinWidth#-00),(#SkinHeight#-00) | Extend Mods | StrokeWidth 0 | FillColor #ColorBG#,#Alpha#
Shape2=Rectangle (#S#*5),(#S#*5),(#SkinWidth#-10),(#SkinHeight#-10) | Extend Mods | StrokeWidth 2 | FillColor #ColorBG#,0000000 | StrokeColor #ColorA2#,(#Alpha#/4*#Border#)
Mods  =Scale #S#,#S#,0,0
X     =(#S#*#ShadowR#)
Y     =(#S#*#ShadowR#)

UpdateDivider=-1

[BlurredBG]
Measure    =Plugin
Plugin     =FrostedGlass
BlurEnabled=(#Alpha#=255 ? 0:#Blur#)

UpdateDivider=-1