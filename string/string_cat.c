#include<stdio.h>
char *strcat(char *str1,char *str2){
   char *ptr = str1;
   while(*ptr!='\0'){
	ptr++;
   }
   while(*str2!='\0'){
	*ptr=*str2;
	ptr++;
	str2++;

   }
   *ptr='\0';
   return str1;
}
int main(){
	char str1[]="Hello";
	char str2[]="World";
	strcat(str1,str2);
	printf("str1: %s\n",str1);
	return 0;
}
