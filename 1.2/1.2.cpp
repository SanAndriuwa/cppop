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
    long int S(int a,int b)
    {
      return this->a*this->b;
    }
};
int main()
{
  int n;
  cin>>n;
  int Suma = 0;
  for(int i=0;i<n;i++)
  {
    int a;
    int b;
    cin>>a>>b;
    Staciakampis ab(a,b);
    Suma+=ab.S(a,b);
  }
  cout<<Suma;
}
