#ifndef ADDXP_H_INCLUDED
#define ADDXP_H_INCLUDED


#include "struct.h"

void addxp( )

{

    system("cls");

    FILE *fp ;

    char another = 'Y' ,time[30];

    //struct experienxe_key customer ;

    char filename[15];

    int choice;

    printf("\t*************************************************************\n");
    printf("\t**                                                         **\n");
    printf("\t**                       ADD Menu                          **\n");
    printf("\t**                                                         **\n");
    printf("\t*************************************************************\n\n\n");

    printf("\n\n\tENTER USERNAME & DATE OF YOUR EXPERIENCE[username yyyy-mm-dd]:");

    fflush(stdin);

    gets(filename);

    fp = fopen (filename, "ab+" ) ;//if file not exits then created

    if ( fp == NULL )

    {

        fp=fopen(filename,"wb+"); ///if file not exits then created new one.. else overwritten it.

        if(fp==NULL)

        {

            printf("\nSYSTEM ERROR...");

            printf("\nPRESS ANY KEY TO EXIT ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

            return ;

        }

    }

    while ( another == 'Y'|| another=='y' )

    {

        choice=0;

        fflush(stdin);

        printf ( "\n\tENTER TIME:[hh:mm]:");

        scanf("%s",time);

        rewind(fp);// sets the file position to the beginning of the file of the given stream.

        while(fread(&customer,sizeof(customer),1,fp)==1)

        {

            if(strcmp(customer.time,time)==0)

            {

                printf("\n\tTHE EXPERIENCE ALREADY EXISTS.\n");

                choice=1;

            }

        }

        if(choice==0)

        {

            strcpy(customer.time,time);

            printf("\tENTER NAME:");

            fflush(stdin);

            gets(customer.name);

            fflush(stdin);

            printf("\tENTER PLACE:");

            gets(customer.place);

            fflush(stdin);

            printf("\tENTER YOUR FEELING:");

            gets(customer.feeling);

            fflush(stdin);

            printf("\tEXPERIENCE:");

            gets(customer.experience);

            fwrite ( &customer, sizeof ( customer ), 1, fp ) ;

            printf("\nYOUR EXPERIENCE IS ADDED...\n");

        }

        printf ( "\n\tADD ANOTHER EXPERIENCE...(Y/N) " ) ;

        fflush ( stdin ) ;

        another = getchar( ) ;

    }

    fclose ( fp ) ;

    printf("\n\n\t EXITING ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

}


#endif // ADDXP_H_INCLUDED
