// strings as array of characters s1[ ]
// strings declared by class string st1, ss

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[ ]=" s1, s2, s3,&s4,";
    cout << sizeof(s1) << " " << strlen(s1) << endl;

    int i,k ;
    cout << " start" << endl;
    cout<<" s1 " << s1 << endl;

    k=0;
    i=0;
    while(s1[i])
    {
        if(s1[i]=='s')
            k++;
        cout << s1[i] << endl;
        i++;
    }
    cout << " number of char " << k << endl;

    string st1, ss;
    st1="lec1, lec2, and lec3 are new lecs";
    ss="lec";
    k=st1.find(ss);
    cout<<k<<endl;

    while(k > 0)
    {
        st1[k]='s';
        k= st1.find(ss,k+1);
        cout << " new string " << st1;
        cout << k << endl;
    }
}