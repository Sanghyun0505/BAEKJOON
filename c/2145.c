#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
  char a[100001];
  long long int n[100001],k,sum=11,i=0,sum2=0;
  for(int i=0;;i++){
    scanf("%lld",&n[i]);
    if(n[i]==0)break;
  }
  i=0;
  sprintf(a,"%lld",n[i]);
  k=strlen(a);
  while(n[i]!=0){
    //printf("%lld\n",n[i]);
    while(sum>=10){ 
      sum=0;
      for(int i=0;i<k;i++){
        sum2+=a[i]-'0';
      }
      
      if(sum2>=10){
        sprintf(a,"%lld",sum2);
        k=strlen(a);
        sum=sum2;
        sum2=0;
      }
      else{
        printf("%lld\n",sum2);
        sum=11;
        sum2=0;
        break;
      }
    }
    i++;
    sprintf(a,"%lld",n[i]); //정수 to 문자열
    k=strlen(a);
  }
}
