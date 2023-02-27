import sys
input = sys.stdin.readline

li = []
li2 = []
for i in range(5):
  n = input()
  li.append(n)
for i in range(len(li)):
  if 'FBI' in li[i]  :
    li2.append(i)
if len(li2) == 0:
  print('HE GOT AWAY!')
else:
  for i in range(len(li2)):
    print(li2[i]+1,end=' ')
  
  