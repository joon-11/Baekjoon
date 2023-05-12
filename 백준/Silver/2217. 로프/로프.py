a = int(input())
sc = []
result = []

for i in range(a):
   sc.append(int(input()))

sc.sort()

for i in range(len(sc)):
    result.append(sc[i]*(len(sc)-i))

print(max(result))