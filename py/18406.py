import sys
input = sys.stdin.readline

n = str(input())
cnt1=0
cnt2=0
for i in range(len(n)//2):
  cnt1+=int(n[i])
for i in range(len(n)//2,len(n)-1):
  cnt2+=int(n[i])
if cnt1==cnt2:
  print('LUCKY')
else:
  print('READY')
