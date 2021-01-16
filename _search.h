struct Zedlife{

    char name[100];
    int age;
    char email[50];
    char phone[20];
    char sex[100];
    char city[100];
    int service;
    char claim[10];
    int days;
    char room[100];
    int id_number;
};


void _search(){

    system("cls");
    char ch;
    int _search;
    struct Zedlife c;
    printf("\n\n\t\t1.Search Subscriber who claimed\n\n");
    printf("\t\t2.Search subscriber\n\n");
    printf("\t\t3.Search Plan type\n\n");
    printf("\t\tenter your option: ");
    scanf("%d",&_search);


    if(_search ==1){

    FILE *fp;
    char name[100];

    fp=fopen("new","rb");

    if(fp ==NULL){
        printf("file does not exit");

        exit(1);
    }

    printf("\n\n\n\n\t\tenter name you want to search: ");
    scanf("%s",&name);

    while(fread(&c,sizeof(c),1,fp)==1){

        if(strcmp(c.name,name)==0)
            {

            printf("\n\n\t\trecord  found about %s",name);


            printf("\n\n\t\tName: %s \tEmail: %s \tAge: %d \tPhone number: %s \tCity: %s \tGender: %s\tclaim: %s\tDays: %d\tId : %d",c.name,c.email,c.age,c.phone,c.city,c.sex,c.claim,c.age,c.id_number);
            }

                else
                    printf("\n\n\t\trecord not found");
        }






    fclose(fp);
    }

    else if(_search ==2){


    FILE *ft;
    char name[100];

    ft=fopen("subscribe","rb");

    if(ft ==NULL){
        printf("file does not exit");

        exit(1);
    }

    printf("\n\n\n\n\t\tenter name you want to search: ");
    scanf("%s",&name);

    while(fread(&c,sizeof(c),1,ft)==1){

        if(strcmp(c.name,name)==0)
            {

            printf("\n\n\t\trecord  found about %s",name);


            printf("\n\n\t\tName: %s \tEmail: %s \tAge: %d \tPhone number: %s \tCity: %s \tGender: %s\tclaim: %s\tDays: %d\tId : %d",c.name,c.email,c.age,c.phone,c.city,c.sex,c.claim,c.age,c.id_number);
            }

                else
                    printf("\n\n\t\trecord not found");
        }






    fclose(ft);





    }

    else{
        int option;
        printf("\n\n\t\t1.search with Age");
        printf("\n\n\t\t2.Search with Plan Type");
        printf("\n\n\t\tEnter your option: ");

        scanf("%d",&option);

        if(option==1){



            printf("\n\n\t\tenter your age: ");
            scanf("%d",&c.age);

            if(c.age < 15 || c.age >60 )
            {
                printf("\n\nSORRY NO SERVICE AVAILABLE FOR YOU:");

            }
            else if(c.age > 15 && c.age <=20)
            {

            printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
            printf("\n\t\t\t***********************************************************************************************");
            printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
            printf("\n\t\t\tMonthly Premium\t\t\t120\t\t\t\t150\t\t\t200\n");
            printf("\n\t\t\tAnnual Claim Limit \t\t120,000\t\t\t\t150,000\t\t\t200,000\n");
            printf("\n\t\t\tLifetime Claim Limit \t\t600,000 \t\t\t750,000 \t\t1,000,000\n");

            }
            else if(c.age  >=21 && c.age <=40 ){
            printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
            printf("\n\t\t\t***********************************************************************************************");
            printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
            printf("\n\t\t\tMonthly Premium\t\t\tnot available\t\t\t150\t\t\t200\n");
            printf("\n\t\t\tAnnual Claim Limit \t\t--------\t\t\t150,000\t\t\t200,000\n");
            printf("\n\t\t\tLifetime Claim Limit \t\t--------\t\t\t750,000 \t\t1,000,000\n");


            }
            else if(c.age  >=41 && c.age <=54){

                printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
                printf("\n\t\t\t***********************************************************************************************");
                printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
                printf("\n\t\t\tMonthly Premium\t\t\tnot available\t\t\tnot Available\t\t200\n");
                printf("\n\t\t\tAnnual Claim Limit \t\t--------\t\t\t-------\t\t\t200,000\n");
                printf("\n\t\t\tLifetime Claim Limit \t\t-------\t\t\t\t--------\t\t1,000,000\n");

            }
            else{

                printf("PLEASE TRY AGAIN");
            }
        }
        else{

            char plan;
            printf("\n\n\t\t1.PLAN120 \t\t2.PLAN150\t\t3.PLAN200");
            printf("\n\n\t\tenter your plan type: ");
            scanf("%s",&plan);


            if(plan =='plan120' || plan =='PLAN120' )
            {

            printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
            printf("\n\t\t\t***********************************************************************************************");
            printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
            printf("\n\t\t\tMonthly Premium\t\t\t120\t\t\t\t150\t\t\t200\n");
            printf("\n\t\t\tAnnual Claim Limit \t\t120,000\t\t\t\t150,000\t\t\t200,000\n");
            printf("\n\t\t\tLifetime Claim Limit \t\t600,000 \t\t\t750,000 \t\t1,000,000\n");

            }
            else if(plan =='plan150' || plan =='PLAN150' ){
            printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
            printf("\n\t\t\t***********************************************************************************************");
            printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
            printf("\n\t\t\tMonthly Premium\t\t\tnot available\t\t\t150\t\t\t200\n");
            printf("\n\t\t\tAnnual Claim Limit \t\t--------\t\t\t150,000\t\t\t200,000\n");
            printf("\n\t\t\tLifetime Claim Limit \t\t--------\t\t\t750,000 \t\t1,000,000\n");


            }
            else if(plan =='plan200' || plan =='PLAN200' ){

                printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
                printf("\n\t\t\t***********************************************************************************************");
                printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
                printf("\n\t\t\tMonthly Premium\t\t\tnot available\t\t\tnot Available\t\t200\n");
                printf("\n\t\t\tAnnual Claim Limit \t\t--------\t\t\t-------\t\t\t200,000\n");
                printf("\n\t\t\tLifetime Claim Limit \t\t-------\t\t\t\t--------\t\t1,000,000\n");

            }
            else{

                printf("\t\tSORRY NO SERVICE AVAILABLE WITH THIS PLAN");
            }










        }

        printf("\n\n\t\t\t\t\t\t\tBENEFITS AVAILABLE FOR YOU");
        printf("\n\t\t\t***********************************************************************************************************");
        printf("\n\t\t\t**Types of Claim\t\t\t\t\t\tEligibility Amount (RM)\t\t\t***");
        printf("\n\t\t\t**---------------\t\t\t\t------------------------------------------------------- ***");
        printf("\n\t\t\t**\t\t\t\t\t\tPlan120\t\t\tPlan150\t\t\tPlan200 ***");
        printf("\n\t\t\t**Room Charges\t\t\t\t\t120/day\t\t\t150/day\t\t\t200/day ***");
        printf("\n\t\t\t**Intensive Care Unit(ICU) \t\t\t250/day\t\t\t400/day\t\t\t700/day ***");
        printf("\n\t\t\t**Hospital Supplies and Services\t\t--------------------------------------------------------***");
        printf("\n\t\t\t**Surgical Fees\t\t\t\t\t---\tAs charged. Subject to approval by ZeeMediLife.\t***");
        printf("\n\t\t\t**Other Fees\t\t\t\t\t--------------------------------------------------------***");







    }

    scanf("%c",&ch);

    getch();

}
