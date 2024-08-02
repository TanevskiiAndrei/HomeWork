#include <stdio.h>
#include <string.h>

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

        if (strLen > 0)
        {
            output = fopen("output.txt", "w");
            if (output != NULL)
            {
                for (int i = 0; i < strLen; i++)
                {
                    if(str[i] == 'a')
                        str[i] = 'b';
                    else if(str[i] == 'b')
                        str[i] = 'a';
                    else if(str[i] == 'A')
                        str[i] = 'B';
                    else if(str[i] == 'B')
                        str[i] = 'A';
                }
                fprintf(output, "%s", str);
                fclose(output);
            }
        }
    }
    return 0;

}
