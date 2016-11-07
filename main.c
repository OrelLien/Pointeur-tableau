#include <stdio.h>
#include <stdlib.h>

int main()
{  int vie=0;
   int degats=0;
   int vie_restante=0;

   printf(" entrez votre jauge de vie:\n");
   scanf("%d", &vie);
   printf(" entrez le nombre de degats:\n");
   scanf("%d", &degats);

   vie_restante=vie-degats;

   int *pointeurVie=&vie;
   int *pointeurDegats=&degats;
   int *pointeurVie_restante=&vie_restante;

printf("il vous %d de vie", *pointeurVie_restante);




}
