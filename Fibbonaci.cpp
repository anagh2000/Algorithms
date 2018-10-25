#include<iostream>
using namespace std;
void main()
{
  int a,b,n,sum;
  a=0;
  b=1;
  sum=0;
  cout<<"\nEnter number of terms you want in series:-";
  cin>>n;
  cout<<"The series is :-";
  cout<<a<<" "<<b<<" ";
  for(int i=3;i<=n;i++)
  {
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
  }
}
