#include<iostream>
using namespace std;
using std::cout;
int fibo(int x)
{
if (x==1) return 1;
else if (x==2) return 1;
else return (fibo(x-1) + fibo (x-2));
}
int main()
{
int n;
cin >> n;
cout << fibo(n);
return 0;
}
