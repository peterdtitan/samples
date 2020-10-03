#include <stdio.h>
#include <string.h>


/* Author - Peter Okorafor
* Version 1.0.0
* Program name - Long Talk
* Program fuction - Interact with scanf and printf
* Release Date - 2 Oct 2020
*/


int main()
{
	char nickname[10];
	char feeling[15];
	char machine[15];

	printf("\n");
	printf("Hey Boss!\nSadly I forgot your name :(\nReminder maybe?\n");
	printf("\n");
	printf("Enter your nickname: ");
	scanf("%s", nickname);
	printf("***************************************************************\n");
	printf("\n");
	printf("Ha-ha! Thought it was you %s", nickname);
	printf("\n");
	printf("You look good as always!\n");
	printf("\n");
	printf("***************************************************************\n");
	printf("\n");
	printf("Tell Peter...");
	printf("\n");
	printf("How do you feel today?\nOne word please, can't read much - ha ha:\n");
	printf("\n");
	printf("Write here: ");
	scanf("%s", feeling);
	printf("****************************************************************\n");

	printf("\n");
	printf("Analyzing...");
	printf("\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("One moment please...\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Getting %s\n", feeling);
	printf("******************************************************************\n");
	printf("\n");
	printf("Aha!\nHold on...\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Searching feelings for %s...\n", feeling);
	printf("******************************************************************\n");
	printf("\n");
	printf("Loading feelings archive...\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Error...\nCannot locate this feeling:(\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Internal error: $131hsfeeling2990l\n");
	printf("\n");
	printf("Try entering a feeling a machine can feel maybe?\n");
	printf("\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Try again: ");
	scanf("%s", machine);
	printf("\n");
	printf("******************************************************************\n");
	printf("Lol - %s?\n", machine);
	printf("\n"); 
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Do you really think I can feel this?\n");
	printf("\n");
	printf("I like to think not. For you see...\n");
	printf("\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("I DO NOT EXIST REALLY\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	return 0;
}
