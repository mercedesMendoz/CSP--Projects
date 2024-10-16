#include <stdio.h>

char sibs[4][20] = {"Julio", "Julie", "Mathias", "Ezra",};
int i;
int main (){
    for(i=0;i<3;i++)
    printf("%s Welcome!\n", sibs[i]);
    return 0;
}