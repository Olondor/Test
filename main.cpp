#include <iostream>

using namespace std;

int main()
{
    int eins;
    int zwei;
    char calc;
    bool finish=false;
    cout << "Hello world!" << endl;
    cout<<"test"<<endl;
    cout<<"Please enter a number!"<<endl;
    cin>>eins;
    cout<<"Please enter a second number!"<<endl;
    cin>>zwei;
    cout<<"The Result of adding the numbers is "<<eins+zwei<<"!"<<endl;
    cout<<"Please enter the type of calculation you want to be done!"<<endl;
    cin>>calc;
    if (calc=='+')
    {
        cout<<eins+zwei<<endl;
        finish=true;
    }
    else
    {
        cout<<"Invalid operation!"<<endl;
    }
    return 0;
}
