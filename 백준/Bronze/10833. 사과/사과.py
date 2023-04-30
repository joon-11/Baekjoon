a = int(input()) 

stu = []
apNum = []

result = []
for i in range(a):
    k, b = map(int, input().split())
    stu.append(k)
    apNum.append(b)

for i in range(len(stu)):
    if stu[i] <= apNum[i]:
        result.append(apNum[i] % stu[i])
    else:
        result.append(apNum[i])

print(sum(result))
