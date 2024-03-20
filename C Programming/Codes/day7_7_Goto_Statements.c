// jump statements :    goto
// goto jumps to the label which is user defined

#include<stdio.h>
void main()
{
    int r;
    START:
    printf("\nEnter your Rank : ");
    scanf("%d",&r);

    if(r >= 1 && r <= 400)
    {
        goto END;
    }
    else{
        goto START;
    }
    END:    
        printf("\nBss Ho Gyi Tasalli");

        //here GOTO is used to send the cursor to a specific location denoting the next word
        // we can use any word we want and any given point 
        // its not mostly used but its good to keep in info
        

}