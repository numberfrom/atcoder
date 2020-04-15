A, B, C, D = map(int, input().split())

alice = [i for i in range(A, B+1)]
bob = [i for i in range(C, D+1)]

ans = 0

for i in range(len(bob)):
    if bob[i] in alice:
        ans += 1

print(ans)
print(alice, bob)
