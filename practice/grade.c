#include <stdio.h>  // Include the standard input/output header file.
#include <ctype.h>  // Include the header file for character handling functions.
#include <string.h>  // Include the header file for string handling functions.

int main()  // Use 'int main()' to return an integer value.
{
    char notes[50];  // Declare a character array to store notes (increased size to 20).
    char grd;  // Declare a character variable to store the grade.

    printf("Input the grade :");  // Prompt user for input of grade.
    scanf(" %c", &grd);  // Read and store the grade (with a space before %c to handle newline issue).

    grd = toupper(grd);  // Convert the grade to uppercase using 'toupper' function.

    switch(grd)  // Start a switch statement based on the grade.
    {
        case 'E':
            strcpy(notes, "Excellent");  // Copy corresponding note for grade 'E'.
            break;
        case 'V':
            strcpy(notes, "Very Good");  // Copy corresponding note for grade 'V'.
            break;
        case 'G':
            strcpy(notes, "Good");  // Copy corresponding note for grade 'G'.
            break;
        case 'A':
            strcpy(notes, "Average");  // Copy corresponding note for grade 'A'.
            break;
        case 'F':
            strcpy(notes, "Fails");  // Copy corresponding note for grade 'F'.
            break;
        default :
            strcpy(notes, "Invalid Grade Found.");  // Copy message for invalid grade.
            break;
    }
    printf("You have chosen : %s\n", notes);  // Print the chosen note.

    return 0;  // Return 0 to indicate successful execution.
}
