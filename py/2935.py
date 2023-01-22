import sys
input = sys.stdin.readline

n = int(input())
k =list(map(str,input()))
m =int(input())
if k[0]=='*': print(n*m)
else:print(n+m)