## 3. 이해 용이성의 원칙

## 3.1 가독성

### 3.1.1 페이지의 언어

사용자의 화면에서 정보와 동작이 반드시 이해 가능해야 한다. 텍스트 콘텐츠들이 읽을 수 있고, 이해가 가능하게 만들어야 합니다.

각각의 웹 페이지들은 어떤 언어를 사용할 것인지, 반드시 프로그래밍적으로 결정되어야 합니다. 프로그래밍적으로 결정된다는 것은 다양한 사용자 에이전트가 제공된 데이터의 정보를 추출해 사용자에게 제공하는 것을 의미합니다.

- 사용자 에이전트 : 웹 콘텐츠를 검색해 사용자에게 제공하는 모든 소프트웨어, 대표적으로 웹 브라우저, 스크린 리더와 같은 보조 기술들을 포함한다.

#### 필요한 이유?

기본적인 언어 설정이 되어 있는 웹 페이지에서 보조 기술들과 사용자 에이전트가 더욱 정확한 텍스트를 렌더링 할 수 있기 때문입니다. 그래서 브라우저에서 문자를 정확하게 렌더링 할 수 있습니다. 스크린 리더 경우에는 기본적인 언어 설정이 되었을 때, 해당 언어에 맞는 정확한 발음 규칙을 제공합니다.

이런 언어 설정의 성공적인 적용은 다음과 같은 사람들에게 도움이 됩니다.

- 텍스트를 음성으로 변환하는 스크린 리더나 여러 기술을 쓰는 사람.
- 글을 정확하게 읽기 어려운 사람들, 난독증과 같은 언어 및 학습 장애가 있는 사람들

<br/>

### 3.1.2 부분 언어

3.1.1과 내용은 같습니다. 하지만 설정된 언어와는 다른 언어가 사용됐을 때의 접근성의 표준을 정의하고 있습니다.

만약 `en`로 설정을 하면 html 페이지가 영어를 쓰는 것으로 기본 설정이 됩니다. 하지만 만약에 한글이 들어가는 경우에는 어떻게 하면 될까요? TTS(텍스트 음성 변환) 엔진마다 다를 수도 있지만, en으로 지정했을 때는, 한글을 인식하지 못합니다. `ko` 설정했을 때는 영어도 읽어 주는 것을 확인할 수 있습니다. 하지만 영어도 한국말로 읽어줘서 본문에 영어로 쓰였는지, 외래어 표기로 쓰였는지 확인하기 힘듭니다. 따라서 아래와 같이 표기를 해준다면 웹 접근성이 더욱 좋아질 것입니다.

#### 해결 방법

```html
<html lang="ko">
	...
	<p>스크린 리더 테스트 <span lang="en"> car </span></p>
	...
</html>
```

- 만약 여러 언어를 지원하는 음성 합성기의 경우에는 위와 같이 작성하면 영어에 해당하는 부분을 적절한 발음과 악센트로 텍스트를 읽어줄 것입니다. 하지만 한국어로만 설정된 경우에는 스크린 리더의 발음을 들어보면 `카어`라고 읽습니다. 영어를 아는 사람이나 모르는 사람도 어떤 단어를 말하는지 이해하기가 어려운 경우가 발생합니다. 따라서 웹 접근성을 높이기 위해서야 미래의 유지보수를 위해서도 언어 변화를 꼭 체크해줘야 합니다.

<br/>

### 3.1.3 익숙하지 않은 단어들

특정 장애로 인해 단어 사용 및 특수 단어 또는 용법을 이해하기 어려울 때, 이 메커니즘은 이 청중들에겐 굉장히 중요합니다.

이런 언어 설정의 성공적인 적용은 다음과 같은 사람들에게 도움이 된다.

- 단어를 해독하는데 어려움을 겪는 사람, 단어와 구문을 이해하기 어려운 사람.
- 글을 정확하게 읽기 어려운 사람들, 난독증과 같은 언어 및 학습 장애가 있는 사람들

#### 해결 방법

