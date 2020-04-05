S = input()

ans = [0] * 6

ans[0] += S.count("A")
ans[1] += S.count("B")
ans[2] += S.count("C")
ans[3] += S.count("D")
ans[4] += S.count("E")
ans[5] += S.count("F")

print(*ans)
