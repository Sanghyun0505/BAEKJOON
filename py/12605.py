import sys
input = sys.stdin.readline

n = int(input())
for i in range(n):
  m = list(map(str,input().rstrip().split()))
  print('Case #%d: %s' %(i+1,' '.join(m[::-1])))
