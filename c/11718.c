#include<stdio.h>
int main(){
	char c[101];
	while(scanf("%[^\n]s",c)!=EOF){
		printf("%s\n",c);
        getchar();
	}
	return 0;
}