    // unary operator with logical operator
    // ++   --              &&  ||  !
    #include<stdio.h>
    void main()
    {
        int n1 = 10, n2 = 20;
        int result = n1++ || ++n2;
        printf("\n n1 = %d || n2 = %d  result = %d",n1,n2,result);
        //n1 = 11   n2 = 20     result = 1(true)

        n1=0,n2=20;
        result = n1++ || ++n2;
        printf("\n n1 = %d || n2 = %d  result = %d",n1,n2,result);
        //result = 0++ ||
        // result = false || ++20(21)
        //n1 = 1   n2 = 21     result = 1(true)


        n1=0,n2=20;
        result = n1++ && ++n2;
        printf("\n n1 = %d && n2 = %d  result = %d",n1,n2,result);
        //result = 0++ &&
        // result = false && (not executed)
        //n1 = 1   n2 = 20     result = 0


        n1=20,n2=10;
        int n3=15;
        result = n1++ || ++n2  && n3;
        printf("\n n1 = %d || n2 = %d && n3=%d  result = %d",n1,n2,n3,result);


        
        // result = num1++ || ++num2 && num3++;
        // result = (num1++) || (++num2 && num3++);
        // result = (expression 1)  || (expression 2) -----> as && has higher precedence
        // result = true  ||  (not executed)
        // result = 1(true)
        // num1 = 21
        // num2 = 10
        // num3 = 15




    }