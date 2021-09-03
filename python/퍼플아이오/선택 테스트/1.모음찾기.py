def foo(str):
    sum = 0
    for ch in str:
        if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u':
            sum += 1
    return sum
