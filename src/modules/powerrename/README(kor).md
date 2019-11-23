# PowerRename
많은 파일의 파일 이름을 수정해야 했지만 모든 파일의 이름을 같은 이름으로 바꾸고 싶지 않았습니까? 다양한 파일 이름의 일부에서 간단한 검색 및 바꾸기를 원하십니까? 여러 항목에서 표준   이름 바꾸기를 수행하고 싶습니까?

PowerRename은 간단한 검색 및 바꾸기 또는 보다 강력한 정규 표현 일치를 사용하여 고급 대량 이름 바꾸기를 위한 Windows Shell Context Menu Extension입니다. 검색 필드를 입력하고 바꾸면 입력 미리보기 영역에 항목 이름이 바뀔 항목이 표시됩니다. 미리보기 영역에서 작업에 포함하거나 제외할 특정 항목을 토글할 수 있습니다. 다른 확인란 옵션을 사용하면 이름 바꾸기 작업의 범위를 더 많이 제어할 수 있습니다. 그런 다음 PowerRename은 Windows 탐색기 파일 작업 엔진을 호출하여 이름을 바꿉니다. 이는 PowerRename이 종료된 후 이름 바꾸기 작업을 취소할 수 있다는 장점이 있습니다. PowerRename은 대부분의 대량 이름 바꾸기 개요를 다루면서도 일반 사용자의 편의를 위해 노력하고 있습니다.

## 사용법 설명
아래 설명에서는 폴더의 모든 이미지 파일 이름에서 "Pampalona"의 모든 인스턴스를 "Pamplona"로 바꿉니다. 모든 파일의 이름이 고유하므로 수동으로 하나씩 완료하는 데 시간이 오래 걸립니다. PowerRename을 사용하면 이 작업을 몇 초 만에 수행할 수 있습니다. Windows 탐색기 상황에 맞는 메뉴에서 원하는 경우 이름 바꾸기를 취소할 수 있습니다.

![PowerRename Demo](/src/modules/powerrename/images/PowerRenameDemo.gif)

## 입력
### Search for
항목 이름과 일치하는 텍스트 또는 정규 표현

### Replace with
검색 텍스트와 일치하는 항목 이름에서 인스턴스를 대체할 텍스트

## 옵션

### Use Regular Expressions
선택하면 검색 필드가 정규식으로 해석됩니다. Replace 필드는 정규 표현 변수를 포함할 수도 있습니다 (아래 예 참조). 선택하지 않으면 검색 필드가 바꾸기 필드의 텍스트로 대체될 텍스트로 사용됩니다. 

### Case Sensitive
이 옵션을 선택하면 텍스트가 동일한 경우 검색 필드에 지정된 텍스트가 항목의 텍스트와 만 일치합니다. 기본적으로 대소 문자를 구분하지 않습니다.

### Match All Occurrences
이 옵션을 선택하면 검색 필드에서 일치하는 모든 텍스트가 텍스트 바꾸기로 바뀝니다. 그렇지 않으면 항목에서 텍스트 검색의 첫 번째 인스턴스만 바뀝니다 (왼쪽에서 오른쪽으로).

### Exclude Files
작업에 파일이 포함되지 않습니다.

### Exclude Folders
작업에 폴더가 포함되지 않습니다.

### Exclude Subfolder Items
폴더 내의 항목은 작업에 포함되지 않습니다. 기본적으로 모든 하위 폴더 항목이 포함됩니다.

### Enumerate Items
조작에서 수정된 파일 이름에 숫자 접미사를 추가합니다. 예: foo.jpg-> foo (1) .jpg

### Item Name Only
파일 확장자가 아닌 파일 이름 부분 만 조작으로 수정됩니다. 예: txt.txt-> NewName.txt

### Item Extension Only
조작으로 파일 확장자가 아닌 파일 확장자 부분 만 수정됩니다. 예: txt.txt-> txt.NewExtension


## Regular Expressions

대부분의 경우 간단한 검색 및 바꾸기만으로 충분합니다. 다른 사용자는 더 많은 제어가 필요합니다. 그것이 정규 표현이 들어오는 곳입니다. 정규 표현은 텍스트의 검색 패턴을 정의합니다. 정규 표현을 사용하여 텍스트를 검색, 편집 및 조작할 수 있습니다. 정규 표현에 의해 정의된 패턴은 주어진 문자열에 대해 한 번 또는 여러 번 일치하거나 전혀 일치하지 않을 수 있습니다. PowerRename은 최신 프로그래밍 언어에서 일반적으로 사용되는 ECMAScript 문법을 사용합니다.

정규 표현을 활성화하려면 "정규 표현 사용"체크 상자를 체크하십시오. 참고: 정규 표현을 사용하는 동안 "모든 일치 항목 일치"를 확인하고 싶을 것입니다.

### 예시

간단한 매칭 예제:

| Search for     | Description                                           |
| -------------- | ------------- |
| .*             | 이름의 모든 텍스트와 연결                        |
| ^foo           | "foo"로 시작하는 텍스트 연결                     |
| bar$           | "bar"로 끝나는 텍스트 연결                       |
| ^foo bar$      | "foo"로 시작하고 "bar"로 끝나는 텍스트 연결 |
| .+?(?=bar)     | 모든 것을 "bar"까지 연결                          |
| foo[\s\S]\*bar | "foo"와 "bar"사이의 모든 것을 연결              |


매칭 및 변수 예:

| Search for | Replace With  | Description                                |
| ---------- | ------------- |--------------------------------------------|
| (.\*).png  | foo\_$1.png   | 기존의 파일 이름 앞에 "foo_"를 덧붙임 |
| (.\*).png  | $1\_foo.png   | 기존 파일 이름에 "\_foo"를 추가  |
| (.\*)      | $1.txt        | 기존 파일 이름에 ".txt"확장자를 추가 |
| (^\w+\.$)\|(^\w+$) | $2.txt | 확장자가 없는 경우에만 기존 파일 이름에 ".txt"확장자를 추가 |


### 외부 도움
온라인으로 유용한 예제 / 치트 시트가 있습니다.

[Regex tutorial — A quick cheatsheet by examples](https://medium.com/factory-mind/regex-tutorial-a-simple-cheatsheet-by-examples-649dc1c3f285)

[ECMAScript Regular Expressions Tutorial](https://o7planning.org/en/12219/ecmascript-regular-expressions-tutorial)


