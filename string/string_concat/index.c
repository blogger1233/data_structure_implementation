#include<stdio.h>

char *stringConcat(char *str1,char *str2){
    char *p=str1;
    while(*p!='\0'){
	p++;
    }
    while(*str2!='\0'){
	*p=*str2;
	str2++;
	p++;
    }
    *p='\0';
    return str1;


}

int main(){
	char str1[7]="abc";
	char str2[]="def";
	stringConcat(str1,str2);
	
	printf("string str1: %s\n",str1);
	return 0;
}

