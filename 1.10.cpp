#include <iostream>
#include <string>
using namespace std;
class sample{
    public:
    int n,a=0;
    int calc()
    {
        while(n>0)
{
n=n/10;
a++;
}
cout<<"No. of digits in given number is: "<<a;
return 0;    
    }
};
int main()
{
sample s;
cout<<"Enter any num : ";
cin>>s.n;
s.calc();
return 0;
}
