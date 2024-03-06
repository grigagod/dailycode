n, got = int(input()), sum(map(int, input().split()))
want = (n * (n + 1) // 2) - got
print(want)
