#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE *list = fopen("phone-list.csv", "a+");
  if (list == NULL) {
    return 1;
  }

  char name[30];
  char number[30];

  printf("Name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';  

  printf("Number: ");
  fgets(number, sizeof(number), stdin);
  number[strcspn(number, "\n")] = '\0'; 

  fprintf(list, "%s,%s\n", name, number);

  fclose(list);

  return 0;
}

