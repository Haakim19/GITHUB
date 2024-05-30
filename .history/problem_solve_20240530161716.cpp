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
        for (int k = j ; k < arrsize ; k++)
        {
           if ( arr[j] + arr[k] == num)
           {
             cout << "indextes " << j <<","<< k;
             return 0;
           }
           else if (arr[k] == num)
           {
            cout << "index " << k;
           }
           else if (arr [j] == num)
           {
            cout << "index " <<  j;
           }
           
        }
    }
    cout << "no two numbers in the array add up to " << num << endl;
    return 0;
}