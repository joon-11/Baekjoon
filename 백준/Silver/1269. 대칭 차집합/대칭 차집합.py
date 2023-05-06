a, b = map(int,input().split())

cnt = 0

ak = set(map(int,input().split()))
bk = set(map(int,input().split()))

print(len(ak - bk) + len(bk - ak))