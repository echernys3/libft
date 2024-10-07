#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Function prototype for the split function
char **split(const char *s, char c);

void print_split_result(char **result) {
    for (int i = 0; result[i] != NULL; i++) {
        printf("result[%d] = %s\n", i, result[i]);
        free(result[i]);  // Free each string after printing
    }
    free(result);  // Free the array itself
}

int main() {
    const char *test_string = "hello,world,foo";
    char delimiter = ',';

    // Call the split function
    char **result = split(test_string, delimiter);

    // Check for NULL result
    if (result == NULL) {
        fprintf(stderr, "Error: split function returned NULL\n");
        return 1;
    }

    // Print the result
    print_split_result(result);

    // Ensure the last element is NULL
    if (result[2] == NULL) {
        printf("Successfully split the string into an array ending with NULL.\n");
    } else {
        printf("Error: The array does not end with NULL.\n");
    }

    return 0;
}
