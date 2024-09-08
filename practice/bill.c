#include <stdio.h>
#include <string.h>

int main()
{
    int id , units  ;
    float rate  , surcharge ,money ,netmoney;
    char name[50];

    printf("Enter your id:");
    scanf("%d" , &id );
    printf("enter your name:");
    scanf("%s" , &name);
    printf("Enter your units: ");
    scanf("%d" , &units );


    if( units < 200)
    {   
        rate = 1.20;
       
    }else if( units > 200 && units < 400)
    {   
        rate = 1.50;
       
    }else if( units > 400 && units < 600)
    {   
        rate = 1.80;
       
    }else {
        rate = 2.00;
    }

    money = rate*units;

    if( money > 300)
    {
        surcharge =  money*0.15;
    }

    netmoney = surcharge + money ;
    if(netmoney < 100)
    {
        netmoney = 100;
    }

    printf("Electricity Bill");
    printf("customer id: %d\n" , id);
    printf("customer name: %s\n" ,name);
    printf("unit consumed: %d\n" , units);

    printf("amount charges: %4.2f per unit : %8.2f\n" , rate , money );
    printf("surcharge amount : %8.2f\n" , surcharge);
    printf("net amount paid by the customer: %8.2f\n" , netmoney );

}


