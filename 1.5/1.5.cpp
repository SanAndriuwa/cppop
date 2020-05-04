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
    return (this->a+this->b)*2;
  }
  double stacSaps(int a,int b)
  {
    double pi=355/113;
    int r;
    if(a>=b)
    {
      r=this->b/2;
    }
    else r=this->a/2;
    return (double)r*r*pi;
  }
  ~Staciakampis()
  {};
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
    if(ab.P(a,b)>static_cast<double>(ab.stacSaps(a,b)))
    {
      Count++;
    }
  }
  cout<<Count;
}
