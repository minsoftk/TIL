# 목차 (http://www.dreamy.pe.kr/zbxe/CodeClip/3766960)

- String 메소드
- StringBuild 메소드

## startWith

- 문자열이 지정한 문자로 시작하는지 판단 같으면 true반환 아니면 false를 반환한다.(대소문자구별)

```java
String str = "apple";
boolean startsWith = str.startsWith("a");
System.out.println("startsWith: " + startsWith);
//결과 true
```

## endWith

- 문자열 마지막에 지정한 문자가 있는지를 판단후 있으면 true, 없으면 false를 반환한다.(대소문자구별)

```java
String str = "test";
boolean endsWith = str.endsWith("t");
System.out.println("endsWith: " + endsWith);
//결과 : true
```

## equals

- 두개의 String에 값만을 비교해서 같으면 true, 다르면 false를 반환한다.(대소비교)

```java
String str = "java";
String str = "java";
boolean equals = str.equals(str);
System.out.println("equals: " + equals);
//결과 : true
```

## indexOf

- 지정한 문자가 문자열에 몇번째에 있는지를 반환한다.

```java
String str = "abcdef";
int indexOf = str.indexOf("d");
System.out.println("indexOf: " + indexOf);
//결과 : 3
```

## lastindexOf

- 문자열에 지정한 문자가 마지막몇번째에 있는 int를 반환한다.

```java
String str = "AdnroidApp";
int lastIndexOf = str.lastIndexOf("A");
System.out.println("lastIndexOf:" + lastIndexOf);
//결과 : 7
```

<br/>

## length

- 문자열의 길이를 반환한다.

```java
String str = "abcdef";
int length = str.length();
System.out.println("length: " + length);
//결과 : 6
```

<br/>

## replace

- 문자열에 지정한 문자" "가 있으면 새로 지정한 문자" "로 바꿔서 출력한다.

```java
String str = "A*B*C*D";
String replace = str.replace("*", "-");
System.out.println("replace: " + replace);
////결과값: A-B-C-D
```

## replaceAll

