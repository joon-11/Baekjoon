a = list(map(int, input().split()))
cost = []
cnt = 0

for i in range(a[0]):
    tmp = int(input())
    cost.append(tmp)

cost.sort(reverse=False)
c = a[1]
i = len(cost)-1

while c != 0:
    if cost[i] <= c:
        cnt += 1
        c -= cost[i]
    else:
        i -= 1
print(cnt)