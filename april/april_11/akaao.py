X, Y, Z = map(int, input().split())

ans = 0
for i in range(0, Z+1):
    A = X + i
    B = Y + (Z - i)

    ans = max(ans, min(A, B))

print(ans)
