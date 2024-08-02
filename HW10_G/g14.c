#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main(void)
{
    FILE *inputFile, *outputFile;
    char line[MAX_LINE_LENGTH];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Failed to open input file");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Failed to open output file");
        fclose(inputFile);
        return 1;
    }

    // Read the entire line from the input file
    if (fgets(line, sizeof(line), inputFile) != NULL) {
        char *surname = strtok(line, " ");
        char *name = strtok(NULL, " ");
        //char *patronymic = strtok(NULL, " ");

        // Ensure that we have all parts (surname, name, patronymic)
        if (surname != NULL && name != NULL) {
            fprintf(outputFile, "Hello, " "%s %s!\n", name, surname );
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
