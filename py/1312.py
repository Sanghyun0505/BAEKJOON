import sys
input = sys.stdin.readline

a,b,n = map(int,input().split())

for i in range(n):
  a = (a%b)*10
  result = a//b
print(result)
