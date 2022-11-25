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
#include "registration_login.h"
#include "contact.h"



int main()

{

    menu_design();
    system("cls");


    Cool ();
    system("cls");
    fflush(stdin);


    int ch;



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

        printf("\n\n\t[1]|\tADD Experience  \t");

        printf("\n\t[2]|\tVIEW Experience\t");

        printf("\n\t[3]|\tEDIT Experience\t");

        printf("\n\t[4]|\tDELETE Experience\t");
        printf("\n\t[5]|\tCONTACT\t");


        printf("\n\t[6]|\tEXIT\t\t\t");

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
                    contact();


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

