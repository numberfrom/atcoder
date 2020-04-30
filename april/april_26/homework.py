N,  M = map(int, input().split())
A = list(map(int, input().split()))

print(-1 if N < sum(A) else N - sum(A))