- 정규표현식을 지정한 문자로 바꿔서 출력한다.  
  [정규표현식](https://codez.tistory.com/4)

  [정규표현식2](https://codechacha.com/ko/java-regex/)

  [ex](https://velog.io/@lsh5039/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%EC%8B%A0%EA%B7%9C-%EC%95%84%EC%9D%B4%EB%94%94-%EC%B6%94%EC%B2%9Cjava)

```java
String str = "AB CD";
String replaceAll = str.replaceAll("\\p{Space}", "*");
System.out.println("replaceAll: " + replaceAll);
////결과값: AB*CD
```

<br/>

## split

- 지정한 문자로 문자열을 나눌수 있다.(배열로 반환)

```java

String str = "A:B:C:D:abcd";
String[] split = str.split(":");
System.out.println("split: " + split[1]);
//결과값:B
```

## substring

- 문자열에 지정한 범위에 속하는 문자열을 반환한다.(시작범위에 값은 포함하고, 끝나는 범위에 값은 포함하지않는다.)

```java
String str = "ABCDEF";
String substring = str.substring(0, 2);
System.out.println("substring: " + substring);
//결과값:AB
```

## toLowerCase

- 문자열에 대문자를 소문자로 변환한다.

```java
String str = "abcDEF";
String toLowerCase = str.toLowerCase();
System.out.println("toLowerCase: " + toLowerCase);
//결과값:abcdef
```

## toUpperCase

- 문자열에 소문자를 대문자로 변환한다.

```java
String str = "abcDEF";
String toUppercase = str.toUpperCase();
System.out.println("toUppercase: " + toUppercase);
//결과값:ABCDEF
```

## toString

- 문자열을 그대로 반환해준다.

```java
String str = "1234";
String toString = str.toString();
System.out.println("toString: " + toString);
//결과값:1234
```

## trim

- 문자열에 공백을 없에준다.

```java
String s = " java java java ";
String v;
v = s.trim();
System.out.println("trim:" + v);
//결과값:java java java
```

# valueOf

- 지정한 개체의 원시 값을 반환

```java
int i = 12345;
long l = L;
char c = '';
System.out.println("valueOf: " + String.valueOf (i));
System.out.println("valueOf: " + String.valueOf (l));
System.out.println("valueOf: " + String.valueOf (c));
//결과값:
//valueOf: 12345
//valueOf: 1
//valueOf: 1
```

## compareTo

- 두개의 String를 앞에서부터 순사적으로 비교하다가 틀린부분이 있으면 비교하는 String에 캐릭터값을 반환한다.(대소문자를 구별)

```java
String str1 = "A";
String str2 = "B";
int compareTo = str1.compareTo(str2);<p></p>
if(compareTo > 0){<p></p>
       System.out.println(str1 + " > " +str2);
} else if (compareTo == 0){
       System.out.println(str1 + " = " +str2);
} else{
       System.out.println(str1 + " < " +str2);
}
//결과값: A < B
```

## contains

- 두개의 String을 비교해서 비교대상 String을 포함하고 있으면true, 다르면 false를 반환한다.

```java
String str1 = "abcd";
String str2 = "c";
boolean contains = str.contains(str);
System.out.println("contains: " + contains);
//결과값:true
```

## charAt

- 지정한 index번째에 문자를 반환한다.

```java
String str = "charAt";
char charAt = str.charAt();
System.out.println("charAt: " + charAt);
//결과값:a
```

## concat

- 문자와 문자를 결합해준다.

```java
String str1 = "Han";
String str2 = "SeeJin";
String concat = str1.concat(str2);
System.out.println("concat: " + concat);
//결과값:HanSeeJin
```

## format

- 서식문자열을 이용해서 서식화된 문자열을 반환한다.

```java
int i = 123456789;
String str = String.format("%,d", i);
System.out.println("format: " + str);
//결과값:123,456,789
```

## matches

- 지정한 정규 표현과 일치 할때 true를 반환한다.

```java
int i = 123456;
String str1 = String.format("%,d", i);
String str2 = "123456";
boolean matches = str1.matches(str2);
System.out.println("matches: " + matches);
//결과값:false

```

# replaceFirst

- 문자열에 지정한 문자" "가 있으면 첫번째만 새로지정한 문자" "로 바꿔서 출력한다.

```java
String str = "Aman";
String replaceFirst = str.replaceFirst("A", "super");
System.out.println("replaceFirst: " + replaceFirst);
//결과값:superman
```

# 문자열 관련

## toCharArray

- 문자열을 한 글자씩 쪼개서
  이를 char타입의 배열에 집어넣어주는 친절한 메소드이다.
  String(문자열)을 char형 배열로 바꾼다.

```java
 String s1 = "Hello World";
 char[] charArr = s1.toCharArray();

  //how to use method
  //char형 배열을 합쳐서 하나의 String(문자열)로 만들 수 있다.
  String s2 = new String(charArr);
```

# StringBuilder

- string 클래스는 고정 길이로 되어있기 때문에 한 번 작성한 문자열 뒤에 문자열을 추가하게 되면 새로운 문자열을 작성하게 됩니다.

이에 비해 StringBuilder 클래스는 가변길이의 문자열을 사용하는 클래스로 문자를 추가해도 새로운 오브젝트를 작성하지 않고 문자열을 추가합니다.

## STring , Stringbuffer

String과 StringBuffer/StringBuilder 에 모두 들어있는 메소드

char charAt(int index) : 특정 위치에 있는 문자 반환

int length() : 문자열의 길이

String substring(int start, end end) : 문자열의 일부를 뽑아냄

String toString() : 객체를 문자열로 나타낸 값

String concat(String) : 문자열을 합침

String append(String) : 문자열을 합침

String 클래스에만 존재

String replace(char old, char new) : 특정 문자를 모두새로운 문자로 치환

String substring(int begin , int end) : String 일부를 뽑아냄

char[] toCharArray() : char 배열로 변환

String toLowerCase() : 모두 소문자로 변환

String toUpperCase() : 모두 대문자로 변환

String trim() : 끝에 붙어있는 공백문자 제거

String valueOf(char []) : char배열로부터 문자열을 만들어냄

String valueOf(int i) : 원시 값으로부터 문자열을 만들어냄

StringBuffer 및 StringBuilder 클래스에 들어있는 메소드

StringBuffer/StringBuilder delete(int start , int end) : 일부를 삭제함

StringBuffer/StringBuilder insert(int offet, any primitive of a char[]) : 먼가를 삽입함

StringBuffer/StringBuilder replace(int start , int end , String s) : 일부분을 String 객체로 치환

StringBuffer/StringBuilder reverse() : 객체를 뒤집음

StringBuffer/StringBuilder setCharAt(int index , char ch) : 주어진 문자를 치환함
