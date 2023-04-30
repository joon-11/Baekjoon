a = int(input())
pN = list(map(int, input().split()))
pN.sort()
result = 0
R = 0
for i in range(len(pN)):
    result += pN[i]
    R += result
print(R)