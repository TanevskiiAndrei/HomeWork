#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *f, *o;
    char str[1000] = {0};
    char lastChar;
    int strLen;

    f = fopen("input.txt", "r");

    if(f != NULL)
    {
        fgets(str, sizeof(str), f);
        fclose(f);

        strLen = strlen(str);

        if (strLen > 0 && str[strLen - 1] == '\n') {
            str[strLen - 1] = '\0';
            strLen--;
        }

        if (strLen > 0)
        {
            lastChar = str[strLen - 1];

            // Открываем файл output.txt для записи
            o = fopen("output.txt", "w");
            if (o != NULL)
            {
                // Печатаем номера символов, совпадающих с последним символом строки
                for (int i = 0; i < strLen -1; i++)
                {
                    if(lastChar == str[i])
                    {
                        fprintf(o, "%d ", i);
                    }
                }
                fclose(o);
            }
        }
    }
    return 0;

}
