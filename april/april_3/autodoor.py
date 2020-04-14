N, T = map(int, input().split())

ans = 0

A = []
for i in range(N):
    a = int(input())
    A.append(a)

for i in range(N):
    if i == N-1:
        ans += T

    elif abs(A[i]-A[i+1]) < T:
        ans += abs(A[i]-A[i+1])

    else:
        ans += T

print(ans)
