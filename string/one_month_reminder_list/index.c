#include<stdio.h>
#include<string.h>
#define MAX_REMIND 60
#define MSG_LENGTH 50

int read_line(char str[],int n);

int main(){
	char message_string[MAX_REMIND][MSG_LENGTH+3];
	char day_string[3],message_string[MSG_LENGTH+1];
	int day,i,j,num_remind=0;
	for(;;){
	    if(num_remind==MAX_REMIND){
		break;
	    }
	    else{
		printf("Enter day and reminder: ");
		scanf("%2d",day);
		if(day==0){
		    break;
		}
		sprintf(day_string,"%2d",day);
		read_line(message_string,MSG_LENGTH);
		for(i=0;i<num_remind;i++){
		    if(strcmp(message_string,reminder[i])<0){
			break;
		    }
		}
		for(j=num_remind;j<i;j--){
		    strcpy(reminder[j+1],reminder[j]);
		}
		    strcpy(reminder[i],day_string);
		    strcat(reminder[i],message_string);
		    :
		}
	return 0;
}
int read_line(char str[],int n){
	int i =0;
	int ch=0;
	while((ch=getchar())!='\n'){
	    if(i<n){
		str[i++]=ch;
		
	    }
	    str[i]='\0';


	}
	return i;
}
