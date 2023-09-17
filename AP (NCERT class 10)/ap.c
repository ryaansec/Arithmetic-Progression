#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int sumOfNTermsShort(int n, int a, int an) {
    return (n / 2 * (a + an));
}

int sumOfNTermsLong(int a, int n, int d) {
    return (n * (2 * a + (n - 1) * d)) / 2;
}

int main() {
    int a, d, n, tofind, an, suman;
    int operation;
    int longorshort;
    int term;

    const char *command1 = "figlet Arithmetic Progressions";
    int figletwelcome = system(command1);

    printf("", figletwelcome);


        starts:
        printf("\nWhat operation do you want to perform?\n1. To form an AP\n2. To find a\n3. To find an\n4. To find d\n5. To find n\n6. Sum of nth number of terms\n7. Help\n8. Exit\n");
        scanf("%d", &operation);

        switch (operation) {
            case 1:
    printf("\nEnter the first term of the arithmetic progression (a): ");
    scanf("%d", &a); //a

    printf("Enter the common difference(d): ");
    scanf("%d", &d); //d
    
    printf("Enter the number of terms(n): ");
    scanf("%d", &n); //n
    
    printf("The arithmetic progression is: \n");
    
    int term = a;
    for (float i = 0; i < n; i++) {
        printf("%d ", term);
        term += d;
    }
    
    printf("\n");

                break;

            case 2: 

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

                break;

            case 3:
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
                break;

            case 4:
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
                break;

            case 5: 
                printf("Finding n...\n");
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
                break;

            case 6: // Option 6: Sum of nth number of terms
                // Your code for calculating the sum goes here
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
                exit(0);
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
                
                exit(0);
            }
            

            

    // printf("The value of an is %d", suman);
    if (suman>0)
    {
        printf("The value of an is %d", suman);//positive an
      
        
       
        
    }
    else if (suman<0)
    {
        printf("\nThe value of an is %d", suman);//negative an

    }
     
                break;

            case 7: 
    printf("Hello world\n");
     for (int i = 0; i < 10; i++) {
        printf("\rLoading... %d%%", i * 10);
        fflush(stdout); // Flush the output to make sure it's immediately visible
        usleep(500000); // Sleep for 0.5 seconds
    }
    printf("\nLoading complete.\n");
    printf("This chapter is based on the context of NCERT textbook for class 10 (maths). Althought you can use this program to study and learn pattern in which the succeeding termsare obtained by adding a fixed number to preceding term except the first term. The fixed number is called the common difference of the AP.\n");
    printf("We usually denote the first term by a and the common difference by d.\n");
    printf("\nA few examples of AP are:- \n");
    printf("1, 2, 7, 10, ...... is an AP with the common difference 3\n-2, -4, -6, -8, ...... is an AP with common difference -2\n4, 4, 4,...... is an AP with common difference 0\n");
    printf("The general form of an AP:- \n");
    printf("a, a+d, a+2d, a+3d, ......\n");
    

    printf("\nFormule:- ");
    printf("\nTo get the Common Difference (d): a2 - a1 ");
    //printf("d = (an - a) / (n - 1);");

    printf("\nTo form an AP:-  a, a+d, a+2d, a+3d, ......");
    printf("\nTo get the first term (a):- an = a + (n-1) *d");
    //printf(" a = an - (n-1)*d;");
    printf("\nTo get the an:- an = a + (n-1) *d ");
    //printf(" an  = a + (n-1)*d;");
    printf("\nTo get the number of terms (n):- an = a + (n-1) *d");
    //printf(" n = (an - a) / d + 1;");
    printf("\nTo find the sum of nth number of terms:- \nSn = n/2 [2a + (n-1)*d]\nSn = n/2 [a + an]");
    //printf("")
    printf("\n\nFor more information check the official website of NCERT SOLUTIONS:- ....");

    usleep(24880230);
    goto starts;
    
                break;

            case 8: // Option 8: Exit
                //exitProgram = 1; // Set exit flag to exit the program
                break;
                exit(0);

            default: // Invalid input
                printf("Invalid Input\n");
                break;
               
                //exit(1);
        }
    }
