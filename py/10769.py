import sys
input = sys.stdin.readline

n = str(input())
cnt1=0
cnt2=0
for i in range(len(n)):
  if n[i]==':' and n[i+1]=='-':
    if n[i+2]==')':
      cnt1+=1
    elif n[i+2]=='(':
      cnt2+=1
if cnt1==cnt2 and cnt1!=0 and cnt2!=0:
  print('unsure')
elif cnt1>cnt2:
  print('happy')
elif cnt2>cnt1:
  print('sad')
else:
  print('none')
  