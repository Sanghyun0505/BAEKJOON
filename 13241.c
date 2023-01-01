#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
long long int gcd(long long int a,long long int b);
int main(){
  long long int a,b,max=-1000000;
  scanf("%lld %lld",&a,&b);
  int k = gcd(a,b);
  if(a*b/k>max) max=a*b/k;
  for(int i=1;i<=b;i++){
    if(b*i==a && i>max) max = b*i;
  }
  printf("%lld",max);
}
long long int gcd(long long int a,long long int b){
    
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}