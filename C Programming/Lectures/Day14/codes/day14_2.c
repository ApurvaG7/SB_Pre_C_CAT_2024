// pointer notation in 2-D arrays

#include<stdio.h>

int main()
{
  int arr[3][3] = {11,22,33,44,55,66,77,88,99};
    
      /*
        11  22  33
        44  55  66
        77  88  99   
    */
    

    printf("arr[1][2] = %d\n",arr[1][2]); // 66
    printf("arr[1][2] in pointer notation = %d\n",*(*(arr+1)+2)); // 66

    for(int i =0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
           // printf("%4d",arr[i][j]);
            printf("%4d",*(*(arr+i)+j));
        }
        printf("\n");
    }
    

    return 0;
}

/*
arr[2][1]
*(*(arr+2)+1)

(arr+2) --> 100+2*sacle factor of row 
            100+2*12
            100+24
            124
            outer 124

*(arr+2) --> inner 124

*(arr+2)+1 --> inner 124 + 1*scale factor of column
                124 + 1* 4
                124 + 4
                128

*(*(arr+2)+1) --> *(128)
                88

*(*(arr+2)+1) --> 88


*/