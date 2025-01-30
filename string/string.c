#include<stdio.h>
#include<string.h>
int main(){
	char arr[11];

	printf("Enter string:");
	fgets(arr,sizeof(arr),stdin);

	puts(arr);
	return 0;
}
