def foo(n):
    # 모든 경우의 수가 "apple"을 return
    # 100 이상의 숫자는 모든 값이 99를 가지게 됨.
    # 100 미만의 숫자경우
    # 과일들의 자릿수를 뺄 경우 모든 경우가 'apple' 을 반환
    while (n >= 100):
        arr = []
        temp = n
        while (temp > 0):
            arr.append(temp % 10)
            temp = temp // 10
        n -= sum(arr)

        if n == 99:
            return "apple"
        elif n <= 98:
            return "apple"
