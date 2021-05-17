# SQL 정의
 관계형 데이터베이스 관리 시스템(RDBMS)의 데이터를 관리하기 위해 설계된 특수 목적의 프로그래밍 언어  
관계형 데이터베이스 관리 시스템에서 자료의 검색과 관리, 데이터베이스 스키마 생성과 수정, 데이터베이스 객체 접근 조정 관리를 위해 고안  
많은 수의 데이터베이스 관련 프로그램들이 SQL을 표준으로 채택


* DQL (Data Query Language)

* DML (Data Manipulation Language)

* DDL (Data Definition Language)

* TCL (Transaction Control Language)

* DCL (Data Control Language)

### DML, DQL 기초
![DQLtable](https://github.com/MinsoftK/TIL/blob/master/DataBase/image/DQL.png?raw=true)

* INSERT INTO <TABLE명> (컬럼명, 컬럼명,...) VALUES(값,값 ...)

* UPDATE STUDENT SET NAME = 'KIM MIN SUNG' WHERE ID =3;  
만약 WHERE 조건문이 빠지면 전체 컬럼에 'KIM MIN SUNG'이 들어간다.  
UPDATE란건 집합 명령이기 때문에 FOR문 처럼 다 들어간다.

* SELECT * FROM STUDENT; 
