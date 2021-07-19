// bilal ahmed	
// AI-K
//ROLL NO 19I-1874

#include <stdio.h>
#include "rps.h"

int playRound(char name[], int roundNo)
{
	
	int userinput,computerchoice;
	printf("Round %d\n",roundNo);
	printf("%s, please enter your choice for this round.\n",name);
	printf("1 for ROCK, 2 for PAPER, and 3 for SCISSORS: ");
	scanf("%d",&userinput);
	computerchoice = getComputerChoice(); 
	


	if (userinput==1 && computerchoice==1){
		printf("Computer picked ROCK, %s picked ROCK.\n\n",name);
		printf("We picked the same thing! This round is a draw.\n\n");
		return 0;
		
		}
	else if(userinput==1 && computerchoice==2){
		printf("Computer picked PAPER, %s picked ROCK.\n\n",name);
        printf("PAPER covers ROCK. I win.\n\n");
			return 1;
			}
	else if(userinput==1 && computerchoice==3){
		printf("Computer picked SCISSORS, %s picked ROCK.\n\n",name);
		printf("ROCK breaks SCISSORS. You win.\n\n");
			return -1;
			}
	else if(userinput==2 && computerchoice==1){
		printf("Computer picked ROCK, %s picked PAPER\n\n",name);
		printf("PAPER covers ROCK. You win.\n\n");
			return -1;
			}
	else if(userinput==2 && computerchoice==2){
		printf("Computer picked PAPER, %s picked PAPER.\n\n",name);
		printf("We picked the same thing! This round is a draw.\n\n");
				}
	else if(userinput==2 && computerchoice==3){
		printf("Computer picked SCISSOR, %s picked PAPER\n\n",name);
		printf("SCISSORS cut PAPER. I win.\n\n");
			return 1;
			}
	else if(userinput==3 && computerchoice==1){
		printf("Computer picked ROCK, %s picked SCISSOR\n\n",name);
		printf("ROCK breaks SCISSORS.I win.\n\n");
			return 1;
			}
	else if(userinput==3 && computerchoice==2){
		printf("Computer picked PAPER, %s picked SCISSOR\n\n",name);
		printf("SCISSORS cut PAPER. YOU win.\n\n");
			return -1;
			}
	else if(userinput==3 && computerchoice==3){
		printf("Computer picked SCISSOR, %s picked SCISSOR.\n\n",name);
		printf("We picked the same thing! This round is a draw.\n\n");
				}
	else{
				printf("invalid input\n\n");
				return 1;
				}
				
	return 0;
				
	}


int main(void)
{
	char name[100];
	
	initializeRandom();
	int usr=0,cmp=0,dr=0;

	printf("Welcome to ROCK PAPER SCISSORS.\n");
	printf("I, Computer, will be your opponent.\n");
	printf("Please type in your name and press return: ");
	scanf("%s", name);

	printf("\nWelcome %s.\n\n", name);

	printf("All right %s. We will be playing 3 rounds.\n\n", name);

int r;
	
      r=playRound(name, 1);
      if (r == 1){
		  cmp = cmp+1;
	  }else if ( r == -1 ){
		   usr = usr+1;
	  }else{
		   dr = dr + 1;
	  }
        	
	
      r=playRound(name, 2);	
      if (r == 1){
		  cmp = cmp+1;
	  }else if ( r == -1 ){
		   usr = usr+1;
	  }else{
		   dr = dr + 1;
	  }
	   
	
	
      r=playRound(name, 3);
      if (r == 1){
		  cmp = cmp+1;
	  }else if ( r == -1 ){
		   usr = usr+1;
	  }else{
		   dr = dr + 1;
	  }
	printf("Number of times Computer won:%d\n",cmp);
	printf("Number of times %s won:%d\n",name,usr);
	printf("Number of draws:%d\n",dr);
	if (cmp==usr){
		printf("We are evenly matched.\n");
	}else if(cmp>usr){
		printf("I, Computer, am a master at ROCK, PAPER, SCISSORS.\n");
	}else{
		printf("YOU, %s, are a master at ROCK, PAPER, SCISSORS.\n",name);
				
	}
	return 0;
}

