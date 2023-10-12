n = int(input())
s = set()
opposite = {
    'W': 'Y',
    'Y': 'W',
    'R': 'O',
    'O': 'R',
    'G': 'B',
    'B': 'G'
}
ans = True

for i in range(n):
    x = input()
    s.add(x)
    if not (len(x) == 1 or (len(x) == 2 and opposite[x[0]] != x[1] and x[0] != x[1]) or (len(x) == 3 and (x[0] != x[1] and x[0] != x[2] and x[1] != x[2]) and (opposite[x[0]] != x[1] and opposite[x[0]] != x[2]) and (opposite[x[1]] != x[0] and opposite[x[1]] != x[2]) and (opposite[x[2]] != x[1] and opposite[x[2]] != x[0]))):
        ans = False
        
        
print("Yes" if ans and len(s) == n else "No")