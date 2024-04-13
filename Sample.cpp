 #include<iostream>
 using namespace std;
  int main()
  {
    float item_no=0,item_price=0,discount=0,quantity=0,total=0,net_total=0;
    cout <<"Item Number: ";
    cin >>item_no;
    cout <<"Item Price: ";
    cin >>item_price;
    cout <<"Discount(0.1 for 10%): ";
    cin >>discount;
    cout <<"Quantiyt: ";
    cin >>quantity;
    total=item_price*quantity;
    net_total=total-total*discount;
    cout << "Your Net Amount is: "<<net_total;

    return 0;
  }