///Md Shamim Ahamed
///ID: 213-35-775

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct struct_data{
    char name[50];
    char story[50];
} data;


char addrecord(char filename[50]);
void viewdata();
void deletedata();
void editdata();


int main() {

    printf("Enter FILENAME : ");
    char filename[50];
    gets(filename);

    addrecord(filename);
    viewdata();

    editdata();
    viewdata();

    deletedata();
    printf("\nDELETED SUCCESFULLY \n");
    viewdata();




}

char addrecord(char filename[50]){


    FILE *fp ;
    fp = fopen (filename, "ab+" ) ;//if file not exits then created


    printf("Enter your name : ");
    gets(data.name);
    printf("Enter strory : ");
    gets(data.story);

    fwrite ( &data, sizeof ( data ), 1, fp ) ;
    printf("\nData succesfully added to %s\n",filename);

    fclose (fp);

    return NULL;

}


void viewdata(){
    printf("\n\nEnter the file name you want to view : ");
    char filename[50];
    gets(filename);

    FILE *fp;

    fp = fopen ( filename, "rb+" ) ; //Open for both reading and writing in binary mode

    while ( fread ( &data, sizeof ( data ), 1, fp ) == 1 ) {

        printf("\n");

        printf("\nNAME: %s",data.name );

        printf("\nStory: %s", data.story);
        fclose (fp);
        return;
    }
    printf("\nNO data exist\n\n");
    fclose (fp);
}

void editdata(){
    printf("\n\nEnter the file name you want to edit : ");
    char filename[50];
    gets(filename);
    remove(filename);

    printf("\n\nEdit the record here :\n");
    addrecord(filename);

}

void deletedata(){
    printf("\n\nEnter the file name you want to delete : ");
    char filename[50];
    gets(filename);


    remove(filename);

}
