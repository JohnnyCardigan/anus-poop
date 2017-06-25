#include <iostream>
using namespace std;

int numpass=5;
string passwords[100];
string fromterm;
void terminalinput(){
    for(int passx=0;passx<numpass;passx++){
        cin>>fromterm;
        passwords[passx]=fromterm;
    }
}
void printterm(string arr[], int size){
    for(int x=0;x<size;x++){
        cout<<"Password: "<<arr[x]<<endl;
    }
}

int main(){
    terminalinput();
    cout<<"===================="<<endl;
    printterm(passwords,numpass);
}