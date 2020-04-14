from collections import Counter

N, K = map(int, input().split())
A = list(map(int, input().split()))

C = Counter(A)
cnt = 0
ans = 0

print(list(C))
for i in list(C):
    if K > cnt:
        cnt += 1
        ans += C[i]
    else:
        break

print(abs(ans-N))
