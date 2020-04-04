N, M = map(int, input().split())
A = list(map(int, input().split()))

sum = sum(A)
ans = 0

for i in A:
    if i * 4 * M >= sum:
        ans += 1

print("Yes" if ans >= M else "No")
