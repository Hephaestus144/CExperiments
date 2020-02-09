/*
 * FileHandling - Examples of various methods to manipulate files in C.
 *
 * Style Conventions
 * -----------------
 * Function names : Lower case with underscores '_',
 * Variable names : Lower case without underscores '_',
 *
 */

#include <string.h>

#include "Utilities/Colours.h"
#include "FileHandling.h"

/*
 * fputs is better than fwrite
 * Use 'memset' rather than
 */
void write_example_strings_to_file()
{
    printf("\nWriting to file\n");
    printf("===============\n\n");
    FILE *fptr;
    fptr = fopen("write_example_strings_to_file.txt", "w+");

    char exampleString[100];

    // '\0' = NULL character
    memset(exampleString, '\0', 100);
    strcpy(exampleString, "Even though the character buffer has length 100,\n");
    fputs(exampleString, fptr);

    printf("Example string : %s\n", exampleString);
    printf("Example string length: %d\n", strlen(exampleString));

    memset(exampleString, '\0', 100);
    strcpy(exampleString, "no extra lines or characters are being written to the file.");
    fputs(exampleString, fptr);

    printf("Example string : %s\n", exampleString);
    printf("Example string length: %d\n", strlen(exampleString));

    fclose(fptr);
}

void read_strings_from_file()
{
    printf("\nReading from file\n");
    printf("=================\n\n");

    FILE *fptr;
    fptr = fopen("write_example_strings_to_file.txt", "r+");

    char fileString[100];
    memset(fileString, '\0', 100);

    fgets(fileString, 100, fptr);

    printf("String read from file : %s\n", fileString);
    printf("String read from file length : %d\n", strlen(fileString));

    fclose(fptr);
}