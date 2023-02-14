import sys
input = sys.stdin.readline

n = list(map(str,input()))
cnt1=0
cnt2=0
cnt=0
for i in range(len(n)):
  if(n[i]=='@'):cnt+=1
  if(n[i]==')'):
    cnt1=cnt
    cnt=0
cnt2=cnt
print(cnt1,cnt2)