#include <iostream>
#include <cmath>
#include <iomanip>
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
  		bool arExist(int a,int b,int c)
  		{
  			if( this->a + this->b > this->c || this->a + this->c > this->b || this->b + this->c > this->a)
  			{
				return true;
			}
			else return false;
		}
		~Trikampis()
		{
		}
};
int main()
{
	int n;
	cin>>n;
	double Sum=0;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		Trikampis abc(a,b,c);
		if(abc.arExist(a,b,c))
		{
			Sum+=abc.S(a,b,c);
		}
	}
	cout<<fixed<<setprecision(2)<<Sum;
}
