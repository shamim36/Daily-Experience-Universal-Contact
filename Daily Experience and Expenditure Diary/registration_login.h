#ifndef REGISTRATION_LOGIN_H_INCLUDED
#define REGISTRATION_LOGIN_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct login                           // before the first use of `l`.
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};



void Cool ()
{

     printf("\t*************************************************************\n");
        printf("\t**                                                         **\n");
        printf("\t**                      Login Menu                         **\n");
        printf("\t**                                                         **\n");
        printf("\t*************************************************************\n\n\n");


    int option;

    printf("\t\tPress '1' to Register\n\t\tPress '2' to Login\n\n");
    printf("\n\nEnter your choice : ");
    scanf("%d",&option);

    getchar();           // catching newline.

    if(option == 1)
        {
            system("CLS");
            registration();
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }
}

void login (void)
{
    char username[30],password[20];
    FILE *log;

    log = fopen("login.txt","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        Cool();
    }

    struct login l;

    printf("\t*************************************************************\n");
        printf("\t**                                                         **\n");
        printf("\t**                          Login                          **\n");
        printf("\t**                                                         **\n");
        printf("\t*************************************************************\n\n\n");
    printf("\tUsername:  ");
    fgets(username, 30, stdin);
    printf("\n\tPassword: ");

    fgets(password, 20, stdin);

    while(fread(&l,sizeof(l),1,log))
        {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {
                printf("\nSuccessful Login\n");
            }
        else
            {
                printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
            }
        }

    fclose(log);

    return;
}




void registration(void)
{
    char firstname[15];
    FILE *log;

    log=fopen("login.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        sleep(1);
        Cool();
    }


    struct login l;

    printf("\t*************************************************************\n");
        printf("\t**                                                         **\n");
        printf("\t**                      Registration                       **\n");
        printf("\t**                                                         **\n");
        printf("\t*************************************************************\n\n\n");

    printf("\nEnter First Name: ");
    scanf("%s",l.fname);
    printf("\nEnter Surname: ");
    scanf("%s",l.lname);



    printf("\nEnter Username: ");
    scanf("%s",l.username);
    printf("\nEnter Password: ");
    scanf("%s",l.password);
    sleep(1);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\nRegistration Successful!\n");\
    sleep(1);
    printf("\n\nWelcome, %s!\n\n",l.lname);

    sleep(3);
    printf("Press any key to continue...");
        getchar();
    system("CLS");
    login();
}



#endif // REGISTRATION_LOGIN_H_INCLUDED
