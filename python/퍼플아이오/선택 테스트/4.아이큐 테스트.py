def foo(num):
    evenFlag = False  # 짝수 배열이면 True 홀수 배열이면 False
    odd = 0  # 짝수의 개수 저장
    even = 0  # 홀수의 개수 저장

    for i in num:
        # 짝수일때
        if i % 2 == 0:
            even += 1
            # 짝수가 2개 이상일때 짝수 배열로 선언
            if even > 1:
                evenFlag = True
                break
        else:
            odd += 1
            # 홀수가 2개 이상일때 홀수 배열로 선언
            if odd > 1:
                evenFlag = False
                break

        # 짝수배열이면 True, 홀수배열이면 False
    if (evenFlag == False):
        for i in range(len(num)):
            # 홀수배열일 때, 짝수인 i번째 +1 값을 return
            if (num[i] % 2 == 0):
                return i+1
    else:
        for i in range(len(num)):
            # 짝수배열일 때, 홀수인 i번째 +1 값을 return
            if (num[i] % 2 == 1):
                return i+1
