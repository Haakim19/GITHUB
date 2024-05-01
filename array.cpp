// array 
#include<iostream>
#include<string>
using namespace std;
 int main()
 {
    string cars[] = {"volvo","BMW","Ford","Mazda","Tesla"};
    int number[] = {10,20,30,40} ;
//array in loop 
   for (int i = 0 ; i < sizeof (number) / sizeof (int) ; i++)
        cout << number [i] << endl ;
        cout << sizeof (number) / sizeof (int) << endl;
// for - each loop
   for (int i : number)
   {
    cout << i << endl ;
   } 
// 

int arr[] = {1,2,3,4,5};
int arr1[] {2,3,4,5,6};
arr[0] = 20;
for (int i = 1; i <sizeof(arr)/sizeof(int)+1; i++)
    cout << i <<endl;
//

//Multi dementional array






















 }