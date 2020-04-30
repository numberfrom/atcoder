import bisect
import itertools

N, K = map(int, input().split())
a = list(map(int, input().split()))

s = [0] + list(itertools.accumulate(a))
ans = 0
for i in range(N):
    ans += N + 1 - bisect.bisect_left(s, s[i]+K)

print(ans)
