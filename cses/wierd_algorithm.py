n, out = int(input()), []

while n != 1:
    out.append(n)
    if n % 2 == 0:
        n = n // 2
    else:
        n = (n * 3) + 1

out.append(n)

print(" ".join(map(str, out)))
