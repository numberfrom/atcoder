from itertools import combinations
num = list(map(int, input().split()))

comb = combinations(num, 3)

ans = []
for i in list(comb):
    ans.append(sum(i))

ans.sort(reverse=True)
print(ans[2])
