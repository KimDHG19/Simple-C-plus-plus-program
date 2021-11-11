#include <iostream>
using namespace std;
int main() {
    string mystr;
    int mystr2;
    cout << "What's your name? "<<endl;
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your year of birth? "<<endl;
    cin>>mystr2;
    int mystr3 = 2020 - mystr2;
    cout << "hello " << mystr << " you are " << mystr3 << "-years old\n";
    return 0;
}

