#include <stdio.h>

// Function to find the lexicographically smallest word
void smallestWord(int encoded) {
    // Find the first letter
    int firstLetter = (encoded - 51) < 26 ? (encoded - 51) : 26;
    printf("%c", 'a' + firstLetter - 1);
    
    // Find the second letter
    encoded -= firstLetter;
    int secondLetter = (encoded - 26) < 26 ? (encoded - 26) : 26;
    printf("%c", 'a' + secondLetter - 1);
    
    // Find the third letter
    encoded -= secondLetter;
    int thirdLetter = encoded < 26 ? encoded : 26;
    printf("%c\n", 'a' + thirdLetter - 1);
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    
    for (int i = 0; i < t; ++i) {
        int n;
        scanf("%d", &n); // Encoded word
        smallestWord(n); // Output the lexicographically smallest word
    }
    
    return 0;
}
