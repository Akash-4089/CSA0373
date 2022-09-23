#include<stdio.h>
int arr[100], top=-1, choice, x, i, n;
int push();
int pop();
int disp();
int main(){
	printf("Enter the stack size: ");
	scanf("%d", &n);
	do{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				disp();
				break;
			case 4:
				printf("BREAK POINT\n");
				break;
			default:
				printf("Enter valid choice \n");
		}
	}while(choice!=4);
	return 0;
}
int push(){
	if (top>=n-1){
		printf("THE STACK IS FULL \n");
	}
	else{
		printf("Enter the element to be pushed: ");
		scanf("%d", &x);
		top++;
		arr[top]=x;
	}
}
int pop(){
	if(top==-1){
		printf("STACK IS UNDERFLOW");
	}
	else{
		printf("Popped element is %d", arr[top]);
		top--;
	}
}
int disp(){
	if (top>=0){
		for(i=top;i>=0;i--){
			printf("\n %d", arr[i]);
		}
	}
	else{
		printf("THE STACK IS EMPTY \n");
	}
}
