#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int option;
int go;
int flag1=0,flag2=0,flag3=0,flag4=0,flag5,flag6=0,flag7=0,flag8=0,flag9=0,flag10=0,flag11=0,flag12=0;

int amount1,amount2,amount3,amount4,amount5,amount6,amount7,amount8,amount9,amount10,amount11;
int amount1p,amount2p,amount3p,amount4p,amount5p,amount6p,amount7p,amount8p,amount9p,amount10p,amount11p;
int st1=100,st2=80,st3=90,st4=20,st5=25,st6=30,st7=120,st8=30,st9=40,st10=500,st11=200;
class product_list

{
public:

    int select;
    int choice;
    int a;

    void choicer(){
    cout<<"*******WELCOME TO EVERYDAY SUPER MARKET********"<<endl;
    cout<<"ENTER SERRIAL NUMBER TO BUY ANY PRODUCT"<<endl;
    cout<<"\nserial number \t product name"<<endl;
    cout<<"\n \t\t (Rices)\n 1.\t\t     Kalijira \n 2.\t\t     Miniket\n 3.\t\t     Najirshail \n \t\t (SPICES)\n 4.\t\t     Turmeric    \n 5.\t\t     Chili powder  \n 6.\t\t     Coriander powder \n  "<<endl;
    cout<<"\t\t (OILS)\n 7.\t\t     Soybean oil    \n 8.\t\t     Rice bran oil\n 9.\t\t     Mustard Oil \n\t\t (OTHERS)\n\n 10.\t\t     Flour  \n 11.\t\t     Sugar \n "<<endl;
    cout<<"\n\nENTER 0 to see the total bill "<<endl;
    cout<<"20.\t\tTo see Stock"<<endl;
    cout<<endl;

    }
    void ss(){


    cin>>option;

    }

 void rice1()
 {
          cout<<"Item :RICE ---Kalijira--per kg 110 tk \n enter amount in  kg: ";
          if(flag1==1){
            amount1p=amount1;
          }
          cin>>amount1;
          if(st1<amount1)
          {
             cout<<"Not enough stock, The stock is " <<st1<<". How much do you want to buy?"<<endl;
             cin>>amount1;
          }
          amount1=amount1p+amount1;
          flag1=1;
          cout<<"price of "<<amount1<<"kg Kalijira rice is :"<<amount1*110<<endl;

 }
 void rice2()
 {
          cout<<"Item :RICE ---Miniket--per kg 60 tk \n enter amount in  kg: ";

          if(flag2==1){
            amount2p=amount2;
          }
          cin>>amount2;
          if(st2<amount2)
          {
             cout<<"Not enough stock, The stock is " <<st2<<". How much do you want to buy?"<<endl;
             cin>>amount2;
          }
          amount2=amount2p+amount2;
          flag2=1;
          cout<<"price of "<<amount2<<"kg Miniket rice is :"<<amount2*60<<endl;

 }
 void rice3()
 {
          cout<<"Item :RICE --Najirshail --per kg 80 tk \n enter amount in  kg: ";
          if(flag3==1){
            amount3p=amount3;
          }
          cin>>amount3;
          if(st3<amount3)
          {
             cout<<"Not enough stock, The stock is " <<st3<<". How much do you want to buy?"<<endl;
             cin>>amount3;
          }
          amount3=amount3p+amount3;
          flag3=1;
          cout<<"price of "<<amount3<<"kg Najirshail rice is :"<<amount3*80<<endl;

 }
 void spice1()
 {
          cout<<"Item :SPICES --Turmeric powder --per kg 60 tk \n enter amount in  kg: ";
          if(flag4==1){
            amount4p=amount4;
          }
          cin>>amount4;
          if(st4<amount4)
          {
             cout<<"Not enough stock, The stock is " <<st4<<". How much do you want to buy?"<<endl;
             cin>>amount4;
          }
          amount4=amount4p+amount4;
          flag4=1;
          cout<<"price of "<<amount4<<"kg Turmeric powder is :"<<amount4*60<<endl;

 }
 void spice2()
 {
          cout<<"Item :SPICES --chili powder --per kg 65tk \nenter amount in  kg: ";
          if(flag5==1){
            amount5p=amount5;
          }
          cin>>amount5;
          if(st5<amount5)
          {
             cout<<"Not enough stock, The stock is " <<st2<<". How much do you want to buy?"<<endl;
             cin>>amount5;
          }
          amount5=amount5p+amount5;
          flag5=1;
          cout<<"price of "<<amount5<<"kg Chili powder is :"<<amount5*65<<endl;

 }
 void spice3()
 {
          cout<<"Item :SPICES --Coriander powder --per kg 24 tk \nenter amount in  kg: ";
          if(flag6==1){
            amount6p=amount6;
          }
          cin>>amount6;
          if(st6<amount6)
          {
             cout<<"Not enough stock, The stock is " <<st6<<". How much do you want to buy?"<<endl;
             cin>>amount6;
          }
          amount6=amount6p+amount6;
          flag6=1;
          cout<<"price of "<<amount6<<"kg Coriander  powder is :"<<amount6*24<<endl;

 }
 void oil1()
 {
          cout<<"Item :OIL --Soybean --per litre 105 tk \nenter amount in  litre: ";
          if(flag7==1){
            amount7p=amount7;
          }
          cin>>amount7;
          if(st7<amount7)
          {
             cout<<"Not enough stock, The stock is " <<st7<<". How much do you want to buy?"<<endl;
             cin>>amount7;
          }
          amount7=amount7p+amount7;
          flag7=1;
          cout<<"price of "<<amount7<<"litre  Soybean is :"<<amount7*105<<endl;

 }
 void oil2()
 {
          cout<<"Item :OIL --rice bran --per litre 110 tk \nenter amount in  litre: ";
          if(flag8==1){
            amount8p=amount8;
          }
          cin>>amount8;
          if(st8<amount8)
          {
             cout<<"Not enough stock, The stock is " <<st2<<". How much do you want to buy?"<<endl;
             cin>>amount8;
          }
          amount8=amount8p+amount8;
          flag8=1;
          cout<<"price of "<<amount8<<"litre  Rice bran is :"<<amount8*110<<endl;

 }
 void oil3()
 {
          cout<<"Item :OIL --Mustard oil --per litre 108 tk \nenter amount in  litre: ";
          if(flag9==1){
            amount9p=amount9;
          }
          cin>>amount9;
          if(st9<amount9)
          {
             cout<<"Not enough stock, The stock is " <<st9<<". How much do you want to buy?"<<endl;
             cin>>amount9;
          }
          amount9=amount9p+amount9;
          flag9=1;
          cout<<"price of "<<amount9<<"litre  Mustard oil is :"<<amount9*108<<endl;

 }


