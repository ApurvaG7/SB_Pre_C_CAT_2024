// Selection Sort
#include<stdio.h>
#define SIZE 6
#define Swoop(a,b) {int ta=a;a=b;b=ta;}     // Swap() to swap the variables
void Sel_Sort(int Arre[SIZE]);              // selection sort function
void Bta(int aree[SIZE]);                   // () to print the array

void main()
{
    int Aree[SIZE] = {33,22,66,55,11,44};   // predefined array but we can also take the array from the user
    printf("\nPahle bhi mai......Tumse mila hu");
    printf("\nPehli dada hi milke laga......\n");
    Bta(Aree);
    printf("\nTune chhua Array ko mere...");
    printf("\nUnsorted array.... sort hone laga......\n");
    Sel_Sort(Aree);
    Bta(Aree);

}

void Sel_Sort(int Arre[SIZE])   // for Selection sort we just need to pass the base address of the array to the sorting()
{
    int front,pos;
    int it=0,cp=0;  // it == iterations     cp == comparisions

    for( front=0 ; front<SIZE-1 ; front++)
    {   
        it++;   
        for( pos = front+1 ; pos<SIZE ; pos++)
        {   
            cp++;
            if(Arre[front] > Arre[pos])
            {
                Swoop(Arre[front],Arre[pos]);
            }
        }
    }
}

void Bta(int aree[SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("\t%d",aree[i]);
    }
}

/*
    in this algo the first position gets selected and it is compared with the element next to it.
    if the selected postiton element is found greater than the next element 
    then the swapping takes place between them
    this is the logic behind selection sort

    in the first iteration the smallest element gets settled at the first position

    after that the front is increased by 1 and the loop runs again and now the second element and the next element gets compared
    it goes on till the end of the array untill all the elements gets sorted either in Ascending or Descending Order.

    
Iteration-1     // here the smallest element gets settled at the first position and the front is increased by 1 to goto next element 
(30) (20) 60 50 10 40

(20) 30 (60) 50 10 40

(20) 30 60 (50) 10 40

(20) 30 60 50 (10) 40

(10) 30 60 50 20 (40)

10 30 60 50 20 40
*



Iteration-2
10 (30) (60) 50 20 40

10 (30) 60 (50) 20 40

10 (30) 60 50 (20) 40

10 (20) 60 50 30 (40)

10 20 60 50 30 40
*  *



Iteration-3
10 20 (60) (50) 30 40

10 20 (50) 60 (30) 40

10 20 (30) 60 50 (40)

10 20 30 60 50 40
*  *  *



Iteration-4
10 20 30 (60) (50) 40

10 20 30 (50) 60 (40)

10 20 30 40 60 50
*  *  *  *



Iteration-5         // number is iterations are always [SIZE-1]
10 20 30 40 (60) (50)

10 20 30 40 50 60
*  *  *  *  *


*/