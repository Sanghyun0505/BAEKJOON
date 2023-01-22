import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
  m = int(input())
  if m%2 == 1: print('odd')
  else: print('even')