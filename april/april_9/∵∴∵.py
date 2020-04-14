O = input()
E = input()

ans = []
for i in range(len(O)-1):
    ans.append(O[i])
    ans.append(E[i])

if len(O) > len(E):
    ans.append(E[-1])

print("".join(ans))
