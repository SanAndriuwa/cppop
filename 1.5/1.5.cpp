#include <iostream>
using namespace std;
class Staciakampis
{
  private:
  int a,b;
  public:
  Staciakampis(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  long P(int a, int b)
  {
    return (a+b)*2;
  }
  double stacSaps(int a,int b)
  {
    double pi=355./113.;
    double r;
    if(a>b)
    {
      r=(double)b/2;
    }
    else r=(double)a/2;
    return r*r*pi;
  }
  };
int main()
{
  int n;
  cin>>n;
  int Count=0;
  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a>>b;
    Staciakampis ab(a,b);
    if(ab.P(a,b)>(ab.stacSaps(a,b)))
    {
      Count++;
    }
  }
  cout<<Count;
}
