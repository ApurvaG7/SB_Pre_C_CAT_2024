// Linear Search
#include<stdio.h>
#define SIZE 9
int linear_search(int key,int arr[SIZE]);
int comparisons;
int main()
{
    int arr[SIZE] = {33,55,88,77,44,11,66,22,99};
    int key;
    //1. get the key from the user
    printf("Enter the Key to Search :");
    scanf("%d",&key);

   int index = linear_search(key,arr);
   if(index == -1)
        printf("Key Not Found !\n");
    else
        printf("Key is Found at index %d\n",index);
      
        printf("Comparisons = %d\n",comparisons);
    return 0;
}

int linear_search(int key,int arr[SIZE])
{
    // 2. Start the traversal from 0th index
    for(int i =0;i<SIZE;i++)
    {
        //3. compare the key with each element
        comparisons++; // 1 2 3
        if(key == arr[i]) // 88 == 33
        {
            //a.if key is found, return the index
            return i;
        }
        //b. else continue the search till the last element
    }
    return -1;
}