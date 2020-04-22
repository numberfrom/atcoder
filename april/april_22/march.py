from collections import defaultdict
from itertools import combinations

n = int(input())
d = defaultdict(int)
for _ in range(n):
    s = input()
    d[s[0]] += 1

con = []
for c in ("M", "A", "R", "C", "H"):
    k = d[c]
    if k:
        con.append(k)

ans = 0
for a, b, c in combinations(con, 3):
    ans += a * b * c

print(ans)
