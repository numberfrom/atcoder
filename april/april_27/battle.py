A, B, C, D = map(int, input().split())

print("Yes" if abs(A-D) >= abs(B-C) else "No")
