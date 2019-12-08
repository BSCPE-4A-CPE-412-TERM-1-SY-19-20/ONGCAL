//Id No. 709493//

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    int q, count=0, countt;
    cout<<"Enter String: ";
    cin>>str;
    cout<<str;
    for(q=0; q<strlen(str); q++)
    {
        if(str[q]=='a')
        {
            if (str[q+1]=='b'&&str[q+2]=='b'&&str[q+3])
            {
            countt++;
            }
            else
            {
                cout<<"\nInvalid";
                count++;
                break;
            }
        }
        if(str[q]!='a'&&str[q]!='b')
        {
            cout<<"\nInvalid";
            count++;
            break;
        }
    }
    
    if(countt>0&&count==0)
    {
        cout<<"\nAccepted";
    }
    return 0;
}
