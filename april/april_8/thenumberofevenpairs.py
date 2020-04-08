N, M = map(int, input().split())

ans = 0

for i in range(N):
    n = 2
    for j in range(M):
        m = 1
        if (n + m) % 2 == 0:
            ans += 1

print(ans)
