---- Computer name measure ----
[ComputerName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=COMPUTER_NAME
UpdateDivider=-1

---- Date and time measure ----
[MeasureTimeHour]
Measure=Time
Format=%H

[MeasureTimeMinute]
Measure=Time
Format=%M

[MeasureTime]
Measure=Time
Format=%H:%M

[MeasureSeconds]
Measure=Time
Format=%S

[MeasureDay]
Measure=Time
Format=%A

[MeasureDate]
Measure=Time
Format=%B %d

---- CPU measure ----
[MeasureCPU]
Measure=CPU

---- RAM measure ----
[MeasurePhysMemUsed]
Measure=PhysicalMemory

---- Storage drives ----
[Drive1Used]
Measure=FreeDiskSpace
Drive=#Disk1#:
Total=0
InvertMeasure=1

[Drive1Label]
Measure=FreeDiskSpace
Drive=#Disk1#:
Label=1
Substitute="":"0"
IfCondition=(Drive1Label = 0)
IfTrueAction=[!SetOption "MeterDrive1Label" "Text" "#Disk1#:"][!Update]

[Drive2Used]
Measure=FreeDiskSpace
Drive=#Disk2#:
Total=0
InvertMeasure=1

[Drive2Label]
Measure=FreeDiskSpace
Drive=#Disk2#:
Label=1
Substitute="":"0"
IfCondition=(Drive2Label = 0)
IfTrueAction=[!SetOption "MeterDrive2Label" "Text" "#Disk2#:"][!Update]
