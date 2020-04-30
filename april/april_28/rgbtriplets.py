n = int(input())
s = input()
ans = 0
r, g, b = [0 for _ in range(n+1)], [0 for _ in range(n+1)
                                    ], [0 for _ in range(n+1)]
for i in range(n):
    r[i+1], g[i+1], b[i+1] = r[i], g[i], b[i]
    if s[i] == "R":
        r[i+1] += 1

    elif s[i] == "G":
        g[i+1] += 1

    else:
        b[i+1] += 1

ans = 0
for i in range(1, n-1):
    if s[i] == "R":
        ans += g[i] * (b[n] - b[i+1]) + b[i] * (g[n] - g[i+1])
        for j in range(1, min(i, n-i-1)+1):
            if {s[i-j], s[i+j]} == {"G", "B"}:
                ans -= 1

    elif s[i] == "G":
        ans += r[i] * (b[n] - b[i+1]) + b[i] * (r[n] - r[i+1])
        for j in range(1, min(i, n-i-1)+1):
            if {s[i-j], s[i+j]} == {"R", "B"}:
                ans -= 1

    elif s[i] == "B":
        ans += g[i] * (r[n] - r[i+1]) + r[i] * (g[n] - g[i*1])
        for j in range(1, min(i, n-i-1)+1):
            if {s[i-j], s[i+j]} == {"G", "R"}:
                ans -= 1

print(ans)
