a = int(input())
sc = []
result = 0

for i in range(a):
    sc.append(int(input()))

sc.sort()

for i in range(1, len(sc)+1):
    result += abs(sc[i-1] - i)



print(result)

