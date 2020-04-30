n, x, y = map(int, input().split())
x -= 1
y -= 1
k = [0] * n
for i in range(n-1):
    for j in range(i+1, n):
        m = min(j-1, abs(i-x)+1+abs(y-j), abs(j-x)+abs(y-i))
        k[m] += 1

for i in range(1, n):
    print(k[i])
