#include <stdio.h>
#include <stdlib.h>

int main(){
    int score;
    scanf("%d",&score);
    switch ((int)(score/10))
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("E");
        break;
    }
    return 0;
}