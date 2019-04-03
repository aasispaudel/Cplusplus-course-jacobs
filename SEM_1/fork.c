#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int count = 0;
for (; argc > 1; argc--) {
  count ++;
  printf("Child is being created\n");
if (0 == fork()) {
  count++;
  printf("Newly created child\n");
(void) fork();
}
}
 printf("\n%d\n", count);
return 0;
}
