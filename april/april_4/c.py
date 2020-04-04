N, K = map(int, input().split())

if abs(N-K) >= N:
    print(N)

elif N % K != 0:
    print(1)

elif N % K == 0:
    print(0)

else:
    print(2)
