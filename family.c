#include <stdio.h>
#include <string.h>
int main(){
    char momName[30];
    char dadName[30];
    char broName[30];
    char myName[30];
    printf("enter you dad name\n");
fgets(dadName, sizeof(dadName), stdin);
dadName[strcspn(dadName, "\n")] = '\0';
    printf("enter mom name\n");
fgets(momName, sizeof(momName), stdin);
momName[strcspn(momName, "\n")] = '\0';
    printf("Enter brother name\n");
fgets(broName, sizeof(broName), stdin);
broName[strcspn(broName, "\n")] = '\0';
    printf("enter your name\n");
fgets(myName, sizeof(myName), stdin);
myName[strcspn(myName, "\n")] = '\0';
printf("The Goat is %s\n", myName);
}