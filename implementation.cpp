#include "classheader.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;


books::books(char* auth="JOHNDOE",char* tit="C++ PROGRAMMING",string pub="LONGHORN",int pri=5000,int stock=1)
{
      books::author=auth;
    books::title=tit;
    books::publisher=pub ;
    books::price=pri;
    books::stock_number=stock;


}
    int books::lookup(char* tit,char* auth)
    {
        std:: string myst=std::string(tit);
        std:: string mys=std::string(books::title);
        //std::string tit=std::string (tit)
        if(mys == myst)
            //if(strcmp(tit,title)==0 && strcmp(auth,author)==0)
             {
        return 1;
    }
	else
    {
        return 0;

    }

    }


void books::display()
    {

        cout<<"The Author:";
        cout<<author<<endl;
        cout<<"The Title:";
        cout<<title<<endl;
        cout<<"The Price:";
        cout<<price<<endl;
        cout<<"The Publisher:";
        cout<<publisher<<endl;
        cout<<"The Stock Count:";
        cout<<stock_number<<endl;

    }
void books::update_price(int pricedelta)
{
    price=price + pricedelta;
}

 void books::updatestock(int stockdelta)
 {
   stock_number =stock_number + stockdelta;
}



    int books::computesale(int quantity)
    {
            int salesvalue;

        if(quantity > stock_number)
         {
             return -1;// this is evaluated as impossible transaction
         }
         else
         {
             salesvalue=price*quantity;

            return salesvalue;
         }

    }

    void books::pricing(int pricedelta)
    {
        update_price(pricedelta);
    }

int books::hits=0;
int books::misses=0;

void books::hitormiss(char status)
{

    if(status=='H')
    {
         books::hits = 1+books::hits;
    }
    else if(status=='M')
    {
         books::misses = books::misses+1;
    }
}

void books::hitormiss_display(void)
{
    cout<<"=================================================="<<endl;
   cout<<"                     SALES STATISTICS"<<endl;
   cout<<"=================================================="<<endl;
   cout<<"Successful transactions "<< books::hits<<endl;
   cout<<"Unsuccessful transactions "<< books::misses<<endl;
}



void books::billAndSell(int quantity)
{
    if(computesale(quantity)== -1)
            {

                cout<<"The requested amount is not in stock"<<endl;
                hitormiss('M');
                hitormiss_display();
            }

                              else
                              {

                                cout<<"The bill is:"<<endl;
                               cout<<computesale(quantity)<<endl;

                               //make the sale perform transaction
                               cout<<"Details after sale:" <<endl;
                               cout<<"=================================================="<<endl;
                               cout<<"                     SALES MADE                      "<<endl;
                               cout<<quantity<<endl;
                               cout<<"=================================================="<<endl;
                               updatestock(-quantity);
                               hitormiss('H');
                               hitormiss_display();

                        	}
}
