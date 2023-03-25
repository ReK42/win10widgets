[MeasureGCW]
Measure=Plugin
Plugin=PowershellRM
Line=Add-Type -AssemblyName System.Device
Line2=$GCW = New-Object System.Device.Location.GeoCoordinateWatcher
Line3=Start-Sleep -Milliseconds 100;if($GCW.Permission -ne 'Granted'){'Access Denied';return -1}
Line4=$GCW.Start();while($GCW.Status -ne 'Ready'){Start-Sleep -Milliseconds 100}
Line5=""$($GCW.Position.Location.Latitude),$($GCW.Position.Location.Longitude)""
UpdateDivider=600
OnUpdateAction=[!SetVariable URLSite "#URLSitePre#[MeasureGCW]#URLSitePost#"]
