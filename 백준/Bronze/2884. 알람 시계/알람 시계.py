a,b = map(int,input().split(" "))

if b < 45:
    a -= 1
    c = b - 45
    b = 60 + c
else:
    b = b - 45

if a == -1:
    a += 24
print(a,b)