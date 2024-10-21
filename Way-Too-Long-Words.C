#include <stdio.h>
#include <string.h>

int main()
{
    int n;  // Number of words
    scanf("%d", &n);  // Read the number of words

    char word[101];  // Array to hold each word, with a maximum length of 100 characters

    // Loop through each word
    for (int i = 0; i < n; i++) {
        scanf("%s", word);  // Read the word

        int length = strlen(word);  // Get the length of the word

        // Check if the word length is greater than 10
        if (length > 10) {
            // Print the abbreviated form: first letter, number of characters in between, last letter
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            // Print the word as is if its length is 10 or less
            printf("%s\n", word);
        }
    }

    return 0;
}
