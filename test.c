#include <stdio.h>
int main(){
	
	int a,b,c,d;
	
	printf("Enter grade respectively (BM,BI,BC,MC):");
	scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>40 && b>40 && c>40 && d>40)
	printf("Pass");
    else
    printf("Fail");
		
	return 0;
	
}