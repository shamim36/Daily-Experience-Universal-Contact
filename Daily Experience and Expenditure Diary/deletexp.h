#ifndef DELETEXP_H_INCLUDED
#define DELETEXP_H_INCLUDED
#include "struct.h"

void deletexp( )

{

    system("cls");

    FILE *fp,*fptr ;

   // struct experienxe_key customer ;

    char filename[50],another = 'Y' ,time[30];;

    int choice,check;

    printf("\t*************************************************************\n");
    printf("\t**                                                         **\n");
    printf("\t**                   DELETE Experience                     **\n");
    printf("\t**                                                         **\n");
    printf("\t*************************************************************\n\n\n");



    while ( another == 'Y' )

    {

        printf("\n\n\tHOW WOULD YOU LIKE TO DELETE.");

        printf("\n\n\t#DELETE WHOLE EXPERIENCE\t\t\t[1]");

        printf("\n\t#DELETE A PARTICULAR EXPERIENCE BY TIME\t[2]");

        do

        {

            printf("\n\t\tENTER YOU CHOICE:");

            scanf("%d",&choice);

            switch(choice)

            {

                case 1:

                    printf("\n\tENTER THE DATE OF EXPERIENCE TO BE DELETED:[username yyyy-mm-dd]:");

                    fflush(stdin);

                    gets(filename);

                    fp = fopen (filename, "wb" ) ;

                    if ( fp == NULL )

                    {

                        printf("\nTHE customer DOES NOT EXISTS");

                        printf("\n GOING BACK ");

                        int i=0;
                        while(i<3){
                        printf("%c",178);
                        sleep(1);
                        i++;
                        }

                        return ;

                    }

                    fclose(fp);

                    remove(filename);

                    printf("\nDELETED SUCCESFULLY...");

                    break;

                case 2:

                    printf("\n\tENTER THE USERNAME & DATE OF EXPERIENCE:[username yyyy-mm-dd]:");

                    fflush(stdin);

                    gets(filename);

                    fp = fopen (filename, "rb" ) ;

                    if ( fp == NULL )

                    {

                        printf("\nTHE customer DOES NOT EXISTS");

                        printf("\nGOING BACK ");

                        int i=0;
                        while(i<3){
                        printf("%c",178);
                        sleep(1);
                        i++;
                            }

                        return ;

                    }

                    fptr=fopen("temp","wb"); //If the file exists, its contents are overwritten.

                                              //If the file does not exist, it will be created.


                    if(fptr==NULL)

                    {

                        printf("\nSYSTEM ERROR");

                        printf("\nGOING BACK ");

                        int i=0;
                        while(i<3){
                        printf("%c",178);
                        sleep(1);
                        i++;
                            }

                        return ;

                    }

                    printf("\n\tENTER THE TIME OF EXPERIENCE TO BE DELETED:[hh:mm]:");

                    fflush(stdin);

                    gets(time);

                    while(fread(&customer,sizeof(customer),1,fp)==1)

                    {

                        if(strcmp(customer.time,time)!=0)

                            fwrite(&customer,sizeof(customer),1,fptr);

                    }

                    fclose(fp);

                    fclose(fptr);

                    remove(filename);

                    rename("temp",filename);

                    printf("\nDELETED SUCCESFULLY...");

                    break;

                default:

                    printf("\n\tYOU ENTERED WRONG CHOICE");

                    break;

            }

        }
        while(choice<1||choice>2);

        printf("\n\tDO YOU LIKE TO DELETE ANOTHER EXPERIENCE.(Y/N):");

        fflush(stdin);

        scanf("%c",&another);

    }

    printf("\n\n\t EXITING ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

}

#endif // DELETEXP_H_INCLUDED
