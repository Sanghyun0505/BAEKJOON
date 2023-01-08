n = int(input())
li = []
s = []
for _ in range(n):
  m = input()
  li.append(m[0])
res = set(li)
for i in res:
  if li.count(i)>=5:
    s.append(i)
s.sort()
if len(s) == 0:
  print("PREDAJA")
else:
  for i in s:
    print(i,end="")