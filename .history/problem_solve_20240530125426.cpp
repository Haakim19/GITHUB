#include<iostream>
using namespace std;
int main ()
{
    int arrsize = 5;
    int arr[arrsize] , num = 0 , num2 = 0;
    for (int  i = 0 ; i < arrsize ; i++)
    {
        cout << "enter a number: ";
        cin >> arr [i];
    }
    
    cout << "enter a number to find in the array: ";
    cin >> num;

    for (int j = 0 ; j < arrsize ; j++)
    {
        num2 = arr[j] - num ;
        for (int k = 0 ; k < arrsize ; k++)
        {
            num2 = arr [k];
            cout << arr [j , k];
        }
    }
    
    
}