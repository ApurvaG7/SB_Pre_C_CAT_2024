// Bubble sort:
#include<stdio.h>
#define SIZE 6
#define SWAP(a,b){int t=a;a=b;b=t;}
void bubble_sort(int arr[SIZE]);
void display(int arr[SIZE]);
int main()
{
   // int arr[SIZE] = {30,20,60,50,10,40};
   int arr[SIZE] = {11,22,33,44,55,66};
    printf("\n Before Sort :\n");
    display(arr);
    printf("\n After Sort :\n");
    bubble_sort(arr);
    display(arr);
    return 0;
}

void bubble_sort(int arr[SIZE])
{
    int it,pos;
    int iterations = 0, comparisons = 0;
    int flag;
// Iterations
    for(it=0;it<SIZE-1;it++) // 0 1 2
    {
        iterations++;
        flag = 0;
        // comparisons
        for(pos=0;pos<SIZE-1-it;pos++) // 0 to 4 : 0 to 3 : 0 to 2
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                SWAP(arr[pos],arr[pos+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    printf("\n Iterations = %d  comparisons = %d\n",iterations,comparisons);
}

void display(int arr[SIZE])
{

    for(int index = 0;index<SIZE;index++)
    {
        printf("%4d",arr[index]);
    }
}