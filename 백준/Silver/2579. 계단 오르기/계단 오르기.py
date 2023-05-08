a = int(input())

lev = [0]*303
for i in range(a):
    temp = int(input())
    lev[i] = temp

if a < 3:
    print(sum(lev))

else:
    t = [lev[0], max(lev[0] + lev[1], lev[1]), max(lev[0] + lev[2], lev[1] + lev[2])]
    for i in range(3, a):
        t.append(max(t[i-2] + lev[i], t[i-3] + lev[i] + lev[i - 1]))

    print(t[-1])