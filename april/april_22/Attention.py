N = int(input())
S = list(input())

res = 0
for i in range(1, N):
    if S[i] == "E":
        res += 1

res_min = res
for i in range(1, N):
    if S[i-1] == "W":
        res += 1
    if S[i] == "E":
        res -= 1

    res_min = min(res, res_min)
print(res_min)
