#include<iostream>
using namespace std;
int main ()
{
    int arrsize = 5;
    int arr[arrsize] , num = 0 , num2 = 0 , fnum = 0 , fnum2 = 0;
    for (int  i = 0 ; i < arrsize ; i++)
    {
        cout << "enter a number: ";
        cin >> arr [i];
    }
    
    cout << "enter a number to find in the array: ";
    cin >> num;
    bool found = false;
    for (int j = 0 ; j < arrsize ; j++)
    { 
        num2 = arr[j] - num ;
        fnum = j;
        for (int k = 0 ; k < arrsize ; k++)
        {
           if ( num2 == arr [k])
           {
             fnum2 = k;
             break;
           }
           
        }
    }
    cout << "indextes" << fnum <<","<< fnum2;
}