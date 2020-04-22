N = int(input())
X = list(map(int, input().split()))

ans = float("inf")

for i in range(min(X)+1, max(X)+1):
    num = 0
    for j in range(len(X)):
        num += (X[j]-i)**2

    ans = min(ans, num)

print(ans)
