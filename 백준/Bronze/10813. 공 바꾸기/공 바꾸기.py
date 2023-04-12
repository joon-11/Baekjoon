c,d = map(int,input().split(" "))

count = 1
j = []

for i in range(c):
    j.append(count)
    count += 1
g = 0
while g < d:
    a,b = map(int,input().split(" "))
    j[a-1],j[b-1] = j[b-1],j[a-1]
    g += 1
    
for p in j:
    print(p,end = " ")


