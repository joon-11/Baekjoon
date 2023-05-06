a = int(input())

home = []
for i in range(a):
    h = list(map(int,input().split()))
    home.append(h)

for i in range(1, len(home)): # 0,1,2 == 색 i = i번째 집
    home[i][0] = min(home[i - 1][1],home[i - 1][2]) + home[i][0]  #빨
    home[i][1] = min(home[i - 1][0],home[i - 1][2]) + home[i][1]  #노
    home[i][2] = min(home[i - 1][1], home[i - 1][0]) + home[i][2]  #초

print(min(home[a - 1][0],home[a - 1][1],home[a - 1][2]))