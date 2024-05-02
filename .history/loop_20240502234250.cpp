#include<iostream>
using namespace std ;
int main ()
{
    int i=10;
    while (i<10)
    {
        cout << "hello"<< endl;
        i+=1;
    }
    /*for (int i=0 ; i<=10 ; i++)
    {
        cout << i << endl;
    }
    int x=5;
    do     //do while loop
    {   
        int product_code=0,quantity=0;
        float product_price=0,total=0;
        
        cout <<"Product Code: ";
        cin >> product_code;
        cout <<"Product Price: ";
        cin >> product_price;
        cout <<"Quantity: ";
        cin >> quantity;

        total=product_price*quantity;

        if (product_code==1)
        {
            cout << "Total Price is: "<<total-total*0.03;
        }
        else if (product_code==2)
        {
            cout << "Total price is: "<< total-total*0.05;
        }
        else 
        {
            cout <<"invalid product code!";
        }
        x+=1
    } while (x<=5);
 */   
}