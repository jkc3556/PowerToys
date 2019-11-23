# Windows Key Shortcut Guide

# 설명
Windows 키 바로 가기 안내서는 Windows 키를 사용하는 일반적인 키보드 바로 가기를 보여줍니다.

# 사용
키보드 Windows 키를 약 1초간 누르고 있으면 Windows 키를 사용하는 키보드 단축키를 보여주는 오버레이가 나타납니다:
- 활성 창의 위치를 변경하기위한 바로 가기.
- 일반적인 Windows 단축키. 
- 작업 표시 줄 바로 가기.

Windows 키에서 손을 떼면 오버레이가 사라집니다. 바로 가기 가이드가 1초 미만으로 표시된 경우 바로 가기 가이드가 사라진 후에 시작 메뉴가 나타납니다.

![Image of the Overlay](/doc/images/shortcut_guide/usage.png)

가이드가 표시되는 동안 Windows 키 키보드 단축키를 사용할 수 있으며 해당 단축키 (활성 창 이동, 화살표 단축키 동작 변경 등)의 결과가 안내서에 표시됩니다.

# 옵션
이러한 구성은 PowerToys 설정 화면에서 편집할 수 있습니다:
- "바로 가기 안내 (ms)를 표시하기 전에 Windows 키를 누르는 시간" - 바로 가기 안내서가 표시되기 전에 Windows 키를 누르는 시간 (ms)입니다.
- "바로 가기 안내선 오버레이 배경의 불투명도 (%)" - 이 설정을 변경하면 바로 가기 안내선 아래의 작업 환경을 다른 각도로 차단하여 바로 가기 안내선 오버레이 배경의 불투명도를 제어합니다.

![Image of the Options](/doc/images/shortcut_guide/settings.png)

# 백로그
이 유틸리티의 백로그는 [여기](https://github.com/Microsoft/PowerToys/tree/master/doc/planning/ShortcutGuideBacklog.md)에서 확인 가능하고 소스 코드는 [여기](https://github.com/Microsoft/PowerToys/tree/master/src/modules/shortcut_guide)에서 확인 가능하다.

# 코드 구성

#### [`dllmain.cpp`](./dllmain.cpp)
DLL 상용구 코드를 포함합니다.

#### [`shortcut_guide.cpp`](./shortcut_guide.cpp)
모듈 인터페이스 코드를 포함합니다. 설정 값과 키보드 이벤트 리스너를 초기화합니다.

#### [`overlay_window.cpp`](./overlay_window.cpp)
SVG를 로드하고 오버레이 창의 작성 및 렌더링을 위한 코드를 포함합니다.

#### [`keyboard_state.cpp`](./keyboard_state.cpp)
키보드의 현재 상태를 확인하기 위한 도우미 방법이 포함되어 있습니다.

#### [`target_state.cpp`](./target_state.cpp)
키보드 이벤트를 처리하는 상태 머신. 오버레이를 표시할 시기, 시작 메뉴를 표시하지 않을 시기 (오버레이가 충분히 길게 표시되는 경우) 등을 결정해야 합니다.
#### [`trace.cpp`](./trace.cpp)
원격 측정 코드가 들어 있습니다.
