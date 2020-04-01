from collections import Counter

N = int(input())

name = []
name_set = set()
for i in range(N):
    S = input()
    name.append(S)
    name_set.add(S)

cnt = 0
for i in list(name_set):
    if cnt < name.count(i):
        cnt = name.count(i)
        ans = i

print(ans)
