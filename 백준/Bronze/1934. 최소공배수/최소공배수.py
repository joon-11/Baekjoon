import math
c = int(input())

for i in range(c):
    a, b = map(int, input().split())
    print(math.lcm(a, b))