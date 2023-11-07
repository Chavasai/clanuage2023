#include <stdio.h>

void copyString(char *dest, const char *src) {
    int i = 0;
    
    // Iterate through the characters of the source string
    while (src[i] != '\0') {
        // Copy the character from source to destination
        dest[i] = src[i];
        i++;
    }
    
    // Null-terminate the destination string
    dest[i] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[100]; // Make sure the destination string has enough space
    
    copyString(destination, source);
    
    printf("Copied string: %s\n", destination);
    
    return 0;
}

