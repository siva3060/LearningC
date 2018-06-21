













#include <stdio.h>
#define BOTTLES 99

void main()
{
  int bottle_count = BOTTLES;
  printf("%d\n",bottle_count);
  while (1 < bottle_count)
   {
     printf("\t%d bottles of beer on the wall, %d bottles of beer.Take one down and pass it around,\n %d bottles of beer on the wall.\n",bottle_count,bottle_count,(bottle_count-1));
     bottle_count--;
   }
   printf("\t1 bottles of beer on the wall,1 bottles of beer.Take one down and pass it around,\n No more bottles of beer on the wall.\n");
}
