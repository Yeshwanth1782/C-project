#include <stdio.h>
#include <string.h>
void palindrom() {
    char str[100];
    int left = 0;
    int right;
    int is_palindrome = 1; // 1 means True, 0 means False

    printf("Enter a string: ");
    scanf("%s", str);

    // Initialize the right pointer to the last character index
    right = strlen(str) - 1;

    // Compare characters from both ends moving inward
    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0; // Mismatch found
            break;
        }
        left++;  // Move forward
        right--; // Move backward
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

//    return 0;
}

