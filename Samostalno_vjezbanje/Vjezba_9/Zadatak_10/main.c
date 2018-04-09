#include <stdio.h>
#include <stdlib.h>


int Pronadji (const char *Str, char *trazi){
    int i=0, j, k, t;
    int pamti=-2;
    while (*(Str+i)!='\0'){
            k=i;
        if (*(Str+i)==*trazi){
            char* pom=trazi;
            j=i;
             char* pom2=pom;
            while (*(Str+k)==*pom2){
                k++;
                pom2++;
                if (*pom2=='\0'){
                pamti = j;
            }
            }

        }
        i++;
    }
    if (pamti!=-2){
        return pamti;
    }
    return -1;
}

int main()
{
    const char *n = "Danas je divan dan!";
printf ("%d\n", Pronadji(n, "divan")); //9
printf ("%d\n", Pronadji(n, "Divan")); //-1 (nema)
printf ("%d\n", Pronadji(n, "Danas")); //0
printf ("%d\n", Pronadji(n, "an")); //1
printf ("%d\n", Pronadji(n, "an!")); //16
printf ("%d\n", Pronadji("abc cde abc", "abc")); //0
    return 0;
}
