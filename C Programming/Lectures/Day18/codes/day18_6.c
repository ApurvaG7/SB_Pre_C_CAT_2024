// file handling : write mode : fprintf

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("sunbeam.txt","w");
    char f_name[20],l_name[20];
    int salary;
    printf("Enter the first name last name and salary :");
    scanf("%s%s%d",&f_name,&l_name,&salary);

    //printf("%s  %s  %d",f_name,l_name,salary);
    fprintf(fptr,"%s  %s  %d",f_name,l_name,salary);

    fclose(fptr);
    return 0;
}