#include<stdio.h>

int main()
{
 int i,a[10],n=0;
 printf("WELCOME TO THE GAME""KAUN BANEGA CROREPATHI""It contains10 QUESTIONS each carries 10 LAKHS \n");

 for(i=1;i<=10;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("who among the following wrote sanskrit grammar 1.kalidasa 2.charak 3.aryabhatta 4.panini ");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 2:
   printf("the metal whose salt are sensitive to light 1.silver 2.zinc 3.copper 4.aluminium ");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 3:
   printf("What is the Symbol of Nazis(Army of Great Hitler) 1.Cross 2.Skull and Bones 3.Owl 4.Swastika ");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 4:
   printf("Who among these is not an Railway Minister 1.Mamtha Banerjee 2.Lal Bahadur Shastri 3.Geetha Mukerjee 4.George Fernandis ");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 5:
   printf("the country has the highest in barley production 1.china 2.india 3.russia 4.france");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 6:
   printf("Who Heads Reserve Bank of India1.FinanceMinister2.Commissioner3.Chief Bank Manager4.Governor");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 7:
   printf("tsunamis are not caused by 1.volcanic eruption2.under sea landslide3.earthquake4.Hurricanes");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 8:
   printf("Which is the system of Governance inChina1.communism2.communalism3.Monarchy4.Democratic");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 9:
   printf("which peninsular river is least seasonal in flow1.narmada2.krishna3.cauvery4.godavari");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000Your Next Question is",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  case 10:
   printf("the hottest planet in solar system1.mars2.mercury3.Venus4.jupiter");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000*YOU HAVE BECOME CROREPATHI OF THIS WEEK*",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=11;
   }
   break;
  default:
   break;
   }
   }
   return 0;
   }