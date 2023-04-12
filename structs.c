#include <stdio.h>

struct myStructure1 {
  int myNum;
  char myLetter;
  char *myString;  // String
};

struct myStructure2 {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure1 s1;
  struct myStructure2 s2;

  // Trying to assign a value to the string
  s1.myString = "Some text";

  // Trying to print the value
  printf("My string: %s\n", s1.myString);

  printf("s1 - %p, %p, %p, %p\n", &s1.myNum, &s1.myLetter, &s1.myString, &s1.myString[0]);
  printf("s2 - %p, %p, %p, %p\n", &s2.myNum, &s2.myLetter, &s2.myString, &s2.myString[0]);

  return 0;
}
