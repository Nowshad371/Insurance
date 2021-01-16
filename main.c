#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include"_search.h"
#include"sub.h"






void _claim();
void _record();
void _search();
void _delete();
void subscribe();



int main()
{
    int choice = 0;
    char ch;
    struct Zedlife c;
    FILE *f;
    FILE *fd;
    fd=fopen("temp.text","a");
    f=fopen("details.text","w");
    fprintf(fd,"\n\n\tName: %s\n\tAge: %d\n\tGender: %s\t\nCity: %s\n\tEmail:%s\n\tphone: %s\tclaim: %s ",c.name,c.age,c.sex,c.city,c.email,c.phone,c.claim);


    fprintf(f,"\n\n\tNAME \t\tID Number\tAGE\t\tGENDER\t\tCITY\t\t   EMAIL\t\tCONTACT\t\t  DATE\tFEES\tPAID\tPLAN\tclaim");
    fclose(f);
    fclose(fd);

    while(choice != 6){
    system("cls");


    printf("\n\n\n\n\t\t\t\t\tWELCOME TO ZeeMediLife\n\n");
    printf("\t\t\t\t\t1.subscription\n");
    printf("\t\t\t\t\t2.claim\n");
    printf("\t\t\t\t\t3.print record\n");
    printf("\t\t\t\t\t4.search record\n");
    printf("\t\t\t\t\t5.Delete record\n");
    printf("\t\t\t\t\t6.exit\n");
    printf("\t\t\t\t\tENTER YOUR OPTION: ");

    scanf("%d",&choice);


    if (choice == 1){
            subscribe();

    }


   else if(choice ==2){
        _claim();

        }
    else if(choice ==3){
         _record();

        }
    else if(choice==4){
        _search();
    }
     else if(choice==5){
        _delete();
    }
    else{
    printf("\n\n\t\t\t\tTHANK YOU FOR COMING");
    gets(ch);}

    }
}


void _record(){


    system("cls");
    char ch;

    struct Zedlife c;
    int _record;
    FILE *fp =fopen("new","rb");
    FILE *fd=fopen("temp.text","r");
    FILE *f =fopen("details.text","r");
    printf("\n\n\t\t1.Record without ID");
    printf("\n\n\t\t2.Record with ID");
    printf("\n\n\t\t3.Deleted Record");
    printf("\n\n\t\tEnter your option: ");
    scanf("%d",&_record);
    if(_record==1){
        if(fp ==NULL){
            printf("\n\n\t\tfile does not exit");
        exit(1);

        }
        else{
            printf("\n\n\t\t\t\t\t\t\tFILE IS OPENED\n");
            printf("\n\t\t***********************************************************************************************************");

            while(fread(&c,sizeof(c),1,fp)==1)

            {


           printf("\n\n\n\t\tYOUR RECORD\n");
           printf("\n\t\tname= %s\n\t\tcontact =%s\n\t\tAge = %d years\n\t\tEmail=%s\n\t\tGENDER=%s\n\t\tcity=%s\n\t\tclaim: %s\n\t\tDays: %d \n\t\tID_number: %d",c.name,c.phone,c.age,c.email,c.sex,c.city,c.claim,c.age,c.id_number);
           gets(ch);
           getch();


            }

            fclose(fp);


        }
    }
    else if(_record==2){


        if(f ==NULL){
            printf("\n\n\t\tfile does not exit");


        }
        else{
            printf("\n\n\t\tFILE IS OPENED\n");
            while(!feof(f)){

            ch = fgetc(f);
            printf("%c",ch);

            }

            fclose(f);


    }
    }
    else{



         if(fd ==NULL){
            printf("\n\n\t\tfile does not exit");


        }
        else{
            printf("\n\n\t\tFILE IS OPENED\n");
            while(!feof(fd)){

            ch = fgetc(fd);
            printf("%c",ch);

            }

            fclose(fd);


    }





    }



    scanf("%c",&ch);

    getch();


}
void _delete(){


    system("cls");
    char ch;

    struct Zedlife c;



    FILE *fp,*fd;
    int flag;
    char name[100];

    fp=fopen("new","rb");

    if(fp ==NULL){
        printf("file does not exit");


    }
    else{

        fd=fopen("temp","wb+");
        if(fd==NULL)
            printf("file opening error");
            else{

        printf("\n\n\t\t\tEnter name you want to delete: ");
        scanf("%s",&name);
        fflush(stdin);

        while(fread(&c,sizeof(c),1,fp)==1){

        if(strcmp(c.name,name)!=0)
            fwrite(&c,sizeof(c),1,fd);
        if(strcmp(c.name,name)==0)
            flag=1;}



    fclose(fp);
    fclose(fd);
    if(flag!=1)
            {

            printf("\n\n\t\tno record deleted.");
            remove("temp.txt");

            }

                else{

                    remove("new");
                    rename("temp.txt","new");
                    printf("\n\n\t\trecord deleted successfully");

                }
        }
        }


    scanf("%c",&ch);

    getch();




}



