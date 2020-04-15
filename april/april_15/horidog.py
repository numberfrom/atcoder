n = int(input())

num = 0
for i in range(1, n+1):
    num += i

for i in range(2, num):
    if num % i == 0:
        print("BOWWOW")
        exit()

if num == 1:
    print("BOWWOW")
else:
    print("WANWAN")
