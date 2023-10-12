n = int(input())
k = int(input())
strengths = list(map(int , input().split()))


strengths.sort()
ans = 0
totalStrength = 0
for i in range(n):
    if int(strengths[i]) +totalStrength <= k:
        totalStrength += int(strengths[i])
        ans += 1
    else:
        break
print(ans)