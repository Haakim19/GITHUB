#include<iostream>

using namespace std;
int main()
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

return 0;
}