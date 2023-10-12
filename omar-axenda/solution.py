n = int(input())
for i in range(n):
    x1,y1 = map(int, input().split())
    x2,y2 = map(int, input().split())

    if y1 == y2:
        print( "Very Happy")
    elif x1 == x2:
        print( "Happy")
    else:
        print( "Sad")