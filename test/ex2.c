#include <stdlib.h>
#include <stdio.h>

void main()
{
    FILE * f = fopen("nombre.txt","r");
    FILE * m = fopen("mot.txt","r");
    FILE * r = fopen("resultat.txt","w");

    int nb , i;
    char mot[30];

    if(!f)
    {
        printf("error lorsque d'overture de la fichier.");
    }

    while (!feof(f))
    {
        i = 0;
        fscanf(f,"%d",&nb);
        while (!feof(m) && i<nb)
        {
            fscanf(m,"%s",mot);
            fprintf(r,"%s ",mot);
            i++;
        }

        fprintf(r,"%s","\n");    
    }

    fclose(f);
    fclose(m);
    fclose(r);

}