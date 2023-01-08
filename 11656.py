a = input()
li = []
b = a
for _ in a:
  n = 1
  li.append(b)
  b = b[n:]
  n+=1

li.sort()
for i in li:
  print(i)
  