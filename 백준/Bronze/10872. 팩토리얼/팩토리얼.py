a = int(input())
res = a
if(a == 0):
    print(1)
else:
    for i in range(1,a):
        res = res * (a-i)
    print(res)

