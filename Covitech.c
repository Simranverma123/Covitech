#include<stdio.h>
#include<stdlib.h>
void ind(int *s)
{
int check=1;
while(check)
{
 int op;
 printf("\tEnter what do you require \n\n");
 printf("\t\t1.Medicines\n\t\t2.Food\n\t\t3.Clothes\n\t\t4.Exit\n\n\t\tEnter option number to receive\n\n");
 scanf("%d",&op);
 if (op==1)
 {
     int med,flag=1;
     while(flag)
     {
        int yn,quan;    
        printf("\t\tWhich medicine would you like to receive?\n\t1.Zincovit\n\t2.Paracetamol\n\t3.Vitamin C tablets\n\t4.Crocin\n\t5.Multivitamin tablets\n\n\t\tEnter option number :\n");
        scanf("%d",&med);
        printf("\t\t\tEnter the quantity of medicines\n\n");
        scanf("%d",&quan);
        printf("\t\t\tDo you require more medicines?(1.Yes/2.No)\n");
        scanf("%d",&yn);
        if (yn==2){
           flag=0;
           check=0;
           *s=0;
        }
     }

 }
 else if(op==2){
     int ch,y,f1=1;
     while(f1)
     {
     printf("\t\t1.Dry Ration\n\t\t2.Refreshments for frontline workers/covid patients\n\t\t3.Both\n\n\tEnter choice number\n");
     scanf("%d",&ch);
      printf("\t\t\tDo require more necessities?(1.Yes/2.No)\n");
        scanf("%d",&y);
        if (y==2){
           f1=0;
           check=0;
           *s=0;
        }
   }
   
 }
 else if(op==3){
     int option,f=1;
     while(f){
         int quant,yn2;                                            
         printf("\n\t\t1.Women\n\t\t2.Men\n\t\t3.Kids\n\n\tEnter choice :\n");
         scanf("%d",&option);                                                           // we need to add more options
         printf("\n\t\tEnter the quantity of clothes :\n");
         scanf("%d",&quant);
         printf("\n\n\tDo you need more clothes?(1.Yes/2.No)\n");
         scanf("%d",&yn2);
         if (yn2==2){
           f=0;
           check=0;
           *s=0;
         }
     }
     
 }
 
 else if(op==4){
     check=0;
     *s=0; 
 }
 else{
     int yn3;
     printf("\t\tInvalid option number\n\n\t\tDo you want to continue?(1.yes 2.no)");
     scanf("%d",&yn3);
     if (yn3==2)
     {
         *s=0;
         check=0;
     }
 }
}
}











void donor(int *s)
{
int check=1;
while(check)
{
 int op;
 printf("\tEnter what you would like to donate\n\n");
 printf("\t\t1.Medicines\n\t\t2.Food\n\t\t3.Clothes\n\t\t4.Money\n\t\t5.Exit\n\n\t\tEnter option number to donate\n\n");
 scanf("%d",&op);
 if (op==1)
 {
     int med,flag=1;
     while(flag)
     {
        int yn,quan;    
        printf("\t\tWhich medicine would you like to donate?\n\t1.Zincovit\n\t2.Paracetamol\n\t3.Vitamin C tablets\n\t4.crocin\n\t5.Multivitamin tablets\n\n\t\tEnter option number\n");
        scanf("%d",&med);
        printf("\t\t\tEnter the quantity of medicines\n\n");
        scanf("%d",&quan);
        printf("\t\t\tDo you want to donate more medicines?(1.Yes/2.No)\n");
        scanf("%d",&yn);
        if (yn==2){
           flag=0;
           check=0;
           *s=0;
        }
     }

 }
 else if(op==2){
     int ch,y,f1=1;
     while(f1)
     {
     printf("\t\t1.Dry Ration\n\t\t2.Refreshments for frontline workers/covid patients\n\t\t3.Both\n\n\tEnter choice number\n");
     scanf("%d",&ch);
      printf("\t\t\tDo you want to add more necessities?(1.Yes/2.No)\n");
        scanf("%d",&y);
        if (y==2){
           f1=0;
           check=0;
           *s=0;
        }
   }
   
 }
 else if(op==3){
     int option,f=1;
     while(f){
         int quant,yn2;                                            
         printf("\n\t\t1.Women\n\t\t2.Men\n\t\t3.Kids\n\n\tEnter choice :\n");
         scanf("%d",&option);                                                           // we need to add more options
         printf("\n\t\tEnter the quantity of clothes :\n");
         scanf("%d",&quant);
         printf("\n\n\tDo you want to donate more clothes?(1.Yes/2.No)\n");
         scanf("%d",&yn2);
         if (yn2==2){
           f=0;
           check=0;
           *s=0;
         }
     }
     
 }
 else if(op==4){
     int num,mon,t=1,y2;
     while(t){
     printf("\n\t\t\tMode of payment:-\n\t\t1.Mobile wallet\n\t\t2.Cash\n\tEnter option number\n");
     scanf("%d",&num);
     if(num==1){
         printf("\n\n\t\tEnter amount of money to be donated :\n");
         scanf("%d",&mon);
         printf("\n\t\tMobile wallet number:\t123456789\n\tDonate the money on given number\n");
     }
     if(num==2){
         printf("\n\t\tEnter amount of money to be donated :");
         scanf("%d",&mon);

     }
      printf("\n\n\tDo you want to donate more money?(1.Yes/2.No)\n");
         scanf("%d",&y2);
         if (y2==2){
           t=0;
           check=0;
           *s=0;
         }
     }
     
          
    }

 else if(op==5){
     check=0;
     *s=0; 
 }
 else{
     int yn3;
     printf("\t\tInvalid option number\n\n\t\tDo you want to continue?(1.yes 2.no)");
     scanf("%d",&yn3);
     if (yn3==2)
     {
         *s=0;
         check=0;
     }
 }
}
}






