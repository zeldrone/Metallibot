#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* csv_file;
   if(csv_file=fopen("Back_in_Black.csv", "r"));
   {
       fclose(csv_file);

   }
   else printf("echec de l'ouverture!\n");


    return 0;
}
