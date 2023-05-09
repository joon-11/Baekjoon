anw= int(input())
a = []
for i in range(anw):
    k = int(input())
    a.append(k)

d = [1] * len(a)

for i in range(1, len(a)):
    for j in range(0, i):
        if a[j] < a[i]:
            d[i] = max(d[i], d[j]+1)

print(len(a) - max(d))

