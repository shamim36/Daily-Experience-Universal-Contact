#ifndef EDITXP_H_INCLUDED
#define EDITXP_H_INCLUDED

#include "struct.h"



void editxp()

{

    system("cls");

    FILE *fpte ;

 //   struct experienxe_key customer ;

    char time[30],choice,filename[50];

    int num,count=0;

    printf("\t*************************************************************\n");
    printf("\t**                                                         **\n");
    printf("\t**                    EDITTING Record                       **\n");
    printf("\t**                                                         **\n");
    printf("\t*************************************************************\n\n\n");



    do

    {

        printf("\n\tENTER THE DATE OF USERNAME & EXPERIENCE TO BE EDITED[username yyyy-mm-dd]:");

        fflush(stdin);

        gets(filename);

        printf("\n\tENTER TIME:[hh:mm]:");

        gets(time);

        fpte = fopen ( filename, "rb+" ) ;

        if ( fpte == NULL )

        {

            printf( "\nEXPERIENCE DOES NOT EXISTS:" ) ;

            printf("\n GOING BACK ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

            return;

        }

        while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

        {

            if(strcmp(customer.time,time)==0)

            {

                printf("\nYOUR OLD EXPERIENCE WAS AS:");

                printf("\nTIME: %s",customer.time);

                printf("\nMEETING WITH: %s",customer.name);

                printf("\nMEETING AT: %s",customer.place);

                printf("\nFEELING: %s",customer.feeling);

                printf("\nEXPERIENCE: %s",customer.experience);

                printf("\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..");

                printf("\n1.TIME.");

                printf("\n2.MEETING PERSON.");

                printf("\n3.MEETING PLACE.");

                printf("\n4.FEELING.");

                printf("\n5.experience.");

                printf("\n6.WHOLE EXPERIENCE.");

                printf("\n7.GO BACK TO MAIN MENU.");

                do

                {

                    printf("\n\tENTER YOUR CHOICE:");

                    fflush(stdin);

                    scanf("%d",&num);

                    fflush(stdin);

                    switch(num)

                    {

                        case 1:
                            printf("\nENTER THE NEW DATA:");

                            printf("\nNEW TIME:[hh:mm]:");

                            gets(customer.time);

                            break;

                        case 2:
                            printf("\nENTER THE NEW DATA:");

                            printf("\nNEW MEETING PERSON:");

                            gets(customer.name);

                            break;

                        case 3:
                            printf("\nENTER THE NEW DATA:");

                            printf("\nNEW MEETING PLACE:");

                            gets(customer.place);

                            break;

                        case 4:
                            printf("\nENTER THE NEW DATA:");

                            printf("\nFEELING:");

                            gets(customer.feeling);

                            break;

                        case 5:
                            printf("ENTER THE NEW DATA:");

                            printf("\nEXPERIENCE:");

                            gets(customer.experience);

                            break;

                        case 6:
                            printf("\nENTER THE NEW DATA:");

                            printf("\nNEW TIME:[hh:mm]:");

                            gets(customer.time);

                            printf("\nNEW MEETING PERSON:");

                            gets(customer.name);

                            printf("\nNEW MEETING PLACE:");

                            gets(customer.place);

                            printf("\nFEELING:");

                            gets(customer.feeling);

                            printf("\nEXPERIENCE:");

                            gets(customer.experience);

                            break;

                        case 7:
                            printf("\nGOING BACK ");

                            int i=0;
                            while(i<3){
                            printf("%c",178);
                            sleep(1);
                            i++;
                            }

                            return ;

                            break;

                        default:
                            printf("\nYOU TYPED SOMETHING ELSE...TRY AGAIN\n");

                            break;

                    }

                }while(num<1||num>8);



                fseek(fpte,-sizeof(customer),SEEK_CUR); //finding current position of the file pointer

                fwrite(&customer,sizeof(customer),1,fpte);

                fseek(fpte,-sizeof(customer),SEEK_CUR);

                fread(&customer,sizeof(customer),1,fpte);

                choice=5;

                break;

            }

        }

        if(choice==5)

        {

            system("cls");

            printf("\n\t\tEDITING COMPLETED...\n");

            printf("--------------------\n");

            printf("THE NEW EXPERIENCE DATA IS:\n");

            printf("--------------------\n");

            printf("\nTIME: %s",customer.time);

            printf("\nMEETING WITH: %s",customer.name);

            printf("\nMEETING AT: %s",customer.place);

            printf("\nFEELING: %s",customer.feeling);

            printf("\nEXPERIENCE: %s",customer.experience);

            fclose(fpte);

            printf("\n\n\tWOULD YOU LIKE TO EDIT ANOTHER EXPERIENCE.(Y/N)");

            scanf("%c",&choice);

            count++;

        }

        else

        {

            printf("\nTHE EXPERIENCE DOES NOT EXIST::\n");

            printf("\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)");

            scanf("%c",&choice);

        }

    }
    while(choice=='Y'||choice=='y');

    fclose ( fpte ) ;

    if(count==1)

        printf("\n%d FILE IS EDITED...\n",count);

    else if(count>1)

        printf("\n%d FILES ARE EDITED..\n",count);

    else

        printf("\nNO FILES EDITED...\n");

    printf("\t EXITING FROM EDITING MENU ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

}



#endif // EDITXP_H_INCLUDED
