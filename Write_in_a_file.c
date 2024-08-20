#include <stdio.h>
#include <stdlib.h>

typedef struct Write_in_a_file
{
    char *ch;  // Pointer to hold the dynamically allocated memory for the string
} write;

// The main() function
int main()
{
    // We are opening a file
    // If the file is not in the system, it will be self-created
    FILE *file = fopen("File.txt", "w");

    // To check whether the file is created or not for our use
    if (file)
    {
        printf("The file exists. You can write in it from the beginning.\n");
    }
    else
    {
        printf("The file doesn't exist.\n");
        return 1;
    }

    write w1;
    write *ptr = &w1;

    // Allocate memory for a temporary character buffer
    ptr->ch = (char *)malloc(100 * sizeof(char));  // Allocate memory for 100 characters

    if (ptr->ch == NULL)
    {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    printf("Enter text (type 'EOF' to stop): \n");

    while (1)
    {
        fgets(ptr->ch, 100, stdin);  // Read input from the user

        if (ptr->ch[0] == 'E' && ptr->ch[1] == 'O' && ptr->ch[2] == 'F')
            break;

        fprintf(file, "%s", ptr->ch);  // Write the input to the file
    }

    // Free the dynamically allocated memory
    free(ptr->ch);

    // Close the file
    fclose(file);
    return 0;
}
