#include<stdio.h>
int main(){
	int a=0,b=1, n;
	printf("Enter n: ");
	scanf("%d", &n);
	int c=a+b;
	printf("Fibonacci series: %d, %d,", a,b);
	for(int i=3;i<=n;i++){
		printf(" %d,", c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
