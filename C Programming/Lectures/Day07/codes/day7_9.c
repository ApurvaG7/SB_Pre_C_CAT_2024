// jump statements : goto
// goto jumps to the label
#include<stdio.h>

int main()
{

    int rank;
    
START:
    printf("Enter Your Rank :");
    scanf("%d",&rank);

    if(rank >= 1 && rank <= 400)
    {
        goto END;
    }
    else
        goto START;

    END:
        printf("Congrats !");

    return 0;
}