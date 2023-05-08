a = input()
sum = 0
num = []
result = []

for i in range(len(a)):
    num.append(a[i])

if '0' in num:
    for i in range(len(a)):
        sum += int(a[i])
    if sum % 3 != 0:
            print(-1)
    else:
        for i in range(len(a)):
            result.append(int (a[i]))
else:
    print(-1)

result.sort(reverse=True)

for i in range(len(result)):
    print(result[i], end = "")