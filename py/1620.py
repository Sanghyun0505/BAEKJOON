import sys
input = sys.stdin.readline

n,m = map(int, input().rstrip().split())
d = {input().rstrip() : i for i in range(1, n+1)}
reverse_d =  dict(map(reversed, d.items()))

for _ in range(m):
  l = input().rstrip()
  if l in d.keys():
    print(d[l])
  else:
    print(reverse_d[int(l)])
    