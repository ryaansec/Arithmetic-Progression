
#include <stdio.h>
#include<stdlib.h>

int sumOfNTermsShort(int n, int a, int an){
    return (n/2 * (a + an));
}

int sumOfNTermsLong(int a, int n, int d){
    return (n * (2 * a + (n - 1) * d)) / 2;
}
int main() {
    int a, d, tofind, an, suman;
    char n;
    int operation;
    int longorshort;

    //GIVEN
    printf("What operation do you want to perform?\n1.To form an AP\n2.To find a\n3.To find an\n4.To find d\n5.To find n\n6.Sum of nth number of terms\n ");
    scanf("%d", &operation);

if (operation==1)
    {
    printf("\nEnter the first term of the arithmetic progression (a): ");
    scanf("%d", &a); //a

    printf("Enter the common difference(d): ");
    scanf("%d", &d); //d
    
    printf("Enter the number of terms(n): ");
    scanf("%c", &n); //n
    
    printf("The arithmetic progression is: ");
    
    int term = a;
    for (float i = 0; i < n; i++) {
        printf("%d ", term);
        term += d;
    }
    
    printf("\n");
    
}

else if (operation==2)
{
    printf("Finding a ...\n");//a
    printf("Given, \n");
    printf("an: ");
    scanf("%d", &an);
    printf("d: ");
    scanf("%d", &d);
    printf("n: ");
    scanf("%c", &n);
//using formula an = a+ {(n-1)d}
   a = an - (n-1)*d;
   printf ("The Output is %d", a);
}

else if (operation==3)
{
    printf("Finding an...\n");
    printf("Given,\n");
    printf("a: ");
    scanf("%d", &a);
    printf("d: ");
    scanf("%d", &d);
    printf("n: ");
    scanf("%c", &n);
    an  = a + (n-1)*d;
    printf("Value of an is %d", an);

}

else if (operation==4)
{
    printf("Finding d...\n");
    printf("Given,\n");
    printf("a: ");
    scanf("%d", &a);
    printf("an: ");
    scanf("%d", &an);
    printf("n: ");
    scanf("%c", &n);
    d = (an - a) / (n - 1);
    printf("Value of d is %d", d);
}

else if (operation==5)
{
    printf("Finding d...\n");
    printf("Given,\n");
    printf("a: ");
    scanf("%d", &a);
    printf("an: ");
    scanf("%d", &an);
    printf("d: ");
    scanf("%d", &d);
    //n = an-a / d;
    n = (an - a) / d + 1;
    printf("Value of n is %d", n);   

}

else if (operation==6)
{
    /*printf("Enter the first term (a): ");
            scanf("%d", &a);*/
            

            printf("Choose any one from them\n1.an\n2.d\n:");
            scanf ("%d", &longorshort);
            if (longorshort==1)
            {
                printf("Enter the value of an: ");
                scanf("%d", &an);
                //shorter when AN is PRESENT
                printf("The value of n: \n");
                scanf("%d", &n);
                printf("The value of a: \n");
                scanf("%d", &a);
                printf("The value of an: \n");
                scanf("%d", &an);

                printf("The sum of the first %d terms of the arithematic progression is: %d\n", an, sumOfNTermsShort (n, a, an));
                exit(1);
            }
            else if (longorshort==2)
            {
                printf("Enter the common difference (d): "); //using d = long formula
                scanf("%d", &d);
                //longer one when D is PRESENT (LONG)
                printf("The value of a: ");
                scanf("%d", &a);
                printf("The value of n: ");
                scanf("%d", &n);
                printf("The value of d: ");
                scanf("%d", &d);

                printf("The sum of first %d terms od the arithematic progression is: %d\n", an, sumOfNTermsLong(a, n, d));
                
                exit(1);
            }
            

            

    // printf("The value of an is %d", suman);
    if (suman>0)
    {
        printf("The value of an is %d", suman);//positive an
        //printf("The sum of %d is %d\n", sumOfNTermsShort(a, d, n, an) );
        
       
        
    }
    else if (suman<0)
    {
        printf("\nThe value of an is %d", suman);//negative an

    }
    
}


else {
    printf("Invalid Input\n");
    exit(1);
}




    
    return 0;
}