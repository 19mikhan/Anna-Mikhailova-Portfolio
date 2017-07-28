/*
* File: helloYou.c
* ---------------------
* This program prints a more personal greeting by reading
* in the name of the user.
*/
#include <stdio.h>
int main(void)
{
 char string[80];
printf("What is your name?\n");
gets(string);
printf("Hello, %s\n", string);
getchar();
return 0;
}

