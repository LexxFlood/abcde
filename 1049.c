#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[20], palavra2[20], palavra3[20];
    scanf("%s %s %s", &palavra1, &palavra2, &palavra3);

    if(strcmp(palavra1, "vertebrado") == 0)
        if(strcmp(palavra2, "ave") == 0)
            if(strcmp(palavra3, "carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        else if(strcmp(palavra3, "onivoro") == 0)
            printf("humano\n");
        else
            printf("vaca\n");
    else if(strcmp(palavra1, "invertebrado") == 0)
        if(strcmp(palavra2, "iseto") == 0)
            if(strcmp(palavra3, "hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        else if(strcmp(palavra3, "onivoro") == 0)
            printf("sanguessuga\n");
        else
            printf("minhoca\n");

    return 0;
}
