#include<stdio.h>
#include<conio.h>

int main(){
int guessvalue = 12;
int guessnumber;
int count = 0;
int limit = 3;
int outofguesses = 0;

printf("You have 3 chances to guess the number\n\n");

while(guessvalue != guessnumber && outofguesses==0){
	if(count < limit){
		printf("enter the guesss nuumber: ");
		scanf("%d", &guessnumber);
		if(guessvalue != guessnumber){
			printf("its not a correct guess\n\n");
		}
		count++;
		if(count==2){
			printf("This is the last chance to guess a number\n");
		}
}
	else{
	
	outofguesses = 1;
	
}
}
if(outofguesses == 1){
	printf("ohoh sorry you dont have chances anymore to try again");
	
}else{
	printf("you win");
}


return 0;
}
