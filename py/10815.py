import sys
input = sys.stdin.readline

n = int(input())
n2 = set(input().split())
m = int(input())
m2 = list(input().split())
   
for i in m2:
  if i in n2:
    print('1',end=' ')
  else:
    print('0',end=' ')