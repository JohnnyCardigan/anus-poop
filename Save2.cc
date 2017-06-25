#include <iostream>
using namespace std;


int numpass;
string passwords[100];
string fromterm;
int seepass;

void setnumpass()
{
    cout<<"Please specify number of passwords:\n";
    cin>>numpass;
}
void terminalinput()
{
    if(numpass<1)
    {
        cout<<"Well then I guess you don't need me, do you?\n";
    }
    else
    {
       if(numpass<2)
        {
            cout<<"Please enter your password:\n";
            cin>>fromterm;
            passwords[0]=fromterm;
        }
        else
        {
        cout<<"Please enter "<<numpass<<" passwords:\n";
        for(int passx=0;passx<numpass;passx++)
        {
        cin>>fromterm;
        passwords[passx]=fromterm;
        }
        }
    }
}
void printterm(string arr[], int size)
{
    for(int x=0;x<size;x++)
    {
        cout<<"Password #"<<x+1<<": "<<arr[x]<<endl;
    }
}
void seepassword()
{
    if(numpass<1)
    {
        cout<<"Thanks for wasting my time, pitiful human.\n";
    }
    else
    {
        if(numpass<2)
        {
        cout<<"Enter 1 to view your password.\n";
        cin>>seepass;
          if(seepass<=numpass)
           {
           cout<<"Password #"<<seepass<<": "<<passwords[seepass-1];
           }
           else
           {
           cout<<"Password #"<<seepass<<" does not exist.\n";
           }
        }
        else
        {    
        cout<<"Enter 1-"<<numpass<<" to view corresponding password:"<<endl;
        cin>>seepass;
            if(seepass<=numpass)
            {
            cout<<"Password #"<<seepass<<": "<<passwords[seepass-1];
            }
            else
            {
            cout<<"Password #"<<seepass<<" does not exist.\n";
            }
        }
    }
}

int main(){
    setnumpass();
    cout<<"===================="<<endl;
    terminalinput();
    cout<<"===================="<<endl;
    printterm(passwords,numpass);
    cout<<"===================="<<endl;
    seepassword();
}