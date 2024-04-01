//valid syntax for structure
// anonymous structure and typedef

struct
{
    int emp_id;
    char name[20];
    float marks;
}emp; 
// emp is the variable of anonymous structure

typedef struct student
{
    int roll_no;
    char name[20];
    float marks;
}student; 
// student is another name for struct student

typedef struct
{
    int dd;
    int mm;
    int yy;
}date;
// date is a name of anonymous structure

struct vehicle
{
    char name[20];
    char colour[20];
    int vehicle_no;
};

int main()
{
    typedef struct vehicle vehicle1;
    // vehicle1 is another name for struct vehicle

    vehicle1 v1; // v1 is a variable of vehicle structure


}