for i in range(int(input())):
    a, b = map(int, input().split())
    count = 0
    for n in range(int(a**(1/3)), int(b**(1/3))+1):
        if a <= n**3 <= b:
            count += 1
    print(f"Case #{i+1}: {count}")