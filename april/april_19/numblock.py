L = int(input())
N = int(input())
W = list(map(int, input().split()))

W.sort()
ans = 0
for i in range(N):
    if L - W[i] < 0:
        break

    else:
        ans += 1
        L -= W[i]

print(ans)
