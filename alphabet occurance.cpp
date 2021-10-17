#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[10];
    int len,count=0,i;
    cout<<"Enter a String :"<<endl;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]== 'e')
            count++;
    }
    cout<<"The occurance of E in the given word is "<<count;

    return 0;
}
