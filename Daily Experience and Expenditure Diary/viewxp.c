void viewxp( )

{

    FILE *fpte ;

    system("cls");

    struct experienxe_key customer ;

    char time[30],choice,filename[14];

    int ch;

    printf("\t*************************************************************\n");
    printf("\t**                                                         **\n");
    printf("\t**                    VIEW EXPERIENCE                       **\n");
    printf("\t**                                                         **\n");
    printf("\t*************************************************************\n\n\n");



    do

    {

        printf("\n\tENTER THE USERNAME & DATE OF EXPERIENCE TO BE VIEWED[username yyyy-mm-dd]:");

        fflush(stdin);

        gets(filename);

        fpte = fopen ( filename, "rb" ) ; //if file does not exits then return null

        if ( fpte == NULL )

        {

            puts ( "\nTHE EXPERIENCE DOES NOT EXIST...\n" ) ;

            printf("EXITING ");

            int i=0;
                while(i<5){
                printf("%c",178);
                sleep(1);
                i++;
                    }

            return ;

        }

        system("cls");

        printf("\n\tHOW WOULD YOU LIKE TO VIEW:\n");

        printf("\n\t1.WHOLE EXPERIENCE OF THE DAY.");

        printf("\n\t2.EXPERIENCE OF FIX TIME.");

        printf("\n\t\tENTER YOUR CHOICE:");

        scanf("%d",&ch);

        switch(ch)

        {

            case 1:

                printf("\nTHE WHOLE EXPERIENCE FOR %s IS:",filename);

                while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

                {

                    printf("\n");

                    printf("\nTIME: %s",customer.time);

                    printf("\nMEETING WITH: %s",customer.name);

                    printf("\nMEETING AT: %s",customer.place);

                    printf("\nFEELING: %s",customer.feeling);

                    printf("\nEXPERIENCE: %s",customer.experience);

                    printf("\n");

                }

                break;

            case 2:

                fflush(stdin);

                printf("\nENTER TIME:[hh:mm]:");

                gets(time);

                while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

                {

                    if(strcmp(customer.time,time)==0)

                    {

                        printf("\nYOUR EXPERIENCE IS:");

                        printf("\nTIME: %s",customer.time);

                        printf("\nMEETING WITH: %s",customer.name);

                        printf("\nMEETING AT: %s",customer.place);

                        printf("\nYOUR FEELING: %s",customer.feeling);

                        printf("\nEXPERIENCE: %s",customer.experience);

                    }

                }

                break;

            default:
                printf("\nYOU TYPED SOMETHING ELSE...\n");

                break;

        }

        printf("\n\nWOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):");

        fflush(stdin);

        scanf("%c",&choice);

    }
    while(choice=='Y'||choice=='y');

    fclose ( fpte ) ;

    printf("\n\n\t\tLOADING ");

                int i=0;
                while(i<3){
                printf("%c",178);
                sleep(1);
                i++;
                    }

    return ;

}
