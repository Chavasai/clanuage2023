#include <stdio.h>

void toUpperCase(char *str) {
    int i = 0;
    
    // Iterate through the characters of the string
    while (str[i] != '\0') {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the ASCII offset
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    toUpperCase(myString);
    
    printf("Uppercase string: %s\n", myString);
    
    return 0;
}

