#include <stdio.h>

void main()
{

	int p,b,a,N,n;
	
	printf("HOW TO PLAY GAME : \n IN THIS , CHOOSE 1 BIG NO. AND 1 SMALL NO. \n COMPUTER AND U WILL PLAY GAME.  AFTER U PUT NUMBERS THERE IS A TOSS AND WHO WON WILL PLAY FIRST . \n IF U HAVE FIRST CHANCE THEN U CAN START WITH NO. 1 OR 2 OR TILL SMALL NO. THEN COMPUTER PLAY , COMPUTER CAN INCREASE  UR NUMBER UPTO UR NUMBER + SMALL NO. THEN U WILL  PLAY AND U CAN INCREASE THE NO. BY COMPUTER NO.+ SMALL NO.AND THEN COMPUTER AND THEN U AND SO ON...\n IF COMPUTER WON TOSS THEN COMPUTER WILL START. \n WHO WILL FIRST TYPE THE BIG NUMBER OR NUMBER GREATER THEN BIG NUMBER ( AFTER U AND COMPUTER INCREASE ) WILL  LOOSE......\n AND I , COMPUTER CHALLENGE U THAT U WILL NEVER WON hahaha \n MADE BY:- 'AYUSH AGGARWAL'\n \n " );

ayush:	
	p = 0;
	b = 0;
	a = 0;
	N = 0;
	n = 0;
	printf("ENTER BIG  NO.(greater than 20)\n");
	scanf("%d",&N);
	printf("ENTER SMALL NO.(IT SHOULD SMALLER THAN BIG NO.)\n");
	scanf("%d",&n);
if ( n>N )
	     {  printf("u put wrong value so try again");
		goto ayush; } 		
else		
{		
		a = N -1;

		while (a > 0) {
			a = a - n-1;
		}

		b = a + n + 1;

		if (a == 0) { 
			printf("first chance of player\n");
			scanf("%d",&p);
			printf("player value is %d \n",p);

			while(p < N) {
				printf("now computer chance \n");
				
				printf("computer value is %d \n",b);
				
			midnew :				
				printf("now player chance\n");
									
				scanf("%d",&p);
			if ( p > b + n || p < b )
				     {  printf("u put wrong value so try again");
					goto  midnew ; } 		
			else
				{
				printf("player value is %d \n",p);
                         
				b = b + n + 1 ;	
				 }
			}
		}
		else 
			{
			printf("first chance of computer\n");
	
			
			while(p < N) {
				printf("now computer chance \n");
				
				printf("computer value is %d \n",b);
				
			mid2new :				
				printf("now player chance\n");
									
				scanf("%d",&p);
			if ( p > b + n || p < b )
				     {  printf("u put wrong value so try again");
					goto  mid2new ; } 		
			else
				{
				printf("player value is %d \n",p);
                         
				b = b + n + 1 ;	

				}
				     }
			}
	printf("as i said before \n computer will won always WHICH IS MADE BY AYUSH AGGARWAL THAT MEANS AYUSH ALWAYS WON hahaha \n..good luck next time\n");

}}
