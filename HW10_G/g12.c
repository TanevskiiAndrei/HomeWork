#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

int main(void)
{
    FILE *inputFile, *outputFile;
    char line[MAX_LINE_LENGTH];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
     {
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
     {
        fclose(inputFile);
        return 1;
    }

    // Read the entire line from the input file
    if (fgets(line, sizeof(line), inputFile) != NULL) {
        char *token = strtok(line, " ");

        // Process each word in the line
        while (token != NULL) {
            fprintf(outputFile, "%s\n", token);
            token = strtok(NULL, " ");
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
