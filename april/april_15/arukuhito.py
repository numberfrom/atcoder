N, K = map(int, input().split())

cnt = 0
ans = 0
flag = False
a = [int(input()) for i in range(N)]

for i in range(N):
    ans += 1
    if K <= cnt + a[i]:
        print(ans)
        exit()

    cnt += a[i]
