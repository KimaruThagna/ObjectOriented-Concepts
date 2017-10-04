#include <iostream>
#include "implementation.cpp"
#include<string.h>
#include<stdlib.h>



using namespace std;

int main()
{
    cout<<"======================================================"<<endl;
    cout<<"=============       CONSTRUCTOR DEFAULTS       ==========="<<endl;
    cout<<"======================================================"<<endl;
    books book1;
    book1.display();
    int q,choice,pr,t=0,st,i=0;
    books* bookarray[20];// an array of pointers to object of class books
    char* auth;
    char* tit;
    string pub="LONGHORN";

while(1)	{
		cout<<"\n\n\tMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Bill and Buy Book"
		<<"\n3. Search For Book"
		<<"\n4. Edit Book Stock"
		<<"\n5. Edit Book Price"
		<<"\n6. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;

		switch(choice)
		{

     case 1:
         tit=new char;
         auth=new char;
         cout<<"Enter book author"<<endl;
         cin>>auth;
         cout<<"Enter book title"<<endl;
         cin>> tit;

           for(t=0;t<i;t++)
                {
					if(bookarray[t]->lookup(tit,auth))
                        	{
						cout<<"\nBook is already in stock\n";
						bookarray[t]->display();
						goto case4;

                        	}

                }
                if(t==i)
                {
                    cout<<"Enter book publisher";
                          cin>>pub;
                          cout<<"Enter book price";
                          cin>>pr;
                          cout<<"Enter book stock";
                          cin>>st;

                        bookarray[i]=new books(auth,tit,pub,pr,st);
                        i++;
                        break;
                }


		 case 2:
		     cout<<"Enter book title";
         cin>>tit;
        cout<<"Enter book author";
         cin>>auth;
		     for(t=0;t<i;t++)
                {
					if(bookarray[t]->lookup(tit,auth))
                        	{
						cout<<"\nBook Found Successfully"<<endl;
						bookarray[t]->display();

                            cout<<"\n Enter required quantity:"<<endl;
                              cin>> q;
                              bookarray[t]->billAndSell(q);
                        	}




                }
                 if(t==i)
                        {
                            cout<<"Book not in stock"<<endl;
                            break;
                        }
        break;

		 case 3:
                tit=new char;
               auth=new char;
        cout<<"Enter book title";

         cin>>tit;
        cout<<"Enter book author";
         std::cin>>auth;
           for(t=0;t<i;t++)
                {
					if((bookarray[t]->lookup(tit,auth)))
                        	{
						cout<<"\nBook Found Successfully"<<endl;
						bookarray[t]->display();
						break;

                        	}

           }
            	if(t==i)
                        {
                            cout<<"Book not in stock"<<endl;
                            break;
                        }


        break;

		 case 4:
		      tit=new char;
               auth=new char;
                cout<<"Enter book title";
         cin>>tit;
        cout<<"Enter book author";
         cin>>auth;
           for(t=0;t<i;t++)
                {
					if(bookarray[t]->lookup(tit,auth))
                        	{
						cout<<"\nBook Found Successfully"<<endl;
						case4: //label
						cout<<"Enter stock delta"<<endl;
						cin>>q;
						bookarray[t]->updatestock(q);
						cout<<"================================================================"<<endl;
						cout<<"                         Detaila after Stock update"<<endl;
						cout<<"================================================================"<<endl;
						bookarray[t]->display();
						break;
                        	}

           }
           if(t==i)
                        {
                            cout<<"Book not in stock"<<endl;
                            break;
                        }


        break;

        case 5:
 tit=new char;
               auth=new char;
        cout<<"Enter book title";
         cin>>tit;
        cout<<"Enter book author";
         cin>>auth;
           for(t=0;t<i;t++)
                {
					if(bookarray[t]->lookup(tit,auth))
                        	{
						cout<<"\nBook Found Successfully"<<endl;
						cout<<"Enter price delta"<<endl;
						cin>>q;
						bookarray[t]->pricing(q);
						cout<<"================================================================"<<endl;
						cout<<"                         Details after Price update"<<endl;
						cout<<"================================================================"<<endl;
						bookarray[t]->display();
						break;
                        	}

           }
           if(t==i)
                        {
                            cout<<"Book not in stock"<<endl;
                            break;
                        }



		 case 6:
        exit(0);
        default: cout<<"\nInvalid Choice Entered";






		}








}

/*books book1("HOMES");


books book2("HOMIE","JAVA","LONGHO",6000,1);
book2.display(book2.lookup(&book2,"HOMIE"));
//stock increment
  book2.updatestock(&book2,"HOMIE",10);
  cout<<"Updated stock for:"<<endl;
  book2.display(book2.lookup(&book2,"HOMIE"));
//stock reduction
  book2.updatestock(&book2,"HOMIE",-5);
  cout<<"Updated stock for:"<<endl;
  book2.display(book2.lookup(&book2,"HOMIE"));
//searching



//price computation BILLING


//PRICE UPDATE FUNCTION
cout<<"Details after Price update:" <<endl;
   book2.pricing(&book2,"HOMIE",-500);
   book2.display(book2.lookup(&book2,"HOMIE"));


//transaction statistics

   book2.hitormiss_display();*/

    return 0;
}

