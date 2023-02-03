import sys
input = sys.stdin.readline

n = int(input())
n = bin(n)[2:]
n = n[::-1]
print(int(n,2))
  