import sys
input = sys.stdin.readline

n,m,k = map(int,input().split())
if n+m==k:
  print(n,'+',m,'=',k,sep='')
elif n-m==k:
  print(n,'-',m,'=',k,sep='')
elif n/m==k:
  print(n,'/',m,'=',k,sep='')
elif n*m==k:
  print(n,'*',m,'=',k,sep='')
elif m+k==n:
  print(n,'=',m,'+',k,sep='')
elif m-k==n:
  print(n,'=',m,'-',k,sep='')
elif m/k==n:
  print(n,'=',m,'/',k,sep='')
elif m*k==n:
  print(n,'=',m,'*',k,sep='')