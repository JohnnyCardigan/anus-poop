#include <iostream>
using namespace std;
//


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
            cin>>simfirst;
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
//------password comparison------------------
int firstwave (string a, string arr[], int simpass[])
{
    int size = a.size();
    for(int y=0; y<numpass;y++)
    {
        int sim=0;
        for(int x=0; x< size;x++)
        {
            if(a[x]==arr[y][x])
            {
                sim+=1;
            }
        }
        simpass[y] = sim;
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