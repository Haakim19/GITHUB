#include<iostream>

using namespace std;

void function(string  name , string  home_town , int  age)
{
    cout << "hello " << name <<endl;
    cout << "your " << age << " old" << endl;
    cout << "Your from " << home_town << endl;
}

int main ()
{
    string name,home_town;
    int age;
    cout << "name:"<< endl <<"age:"<<endl << "Home town:"<< endl ;
    cin >> name >> age >> home_town ;

    function(name , home_town , age);
}

