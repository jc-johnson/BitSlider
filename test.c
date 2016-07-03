/* scanf example */
#include <stdio.h>

int main ()
{
  // char str [80];
  // int i;

  // printf ("Enter your family name: ");
  // scanf ("%79s",str);
  // printf ("Enter your age: ");
  // scanf ("%d",&i);  
  // printf ("Mr. %s , %d years old.\n",str,i);
  // printf ("Enter a hexadecimal number: ");
  // scanf ("%x",&i);
  // printf ("You have entered %#x (%d).\n",i,i);
  
// char str[100];
// int strLength = strlen(str);
// // char* strPtr = &str[strLength];

// str = "hello";
// str[strLength] = "world";



// int i;


// for (i = 0; i < strLength; i++) {

// 	printf("[%c]", str[i]);

// }
// printf(str[strLength]);
// printf("\n");

char str[] = "hello" + "world";
  int i;
  int strLength = strlen(str);

  for (i = 0; i < strLength; i++) {

  printf("[%c]", str[i]);

}



return 0;
}