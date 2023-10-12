n , m = map(int, input().split())
p_scores = list(map(int, input().split()))
ai_scores = list(map(int, input().split()))


points = None

for i in range(n):
    for j in range(m):
        current_diff = abs(p_scores[i] - ai_scores[j])
        if points is None or current_diff < abs(p_scores[points[0]] - ai_scores[points[1]]):
            points = (i, j)

print(str(points[0]) + " " + str(points[1]))