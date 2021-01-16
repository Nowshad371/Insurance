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


