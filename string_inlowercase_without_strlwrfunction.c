#include <stdio.h>

void toLowerCase(char *str) {
    int i = 0;
    
    // Iterate through the characters of the string
    while (str[i] != '\0') {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase by adding the ASCII offset
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    toLowerCase(myString);
    
    printf("Lowercase string: %s\n", myString);
    
    return 0;
}

