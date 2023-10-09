N, M = map(int, input().split())

k = list(map(int, input().split()))  # 입력된 문자열을 숫자로 변환하여 리스트에 저장
k.sort(reverse=True)

print(k[M-1])
