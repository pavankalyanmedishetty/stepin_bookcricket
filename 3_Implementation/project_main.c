/**
 * @file main1.c
 * @author Pavan
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"stdio.h"
#include"string.h"
#include"time.h"
#include"stdlib.h"
#include"bookcricket.h"
int GetPlayerToss(char player_1[],char player_2[],int oversToplay);
int batting(char battingplayer[],char bowlingplayer[],int oversToplay);
int main()
{
 int i,j,overs,noofovers,player_1Toss,player_2Toss;
 char player_1[50],player_2[50];
 srand(time(NULL));
 printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\tWELCOME TO BOOK CRICKET GAME\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
 printf("Enter Player 1 Name:");
 fflush(stdin);
 gets(player_1);
 printf("Enter Player 2 Name:");
 fflush(stdin);
 gets(player_2);
 printf("Enter\n1 - Fixed Overs\n2 - Play Until Out\n3 - Instructions For Book Cricket\n4 - Exit: ");
 scanf("%d",&noofovers);
  do{
 if(noofovers==1)
 {
  printf("Enter No Of Overs: ");
  scanf("%d",&overs);
  player_1Toss=GetPlayerToss(player_1,player_2,overs); 
  
 }
 else if(noofovers==2)
 {
  player_1Toss=GetPlayerToss(player_1,player_2,0);
 }
 else if(noofovers==3)
 {
  printf("How To Play?\n");
  printf("The project is titled as Book Cricket Game and developed using C language.\n Book Cricket is an indoor game which can be played by kids with a book.This game is made for two players.\n The two players will have to decide who is going to guess the toss. After winning the toss, the player has to select whether he has to bat/bowl first. \nThe player who is going to bat first, need to hold the book. \nHe has to randomly open the pages of the book and look for the last digit of that page number which is nothing but the runs obtained in that particular ball. If the last digit is 7/8/9, then it will be considered as a dot ball. \nThe obtained score will be added to the batsman's score everytime. \nThe batsman will be out if the number is 0. Then, the second player has to play with the book in the same process.");
 }
 else
 {
  printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Invalid Choice<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
 }
 printf("Enter 1 - Fixed Overs\n2 - Play Until Out\n3 - How to Play?\n4 - Exit: ");
 scanf("%d",&noofovers);
  }while(noofovers>=1 && noofovers<=3);
 return(0);
}
