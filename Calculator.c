#include<stdio.h>
#include<stdlib.h>
#include"functions.h"

int main()
{
   A:
       printf("\n 1: Arithmatic Operation \n");
       printf(" 2: Calculate Square or Cube \n");
       printf(" 3: Calculate Power \n");
       printf(" 4: Calculate Mod(%) \n");
       printf(" 5: Convert to INT \n");
       printf(" 6: Find Inverse(1/x) \n");
       printf(" 7: Find 10^x \n");
       printf(" 8: Change Sign of a number \n");
       printf(" 9: Calculate Factorial \n");
       printf("10: Calculate EXP \n");
       printf("11: Calculate Percentage \n");
       printf("12: Exit \n");
       printf("Enter your Choice: ");
       int input;
       scanf("%d",&input);
       if(input==1)
       {
           system("cls");
           B:
                printf("\n1 : Addition \n");
                printf("2 : Subtraction \n");
                printf("3 : Multiplication \n");
                printf("4 : Division \n");
                printf("5 : Main Menu \n");
                printf("Enter your Choice: ");
                int choice;
                scanf("%d",&choice);
                if(choice==1)
                {
                    system("cls");
                    Add();
                }
                else if(choice==2)
                {
                    system("cls");
                    Subtract();
                }
                else if(choice==3)
                {
                    system("cls");
                    Multiplication();
                }
                else if(choice==4)
                {
                    system("cls");
                    Division();
                }
                else if(choice==5)
                {
                    system("cls");
                    goto A;
                }

                goto B;
        }
        else if(input==2)
        {
            system("cls");
            C:
                printf("\n1 : Calculate Square \n");
                printf("2 : Calculate Cube \n");
                printf("3 : Main Menu \n");
                printf("Enter your Choice: ");
                int choice;
                scanf("%d",&choice);
                if(choice==1)
                {
                    system("cls");
                    Square();
                }
                else if(choice==2)
                {
                    system("cls");
                    Cube();
                }
                else if(choice==3)
                {
                    system("cls");
                    goto A;
                }

                goto C;
        }
        else if(input==3)
        {
            system("cls");
            Power();
            goto A;
        }
        else if(input==4)
        {
            system("cls");
            Mod();
            goto A;
        }
        else if(input==5)
        {
            system("cls");
            COnvertToInt();
            goto A;
        }
        else if(input==6)
        {
            system("cls");
            Inverse();
            goto A;
        }
        else if(input==7)
        {
            system("cls");
            Func();
            goto A;
        }
        else if(input==8)
        {
            system("cls");
            Sign_Change();
            goto A;
        }
        else if(input==9)
        {
            system("cls");
            factorial();
            goto A;
        }
        else if(input==10)
        {
            system("cls");
            EXP();
            goto A;
        }
        else if(input==11)
        {
            system("cls");
            Percent();
            goto A;
        }
        else if(input==12)
        {
            system("taskkill/IM cb_console_runner.exe");
        }
}

