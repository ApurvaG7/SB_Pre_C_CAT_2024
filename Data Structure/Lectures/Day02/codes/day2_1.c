#include<stdio.h>
#define SIZE 9
int binary_search(int key,int arr[SIZE]);
int comparisons;
int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99};
    // step 1: get the key from the user
    int key;
    printf("Enter the key to search :");
    scanf("%d",&key); 

    int index = binary_search(key,arr);
    if(index == -1)
        printf("Key not found !");
    else
        printf("Key found at index %d\n",index);
        printf("comparisons = %d\n",comparisons);
    return 0;
}

int binary_search(int key,int arr[SIZE])
{
    // step 2 : calculate left, right mid
    int left = 0,right = SIZE-1,mid;

while(left <= right)
{
    mid = (left+right)/2; 
    // step 3: compare the key with mid element
    comparisons++;
    if(key == arr[mid]) 
        return mid; 
    // if, not matching, go to step 4

    // step 4: check if key is smaller
    if(key < arr[mid]) // consider left subarray
    {                    
        right = mid-1; 
    }
    else // if key is greater, consider right sub array
    {
        left = mid + 1; 
    }
}
return -1; // false -> key not found
}