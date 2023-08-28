#include <stdio.h>
#include <unistd.h>
#define BUFSIZE 128
int main()
{
char buffer[BUFSIZE];
getcwd(buffer,BUFSIZE);
printf("The current working directoryis:\n\t%s\n",buffer);
return(0);
}