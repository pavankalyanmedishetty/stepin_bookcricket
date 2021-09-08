/**
 * @file bookfunction1.c
 * @author Pavan
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include"bookcricket.h"

int GetPlayerToss(char player_1[],char player_2[],int oversToplay)
{
 int player_1Choice,player_2Choice,toss,player_1Toss,batorbowlChoice,player_2Score,player_1Score;
     printf("%s Choose your choice : 1 for head or 2 for tail: ",player_1);
  scanf("%d",&player_1Choice);
  if(player_1Choice==1)
  {
   player_2Choice=2;
   printf("%s Choice is Tail\n",player_2);
  }
  else if(player_1Choice==2)
  {
   player_2Choice=1;
   printf("%s Choice is Head\n",player_2);
  }
  else
  {
   printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\tInvalid ENTRY/t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
   return(0);
  }
  toss=rand()%2;
  toss=toss+1;
  if(toss==1)
  printf("Toss is Head\n");
  else
  printf("Toss is Tail\n");
  if(toss==player_1Choice)
  {
   printf("Player 1 %s Won the Toss\n",player_1);
   printf("Choose\n1 - Batting\n2 - Bowl: ");
   scanf("%d",&batorbowlChoice);
   if(batorbowlChoice==1)
   {
        printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_1);
    player_1Score=batting(player_1,player_2,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<<\n",player_2);
    player_2Score=batting(player_2,player_1,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>>>>Results Time<<<<<<<<<<<<<<<<<<<<<<<<\n");
   }
   else
   {
    printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_2);
    player_2Score=batting(player_2,player_1,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_1);
    player_1Score=batting(player_1,player_2,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>>>>Results Time<<<<<<<<<<<<<<<<<<<<<<<<\n");
   }
  }
  else if(toss==player_2Choice)
  {
   player_1Toss=2;
   printf("Player 2 %s Won the Toss\n",player_2);
   printf("Choose\n1 - Batting\n2 - Bowl: ");
   scanf("%d",&batorbowlChoice);
   if(batorbowlChoice==1)
   {
    printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_2);
    player_2Score=batting(player_2,player_1,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_1);
    player_1Score=batting(player_1,player_2,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>>>>Results Time<<<<<<<<<<<<<<<<<<<<<<<<\n");
   }
   else
   {
    printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_1);
    player_1Score=batting(player_1,player_2,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>%s is Going to bat now<<<<<<<<<<<<<<<<<<<<\n",player_2);
    player_2Score=batting(player_2,player_1,oversToplay);
    printf(">>>>>>>>>>>>>>>>>>>>>Results Time<<<<<<<<<<<<<<<<<<<<<<<<\n");
   }
  }
  else
  {
   printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Error<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
   return(0);
  }
  if(player_1Score==player_2Score)
  {
   printf("Draw Match\nThanks For Playing the Game\n");
  }
  if(player_1Score>player_2Score)
  printf("%s Won the Match\nThanks for Playing the Game\n",player_1);
  if(player_1Score<player_2Score)
  printf("%s Won the Match\nThanks for Playing the Game\n",player_2);
  return(7);
}
