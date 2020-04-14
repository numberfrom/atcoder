S_1, S_2 = input().split()

if S_1 not in ["Sat", "Sun"]:
    ans = "8/31"

elif S_1 in ["Sat", "Sun"] and t in ["Sat", "Sun"]:
    ans = "8/33"
else:
    ans = "8/22"

print(ans)
