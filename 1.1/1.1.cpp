#include <iostream>

using namespace std;

class P
{
  private:
    int a,b;
  public:
    P(int a,int b)
    {
      this->a=a;
      this->b=b;
    }
    int Add(int a,int b)
    {
      return (a+b)*2;
    }
};

int main()
{
  int a,b;
  cin>>a>>b;
  P ab(a,b);
  cout<<ab.Add(a,b);
  return 0;
}
