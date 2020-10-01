#include <iostream>
using namespace std;
int sum(int a, int b)
{return a+b;}
int main()
{
  int a, b;
  cout<<"Enter Two numbers:";
  cin >> a >> b;
  cout <<"Sum of Two NUmbers is:"<< sum(a, b) << endl;
}
