#include <stdio.h>
#include <stdlib.h>

int Pronadji (const char *Str, const char *trazi){
    int i=0, j, k, t;
    while (*(Str+i)!='\0'){
        if (*(Str+i)==*trazi){
            char* pom=trazi;
            j=i;
             k=i;
             t=0;
            while (*(Str+k)==*(pom+t)){
                k++;
                t++;
            }
            if (*(pom+t)=='\0' && *(Str+k)=='\0'){
                return j;
            }
            if (*(pom+t)=='\0'){
                return j;
            }
        }
        i++;
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
