import sys
input = sys.stdin.readline

n = str(input())
if n[0]=='A':
  if n[1] == '+':print("4.3")
  elif n[1] =='0':print("4.0")
  elif n[1] =='-':print('3.7')
elif n[0] =='B':
  if n[1]=='+':print('3.3')
  elif n[1]=='0':print('3.0')
  elif n[1]=='-':print('2.7')
elif n[0]=='C':
  if n[1]=='+':print('2.3')
  elif n[1]=='0':print('2.0')
  elif n[1]=='-':print('1.7')
elif n[0] =='D':
  if n[1]=='+':print('1.3')
  elif n[1]=='0':print('1.0')
  elif n[1]=='-':print('0.7')
else: print('0.0')