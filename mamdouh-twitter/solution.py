f, k , x, y, op = map(int , input().split())
old_followers = f

for _ in range(op):
        if f < k:
            f += x
        elif f >= k:
            f = max(0, f - y) # new followers can't be negative
    
print(f - old_followers) # to get the new followers only