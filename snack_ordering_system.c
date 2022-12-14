#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void mainmenu(void);
void customer(void);
void ordersnack(void);
void cdetails(void);
int choice;
    int again;
    int quantity;
    double total=0;
int main()
{
   mainmenu();
    return 0;
}
void mainmenu(void)
{
    system("cls");
    printf("\t\t\t\t_________________________________________________\n");
    printf("\t\t\t\t\tWelcome to Snack ordering system\n");
    printf("\t\t\t\t_________________________________________________\n");
    printf("\t1. customer section\n\t2. exit\n\tenter your choice--->\n");
    printf("\t");
     int select;
     scanf("%d",&select);
     if(select==1)
     {
         customer();
     }

     else if(select==2)
    {
        system("cls");
       printf("\t\t\t\t_________________________________________________\n");
       printf("\t\t\t\t\t\t Thank you\n");
       printf("\t\t\t\t\tFeeling hungry time to snack!!!!!!\n");
       exit(0);
     }

}
void customer(void)
{
    system("cls");
    printf("\t\t\t\t_________________________________________________\n");
    printf("\t\t\t\t\tWelcome to Customer Section\n");
    printf("\t\t\t\t_________________________________________________\n");
    printf("\tYou are about to-->\n\t1.Order Snack\n\t2.View Order\n\t3.Back To Main Menu\n\tEnter Your Choice\n");
    printf("\t");
    int c;
    scanf("%d",&c);
    int load;
    for(load=0;load<=10000;load++)
    {
      printf("\rloading :%d",load/50);
    }
    if(c==1)
    {
        system("cls");
        ordersnack();
    }
    else if(c==2)
    {

        FILE*vorder;
        char v;
        vorder=fopen("order.txt","r");
        while((v=fgetc(vorder))!=EOF)
     {
         printf("%c",v);
     }
     if(getch())
     {
        customer();
     }

    }
    else if(c==3)
    {
       system("cls");
       mainmenu();

    }
    else
    {
        printf("wrong choice");
    }
}
void ordersnack(void)
{

     printf("\t\t\t\t_________________________________________________\n");
     printf("\t\t\t\t\t\tSnack Menu\n");
     printf("\t\t\t\t_________________________________________________\n");
     printf("\t 1.Fries-70\n\t 2.Burger-130\n\t 3.Pizza-240\n\t 4.coke-20\n\t 5.Back to Main Menu\n\t Enter your choice\n");
     printf("\t");
     char s;
     scanf("%d",&choice);
     if(choice==1)
     {
         printf("\t Enter  Quantity:\n");
         printf("\t");
         scanf("%d",&quantity);
         total=total+70*quantity;
         printf("\n");
         printf("\t Press 1 to order again\n\t Press 2 To get your Total Bill\n");
         printf("\t");


     scanf("%d",&again);
     if(again==1)
     {
         printf("\n\n");
         ordersnack();
     }
     else if(again==2)
     {
         printf("\t Your Total Bill is:%.2f\n\n",total);
         int tot1=total;
         FILE*tt1;
         tt1=fopen("order.txt","a");
         fprintf(tt1,"\n Grand Total:%d\n",tot1);
         fclose(tt1);
         cdetails();
     }

    }
    else if(choice==2)
    {

         printf("\t Enter  Quantity:\n");
         printf("\t");
         scanf("%d",&quantity);
         total=total+130*quantity;
         printf("\n");
         printf("\t Press 1 to order again\n\t Press 2 to get your Total Bill\n");
         printf("\t");


     scanf("%d",&again);
     if(again==1)
     {
         printf("\n\n");
          ordersnack();
     }
     else if(again==2)
     {
         printf("\t your Total Bill is:%.2f\n\n",total);
         int tot1=total;
         FILE*tt1;
         tt1=fopen("order.txt","a");
         fprintf(tt1,"\n Grand Total:%d\n",tot1);
         fclose(tt1);
         cdetails();
     }
    }
    else if(choice==3)
    {

         printf("\t Enter  Quantity:\n");
         printf("\t");
         scanf("%d",&quantity);
         total=total+240*quantity;
         printf("\n");
         printf("\t Press 1 to order again\n\t Press 2 to get your Total Bill\n");
         printf("\t");


     scanf("%d",&again);
     if(again==1)
     {
         printf("\n\n");
          ordersnack();
     }
     else if(again==2)
     {
         printf("\t your Total Bill is:%.2f\n\n",total);
         int tot1=total;
         FILE*tt1;
         tt1=fopen("order.txt","a");
         fprintf(tt1,"\n Grand Total:%d\n",tot1);
         fclose(tt1);
         cdetails();
     }
    }
     else if(choice==4)
    {

         printf("\t Enter  Quantity:\n");
         printf("\t");
         scanf("%d",&quantity);
         total=total+20*quantity;
         printf("\n");
         printf("\t Press 1 to order again\n\t Press 2 to get your Total Bill\n");
         printf("\t");


     scanf("%d",&again);
     if(again==1)
     {
         printf("\n\n");
          ordersnack();
     }
     else if(again==2)
     {
         printf("\t your Total Bill is:%.2f\n\n",total);
         int tot1=total;
         FILE*tt1;
         tt1=fopen("order.txt","a");
         fprintf(tt1,"\n Grand Total:%d\n",tot1);
         fclose(tt1);
         cdetails();
     }
    }
    else if(choice==5)
    {
        system("cls");
        customer();
    }
    else
        {
        printf("\t wrong input \n");
        if(getch())
        {
            ordersnack();
        }
        }

}
    void cdetails()
    {
    char fname[20];
    char lname[20];
    long long int phone;
    printf("\t Input Customer Details\n");
    printf("\t First name\n");
    printf("\t ");

    scanf("%s",&fname);
    printf("\t Last name\n");
    printf("\t ");

    scanf("%s",&lname);
    printf("\t Phone:\n");
    printf("\t ");

    scanf("%lld",&phone);
    printf("\n");
    printf("\t Your Details Entered Are-->\n");
    FILE*cust;
    cust=fopen("order.txt","a");
    fprintf(cust,"Order by: %s %s \n Phone Number :%lld\n",fname,lname,phone);
    fclose(cust);
    printf("\t First name:%s\n\t Last name:%s\n\t Phone :%lld\n",fname,lname,phone);
    printf("\n\n\n");
    printf("\t Your Order will be shorty delivered.....\n");
    printf("\t Thank you \n");
    printf("\t Press any back to main menu");
    if(getch())
    {
       mainmenu();
    }


    }

