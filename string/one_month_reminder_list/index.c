#include<stdio.h>
#include<string.h>
#define MAX_REMIND 60
#define MSG_LENGTH 50

int read_line(char str[],int n);

int main(){
	char reminders[MAX_REMIND][MSG_LENGTH+3];
	char day_string[3],message_string[MSG_LENGTH+1];
	int day,i,j,num_remind=0;
	for(;;){
	    if(num_remind==MAX_REMIND){
		break;
	    }
	    else{
		printf("Enter day and reminder: ");
		scanf("%2d",&day);
		if(day==0){
		    break;
		}
		sprintf(day_string,"%2d",day);
		read_line(message_string,MSG_LENGTH);
		for(i=0;i<num_remind;i++){
		    if(strcmp(day_string,reminders[i])<0){
			break;
		    }
		}
		for(j=num_remind;j>i;j--){
		    strcpy(reminders[j],reminders[j-1]);
		}
		    strcpy(reminders[i],day_string);
		    strcat(reminders[i],message_string);
		    num_remind++; 

		    

		}
	
       }
	printf("\n--day reminder--\n");
	for(int i=0;i<num_remind;i++){
	    printf("%s\n",reminders[i]);
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
