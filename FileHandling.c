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

void write_example_strings_to_file()
{
    FILE *fptr;
    fptr = fopen("write_example_strings_to_file.txt", 'w');

    char exampleString[50];

    // '\0' = NULL character
    memset(exampleString, '\0', 50);
    strcpy(exampleString, "Even though the character buffer has length 50,\n");
    fputs(exampleString, fptr);

    printf("Example string : %s\n", exampleString);
    printf("Example string length: %d\n", strlen(exampleString));

    memset(exampleString, '\0', 50);
    strcpy(exampleString, "no extra lines or characters are being written to the file.");
    fputs(exampleString, fptr);

    printf("Example string : %s\n", exampleString);
    printf("Example string length: %d\n", strlen(exampleString));

    fclose(fptr);
}