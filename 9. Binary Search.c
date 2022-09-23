#include<stdio.h>
int binsearch(int arr[], int beg, int end, int e, int n);
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
	//binary search
	res=binsearch(arr, 0, n-1, e, n);
	if(res==-1){
		printf("The search element is not present in the array");
	}
	else{
		printf("The element is found at %d position in the array", res);
	}
	return 0;
}
int binsearch(int arr[], int beg, int end, int e, int n){
	int mid;
	if(end>=beg){
		mid=(beg+end)/2;
		for(int i=0; i<n;i++){
		if(arr[mid]==e){
			return mid+1;
		}
		else if(arr[mid]<e){
			return binsearch(arr, mid+1, end, e, n);
		}
		else{  
            return binsearch(arr, beg, mid-1, e, n);    
        }   
	}
	}
	return -1;
}
