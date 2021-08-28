# separate 옵션
print("T", "E", "S", "T", sep='')
print("2019", "02", "19", sep='-')
print("minsoftk", "gmail.com", sep='@')

# end 옵션 (띄어쓰기가 되지 않는다.)
print('welcome TO', end=' ')
print('the black')

# format 사용 [] , {}, ()
print('{} and {}'.format('You', 'Me'))
print("{0} and {1} and {0}".format("You", "Me"))
print("{a} are {b}".format(a="You", b="Me"))

print("%s's favorite number is %d" % ('ms', 30))  # %s : 문자, %d : 정수,  %f : 실수
print("Test1: %5d, Price: %4.2f" % (776, 534.123456))
print("Test1: {0:5d}, Price: {1:4.2f}".format(776, 65342.123))

# escape 코드
# \t : 탭
# \\ : 문자
# \' : 문자
# \" : 문자
# \r : 캐리지 리턴
# \f : 폼피드
# \a : 벨소리
# \b : 백 스페이스
# \000 : 널 문자
