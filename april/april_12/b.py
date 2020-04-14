N = int(input())

i = 0
ans = 0
while i <= N:
    if i % 3 == 0 or i % 5 == 0:
        ans += 0

    else:
        ans += i

    i += 1

print(ans)
