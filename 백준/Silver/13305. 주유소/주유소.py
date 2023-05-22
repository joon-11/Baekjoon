city_num = int(input())
road = list(map(int,input().split()))  # 2 3 1
cost = list(map(int,input().split()))  # 5 2 4 1

c = cost[0]
result = 0

for i in range(len(road)):
    if c > cost[i]:
        c = cost[i]
    result += cost[i] * road[i]


print(result)
