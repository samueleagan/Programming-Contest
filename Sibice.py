from math import sqrt


n, w, h = [int(x) for x in input().split()]

pyTheorem = ((w * w) + (h *h))

for x in range(n):
    if n < pyTheorem:
        print("DA")
    else:
        print("NE")