 void flour()
 {
          cout<<"Item :Flour-----per kg 30 \nenter amount in  kg: ";
          if(flag10==1){
            amount10p=amount10;
          }
          cin>>amount10;
          if(st10<amount10)
          {
             cout<<"Not enough stock, The stock is " <<st10<<". How much do you want to buy?"<<endl;
             cin>>amount10;
          }
          amount10=amount10p+amount10;
          flag10=1;
          cout<<"price of "<<amount10<<"kg Flour is :"<<amount10*30<<endl;
 }
 void sugar()
 {
          cout<<"Item :Sugar-----per kg 50 \nenter amount in  kg: ";
          if(flag11==1){
            amount11p=amount11;
          }
          cin>>amount11;
          if(st11<amount11)
          {
             cout<<"Not enough stock, The stock is " <<st11<<". How much do you want to buy?"<<endl;
             cin>>amount11;
          }
          amount11=amount11p+amount11;
          flag11=1;
          cout<<"price of "<<amount11<<"kg Sugar is :"<<amount11*50<<endl;
 }




    void st(){
   cout<<"PRODUCT NAME  \t\t  \t\t STOCKED \t\t REAMINED "<<endl;
    cout<<"\nKALIJIRA             \t\t\t"<<st1<<" kg\t\t\t"<<st1-amount1<<endl;
    cout<<"\n Miniket              \t\t\t"<<st2<<" kg\t\t\t"<<st2-amount2<<endl;
    cout<<"\n Najirshail           \t\t\t"<<st3<<" kg\t\t\t"<<st3-amount3<<endl;
    cout<<"\n Turmaric             \t\t\t"<<st4<<" kg\t\t\t"<<st4-amount4<<endl;
    cout<<"\n Chili powder         \t\t\t"<<st5<<" kg\t\t\t"<<st5-amount5<<endl;
    cout<<"\n Coriander powderr    \t\t\t"<<st6<<" kg\t\t\t"<<st6-amount6<<endl;
    cout<<"\n Soybean              \t\t\t"<<st7<<" kg\t\t\t"<<st7-amount7<<endl;
    cout<<"\n Rice bran            \t\t\t"<<st8<<" kg\t\t\t"<<st8-amount8<<endl;
    cout<<"\n Mustard              \t\t\t"<<st9<<" kg\t\t\t"<<st9-amount9<<endl;
    cout<<"\n Flour                \t\t\t"<<st10<<" kg\t\t\t"<<st10-amount2<<endl;
    cout<<"\n Sugar                \t\t\t"<<st11<<" kg\t\t\t"<<st11-amount11<<endl;
    }




