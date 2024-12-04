#include <stdio.h>
#include <string.h>
// Task2. Build the toLower() function here.
void toLower(char a[]) {
    // Get the length of the string
    int len = strlen(a);

    // Loop through each character in the string
    for (int i = 0; i < len; i++) {
        // Check if the character is an uppercase letter
        if (a[i] >= 'A' && a[i] <= 'Z') {
            // Convert the character to lowercase
            a[i] = a[i] + 'a' - 'A';
        }
    }
}

int main(){
    char input[100];
    // Task 1. Read in user input to the char array input.
    scanf("%99[^\n]", input);

    // Task 3. Call the toLower function.
    toLower(input);
    printf("%s", input);
}
