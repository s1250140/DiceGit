#include"stdio.h"
#include"stdlib.h"
#include"time.h"
int main()
{
  int c=0;
  int n;
  char name[20];
  srand((unsigned int)time(NULL));
  printf("What your is name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  n=rand()%6+1;
  printf("Die 1: %d\n",n);
  c+=n;
  n=rand()%6+1;
  printf("Die 2: %d\n",n);
  c+=n;
  printf("Total value: %d\n",c);
  if(7<=c)
    {
      printf("%s won!\n",name);
    }
  else
    {
      printf("%s lost.\n",name);
    }
  return 0;
}
