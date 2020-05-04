#include <iostream>
#include <cmath>
using namespace std;
class Trikampis
{
  private:
  int a,b,c;
  public:
  Trikampis(int a,int b,int c)
  {
    this->a=a;
    this->b=b;
    this->c=c;
  }
  double S(int a,int b,int c)
  {
    double p;
    p=(double)(this->a+this->b+this->c)/2;
    return (double)sqrt(p*(p-this->a)*(p-this->b)*(p-this->c));
  }
  ~Trikampis()
  {
    cout<<"Išnyk"<<endl;
  }
};
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  Trikampis abc(a,b,c);
  Trikampis abc666(6,6,6);
  if(abc.S(a,b,c)==abc666.S(6,6,6))
  {
    cout<<"Lygus"<<endl;
  }
  else if(abc.S(a,b,c)>abc666.S(6,6,6))
  {
    cout<<"Pirmas"<<endl;
  }
  else if(abc.S(a,b,c)<abc666.S(6,6,6))
  {
    cout<<"Antras"<<endl;
  }
}
