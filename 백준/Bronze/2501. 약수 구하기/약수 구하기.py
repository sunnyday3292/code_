p, q = map(int, input().split())
qlist = []

for i in range(1, p+1):
    if p % i == 0:
        qlist.append(i)

if len(qlist) < q:
    print(0)
else:
    print(qlist[q-1])