#include<stdio.h>
int main() {
	int n,i,j,s,half;
    scanf("%d",&n);
    half=n/2+1;
	for (i=1;i<=n;i++){
        for (j=1;j<=n-(i+1);j++){
           printf("* ");

        }
        printf("\n");
    }
	return 0;
}