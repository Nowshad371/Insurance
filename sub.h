


void subscribe(){




    system("cls");
    char ch;
    FILE *ft;

    struct Zedlife c;

    ft =fopen("subscribe","ab+");
    //f=fopen("details.text","a");

    printf("\n\n\n\t\t\t||--------------------------------------------------------------------------------------------------||\n");
    printf("\t\t\t||\t\t\t\twelcome to ZeeMediLife\t\t\t\t\t\t    ||\n");
    printf("\t\t\t||--------------------------------------------------------------------------------------------------||\n");
    printf("\t\t\t||--------------------------------------------------------------------------------------------------||");

    printf("\n\t\t\t||PAYMENT METHOD\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\t    ||\n");
    printf("\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t    ||\n");
    printf("\t\t\t||--------------------------------------------------------------------------------------------------||");

    printf("\n\t\t\t||Monthly Premium\t\t120\t\t\t\t150\t\t\t200\t    ||\n");
    printf("\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t    ||\n");
    printf("\t\t\t||--------------------------------------------------------------------------------------------------||");

    printf("\n\t\t\t||Annual Claim Limit \t\t120,000\t\t\t\t150,000\t\t\t200,000\t    ||\n");
    printf("\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t    ||\n");
    printf("\t\t\t||--------------------------------------------------------------------------------------------------||");

    printf("\n\t\t\t||Lifetime Claim Limit \t\t600,000 \t\t\t750,000 \t\t1,000,000   ||\n");
    printf("\t\t\t||\t\t\t\t\t\t\t\t\t\t\t\t    ||\n");
    printf("\t\t\t||--------------------------------------------------------------------------------------------------||\n");


    printf("\n\n\t\t\tTO KNOW ABOUT SERVICE AND BENEFITS AVAILABLE FOR YOU ENTER DETAILS \n\n");

    printf("\t\t\tEnter your Name: ");

    scanf("%s",&c.name);
    printf("\t\t\tEnter your gender: ");
    scanf("%s",&c.sex);
    printf("\t\t\tEnter your city name: ");
    scanf("%s",&c.city);
    printf("\t\t\tEnter your Phone number:");
    scanf("%s",&c.phone);
    printf("\t\t\tEnter your Email:");
    scanf("%s",&c.email);

    ++c.id_number;
    fwrite(&c,sizeof(c),1,ft);

    fflush(stdin);
    printf("\n\n\t\t\trecord saved as subscriber");





    fclose(ft);
    //fclose(f);
    scanf("%c",&ch);

    getch();














}
void _claim(){
    system("cls");
    char ch;
    FILE *fp;
    FILE *f;
    FILE *ft;
    char name[100];
    typedef struct tm tm;time_t currentTime;
    time(&currentTime);
    tm *myTime = localtime(&currentTime);
    struct Zedlife c;

    fp =fopen("new","ab+");
    f=fopen("details.text","a");
    ft =fopen("subscribe","rb");
    printf("\n\n\n\n\t\t\tenter your name to claim: ");
    scanf("%s",&name);

    while(fread(&c,sizeof(c),1,ft)==1){

    if(strcmp(c.name,name)==0){
    printf("\n\n\t\t\tEnter your Age: ");
    scanf("%d",&c.age);

        if(c.age < 15 || c.age >60 )
        {
            printf("\n\nSORRY NO SERVICE AVAILABLE FOR YOU:");
            printf("Thank you for comming");
            break;


        }
        else if(c.age > 15 && c.age <=20)
        {

        printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
        printf("\n\t\t\t***********************************************************************************************");
        printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
        printf("\n\t\t\tMonthly Premium\t\t\t120\t\t\t\t150\t\t\t200\n");
        printf("\n\t\t\tAnnual Claim Limit \t\t120,000\t\t\t\t150,000\t\t\t200,000\n");
        printf("\n\t\t\tLifetime Claim Limit \t\t600,000 \t\t\t750,000 \t\t1,000,000\n");
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
        printf("\n\n\t\t\t1.plan120 \t2.plan150 \t3.plan200\n");

        }
        else if(c.age  >=21 && c.age <=40 ){
        printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
        printf("\n\t\t\t***********************************************************************************************");
        printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
        printf("\n\t\t\tMonthly Premium\t\t\tnot available\t\t\t150\t\t\t200\n");
        printf("\n\t\t\tAnnual Claim Limit \t\t--------\t\t\t150,000\t\t\t200,000\n");
        printf("\n\t\t\tLifetime Claim Limit \t\t--------\t\t\t750,000 \t\t1,000,000\n");
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
        printf("\n\n\t\t\t2.plan150 \t3.plan200\n");



        }
        else if(c.age  >=41 && c.age <=54){

            printf("\n\n\t\t\t\t\t\t\tSERVICE AVAILABLE FOR YOU");
            printf("\n\t\t\t***********************************************************************************************");
            printf("\n\t\t\tPAYMENT METHOD\t\t\tPLAN120\t\t\t\tPLAN150\t\t\tPLAN200\n");
            printf("\n\t\t\tMonthly Premium\t\t\tnot available\t\t\tnot Available\t\t200\n");
            printf("\n\t\t\tAnnual Claim Limit \t\t--------\t\t\t-------\t\t\t200,000\n");
            printf("\n\t\t\tLifetime Claim Limit \t\t-------\t\t\t\t--------\t\t1,000,000\n");
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
            printf("\n\n\t\t\t\t3.plan200\n");


        }
        else{

            printf("\n\n\t\tPLEASE TRY AGAIN");
            break;

        }


            int total;
            int payment;
            int fees;
            char str1[] ="annual";
            //printf("\n\n\t\t\t1.plan120 \t2.plan150 \t3.plan200\n");

            printf("\n\t\t\tselect service you want: ");
            scanf("%d",&c.service);
            if(c.service ==1){

                printf("\n\n\t\t\tEnter payment Period\n");
                printf("\n\t\t\tFor Annual Claim Limit press annual\n");
                printf("\n\t\t\tFor Lifetime Claim Limit press lifetime\n");
                printf("\n\t\t\tEnter your option:");
                scanf("%s",&c.claim);
                int d = strcmp(str1,c.claim);

                if (d==0){
                    printf("\n\n\t\t\tYou have selected Annual Claim Limit.");
                    printf("\n\t\t\tyou have selected Plan120 and fees need to be paid: ");
                    printf("\n\t\t\troom =  120 rm per day");
                    printf("\n\t\t\tIntensive care unit(icu) = 250 rm per day");
                    printf("\n\t\t\tFees for Annual Claim is 120000 rm\n\n\n");
                    printf("\n\t\t\tFor Intensive care unit press icu/ICU.");
                    printf("\n\t\t\tFor normal room press r or R.");
                    printf("\n\t\t\tEnter room type: ");
                    scanf("%s",&c.room);
                    if(c.room =='r' || c.room =='R'){
                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 120 +120000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);

                    }
                    else{

                    printf("\n\t\t\tEnter number of days: ");
                    scanf("%d",&c.days);

                    total = (c.days * 250 +120000);
                    printf("\n\t\t\tyou  have to pay %d rm",total);


                    }
                    printf("\n\t\t\tenter your payment:");
                    scanf("%d",&fees);

                    if(fees >total){

                          payment = (fees -total);
                          printf("\n\t\t\tyou have paid extra: %d rm",payment);
                          printf("\n\t\t\tyou are not eligible for this claim");
                    }

                    else if(fees == total){

                        printf("\n\t\t\ttotal amount paid %d rm",fees);

                    }

                    else{

                        payment = (total -fees);
                        printf("\n\t\t\tyou have to pay more:%d rm",payment);



                    }

                    printf("\n\n\n\t\tRecipt:");
                    printf("\n\t\t\tname: %s\n\t\t\tID Number:ZED000%d\n\t\t\tAge: %d\n\t\t\tGender: %s\n\t\t\tCity: %s\n\t\t\tEmail: %s\n\t\t\tPhone: %s\n\t\t\tDate: %i/%i/%i\n\t\t\tfees: %drm\n\t\t\tpaid: %d rm\n\t\t\tclaim: annual",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    fprintf(f,"\n\n\t%s\t\tZED000%d\t\t%d\t\t%s\t\t%s\t%s\t%s\t   %i/%i/%i\t%d rm\t%drm\tPlan120\tannual",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    break;
                }
                else{

                    printf("\n\n\t\t\tYou have selected Lifetime Claim Limit.");
                    printf("\n\t\t\tyou have selected Plan120 and fees need to be paid: ");
                    printf("\n\t\t\troom =  120 rm per day");
                    printf("\n\t\t\tIntensive care unit(icu) = 250 rm per day");
                    printf("\n\t\t\tFees for lifetime Claim is 600000 rm");


                    printf("\n\n\t\t\tFor Intensive care unit press icu/ICU.");
                    printf("\n\t\t\tFor normal room press r or R.");
                    printf("\n\t\t\tEnter room type: ");
                    scanf("%s",&c.room);
                    if(c.room =='r' || c.room =='R'){
                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 120 +600000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);

                    }
                    else{

                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 250 +600000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);


                    }
                    printf("\n\t\t\tenter your payment:");
                    scanf("%d",&fees);
                    if(fees >total){

                          payment = (fees -total);
                          printf("\n\t\t\tyou have paid extra: %d rm",total);
                          printf("\n\t\t\tyou are not eligible for this claim");
                    }

                    else if(fees == total){

                        printf("\n\t\t\ttotal amount paid %d rm",fees);

                    }

                    else{

                        payment = (fees -total);
                        printf("\n\t\t\tyou have to pay more:%d rm",payment);



                    }

                    printf("\n\n\n\t\tRecipt:");
                    printf("\n\t\t\tname: %s\n\t\t\tID Number:ZED000%d\n\t\t\tAge: %d\n\t\t\tGender: %s\n\t\t\tCity: %s\n\t\t\tEmail: %s\n\t\t\tPhone: %s\n\t\t\tDate: %i/%i/%i\n\t\t\tfees: total rm\n\t\t\tpaid: %d rm\n\t\t\tclaim: lifetime",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    fprintf(f,"\n\n\t%s\t\tZED000%d\t\t%d\t\t%s\t\t%s\t%s\t\t%s\t   %i/%i/%i\%d rm\t%drm\tPlan120\tlifetime",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    break;
                }


            }
            else if(c.service ==2){


                printf("\n\n\t\t\tEnter payment Period\n");
                printf("\n\t\t\tFor Annual Claim Limit press annual\n");
                printf("\n\t\t\tFor Lifetime Claim Limit press lifetime\n");
                printf("\n\t\t\tEnter your option:");
                scanf("%s",&c.claim);
                int d = strcmp(str1,c.claim);

                if (d==0){
                    printf("\n\n\t\t\tYou have selected Annual Claim Limit.");
                    printf("\n\t\t\tyou have selected Plan150 and fees need to be paid: ");
                    printf("\n\t\t\troom =  150 rm per day");
                    printf("\n\t\t\tIntensive care unit(icu) = 400 rm per day");
                    printf("\n\t\t\tFees for Annual Claim is 150000 rm");
                    printf("\n\n\t\t\tFor Intensive care unit press icu/ICU.");
                    printf("\n\t\t\tFor normal room press r or R.");
                    printf("\n\t\t\tEnter room type: ");
                    scanf("%s",&c.room);
                    if(c.room =='r' || c.room =='R'){
                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 150+150000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);

                    }
                    else{

                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 400+150000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);


                    }

                    printf("\n\t\t\tenter your payment:");
                    scanf("%d",&fees);
                    if(fees >total){

                          payment = (fees -total);
                          printf("\n\t\t\tyou have paid extra: %d rm",payment);
                          printf("\n\t\t\tyou are not eligible for this claim");
                    }

                    else if(fees == total){

                        printf("\n\t\t\ttotal amount paid %d rm",fees);

                    }

                    else{

                        payment = (total -fees);
                        printf("\n\t\t\tyou have to pay more:%d rm",payment);



                    }
                    printf("\n\n\n\t\tRecipt:");
                    printf("\n\n\t\t\tname: %s\n\t\t\tID Number:ZED000%d\n\t\t\tAge: %d\n\t\t\tGender: %s\n\t\t\tCity: %s\n\t\t\tEmail: %s\n\t\t\tPhone: %s\n\t\t\tDate: %i/%i/%i\n\t\t\tfees: %d rm\n\t\t\tpaid: %d rm\n\t\t\tclaim: annual",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    fprintf(f,"\n\n\t%s\t\tZED000%d\t\t%d\t\t%s\t\t%s\t%s\t\t%s\t   %i/%i/%i\t%d rm\t%drm\tPLAN150\tannual",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    break;
                }

                else{



                    printf("\n\n\t\t\tYou have selected Lifetime Claim Limit.");
                    printf("\n\t\t\tyou have selected Plan150 and fees need to be paid: ");
                    printf("\n\t\t\troom =  150 rm");
                    printf("\n\t\t\tIntensive care unit(icu) = 400 rm");
                    printf("Fees for Lifetime  Payment is 750000 rm");
                    printf("\n\n\t\t\tFor Intensive care unit press icu/ICU.");
                    printf("\n\t\t\tFor normal room press r or R.");
                    printf("\n\t\t\tEnter room type: ");
                    scanf("%s",&c.room);
                    if(c.room =='r' || c.room =='R'){
                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);
                        printf("you have to pay");
                        total = (c.days * 150+750000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);

                    }
                    else{

                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);
                        printf("you have to pay");
                        total = (c.days * 400+750000);
                        printf("you  have to pay %d rm",total);


                    }

                    printf("\n\t\t\tenter your payment:");
                    scanf("%d",&fees);
                    if(fees >total){

                          payment = (fees -total);
                          printf("\n\t\t\tyou have paid extra: %d rm",payment);
                          printf("\n\t\t\tyou are not eligible for this claim");
                    }

                    else if(fees == total){

                        printf("\n\t\t\ttotal amount paid %d rm",fees);

                    }

                    else{

                        payment = (total -fees);
                        printf("\n\t\t\tyou have to pay more:%d rm",payment);



                    }
                    printf("\n\n\n\t\tRecipt:");
                    printf("\n\n\t\t\tname: %s\n\t\t\tID Number:ZED000%d\n\t\t\tAge: %d\n\t\t\tGender: %s\n\t\t\tCity: %s\n\t\t\tEmail: %s\n\t\t\tPhone: %s\n\t\t\tDate: %i/%i/%i\n\t\t\tfees: %d rm\n\t\t\tpaid: %d rm\n\t\t\tClaim: lifetime",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    fprintf(f,"\n\n\t%s\t\tZED000%d\t\t%d\t\t%s\t\t%s\t%s\t\t%s\t   %i/%i/%i\t%d rm\t%drm\tPLAN150\tLifetime",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                    break;
                }






            }

            else{


                printf("\n\n\t\t\tEnter payment Period\n");
                printf("\n\t\t\tFor Annual Claim Limit press annual\n");
                printf("\n\t\t\tFor Lifetime Claim Limit press lifetime\n");
                printf("\n\t\t\tEnter your option:");
                scanf("%s",&c.claim);
                int d = strcmp(str1,c.claim);

                if (d==0){
                printf("\n\n\t\t\tYou have selected Annual Claim Limit.");
                printf("\n\t\t\tyou have selected Plan150 and fees need to be paid: ");
                printf("\n\t\t\troom =  200 rm");
                printf("\n\t\t\tIntensive care unit(icu) = 700 rm");
                printf("\n\t\t\tFees for annual claim is 200000");
                printf("\n\n\t\t\tFor Intensive care unit press icu/ICU.");
                    printf("\n\t\t\tFor normal room press r or R.");
                    printf("\n\t\t\tEnter room type: ");
                    scanf("%s",&c.room);
                    if(c.room =='r' || c.room =='R'){
                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 200+200000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);

                    }
                    else{

                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 700+200000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);


                    }
                printf("\n\t\t\tenter your payment:");
                scanf("%d",&fees);
                if(fees >total){

                      payment = (fees -total);
                      printf("\n\t\t\tyou have paid extra: %d rm",payment);
                      printf("\n\t\t\tyou are not eligible for this claim");
                }

                else if(fees == total){

                    printf("\n\t\t\ttotal amount paid %d rm",fees);

                }

                else{

                    payment = (total -fees);
                    printf("\n\t\t\tyou have to pay more:%d rm",payment);



                }
                printf("\n\n\n\t\tRecipt:");
                printf("\n\n\t\t\tname: %s\n\t\t\tID Number:ZED000%d\n\t\t\tAge: %d\n\t\t\tGender: %s\n\t\t\tCity: %s\n\t\t\tEmail: %s\n\t\t\tPhone: %s\n\t\t\tDate: %i/%i/%i\n\t\t\tfees:%d rm\n\t\t\tpaid: %d rm\n\t\t\tclaim: annual",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                fprintf(f,"\n\n\t%s\t\tZED000%d\t\t%d\t\t%s\t\t%s\t%s\t\t%s\t   %i/%i/%i\t%d rm\t%drm\tPLAN200\tAnnual",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                break;
                }
                else{


                printf("\n\n\t\t\tYou have selected lifetime Claim Limit.");
                printf("\n\t\t\tyou have selected Plan150 and fees need to be paid: ");
                printf("\n\t\t\troom =  200 rm");
                printf("\n\t\t\tIntensive care unit(icu) = 700 rm");
                printf("\n\t\t\tFees for lifetime claim is 1000000");
                printf("\n\n\t\t\tFor Intensive care unit press icu/ICU.");
                    printf("\n\t\t\tFor normal room press r or R.");
                    printf("\n\t\t\tEnter room type: ");
                    scanf("%s",&c.room);
                    if(c.room =='r' || c.room =='R'){
                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 200+1000000);
                        printf("\n\t\t\tyou  have to pay %d rm",total);

                    }
                    else{

                        printf("\n\t\t\tEnter number of days: ");
                        scanf("%d",&c.days);

                        total = (c.days * 700+1000000);
                        printf("you  have to pay %d rm",total);


                    }

                printf("\n\t\t\tenter your payment:");
                scanf("%d",&fees);
                if(fees >total){

                      payment = (fees -total);
                      printf("\n\t\t\tyou have paid extra: %d rm",payment);
                      printf("\n\t\t\tyou are not eligible for this claim");
                }

                else if(fees == total){

                    printf("\n\t\t\ttotal amount paid %d rm",total);

                }

                else{

                    payment = (total -fees);
                    printf("\n\t\t\tyou have to pay more:%d rm",payment);



                }
                printf("\n\n\n\t\tRecipt:");
                printf("\n\n\t\t\tname: %s\n\t\t\tID Number:ZED000%d\n\t\t\tAge: %d\n\t\t\tGender: %s\n\t\t\tCity: %s\n\t\t\tEmail: %s\n\t\t\tPhone: %s\n\t\t\tDate: %i/%i/%i\n\t\t\tfees: %d rm\n\t\t\tpaid: %drm\n\t\t\tClaim: Life time",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                fprintf(f,"\n\n\t%s\t\tZED000%d\t\t%d\t\t%s\t\t%s\t%s\t\t%s\t   %i/%i/%i\t%d rm\t%drm\tPLAN200\tLifetime",c.name,c.id_number,c.age,c.sex,c.city,c.email,c.phone,myTime->tm_yday-273,myTime->tm_mon +1,myTime->tm_year + 1900,total,fees);
                break;

                }

        }

    }
    else{

        printf("\n\n\t\t\tplease subscribe first to claim");
        }
    }

    fwrite(&c,sizeof(c),1,fp);

    fflush(stdin);
    printf("\n\n\t\t\trecord saved");
    printf("\n\n\t\t\tpress any key to return.");


    //++c.id_number;


    fclose(fp);
    fclose(f);
    fclose(ft);
    scanf("%c",&ch);

    getch();



}

