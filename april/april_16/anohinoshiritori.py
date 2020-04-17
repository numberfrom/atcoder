N = int(input())
W = [input() for i in range(N)]
used = []

for i in range(1, N):
    if W[i-1][-1] != W[i][0]:
        if i % 2 == 0:
            print("WIN")
            exit()

        else:
            print("LOSE")
            exit()

    if W[i] in used:
        if i % 2 == 0:
            print("WIN")
            exit()

        else:
            print("LOSE")
            exit()

    used.append(W[i])

print("DRAW")
