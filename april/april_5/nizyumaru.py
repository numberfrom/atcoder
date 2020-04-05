from math import pi

N = int(input())

ans = 0
R = []

for i in range(N):
    r = int(input())
    R.append(r)

R.sort(reverse=True)
for i in range(N):
    if i % 2 == 0:
        ans += R[i] ** 2

    else:
        ans -= R[i] ** 2

print(ans * pi)
