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
    bool arSvienodi(int a,int b)
    {
      if(this->a*this->b==6*9)
      {
        return true;
      }
      else return false;
    }
    long S(int a,int b)
    {
      return this->a*this->b+6*9;
    }
    long P(int a,int b)
    {
      return (a+b)*2+(6+9)*2;
    }
};
int main()
{
  int a,b;
  cin>>a>>b;
  Staciakampis ab(a,b);
  if(ab.arSvienodi(a,b))
  {
    cout<<ab.S(a,b);
  }
  else cout<<ab.P(a,b);
}
