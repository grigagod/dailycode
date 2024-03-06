ans, ch0 = 1, ""

for ch1 in input():
    if ch1 != ch0:
        ch0, curr = ch1, 1
    else:
        curr = curr + 1
        ans = max(curr, ans)

print(ans)
