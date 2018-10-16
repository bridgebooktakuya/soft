// sample 1-3
#include <stdio.h>
int main(){
 char firstname[20];
 char lastname[20];
 int id;
 char firstname = "Hashimoto";
 char lastname = "Takuya";
 int id = 222;
 printf("What’s your full name?\n");
 scanf("%s %s", firstname, lastname);
 printf("What is your student ID?\n");
 scanf("%d", &id);
 printf("Welcome, %s (student ID:%d)!\n", firstname, id);
}
