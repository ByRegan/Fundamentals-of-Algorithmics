#include <iostream>

using namespace std;

int main()
{
    int p,e,i,d;
    cout<<"������d,p,e,i��ֵ��"<<endl;
    cin>>e>>i>>d>>p;
    int k;
    for(k=d+1;(k-p)%23;k++);
    for(;(k-e)%28;k=k+23);
    for(;(k-i)%33;k=k+23*28);
    cout<<(k-d)<<"���������߷�"<<endl;
    return 0;
}
