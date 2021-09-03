def foo(ids):
    for i in range(len(ids)):
        if i == ids[i]:
            continue
        else:
            return i
        # for문을 다 돌았을 때, 배열 마지막 원소 +1을 return
    return (ids[len(ids)-1] + 1)
