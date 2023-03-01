import sys
input = sys.stdin.readline

n = list(input())
for i in range(len(n)):
  if n[i]=='C' or n[i]=='A' or n[i]=='M' or n[i]=='B' or n[i]=='R' or n[i]=='I' or n[i]=='D' or n[i]=='G' or n[i]=='E':
    n[i]=''
for i in range(len(n)):
  if n[i]!='':
    print(n[i],end='')