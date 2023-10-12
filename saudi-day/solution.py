n, k = map(int, input().split())
v = []

for i in range(n):
    second, first = map(int, input().split())
    v.append((first, second))

v.sort()

ans = 0

for i in range(n - 1, -1, -1):
    min_quantity = min(k, v[i][1])
    ans += min_quantity * v[i][0]
    k -= min_quantity

print(ans)