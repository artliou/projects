/*
Name: unittest2.c

Purpose: Card is playable
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
printf("Testing if card is playable\n");
int check = 0;

struct gameState *game = newGame();
game->phase = 0;
check = playCard(0,0,0,0,game);
if (check != -1){
	printf("Didn't detect that it was wrong phase :(");
	exit(0);	
	}
game->phase = 1;
game->numActions = 0;
check = playCard(0,0,0,0,game);
if (check != -1){
	printf("Didn't detect that it no more actions left :(");
	exit(0);	
	}


printf(" Testing playable card complete\n");
}
