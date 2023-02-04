import sys
input = sys.stdin.readline
n = int(input())
for _ in range(n):
    m = list(map(int, input().split()))
    m = m.reverse()
    print(m[-3])
    m = []