#include <stdio.h>
#include <string.h>
#include <ctype.h>




int main(void)
{
    FILE *input, *output;
    char str[10000] = {0};

    int low =0;
    int hiht = 0;

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


        output = fopen("output.txt", "w");
        if (output != NULL)
        {
            for (int i = 0; i < strLen; i++)
            {
                if (str[i] >= 'a' && str[i] <='z' )
                {
                    low++;
                }
                if (str[i] >= 'A' && str[i] <='Z' )
                {
                    hiht++;
                }
            }
            fprintf (output, "%d %d", low, hiht);
        }
    }
    return 0;

}
