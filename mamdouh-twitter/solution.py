f, k , x, y, op = map(int , input().split())
old_followers = f

for _ in range(op):
        if f < k:
            f += x
        elif f >= k:
            f = max(0, f - y) # followers number can't be negative aka the min is 0
    
print(f - old_followers) # to get the new followers only
