a = input()
li=[]
cnt=0
li.append(a[cnt])
cnt+=1
for i in a:
  if i=='-':
    li.append(a[cnt])
  cnt+=1
for i in li:
  print(i,end="")