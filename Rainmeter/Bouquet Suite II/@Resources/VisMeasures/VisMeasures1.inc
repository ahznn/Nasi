[MeasureAudio]
Measure    =Plugin
Plugin     =AudioLevel
Port       =Output
FFTSize    =4100
FFTOverlap =3600
FFTAttack  =300
FFTDecay   =200
Bands      =#BarN#
FreqMin    =32
FreqMax    =20500
Sensitivity=40

[Band0]
BandIdx=1
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 0 ? 0:1)
OnChangeAction=[!UpdateMeter 0]

[Band1]
BandIdx=1
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 1 ? 0:1)
OnChangeAction=[!UpdateMeter 1]

[Band2]
BandIdx=2
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 2 ? 0:1)
OnChangeAction=[!UpdateMeter 2]

[Band3]
BandIdx=3
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 3 ? 0:1)
OnChangeAction=[!UpdateMeter 3]

[Band4]
BandIdx=4
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 4 ? 0:1)
OnChangeAction=[!UpdateMeter 4]

[Band5]
BandIdx=5
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 5 ? 0:1)
OnChangeAction=[!UpdateMeter 5]

[Band6]
BandIdx=6
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 6 ? 0:1)
OnChangeAction=[!UpdateMeter 6]

[Band7]
BandIdx=7
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 7 ? 0:1)
OnChangeAction=[!UpdateMeter 7]

[Band8]
BandIdx=8
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 8 ? 0:1)
OnChangeAction=[!UpdateMeter 8]

[Band9]
BandIdx=9
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 9 ? 0:1)
OnChangeAction=[!UpdateMeter 9]

[Band10]
BandIdx=10
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 10 ? 0:1)
OnChangeAction=[!UpdateMeter 10]

[Band11]
BandIdx=11
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 11 ? 0:1)
OnChangeAction=[!UpdateMeter 11]

[Band12]
BandIdx=12
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 12 ? 0:1)
OnChangeAction=[!UpdateMeter 12]

[Band13]
BandIdx=13
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 13 ? 0:1)
OnChangeAction=[!UpdateMeter 13]

[Band14]
BandIdx=14
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 14 ? 0:1)
OnChangeAction=[!UpdateMeter 14]

[Band15]
BandIdx=15
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 15 ? 0:1)
OnChangeAction=[!UpdateMeter 15]

[Band16]
BandIdx=16
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 16 ? 0:1)
OnChangeAction=[!UpdateMeter 16]

[Band17]
BandIdx=17
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 17 ? 0:1)
OnChangeAction=[!UpdateMeter 17]

[Band18]
BandIdx=18
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 18 ? 0:1)
OnChangeAction=[!UpdateMeter 18]

[Band19]
BandIdx=19
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 19 ? 0:1)
OnChangeAction=[!UpdateMeter 19]

[Band20]
BandIdx=20
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 20 ? 0:1)
OnChangeAction=[!UpdateMeter 20]

[Band21]
BandIdx=21
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 21 ? 0:1)
OnChangeAction=[!UpdateMeter 21]

[Band22]
BandIdx=22
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 22 ? 0:1)
OnChangeAction=[!UpdateMeter 22]

[Band23]
BandIdx=23
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 23 ? 0:1)
OnChangeAction=[!UpdateMeter 23]

[Band24]
BandIdx=24
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 24 ? 0:1)
OnChangeAction=[!UpdateMeter 24]

[Band25]
BandIdx=25
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 25 ? 0:1)
OnChangeAction=[!UpdateMeter 25]

[Band26]
BandIdx=26
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 26 ? 0:1)
OnChangeAction=[!UpdateMeter 26]

[Band27]
BandIdx=27
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 27 ? 0:1)
OnChangeAction=[!UpdateMeter 27]

[Band28]
BandIdx=28
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 28 ? 0:1)
OnChangeAction=[!UpdateMeter 28]

[Band29]
BandIdx=29
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 29 ? 0:1)
OnChangeAction=[!UpdateMeter 29]

[Band30]
BandIdx=30
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 30 ? 0:1)
OnChangeAction=[!UpdateMeter 30]

[Band31]
BandIdx=31
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 31 ? 0:1)
OnChangeAction=[!UpdateMeter 31]

[Band32]
BandIdx=32
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 32 ? 0:1)
OnChangeAction=[!UpdateMeter 32]

[Band33]
BandIdx=33
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 33 ? 0:1)
OnChangeAction=[!UpdateMeter 33]

[Band34]
BandIdx=34
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 34 ? 0:1)
OnChangeAction=[!UpdateMeter 34]

[Band35]
BandIdx=35
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 35 ? 0:1)
OnChangeAction=[!UpdateMeter 35]

[Band36]
BandIdx=36
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 36 ? 0:1)
OnChangeAction=[!UpdateMeter 36]

[Band37]
BandIdx=37
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 37 ? 0:1)
OnChangeAction=[!UpdateMeter 37]

[Band38]
BandIdx=38
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 38 ? 0:1)
OnChangeAction=[!UpdateMeter 38]

[Band39]
BandIdx=39
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 39 ? 0:1)
OnChangeAction=[!UpdateMeter 39]

[Band40]
BandIdx=40
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 40 ? 0:1)
OnChangeAction=[!UpdateMeter 40]

[Band41]
BandIdx=41
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 41 ? 0:1)
OnChangeAction=[!UpdateMeter 41]

[Band42]
BandIdx=42
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 42 ? 0:1)
OnChangeAction=[!UpdateMeter 42]

[Band43]
BandIdx=43
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 43 ? 0:1)
OnChangeAction=[!UpdateMeter 43]

[Band44]
BandIdx=44
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 44 ? 0:1)
OnChangeAction=[!UpdateMeter 44]

[Band45]
BandIdx=45
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 45 ? 0:1)
OnChangeAction=[!UpdateMeter 45]

[Band46]
BandIdx=46
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 46 ? 0:1)
OnChangeAction=[!UpdateMeter 46]

[Band47]
BandIdx=47
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 47 ? 0:1)
OnChangeAction=[!UpdateMeter 47]

[Band48]
BandIdx=48
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 48 ? 0:1)
OnChangeAction=[!UpdateMeter 48]

[Band49]
BandIdx=49
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 49 ? 0:1)
OnChangeAction=[!UpdateMeter 49]

[Band50]
BandIdx=50
Measure=Plugin
Plugin =AudioLevel
Parent =MeasureAudio
Group  =Bands
Type   =Band 

Disabled      =(#BarN# > 50 ? 0:1)
OnChangeAction=[!UpdateMeter 50]