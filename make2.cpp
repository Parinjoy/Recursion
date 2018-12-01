#include<iostream>
using std::cout;
using std::cin;
int f(int x)
{
if (x==0) return 1;
else return (x*f(x-1));
}
int main(){
int n;
cout<<"Enter the no. whose factorial is to be printed"<<"\n";
cin >> n;
cout << f(n);
return 0;
}
