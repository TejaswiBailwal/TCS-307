#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto: "<<endl;
    cin>>n;
    cout<<"The multiplication table from 1 to "<<n<<" is:"<<endl;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<"X"<<i<<"="<<(i*j)<<"\t";
        }
        cout<<endl;
    }
    cout<<"******************************************************"<<endl;
    cout<<"Executed by:Tejaswi Bailwal,Class RollNo:71,Section:A2"<<endl;
    cout<<"******************************************************"<<endl;
    return 0;
}