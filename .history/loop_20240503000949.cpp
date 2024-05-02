#include<iostream>
using namespace std ;
int main ()
{
    int n,total=0,i=1,sqr;
    cout << "Enter a number:";
    cin >> n;

    for(int i=1 ; i<=n ; i++)
    {
        sqr = i*i;
        cout << sqr << endl;
        total+=sqr;

    }
    cout << "Total= "<< total;



}
