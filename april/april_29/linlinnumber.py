a = []


def dfs(x):
    if x > 324556667:
        return

    a.append(x)
    for i in range(10):
        if abs(x % 10-i) <= 1:
            dfs(x*10+i)


for i in range(1, 10):
    dfs(i)

a = sorted(a)
k = int(input())
print(a[k-1])
