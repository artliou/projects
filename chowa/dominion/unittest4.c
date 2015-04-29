/*
Name: unittest4.c

Purpose: Rewriting everything because SVN revert is irreversible :'(
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
printf("Testing \n");
int check,testWinner, testPlayers[MAX_PLAYERS];
struct gameState *game = newGame();
for (int i = 0; i < MAX_PLAYERS; i++)
	testPlayers[i] = rand() % 50;
testWinner= rand() % MAX_PLAYERS;
testPlayers[testWinner] = 70; //highest score right here
check = getWinners(testPlayers, game);
if (testWinner != check){
	printf("Whoops, player %d was supposed to be the winner not player %d!", testWinner, check);
}
 
printf(" Testing complete\n");

}
