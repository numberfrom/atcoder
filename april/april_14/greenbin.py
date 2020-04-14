from collections import Counter
N = int(input())
S = [input() for i in range(N)]

ctr = Counter()
ans = 0
for s in S:
    a = "".join(sorted(list(s)))
    if a in ctr:
        ans += ctr[a]
    ctr[a] += 1

print(ans)