- 단어의 구체적인 정의는 페이지 하단에 제공합니다.
- 동일한 웹 페이지 내에서 용어집의 정의와 연결시켜 줍니다. [WCAG](https://www.w3.org/WAI/WCAG21/Understanding/unusual-words.html) 페이지 하단에 용어에 대한 정의를 나열하고 연결시켜주는 것을 확인할 수 있습니다.

<br/>

### 3.1.4 약어

약어의 뜻이나 확장된 형식을 확인할 수 있는 기능을 제공해야 합니다.

#### 해결방법

```html
<p><abbr title="즉석 떡볶이">즉떡</abbr> 먹으러 가자!</p>
```

- 예를 들어 '즉떡'이란 말을 처음 듣는 사람은 무엇을 의미하는지 알 수 없습니다. 따라서 약어를 의미하는 말에 `<abbr>` 태그로 '즉석 떡볶이'라는 것을 알려줍니다. 이외에도 맥락에 따라 달라지는 말들을 이해 가능하게 만들어 줍니다.

<br/>

### 3.1.5 읽기 수준

중등교육 과정보다 높은 읽기 능력을 요구하는 복잡한 내용이 포함된 웹 페이지라면, 사용자의 이해를 돕기 위해 보조 설명, 적절한 이름, 제목 등을 제공해야 합니다.

#### 예시

회원가입 시 개인정보 처리절차에 대한 내용에 대해서 동의하는 항목이 있는데, 항상 무슨 말인지 모르고 서비스를 사용하기 위해서 무작정 체크를 하면서 넘어가는 경우가 많습니다. 이런 정보들을 확인하려고 해도 가독성도 떨어지고 설명이 어려운 경우가 많았습니다.

<br/>

- 아래는 쿠팡의 `개인정보 처리방침` 페이지입니다. 보기만 해도 어려워서 가독성이 떨어집니다.

![쿠팡 개인정보처리 방침](<https://github.com/minsoftk/TIL/blob/master/blog/WCAG3.1.5(%EC%BF%A0%ED%8C%A1).png?raw=true>)

<br/>

- 아래는 카카오의 `알기 쉬운 개인정보 처리방침` 페이지입니다. 아래와 같이 그림으로 표현을 하니 훨씬 이해하기가 쉽습니다. 쿠팡보다 그림과 대화체로 설명해주는 것이 훨씬 이해하기 편한 것을 느낄 수 있습니다.

![카카오 개인정보처리 방침](<https://github.com/minsoftk/TIL/blob/master/blog/WCAG3.1.5(%EC%88%98%EC%A0%95).png?raw=true>)

<br/>

위의 예시들을 간단하게 비교해보니 어려운 내용들을 이해하기 쉽게 만드는 것이 왜 중요한지 알 수 있었습니다.

<br/>

### 3.1.6 발음

문맥 상에서 알려진 발음 없이 모호한 단어의 의미가 있는 단어들의 특정한 발음을 알기 쉽게 하는 기능을 제공해야 합니다.

예를 들어, 영어에서 heteronyms는 단어 Desert(포기)와 Desert(건조한 지역)와 같이 철자는 같지만 발음과 의미가 다른 단어입니다.

#### 예시

- 낫, 낮, 낯
- 너머, 넘어
- Desert(사막), Desert(상을 받을만한 가치)

만약 문장의 문맥에서 적절한 발음을 결정할 수 있다면 아무것도 필요하지 않습니다. 하지만 그럴 수 없는 경우에 단어 다음에 발음을 제공하여 해결합니다. 한국어 같은 경우 대부분 문맥에 따라서 달라지는 의미를 이해할 수 있습니다. 한국어는 발음이 달라지는 경우는 거의 없습니다. 하지만 일본어나 영어 같은 경우에는 발음이 달라지는 경우가 있습니다.

예를 들어 영어에서는, Desert(사막)와 Desert(상을 받을만한 가치)와 같이 철자는 같지만 발음과 의미가 다른 단어들이 있습니다. 이런 단어들에 대해서는 정확한 발음을 제공하는 사운드 파일에 연결하거나 용어집에 발음 정보를 포함하는 방식으로 접근성을 높여줍니다.

<br/><br/>

## 3.2 예측 가능성

### 3.2.1 포커스 상태

UI 컴포넌트가 포커스 상태가 되면, 콘텍스트를 변경하지 않습니다.

문서를 탐색할 때 기능을 예측할 수 있도록 하는 것입니다. 구성 요소가 포커스를 받을 때 변경하는 예는 다음과 같습니다.

- 인터페이스 요소가 포커스를 받을 때 실행되는 새 창, 자동으로 제출되는 양식, 다른 구성 요소로 변경되는 것.

이러한 상황 변화의 제한은 시각장애, 인지 제한 및 운동장애가 있는 사람들을 돕습니다.

#### 예시

페이지의 드롭다운 메뉴처럼 사용자가 선택할 수 있는 것들을 예시로 들 수 있습니다. 사용자에게 선택권이 주어지기에 예기치 않은 변화가 발생하지 않습니다.

반대로 `도움말 대화 상자` 창이 열렸을 때, 키보드 사용자 경우 웹 페이지를 탭 하면 대화 상자가 열리고 사용자가 필드를 탭핑 하려고 할 때마다 키보드 포커스가 컨트롤에서 멀어집니다. 이는 시각적 콘텐츠를 인식하는 데 어려움이 있는 사람들은 방향 감각을 잃을 수 있으므로 새 창, 탭을 여는 링크, 버튼의 사용을 제한하는 방법으로 해결할 수 있습니다. 그러나 접근성 측면에서는 새 창이나 탭을 여는 더 나은 상황이 있습니다. 따라서 필요한 경우에만 새 창, 새 탭을 열도록 합니다.

<br/>

### 3.2.2 입력 상태

UI 컴포넌트 설정을 변경해도 컴포넌트를 사용하기 전에 사용자에게 동작을 알리지 않는 한, 자동으로 콘텍스트가 변경되어서는 안 됩니다. 이 표준은 대화형 콘텐츠를 보다 예측 가능하게 만들어 장애가 있는 사용자를 돕습니다. 콘텍스트의 예기치 않은 변경은 시각 장애가 있거나 인지 장애가 있는 사용자가 콘텐츠를 사용할 수 없을 정도로 혼란스러울 수 있습니다.

#### 예시

- 웹 기반 달력 및 일정 응용 프로그램에서 달력 항목을 만들기 위한 양식이 제공됩니다. 제목, 시간 및 위치에 대한 표준 필드와 함께 만들 캘린더 항목 유형을 선택하는 라디오 버튼 세트가 있습니다. 달력 항목 유형은 회의, 약속 또는 미리 알림일 수 있습니다. 사용자가 회의용 라디오를 선택하면 회의 참가자를 입력하는 페이지에 추가 필드가 표시됩니다. 미리 알림 버튼을 선택하면 다른 필드가 나타납니다. 항목의 일부만 변경되고 전체 구조가 동일하게 유지되기 때문에 기본 콘텍스트는 사용자에게 남아 있습니다.

<br/>

### 3.2.3 일관된 내비게이션

웹 페이지 집합 내의 여러 웹 페이지에서 반복되는 내비게이션은 사용자가 변경을 시작하지 않는 한, 반복할 때마다 상대적으로 동일한 순서로 발생해야 합니다.

화면 확대를 사용하여 한 번에 화면의 작은 부분을 표시하는 저시력 사용자는 종종 시각적 신호와 페이지 경계를 사용하여 반복되는 콘텐츠를 빠르게 찾습니다. 동일한 순서로 반복되는 콘텐츠를 제시하는 것은 반복되는 콘텐츠를 찾기 위해 디자인 내에서 공간 기억이나 시각적 단서를 사용하는 시각적 사용자에게도 중요합니다.

#### 예시

- 대부분의 사이트에서는 상단에 내비게이션 바가 위치해있습니다. 이를 예측해서 우리는 우리가 원하는 메뉴를 찾기 위해 최상단을 우선적으로 살펴봅니다. 아래는 카카오톡 메인 페이지입니다.

![카카오 네비게이션](https://github.com/minsoftk/TIL/blob/master/blog/%EC%B9%B4%EC%B9%B4%EC%98%A4%ED%86%A1%EB%84%A4%EB%B9%84%EA%B2%8C%EC%9D%B4%EC%85%98.png?raw=true)

<br/>

### 3.2.4 일관성

웹 페이지 집합 내에서 동일한 기능을 가진 컴포넌트는 일관되게 구별되어야 됩니다. 스크린 리더를 이용하는 사람은 보통 서로 다른 웹 페이지이더라도 기능이 친숙하면 그 친숙함에 의존해 웹 사이트를 쉽게 조작할 수 있다. 만약 같은 기능의 레이블이 다른 웹 페이지에서는 다르게 표시되면 그 사이트를 사용하기가 훨씬 더 어렵습니다.

#### 예시

- 그림과 같이 여러 사이트에서 파일들을 설치하려 할 땐, `다운로드` 라 표시합니다. 하지만 만약 '설치', '내려받기'로 사용이 된다면 사용에 혼동이 올 수도 있습니다. 따라서 이런 레이블의 일관성을 맞춰줍니다.

![](<https://github.com/minsoftk/TIL/blob/master/blog/3.2.4(%EB%8B%A4%EC%9A%B4%EB%A1%9C%EB%93%9C).png?raw=true>)

![](<https://github.com/minsoftk/TIL/blob/master/blog/3.2.4(%EB%8B%A4%EC%9A%B4%EB%A1%9C%EB%93%9C2).png?raw=true>)

<br/>

### 3.2.5 요구 변경

콘텍스트 변경은 사용자 요청에 의해서만 시작되거나, 변경 사항을 끄는 기능을 제공해야 합니다. 3.2.2의 입력 상태와 유사한 기준입니다. 목록에서 항목을 선택한 후 자동으로 새창을 열거나 폼을 전송하는 것 같이 예기치 않은 변경으로 발생하는 혼란을 없앱니다.

#### 예시

- `지금 업데이트하기` 버튼 콘텐츠를 자동으로 업데이트하는 대신 콘텐츠의 새로 고침을 요구하는 '지금 업데이트하기' 버튼을 제공한다
- 자동 리디렉션 리디렉션이 발생했는지 사용자가 깨닫지 못하게 하는 방식으로 사용자를 기존 페이지에서 새 페이지로 자동으로 리디렉션 한다.

## 3.3 입력 도움

실수를 피하고 해결할 수 있도록 도움을 제공해야 합니다.

<br/>

### 3.3.1 오류 확인

사용자가 오류가 발생했음을 인지하고 무엇이 잘못되었는지 확인할 수 있도록 하는 것입니다. 오류 메시지는 가능한 한 구체적이어야 합니다. 양식을 다시 표시하고 오류가 있는 필드를 표시하는 것만으로는 인식하기에 충분하지 않습니다.

#### 예시

항공사 웹사이트는 할인된 항공편에 대한 특별 프로모션을 제공합니다. 사용자는 이름, 주소, 전화번호, 선호하는 좌석 및 이메일 주소와 같은 개인 정보를 묻는 간단한 양식을 작성해야 합니다. 양식의 필드 중 하나라도 완료되지 않았거나 잘못 완료되면 누락되거나 잘못된 필드를 사용자에게 알리는 경고가 표시됩니다.

- 아시아나 항공 사이트에서 한 가지 항목을 누락하고 노선 검색을 했을 때, 다음과 같이 어떤 항목에서 누락이 발생했는지 말해준다. 이외에도 누락된 필드를 시각적인 색상 강조를 통해서도 통해서 누락이 되었음을 알려주는 게 좋습니다.

![](https://github.com/minsoftk/TIL/blob/master/blog/3.3.1%EC%98%A4%EB%A5%98.png?raw=true)

<br/>

### 3.3.2 레이블 또는 지침

콘텐츠에 사용자 입력이 필요한 경우, 레이블 또는 지침(Instructions)이 제공되어야 합니다. 콘텐츠 제작자가 폼에 있는 컨트롤을 식별할 수 있는 지침이나 레이블을 넣어 사 용자들이 어떤 입력 데이터가 필요한지 알 수 있게 하는 것입니다.

#### 예시

- 날짜를 입력하는 필드에 정확한 날짜 형식을 표시하는 초기 텍스트가 포함돼 있습니다.
- 이름을 입력하는 필드에 '이름'이라는 레이블이 명확하게 표시되고 성을 입력하는 필드는 '성'이라는 레이블을 붙여 헷갈리지 않게 합니다.

<br/>

### 3.3.3 오류 제안

입력 오류가 자동으로 감지되고 수정에 대한 제안이 알려진 경우, 콘텐츠의 보안이나 목적을 저해하지 않는 선에서 사용자에게 제안 사항이 제공되어야 합니다.

#### 예시

- 성공적으로 제출되지 않은 양식의 결과는 올바른 입력과 함께 페이지에 있는 입력 오류를 설명하고 입력 오류를 일으킨 양식 필드에 대한 추가 도움말을 제공합니다. 아래 그림에서 비밀번호가 일치하지 않는다는 도움말을 제공하고 있다. 따라서 사용자가 제출 전에 올바르게 수정을 할 수 있다.

![네이버 로그인](https://github.com/minsoftk/TIL/blob/master/blog/3.3.3%EC%98%A4%EB%A5%98.png?raw=true)

<br/>

### 3.3.4 오류 예방:법률, 재무, 자료

사용자에 대한 법적 약속 또는 금융 거래가 발생하거나, 데이터 스토리지 시스템에서 사용자 등록 가능 데이터를 수정 또는 삭제하거나, 사용자 테스트 응답을 제출하는 웹 페이지의 경우, 다음 중 하나 이상 지원해야 합니다.

- **되돌림**

  제출된 것을 되돌릴 수 있어야 합니다.

- **체크**

  사용자는 입력된 데이터를 입력 오류 체크 후, 수정할 기회를 제공 받아야 합니다.

- **확인**

  제출을 마무리하기 전에 정보를 검증, 확인, 수정할 수 있는 기능을 제공해야 합니다.

#### 예시

- 주문 확인

  웹 소매업체는 고객에게 온라인 쇼핑을 제공합니다. 주문이 접수되면 주문한 상품, 주문한 각 상품의 수량, 배송지 주소, 결제수단 등의 주문정보가 표시되어 사용자가 주문이 맞는지 확인할 수 있습니다. 사용자는 주문을 확인하거나 변경할 수 있습니다.

- 주식 판매

  금융 서비스 웹 사이트를 통해 사용자는 온라인으로 주식을 사고팔 수 있습니다. 사용자가 주식을 사거나 팔기 위해 주문을 제출하면 시스템은 시장이 열려 있는지 여부를 확인합니다. 영업시간 이후인 경우 해당 거래가 영업시간 외 거래가 될 것임을 사용자에게 알리고 정규 시장 시간 이외의 거래 위험에 대해 알리고 주문을 취소하거나 확인할 기회가 주어집니다.

* 증권 계좌로 주식을 매도하려고 하니 다음과 같이, 확인 창을 띄워줘 주문을 재확인할 수 있습니다.

![](https://github.com/minsoftk/TIL/blob/master/blog/stocksell.png?raw=true)

### 3.3.5 도움말

상황에 맞는 도움말을 제공합니다. 사용자가 실수를 하지 않도록 돕는 것입니다. 장애가 있는 일부 사용자는 장애가 없는 사용자보다 실수할 가능성이 더 높을 수 있습니다. 상황에 맞는 도움말을 사용하여 사용자는 수행 중인 작업을 추적하지 않고 작업을 수행하는 방법을 찾습니다.

#### 예시

- **온라인 입사지원서**

  일부 질문은 새로운 구직자가 이해하기 어려울 수 있습니다. 각 질문 옆에 있는 도움말 링크는 각 질문에 대한 지침과 설명을 제공합니다.

- 그림과 같이 알바천국의 이력서 등록 과정에서는 프리랜서에 대한 항목 체크가 존재하는데, 이 의미를 이해가 어려울 수도 있습니다. 이에 대한 설명을 충분히 달아줘 구직자의 이해도를 높입니다.

![알바천국 이력서 등록](https://github.com/minsoftk/TIL/blob/master/blog/3.3.5.png?raw=true)

### 3.3.6 오류 예방: 공통

`3.3.4`와 비슷한 맥락입니다. 장애가 있는 사용자는 실수할 가능성이 더 높고 실수를 감지하거나 복구하는 데 더 어려울 수 있습니다. 읽기 장애가 있는 사람은 숫자와 문자를 바꿀 수 있고, 운동 장애가 있는 사람은 실수로 키를 칠 수 있습니다. 작업을 되돌리는 기능을 제공하면 사용자가 실수를 수정할 수 있습니다. 정보를 검토하고 수정할 수 있는 기능을 제공하면 사용자가 조치를 취하기 전에 실수를 감지할 수 있습니다.

- **되돌림**

  제출된 것을 되돌릴 수 있어야 합니다.

- **체크**

  사용자는 입력된 데이터를 입력 오류 체크 후, 수정할 기회를 제공 받아야 합니다.

- **확인**

  제출을 마무리하기 전에 정보를 검증, 확인, 수정할 수 있는 기능을 제공해야 합니다.

#### 예시

- 우리가 회원가입이나 어떤 작업 중에 페이지를 뒤로 가기를 누르거나 다른 페이지로 이동할 때, 작업을 종료하겠냐는 알림 창을 종종 볼 수 있다. 이러한 확인 작업을 통해 오류를 예방할 수 있게 만듭니다.
  아래 그림과 같습니다.
  <br/>
  <br/>

  ![나가기 확인 알림창](https://github.com/minsoftk/TIL/blob/master/blog/3.3.6.png?raw=true)
