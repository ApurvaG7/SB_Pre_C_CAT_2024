#include<stdio.h>
#define SIZE 10
int Binary_S(int n, int arre[10]);
void main()
{
    int aree[SIZE] = {11,22,33,44,55,66,77,88,99,100};
    // tell me a num and i shall see in my pouch
    int num;
    printf("\nSo Boi What's it you'r looking for....  ");
    scanf("%d",&num);

    int index;
    index = Binary_S(num,aree);
    // here we are passing the number and base address of array to the Function

    if(index == -1)
    {
        printf("\n Ahh Ohh, Looks like i cant find it anywhere in my pouch");
        printf("\n Maybe i forgot to keep it today");
        printf("\n Is there anything else you want??");
    }
    else
    {
        printf("\n Ahh Haa, Here it is Take it and Keep it Safe...");
        printf("\n No one should know about its location ");
        printf("\n I'm guarding its screct with you, it's at Location %d.",index+1);
    }
}

int Binary_S(int n, int arre[SIZE])
{
    // calculate //     left_end        middle         right_end
    int left = 0, mid , right = SIZE-1;

    // we need to run the loop untill we traverse the whole array elements
    // but we also need to stop somewhere
    // we will stop when the left_end and right_end cross each other
    // and we still haven't found the element then we can say that the number is not present
    // and we will exit the loop
    
    while(left <= right)
    {
        mid = (left+right)/2;
        // mid is simple 
        // left (0) + right (9)  /  2
        // 0+9/2    ==  4
        // since the array elements are only stored in integer values we will not consider the values after .

        // now check if the element is present on mid or not
        if(n == arre[mid])
        {
            return mid;
            // number is found and the middle so we return the position of mid
            // and the Binary_S() is terminated
        }   
        // if number is not found at the middle we will check if the number is greater than or less than the number present at mid
        else
        if(n < arre[mid])
        {   // if the number is less than mid
            // then the number must be present in the left side of the mid
            // so we will update the right position of the subarray 
            // to == mid - 1 position 
            // bcoz the number is not present at mid earlier so we take -1 to goto 1 previous number of the array
            right = mid - 1;
        }
        else
        {   // if the number is more than mid
            // then the number must be present in the right side of the mid
            // so we will update the left position of the subarray
            // to == mid + 1 position
            // bcoz the number is not present at mid earlier so we take +1 to goto 1 forward number of the array
            left = mid + 1;
        }
    }// here is the end of while loop it will continue till it exits the condition
    
    return -1;
    // here we will reeturn -1 to check for the false condition
    // when the number is not found
}