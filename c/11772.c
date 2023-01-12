#include <stdio.h>
#include<string.h>
int main() {
 long long int n,sum=0,p=1,sum2=1,sum3=0;
  char a[10000];
  scanf("%lld",&n);
  for(int i=1;i<=n;i++){
    scanf("%s",a);
    int b=strlen(a);
    int k=a[b-1]-'0';
    for(int i=b-2;i>=0;i--){
      sum+=(a[i]-'0')*p;
      p*=10;
    }
    //printf("%lld\n",sum);
    for(int i=0;i<k;i++){
      sum2*=sum;
    }
    //printf("%lld\n",sum2);
    sum3+=sum2;
    sum2=1;
    sum=0;
    p=1;
  }
  printf("%lld",sum3);
}
