// array in loop
#include<iostream>
#include<string>
using namespace std;
 int main()
 {
    string cars[] = {"volvo","BMW","Ford","Mazda","Tesla"};
    int number[] = {10,20,30,40} ;
    
   /*for (int i = 0 ; i < sizeof (number) / sizeof (int) ; i++)
        cout << number [i] << endl ;
        cout << sizeof (number) / sizeof (int) << endl;*/
  // for - each loop
   for (int i : number)
   {
    cout << i << endl ;
   } 
 
 }