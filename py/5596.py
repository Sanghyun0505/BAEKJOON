import sys
input = sys.stdin.readline

s = list(map(int,input().split()))
t = list(map(int,input().split()))
if sum(s)>=sum(t):print(sum(s))
else: print(sum(t))