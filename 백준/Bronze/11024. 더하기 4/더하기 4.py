import sys
input = sys.stdin.readline

N = int(input())
for _ in range(N):
    numlist = list(map(int, input().split()))
    print(sum(numlist))