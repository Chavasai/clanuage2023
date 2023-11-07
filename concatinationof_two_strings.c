#include <stdio.h>
#include <string.h>

int main() {
    // Define two strings to concatenate
    char source[] = "Hello, ";
    char destination[] = "World!";

    // Calculate the lengths of the strings
    int source_len = strlen(source);
    int destination_len = strlen(destination);

    // Calculate the total length needed for the concatenated string
    int total_len = source_len + destination_len;

    // Ensure enough space is available in the destination string
    if (strlen(destination) < total_len) {
        printf("Destination string is too small to hold the concatenated result.\n");
        return 1;
    }

    // Loop through each character in the source string and append it to the destination
    int i, j;
    for (i = source_len, j = 0; i < total_len; i++, j++) {
        destination[i] = source[j];
    }

    // Null-terminate the destination string to mark the end of the concatenated string
    destination[total_len] = '\0';

    // Print the concatenated string
    printf("Concatenated: %s\n", destination);

    return 0;
}

