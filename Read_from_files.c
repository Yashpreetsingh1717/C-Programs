#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the file "file.txt" in read mode ("r")
    FILE *file = fopen("file.txt", "r");
    
    // Declare a variable to store each character read from the file
    char ch;

    // Infinite loop to read and process characters until EOF is reached
    while(1) {
        // Read the next character from the file
        ch = fgetc(file);
        
        // Check if the character is EOF (End of File)
        if (ch == EOF) {
            // Break out of the loop if EOF is reached
            break;
        } else {
            // If not EOF, print the character to the console
            printf("%c", ch);
        }
    }

    // Close the file (not shown in original code but important to do)
    fclose(file);
    
    // Return 0 to indicate successful execution
    return 0;
}
