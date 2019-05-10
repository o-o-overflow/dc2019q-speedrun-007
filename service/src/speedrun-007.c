#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 

   Compilation:
   gcc -o speedrun-007 -O0 -fno-stack-protector speedrun-007.c && strip speedrun-007

   Also need to take the glibc version to give to folks.

 */


void say_hello()
{
   alarm(5);
   printf("I'm not crying, you're crying...");
   printf(" Whatever, let's do this.\n");   
}

void more_info()
{
   char buf[1024];
   read(0, buf, 1024);

   while (1)
   {
	  char in;
	  char val;
	  unsigned int num;
		 
	  printf("Changes you'd like to make (y/n)?\n");
	  read(0, &in, 1);
	  if (in == 'n')
	  {
		 break;
	  }
	  num = 0;
	  read(0, &num, 1);
	  read(0, ((char*)&num)+1, 1);
	  read(0, &val, 1);
	  buf[num] = val;
   }
   
   write(1, "So cool.\n", strlen("So cool.\n"));
}

void what_do_they_say()
{
   char buf[512];

   printf("What do you have this time\n");
   more_info(buf);
}

void say_goodbye()
{
   printf("L8R.\n");
}

int main(int argc, char** argv)
{
   setvbuf(stdout, NULL, _IONBF, 0);

   if (getenv("DEBUG") == NULL)
   {
	  alarm(5);
   }

   
   say_hello();
   what_do_they_say();
   say_goodbye();
}
