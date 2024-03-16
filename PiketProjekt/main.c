#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*****This is Our Point's Calculator Program****\n");
    printf("===============================================\n");

    printf("Ju Lutem zgjidhni piket tuaja nga 0-100.\n");
    int piket;
    scanf("%d", &piket);

    char llogaritNoten(){

    if(piket<0 || piket >100)  {

     printf("Piket jane gabim.");
          return 1;
    }
    else{

         switch( piket){

          case 10:
               return 'A';
                    break;
          case 9:
               return 'A';
                    break;
          case 8:
              return 'B';
                    break;
          case 7:
               return 'C';
                    break;
          case 6:
               return 'D';
                    break;
          case 5:
               return 'E';
                    break;
          default:
               return 'F';
         }
    }
     char nota = llogaritNoten;
     printf("Nota juaj eshte: " , nota);

    }
    return 0;
}