 void disp()
 {
  switch(option){
  case 1:
  {
     rice1();
     break;

  }


  case 2:
  {

   rice2();
   break;
  }
  case 3:
  {

   rice3();
   break;
  }
 case 4:
  {
    spice1();
   break;
  }
 case 5:
  {
    spice2();
   break;
  }
  case 6:
  {
    spice3();
   break;

  }
  case 7:
  {
    oil1();
   break;

  }
  case 8:
  {
    oil2();
   break;

  }
  case 9:
  {

    oil3();
   break;
  }
  case 10:
  {
    flour();
   break;
  }
  case 11:
  {


    sugar();
   break;
  }
  case 20:
  {
     st();
   break;
  }
 }
 }

};
 class calculate: public product_list
 {
     public:





void bill(){
// {if(option==0){cout<<"No bill"<<endl;}
 if(option==0){
cout<<"\nproduct name \t quantity \t price "<<endl;

 }

}





};
class hi{
public:

    void sum1(){
        if(amount1!=0)
       cout<<"Kalijira         \t"<<amount1<<" kg\t  "<<amount1*40<<endl;
    }
    void sum2(){
        if(amount2!=0)
        // system("cls");
     cout<<"Miniket      \t\t"<<amount2<<" kg\t  "<<amount2*60<<endl;
    }
     void sum3(){
        if(amount3!=0)
     cout<<"Najirshail       \t"<<amount3<<" kg\t  "<<amount3*80<<endl;
     }
     void sum4(){
        if(amount4!=0)
     cout<<"Turmeric powder   \t"<<amount4<<" kg\t  "<<amount4*60<<endl;
     }
     void sum5(){
        if(amount5!=0)
     cout<<"Chili powder       \t"<<amount5<<" kg\t  "<<amount5*65<<endl;
     }
     void sum6(){
        if(amount6!=0)
     cout<<"Coriander powder   \t"<<amount6<<" kg\t  "<<amount6*24<<endl;
     }
     void sum7(){
        if(amount7!=0)
     cout<<"Soybean    \t\t"<<amount7<<" litre  "<<amount7*105<<endl;
     }
     void sum8(){
        if(amount8!=0)
     cout<<"Rice bran    \t\t"<<amount8<<" litre  "<<amount8*110<<endl;
     }
     void sum9(){
        if(amount9!=0)
     cout<<"Mustard oil   \t\t"<<amount9<<" litre  "<<amount9*108<<endl;
     }
      void sum10(){
        if(amount10!=0)
     cout<<"Flour   \t\t"<<amount10<<" kg\t  "<<amount10*50<<endl;
     }
     void sum11(){
        if(amount11!=0)
     cout<<"Sugar   \t\t"<<amount11<<" kg\t  "<<amount11*30<<endl;
     }

     void total(){

      cout<<"***************************************************** \n\n      TOTAL = "<<amount1*40+amount2*60+amount3*80+amount4*60+amount5*65+amount6*24+amount7*105+amount8*110+amount9*108+amount10*50+amount11*30<<endl;

     }
};



int main()


{
    char ans;
    menu:
     calculate obj;
//    stock obb;

     hi obj2;
     obj.choicer();
     for(int i=1;i<=10;i++){

    obj.ss();
    obj.disp();
   if (option==0){
    system("cls");
           break;}

    }
  obj.bill();
 obj2.sum1();
 obj2.sum2();
 obj2.sum3();
 obj2.sum4();
 obj2.sum5();
 obj2.sum6();
 obj2.sum7();
 obj2.sum8();
 obj2.sum9();
 obj2.sum10();
 obj2.sum11();

obj2.total();
cout<<"\n\nTHANK YOU & HAPPY SHOPPING"<<endl;
cout<<"Do you want to continue?\n If yes Press y."<<endl;
cin>>ans;
if(ans=='y'||ans=='Y')
{
    system("cls");
    goto menu;

}
//goto menu;

//        obb.st();


    return 0;


}
