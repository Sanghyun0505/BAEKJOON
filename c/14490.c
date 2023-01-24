#include<stdio.h>
#include<math.h>
int gcd(int a,int b);
int main(){
  int a,b,k;
  scanf("%d:%d",&a,&b);
  k = gcd(a,b);
  a = a/k;
  b = b/k;
  printf("%d:%d",a,b);
}

int gcd(int a, int b) {

  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }

  return abs(a);
}
