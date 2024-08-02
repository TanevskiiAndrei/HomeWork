#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *f;
    char str[255] = {0};
    f = fopen("input.txt", "r");
    if(f != NULL)
    {
        fgets(str, sizeof(str), f);
        fclose(f);

        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        f = fopen("output.txt", "w");
        if(f != NULL)
        {
            fprintf(f, "%s, %s, %s ", str, str, str);
            fprintf(f, "%llu", strlen(str));
            fclose(f);
        }


    }
    return 0;

}
