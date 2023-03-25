# Win10 Widgets
Updated version of Win10 Widgets

## Licence
Licensed under [Creative Commons Attribution-NonCommercial-ShareAlike 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/)

## Contributors
- [Win10 Widgets](http://win10widgets.com) by [TJ Markham](https://github.com/tjmarkham)
- [Weather Patch V3.2020.10.18](https://www.deviantart.com/eclectic-tech/art/Win10-Weather-Patch-2020-10-18-780236969) by [Eclectic Tech](https://www.deviantart.com/eclectic-tech)
- [Widget improvements](https://github.com/ReK42/win10widgets) by [ReK42](https://github.com/ReK42)

## Changelog
### v1.1.0
- Include Win10Widgets Weather Patch V3.2020.10.18 by Eclectic Tech
- Improve CPU performance widget:
    - Add top process display
- Improve disk performance widget:
    - Replace PerfMon plugin with UsageMonitor for improved CPU usage
    - Fix usage percentage measure
        - % Disk Time counter is unreliable, no longer accurate in multi-spindle or SSD-based systems
        - Use the inversion of % Idle Time instead
    - Add the following counters:
        - Avg. Disk Queue Length
        - Disk Transfers/sec (IOPS)
        - Avg. Disk sec/Transfer
