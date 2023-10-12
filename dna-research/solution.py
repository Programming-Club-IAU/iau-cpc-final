s = input()
sub_strings = {}

for i in range(len(s) - 3):
    temp = s[i:i+4]
    if temp in sub_strings:
        sub_strings[temp] += 1
    else:
        sub_strings[temp] = 1
                

ans = sum(1 for count in sub_strings.values() if count >= 3)
print(ans)