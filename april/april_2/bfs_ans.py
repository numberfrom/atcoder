from collections import deque

r, c = map(int, input().split())
sx, sy = map(int, input().split())
gx, gy = map(int, input().split())

css = []
for _ in range(r):
    css.append(list(input()))

que = deque()
dist = [[-1] * c for _ in range(r)]


def bfs(x, y):
    que.append((x, y))
    for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
        nx, ny = x + dx, y + dy
        if not 0 <= nx < r or not 0 <= ny < c:
            continue

        if css[nx][ny] == "#":
            continue
        dist[nx][ny] = dist[x][y] + 1
        que.append((nx, ny))


sxi, syi = sx-1, sy-1
dist[sxi][syi] = 0
bfs(sxi, syi)

ans = dist[gx-1][gy-1]
print(ans)
