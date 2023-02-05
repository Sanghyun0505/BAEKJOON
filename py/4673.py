def selfnumber(n):
    ret = n
    while (n != 0):
        ret = ret + n %10
        n = n // 10
    return ret

lst =[]
for i in range(1,10000):
    d = selfnumber(i)
    lst.append(d)
    if not i in lst:
        print(i)