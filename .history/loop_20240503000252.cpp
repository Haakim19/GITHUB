#include<iostream>
using namespace std ;
int main ()
{
    int n,total=0,i=1,sqr;
    cout << "Enter a number:";
    cin >> n;
    while (i<=n)
    {
        sqr=i*i;
        cout << sqr <<endl;
        total+=sqr;
        i+=1;
    }
    cout << total<<endl;
}