#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n=1,k,f,j=0;
  char b[100001],d[100001];
  while(n!=0){
    scanf("%d",&n);
    if(n == 0)break;
    else if(n>=1&&n<=9)printf("yes\n");
    else{
      sprintf(b,"%d",n);
      int c = strlen(b);
      for(int i=c-1;i>=0;i--){
        d[i]=b[j];
        j++;
      }
      j=0;
      //printf("%s\n",d);
      k = atoi(d);
      f = atoi(b);
      if(k==f) printf("yes\n");
      else printf("no\n");
    }
  }
}