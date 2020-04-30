import math
n = int(input())
xy = []

for i in range(n):
    xy.append(list(map(int, input().split())))

d = 0
for i in range(n):
    for j in range(i+1, n):
        d += math.sqrt(
            (xy[i][0] - xy[j][0]) * (xy[i][0] - xy[j][0]) +
            (xy[i][1] - xy[j][1]) * (xy[i][1] - xy[j][1]))


print("{:.14f}".format(d/n*2))
