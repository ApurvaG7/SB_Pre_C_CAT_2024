// printing data using array and pointer notation
// &arr

#include<stdio.h>

int main()
{
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};

    /*
        11  22  33
        44  55  66
        77  88  99
    
    */
   printf("arr[2][0] = %d\n",arr[2][0]); // 77
   printf("arr[2][0] = %d\n",*(*(arr+2)+0)); // 77
   printf("arr[2][0] = %d\n",**(arr+2)); // 77
   printf("arr[2][0] = %d\n",*arr[2]); // 77

   printf("arr = %u\n",arr);
   printf("&arr = %u\n",&arr);
   printf("arr+1 = %u\n",arr+1);
   printf("&arr+1 = %u\n",&arr+1);
    return 0;
}