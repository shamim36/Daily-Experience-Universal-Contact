#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>

#include "addxp.h"
#include "viewxp.h"
#include "editxp.h"
#include "deletexp.h"
#include "menu_design.h"
#include "struct.h"



int main()

{

    int ch;

    menu_design();

    while(1)

    {

        system("cls");
        fflush(stdin);



        printf("\t*************************************************************\n");
        printf("\t**                                                         **\n");
        printf("\t**                      MAIN Menu                          **\n");
        printf("\t**                                                         **\n");
        printf("\t*************************************************************\n\n\n");

        printf("\n\n");

        printf("\n\n\t|\tADD Experience[1]  \t|");

        printf("\n\t|\tVIEW Experience[2]\t|");

        printf("\n\t|\tEDIT Experience[3]\t|");

        printf("\n\t|\tDELETE Experience[4]\t|");
        printf("\n\t|\tDaily Expenditure[5]\t|");

        printf("\n\t|\tEXIT\t[6]\t\t|");

        printf("\n\n\t|\tENTER YOUR CHOICE:");

        scanf("%d",&ch);

        switch(ch)

        {

            case 1:

               // system("cls");
                printf("\n\n\tLoading ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                addxp();



                break;

            case 2:

               // system("cls");
                printf("\n\n\tLoading ");
                 i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                viewxp();



                break;

            case 3:

                //system("cls");
                printf("\n\n\tLoading ");

                 i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                editxp();



                break;

            case 4:


                //system("cls");
                printf("\n\n\tLoading ");

                 i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                deletexp();



                break;

            case 5:

                break;



            case 6:

               // system("cls");
                printf("\n\n\tLoading ");

                 i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                system("cls");
                printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE ");

                i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                exit(0);



            default:

               // system("cls");
                printf("\n\n\tLoading ");

                i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                system("cls");
                printf("\nYOU ENTERED WRONG CHOICE ");



                i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

                break;

        }

        system("cls");

    }

    return 0;

}

