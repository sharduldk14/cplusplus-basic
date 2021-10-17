#include <iostream>
using namespace std;
int main()
{
    int n[10],i,j,temp;
    cout<<"Enter numbers "<<endl;
    for(i=0;i<=9;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    cout<<"Sorted list is"<<endl;
    for(i=0;i<=9;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}
