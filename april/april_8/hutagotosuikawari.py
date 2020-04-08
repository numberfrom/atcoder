N, A, B = map(int, input().split())

e = 0
w = 0

for i in range(N):
    s, d = input().split()
    d = int(d)
    if d < A:
        d = A
    elif d > B:
        d = B

    if s == "East":
        e += d

    else:
        w += d

if e > w:
    print("East", abs(e-w))

elif w > e:
    print("West", abs(e-w))

else:
    print(0)
