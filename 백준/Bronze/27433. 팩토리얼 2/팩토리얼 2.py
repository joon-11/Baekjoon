def fac(num):
    if num > 1:
        return num * fac(num - 1)
    else:
        return 1



a = int(input())

print(fac(a))


