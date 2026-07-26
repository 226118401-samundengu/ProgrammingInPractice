#include <stdio.h>
#include <string.h>  // 1. Added so strcspn() works!

int main() {
    char characterName[20];  // 2. Added 'char' keyword

    printf("Enter anime character name \n");
    fgets(characterName, sizeof(characterName), stdin);

    // 3. Fixed typos: strcspn and corrected the ending bracket ')]'
    characterName[strcspn(characterName, "\n")] = '\0';

    // Let's print it to verify!
    printf("The GOAT is %s\n", characterName);

    return 0;
}