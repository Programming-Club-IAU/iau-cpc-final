n = int(input())
for i in range(n):
    a,b,c = map(int, input().split())
    if max([a+b, b+c , a+c]) >= 20:
        print("YES")
    else:
        print( "NO")
    