#include<stdio.h>
size_t string_length(char *str){
    size_t i;
    while(*str!='\0'){
	i++;
	str++;

    }
    return i;

}
int main(){
	char string[]="hello world";
	printf("%d\n",string_length(string));
	return 0;
}
