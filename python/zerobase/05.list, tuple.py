# Section04-3
# 파이썬 데이터 타입(자료형)
# 리스트, 튜플

# 리스트 자료형(순서O, 중복O, 수정O, 삭제O)

# 선언
a = []
b = list()
c = [1, 2, 3, 4]
d = [10, 100, 'Pen', 'Cap', 'Plate']
e = [10, 100, ['Pen', 'Cap', 'Plate']]

# 인덱싱
print('#인덱싱#')
print('d - ', type(d), d)
print('d - ', d[1])
print('d - ', d[0] + d[1] + d[1])
print('d - ', d[-1])
print('e - ', e[-1][1])
# print('e - ', e[-1][1][4])
print('e - ', list(e[-1][1]))

# 슬라이싱
print('#슬라이싱#')
print('d - ', d[0:3])
print('d - ', d[2:])
print('e - ', e[2][1:3])

# 리스트 연산
print('#리스트 연산#')
print('c + d - ', c + d)
print('c * 3 - ', c * 3)
# print("c[0] + 'hi' - ",c[0] + 'hi')
print("'hi' + c[0] - ", 'hi' + str(c[0]))

# 리스트 수정, 삭제
print('#리스트 수정, 삭제#')
c[0] = 4
print('c - ', c)
c[1:2] = ['a', 'b', 'c']
print('c[1:2] ', c)
c[1] = ['a', 'b', 'c']
print('c[1]로 추가하면', c)
c[1:3] = []
print('c - ', c)
del c[3]
print('c - ', c)

# 리스트 함수
a = [5, 2, 3, 1, 4]

print('a - ', a)
a.append(6)
print('a - append', a)
a.sort()
print('a - sort', a)
a.reverse()
print('a - reverse ', a)
print('a - index(5)', a.index(5))
a.insert(2, 7)
print('a insert ', a)
a.reverse()
a.remove(1)

print('a -reverse remove ', a)
print('a - pop', a.pop())
print('a - pop', a.pop())
print('a - ', a)
print('a - count', a.count(4))
ex = [8, 9]
a.extend(ex)
print('a - extend', a)

# 삭제 remove, pop, del

# 반복문 활용
while a:
    l = a.pop()
    print(2 is l)

# 튜플 자료형(순서O, 중복O, 수정X,삭제X)

# 선언
a = ()
b = (1,)
c = (1, 2, 3, 4)
d = (10, 100, 'Pen', 'Cap', 'Plate')
e = (10, 100, ('Pen', 'Cap', 'Plate'))

# 인덱싱
print('#튜플 인덱싱#')
print('d - type', type(d), d)
print('d - ', d[1])
print('d - ', d[0] + d[1] + d[1])
print('d - ', d[-1])
print('e - ', e[-1][1])
# print('e - ', e[-1][1][4])
print('e - ', list(e[-1][1]))

# 슬라이싱
print('#슬라이싱#')
print('d - ', d[0:3])
print('d - ', d[2:])
print('e - ', e[2][1:3])

# 튜플 연산
print('#튜플 연산#')
print('c + d - ', c + d)
print('c * 3 - ', c * 3)
print("c[0] + 'hi' - ", str(c[0]) + 'hi')
print("'hi' + c[0] - ", 'hi' + str(c[0]))

# 튜플 함수
a = (5, 2, 3, 1, 4)

print('a - ', a)
print('a - index(5), 5를 가진 idx를 반환 ', a.index(5))
print('a - count(4), 4를 몇개를 가지고 있는지 ', a.count(4))
