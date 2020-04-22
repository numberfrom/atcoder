N, A, B = map(int, input().split())
S = input()

ans = ["No"] * N
kaigai = 0
cnt = 0
for i in range(N):
    if S[i] == "a":
        if cnt < A + B:
            ans[i] = "Yes"
            cnt += 1

    elif S[i] == "b":
        if cnt < A+B and kaigai < B:
            ans[i] = "Yes"
            kaigai += 1
            cnt += 1

for i in ans:
    print(i)
