S = input()
good = "CODEFESTIVAL2016"

ans = 0

for i in range(len(S)):
    if S[i] != good[i]:
        ans += 1

print(ans)
