#ifndef CLASSHEADER_H_INCLUDED

#define CLASSHEADER_H_INCLUDED
#include<string.h>
#include<stdlib.h>
using namespace std;

class books
{

private:
     char* author;
    char* title;
    string publisher ;
    int stock_number;
    int price;
    static int hits;
    static int misses;
    int pricedelta,stockdelta, quantity;

    void update_price(int pricedelta);





public:

    books(char*auth,char* title,string pub,int price,int stock);
    int lookup(char* tit,char*auth);
    void updatestock(int stockdelta);
    int computesale(int quantity);
     void display(void);
    void pricing(int pricedelta);
    void hitormiss(char status);
    void hitormiss_display(void);
    void billAndSell(int quantity);

};

#endif // CLASSHEADER_H_INCLUDED
