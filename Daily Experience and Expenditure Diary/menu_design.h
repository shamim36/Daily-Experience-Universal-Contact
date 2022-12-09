#ifndef MENU_DESIGN_H_INCLUDED
#define MENU_DESIGN_H_INCLUDED
#include "struct.h"

void menu_design(){
             printf("\n\n\t*************************************************************\n");
    printf("\t*************************************************************\n");
    printf("\t**                                                         **\n");
    printf("\t**    Welcome to Daily Experience and Expenditure Diary    **\n");
    printf("\t**                                                         **\n");
    printf("\t*************************************************************\n");
    printf("\t*************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t     Loading ");

    int i=0;
    while(i<5){
        printf("%c",178);
        sleep(1);
        i++;
    }



}



#endif // MENU_DESIGN_H_INCLUDED
