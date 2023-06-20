#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    string s;
    cin >> a;

    for(int i=0; i<a; i++)
    {
        cin >> s;

       if(s.length()>10)
       {
           cout << s[0] << s.length()-2 << s[s.length()-1] << "\n";
       }
       else
       {
           cout << s << "\n";
       }
    }


    return 0;
}
