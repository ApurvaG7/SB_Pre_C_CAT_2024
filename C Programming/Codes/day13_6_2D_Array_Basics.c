// 2-D Array 
// Initialization and Printing

#include<stdio.h>
void main()
{
    int arre[3][3] = {11,12,13,14,15,16,17,18,19};
    // int arre[row][col]
    /*     [0] [1] [2]
      [0]  11  12  13
      [1]  14  15  16
      [2]  17  18  19
        */
       // first row then col
    int arre1[3][2] = {1,2,3,4};    // partial initialization
    // here the compiler will fill by col and then switch to row
    // the matrix will be
    /*
        1   2
        3   4
        0   0
                // rest of the elements are filled with 0
    */
    int arre2[3][2] = {{10,20},{30,40},{50,60}};
    // this is another way to write initialize the array
    // the inner{} are for row
    // means the first {} inside {} will be just for the first row
    // second {} will be for the second row
    // if there are 5 spaces in a row and only 3 elements are given then the rest of the elements are considered 0
    int arre3[3][3] = {{1},{2,3},{3,4,5}};

    //we cannot declare any 2D array without the column
    // arree[][];
    // but we can define it with only column section
    int arre4[][3] = {11,22,33,44,55,66,77,88,99};
    // here we have specified that there should be 3 col in the matrix 
    // so the compiler will start filling its value will the col is 3 then goto next row
    /*  the matrix will be
        11  22  33
        44  55  66
        77  88  99
    */
   // int arree[3][];
   // we cannot define such array bcoz a col is compulsory to make the matrix

   printf("\nPrinting Array Elements\n");
   // first traverse row then traverse col
   printf("\nArre[1][2] = %d",arre[1][2]);  //  16
   printf("\nArre[2][1] = %d",arre[2][1]);  //  18

   printf("\nPrinting the Whole Matrix\n");
   for(int i=0;i<3;i++)// traversing row
   {
    for (int j=0;j<3;j++)// traversing col
    {
        printf("\t%d",arre[i][j]);
    }
    printf("\n");
   }



}