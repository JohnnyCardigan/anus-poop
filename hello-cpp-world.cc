#include <string>
#include <iostream>
using namespace std;

/*string passwords[] = {"abc","def","ghi","jkl","mno"};
int main() {
//    cout<<passwords[0]<<endl<<passwords[1]<<endl<<passwords[2]<<endl<<passwords[3]<<endl<<passwords[4];
/*int passx=0;
    while (passx<5){
        cout<<passwords[passx]<<endl;
        passx+=1;
        
    }*/
/*    for(int passx=0;passx<5;passx++){
        cout<<passwords[passx]<<endl;
    }*/
/*    
string passwords[15];
int main(){
    for(int passx=0;passx<6;passx++){
        passwords[passx]="Repeat me";
    }
       for(int passx=1;passx<6;){
        passwords[passx]="No, you can't make me!";
        passx+=2;
    }
     for(int passx=0;passx<15;passx++){
        cout<<passwords[passx]<<endl;
    }
 }  */ 
/*
string passwords[6];
int repeatme(){
        for(int passx=0;passx<6;passx++){
        passwords[passx]="Repeat me";
    }
       for(int passx=1;passx<6;){
        passwords[passx]="No, you can't make me!";
        passx+=2;
    }
     for(int passx=0;passx<6;passx++){
        cout<<passwords[passx]<<endl;
    }
}
int main(){
    repeatme();
}
*/
/*
string passwords[5];
string fromterm;
int terminalinput(){
   for(int passx=0;passx<5;passx++){
        cin>>fromterm;
        passwords[passx]=fromterm;
    }
    cout<<endl;
    for(int passx=0;passx<5;passx++){
        cout<<"Password: "<<passwords[passx]<<endl;
    }
}

int main(){
    terminalinput();
}*/
/*
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
}*/


//=============GLOBAL VARIABLES=============================
int numpass;
int primepass;
int secpass;
int tertpass;
int quatpass;
int simfirst;
int simsecond;
int simthird;
string *passwords;
string fromterm;
string primarypass;
string secondarypass;
string tertiarypass;
string quaternarypass;
//==================FUNCTIONS===============================
//#######---test functions using wordlist: KING, GONG, GONE, FORE, FISH, MIST, BENT; correct answer is KING---#######
//---------------input number of passwords------------------------
void setnumpass()
{
    cout<<"Please specify number of passwords:\n";
    cin>>numpass;
}
//--------------input all passwords--------------------------
void terminalinput()
{
    if(numpass<5)
    {
        cout<<"Hey moron, you get four guesses, so just try each one.\nYou need a program to tell you that? GET A GRIP!!!!!!\n";
    }
    else
    {
        passwords = new string[numpass];
        cout<<"Please enter "<< numpass <<" passwords:\n";
        for(int passx = 0; passx<numpass; passx++)
        {
            cin>>fromterm;
            passwords[passx] = fromterm;
        }
    }
}
//------------print password list-----------------------------
void printterm(string arr[], int size)
{
    if(numpass<5)
    {
        
    }
    else
    {
        for(int x=0; x<size; x++)
        {
            cout<<"Password #"<<x+1<<": "<<arr[x]<<endl;
            //cout << "First letter of word #" << x+1 << " is " << arr[x][0] << endl;
        }
    }    
}
//----------first guess------------------------------------------------
void firstattempt()
{
    if(numpass<5)
    {
        cout<<"ERROR! ERROR! NOT ENOUGH PASSWORDS! SELF-DESTRUCT IN 5...4...3...2...\n";
    }
    else
    {
        cout<<"Please enter 1-"<<numpass<<" to choose your first password:"<<endl;
        cin>>primepass;
        // AND:  &&
        // OR:   ||
            while( primepass<1 || primepass>numpass )
            {
            cout<<"Password #"<<primepass<<" does not exist.\n";
            cout<<"Please enter 1-"<<numpass<<" to choose your first password:"<<endl;
            cin>>primepass;
            }
            cout<<"First choice is password <"<<passwords[primepass-1]<<">"<<endl;
            primarypass=passwords[primepass-1];
            cout<<"How many letters are correct?\n";
            cin>>primepass;
    }
}
//--------QA for guess assignment--------------------------------------------------
void checkpass()
{
    if(numpass<5)
    {
        
    }
    else
    {
    cout<<"Password: <"<<primarypass<<"> has been assigned as your most recent guess,\n";
    cout<<"with ("<<primepass<<") correct letters.\n";
    }
}
//---------password comparison-------------------------------------------------
/*
int similarity(string a, string b)
{
    // the std::string::size() member function is always tied to a particular instance of the string object
    int size = a.size();
    int sim = 0;
    for(int x = 0; x < size; x++)
    {
        if( a[x] == b[x] )
        {
            sim+=1;
        }
    }
    return sim;
}*/
//=======MAIN==========MAIN===========MAIN=================
int main(){
    setnumpass();
    cout<<"===================="<<endl;
    terminalinput();
    cout<<"===================="<<endl;
    printterm(passwords,numpass);
    cout<<"===================="<<endl;
    firstattempt();
    cout<<"===================="<<endl;
    checkpass();
    cout<<"===================="<<endl;

//    cout << similarity(passwords[0],passwords[1]) << endl;
}