void org(int *s)
{
int check=1;
while(check)
{
 int op;
 printf("\tEnter what do you require\n\n");
 printf("\t\t1.Medicines\n\t\t2.Food\n\t\t3.Clothes\n\t\t4.Money\n\t\t5.Exit\n\n\t\tEnter option number to receive\n\n");
 scanf("%d",&op);
 if (op==1)
 {
     int med,flag=1;
     while(flag)
     {
        int yn;    
        printf("\t\tWhich medicine would you like to receive?\n\t1.Zincovit\n\t2.Paracetamol\n\t3.Vitamin C tablets\n\t4.crocin\n\t5.Multivitamin tablets\n\n\t\tEnter option number\n");
        scanf("%d",&med);
        printf("\t\t\tDo you require more medicines?(1.Yes/2.No)\n");
        scanf("%d",&yn);
        if (yn==2){
           flag=0;
           check=0;
           *s=0;
        }
     }

 }
 else if(op==2){
     int ch,y,f1=1;
     while(f1)
     {
     printf("\t\t1.Dry Ration\n\t\t2.Refreshments for frontline workers/covid patients\n\t\t3.Both\n\n\tEnter choice number\n");
     scanf("%d",&ch);
      printf("\t\t\tDo you want to add more necessities?(1.Yes/2.No)\n");
        scanf("%d",&y);
        if (y==2){
           f1=0;
           check=0;
           *s=0;
        }
   }
   
 }
 else if(op==3){
     int option,f=1;
     while(f){
         int quant,yn2;                                            
         printf("\n\t\t1.Women\n\t\t2.Men\n\t\t3.Kids\n\n\tEnter choice :\n");
         scanf("%d",&option);                                                           // we need to add more options
         printf("\n\n\tDo you want to receive more clothes?(1.Yes/2.No)\n");
         scanf("%d",&yn2);
         if (yn2==2){
           f=0;
           check=0;
           *s=0;
         }
     }
     
 }
 else if(op==4){
     int num,mon,t=1,y2;
     printf("\n\t\t\tMode of payment:-\n\t\t1.Mobile wallet\n\t\t2.Cash\n\tEnter option number\n");
     scanf("%d",&num);
     if(num==1){
         printf("\n\n\t\tEnter amount of money required:\n");
         scanf("%d",&mon);
         printf("\n\t\tMobile wallet number:\t123456789\n\tDonate the money on given number\n");
     }
     if(num==2){
         printf("\n\t\tEnter amount of money required:");
         scanf("%d",&mon);

     }
      /*printf("\n\n\tDo you require money?(1.Yes/2.No)\n");
         scanf("%d",&y2);
         if (y2==2){
           */

           check=0;
           *s=0;
         
     }
    

 else if(op==5){
     check=0;
     *s=0; 
 }
 else{
     int yn3;
     printf("\t\tInvalid option number\n\n\t\tDo you want to continue?(1.yes 2.no)");
     scanf("%d",&yn3);
     if (yn3==2)
     {
         *s=0;
         check=0;
     }
 }
}
}











int main()
{
int cg,s=1;
while(s)
{
int display_home();
 cg=display_home();
 if (cg==1)
 {
  donor(&s);
 // move to donor function
 donor(&s);
 }
 else if(cg==2)
 {
 
 //get deatils
  char a[20];
  char add[100];
  long long int phn;
  printf("\t\tEnter your name:");
  scanf("%s",a);
  getchar();
  printf("\n\t\tEnter your phone number:\n");
  scanf("%lld",&phn);
  printf("\t\tEnter your address:");
  scanf("%s",add);
  getchar();
  
   //moving to ind function
   ind(&s);
   printf("\n\n\t\t\t Your requirements will be delivered soon\n\n");
 }
 else if(cg==3)
 {
 long int reg,num;
 char nm[20];
 char dm[200];
 char ad[70];
   printf("\t\tWe are happy to have you here,We are already connected with organisation such as Swastha Bharat , Give INDIA, help India etc\n\n");
   printf("\t\tEnter organisation registration number :");
   scanf("%ld",&reg);
   printf("\t\n\tEnter name of organisation:");          //string
   scanf("%s",nm);
   printf("\n\t\tWhom do you work for?");
   scanf("%s",dm);
   printf("\n\t\tEnter location of organisation");
   scanf("%s",ad);
   printf("\n\t\tEnter organisation contact number :");
   scanf("%ld",&reg);

    org(&s);
  printf("\n\nWe will be contacting your organisation soon\n\n");
  }
 else
 {
     int sc;  // for small choice as yes or no 
     printf("\t\t Your input is wrong.\n\t\t Restarting..\n\n");
     printf("\t\tWould you like to input again? (1.Yes/2.N)\n");
     scanf("%d",&sc);
   if (sc==1)
   { 
      // taking to start of program
   }
   else if (sc==2)
   {
   s=0; 
   } 
 }
}
printf("\t\t\t******************** THANK YOU ***********************\n\t\t\t\t EXITING PROGRAM...");
return 0;
}



 
 
  
  
  
    int display_home()//to display and get categorise
  {
    int cg;  //taken for choice
    printf("\n\n\t\t\t**********************************  WELCOME  TO  OUR  SERVICE  ********************************************\n\n\n");
    printf("\t\tYou are :\n");
    printf("\t\t\t1.Donor\n\t\t\t2.Individual\n\t\t\t3.Organisation\n");
    printf("\n\n\t\t\tEnter your choice:\n");
    scanf("%d",&cg);
    return cg;
   }

