#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  b+=c;
  a+=d;
  if(b>a)printf("%d",b-a);
  else printf("%d",a-b);
}
