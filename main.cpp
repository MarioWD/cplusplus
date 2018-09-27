#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    bool loser, nerdy;
    cout << "are you a loser? true/false" << endl;
    getline(cin, loser);
    cout << "are you a nerd? true/false" << endl;
    getline(cin, nerdy);
    
    if (loser && nerdy)
    {
        cout << "thats nice" << endl;
    }
    else 
    {
        cout << "the lies tho" << endl;
    }
    return 0;
}
