#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrom(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        // Пропускаем пробелы и прочие неалфавитные символы
        while (left < right && !isalnum(str[left]))
            left++;
        while (left < right && !isalnum(str[right]))
            right--;

        if (tolower(str[left]) != tolower(str[right]))
            return 0;

        left++;
        right--;
    }

    return 1;
}


int main(void)
{
    FILE *input, *output;
    char str[1000] = {0};

    int strLen;

    input = fopen("input.txt", "r");

    if(input != NULL)
    {
        fgets(str, sizeof(str), input);
        fclose(input);

        strLen = strlen(str);

        if (strLen > 0 && str[strLen - 1] == '\n') {
            str[strLen - 1] = '\0';
            strLen--;
        }

        int result = is_palindrom(str);

        output = fopen("output.txt", "w");
        if (output != NULL)
        {
            if (result)
                fprintf(output, "YES");
            else
                fprintf(output, "NO");

            fclose(output);
        }
    }
    return 0;

}
