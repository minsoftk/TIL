# 1.1 Lists
* 리스트를 생성하는 법  

```python
#LIST (mutable)
days = ["Mon", "Tue", "Wed", "Thur", "Fri", "Sat"]
print((days))
print(type(days))

#Tuple (immutable)
days = ("Mon", "Tue", "Wed", "Thur", "Fri", "Sat")

#Dictionary 한영 사전 같은 것.
minsoftk = {
	"name" : "minsoftk",
	"age" : 30,
	"korean" : True,
	"fav_food" : ["kimchi", "pizza"]
}
print(minsoftk)
print(minsoftk["name"])
#dic에 추가할 수 도 있다.
minsoftk["handsome"] = True
print(minsoftk)
```
* ![이곳에서](https://docs.python.org/3/library/) 파이썬에 대한 Docs를 확인할 수 있다. 많은 함수들을 확인할 수 있다.
