#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    char *strptr = str;
    int vocale = 0;
    int consoane = 0;


    printf("Introduceti un sir de maximum %d caractere: ", MAX_SIZE);
    fgets(str, MAX_SIZE, stdin);

    while(*strptr != '\0')
    {
        if(!(*strptr>='a' && *strptr<='z') || (*strptr>='A' && *strptr<='Z')|| (*strptr>='0' && *strptr<='9'))
        {
                *strptr='_';
        }
    strptr++;
    }

    printf("%s\n", str);
    return 0;
}




