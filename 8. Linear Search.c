#include<stdio.h>
int main(){
	int i, n, arr[100],e,res,temp=-1;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the search element: ");
	scanf("%d", &e);
	//linear search
	for(i=0;i<n;i++){
		if(arr[i]==e){
			res=i;
			temp++;
		}
	}
	if(temp!=-1){
		printf("The element is found at %d position in the array", res+1);
	}
	else if(temp==-1){
			printf("The element is not present in the array");
	}
	return 0;
}
