K, X = map(int, input().split())

ans = [X]

for i in range(K-1):
    ans.append(X+(i+1))

ans.reverse()
for i in range(K-1):
    ans.append(X-(i+1))

ans.reverse()
print(*ans)
