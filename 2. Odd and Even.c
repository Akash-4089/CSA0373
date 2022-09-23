#include<stdio.h>
int main(){
	int n, arr[100],i,odd,even;
	 printf("Enter the no of elements to be added: ");
	 scanf("%d", &n);
	 printf("Enter the elements: ");
	 for(i=0;i<n;i++){
	 	scanf("%d", &arr[i]);
	 }
	 //printing odd
	 printf("The odd numbers are: ");
	 for(i=0;i<n;i++){
	 	odd=0;
	 	if(arr[i]%2==1){
	 		printf("%d ", arr[i]);
		 }
	 }
	 printf("\n");
	 //printing even numbers
	 printf("The even numbers are: ");
	 for(i=0;i<n;i++){
	 	odd=0;
	 	if(arr[i]%2==0){
	 		printf("%d ", arr[i]);
		 }
	 }
	 return 0;
}
