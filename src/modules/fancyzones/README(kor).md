# Fancy Zones
Fancy Zones는 창을 효율적인 레이아웃으로 쉽게 정렬하고 잘라내고 레이아웃을 설정할 수 있게 설계된 창 관리자입니다. Fancy Zones는 사용자가 창의 드래그 대상인 데스크탑의 창 위치를 정의할 수 있도록 합니다. 사용자가 창을 영역으로 끌어오면 해당 영역을 채우도록 창 크기가 조정되고 위치가 조정됩니다. 

![Fancy Zones](FancyZones.png)

Fancy Zones를 시작하려면 PowerToys 설정에서 유틸리티를 활성화한 다음 FancyZones 설정 UI를 호출해야 합니다. 이 UI를 호출하는 설정에 있는 버튼을 클릭하거나 Win + ~를 눌러 시작할 수 있습니다. UI를 처음 시작할 때 모니터에 있는 창 수에 따라 조정할 수 있는 영역 레이아웃 목록이 표시됩니다. 레이아웃을 선택하면 모니터에서 해당 레이아웃의 미리보기가 표시됩니다. 저장 및 닫기 버튼을 누르면 해당 레이아웃이 모니터로 설정됩니다.

![Fancy Zones Picker](Picker.png)

편집기는 사용자 정의에 맞는 레이아웃 작성 및 저장을 지원합니다. 이 기능은 편집기 UI의 "사용자 정의"탭에 있습니다. 사용자 지정 영역 레이아웃을 만드는 방법에는 창 레이아웃과 테이블 레이아웃의 두 가지가 있습니다. 이들은 또한 추가 및 삭제 모델로 생각할 수 있습니다. 추가 창 레이아웃 모델은 빈 레이아웃으로 시작하며 창과 유사하게 끌어서 크기를 조정할 수 있는 영역 추가를 지원합니다. 

![Fancy Zones Window Editor Mode](WindowEditor.png)

삭제 테이블 레이아웃 모델은 테이블 레이아웃으로 시작하며 영역을 분할 및 병합한 다음 영역 사이의 홈 크기를 조정하여 영역을 만들 수 있습니다. 

![Fancy Zones Table Editor Mode](TableEditor.png)

The backlog for the utility can be found [here](https://github.com/Microsoft/PowerToys/tree/master/doc/planning/FancyZonesBacklog.md) and the source code is [here](https://github.com/Microsoft/PowerToys/tree/master/src/modules/fancyzones).

## Shortcut Keys
| Shortcut      | Action |
| ----------- | ----------- |
| Win + ~      | Launches editor       |
| Win+Ctrl+\<Number>   | Cycles through saved layouts with the corresponding number of zones        |
| Win+Left/Right Arrow | Move focused window between zones (only if Override snap hotkeys setting is enabled)  |

## Settings
| Setting | Description |
| --------- | ------------- |
| Enable zones while dragging with the shift key | Toggles between auto-snap mode with the shift key disabling snapping during a drag and manual snap mode where pressing the shift key during a drag enables snapping |
| Override Windows Snap hotkeys (win+arrow) to move between zones | Enables or disables Windows Aero Snapping when Fancy Zones is running |
| Keep windows in their zones when the screen resolution changes | After a screen resolution change, if this setting is enabled, Fancy Zones will resize and reposition windows into the zones they were previously in |
| Keep windows in their zones when the active FancyZones layout changes | When this option is on, Fancy Zones will resize and position windows into the new zone layout by maintaining the previous zone number location of each window |
| Flash zones when the active FancyZones layout changes | Briefly flash the zone layout when the layout changes or a new virtual desktop is activated |
| Keep windows in their zones when the active virtual desktop changes | If an application is pinned to all virtual desktops, this setting will keep that window in the same zone on all desktops |
| Zone Highlight Color (Default #0078D7) | the color that a zone becomes when it is the active drop target during a window drag 
| Use new zone editing experience (Preview) | When enabled, the new editor is enabled.  The original editor has better support for multi-mon layouts |  
| Move newly created windows to the last known zone | Automatically move a newly opened window into the last zone location that application was in |

![Fancy Zones Settings UI](FancyZonesSettings.png)

