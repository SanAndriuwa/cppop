#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Trikampis
{
	private:
		int x1,y1,x2,y2,x3,y3;
	public: 
		Trikampis(int x1,int y1,int x2,int y2,int x3,int y3)
		{
			this->x1=x1;
			this->y1=y1;
			this->x2=x2;
			this->y2=y2;
			this->x3=x3;
			this->y3=y3;
		}
		double S()
		{
			double a,b,c;
			a=(double)sqrt(pow(x2-x1,2)+pow(y2-y1,2));
			b=(double)sqrt(pow(x3-x2,2)+pow(y3-y2,2));
			c=(double)sqrt(pow(x3-x1,2)+pow(y3-y1,2));
			double p;
			p=(double)0.5*(a+b+c);
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		~Trikampis();
};

int main()
{
	double min=0;
	int n;
	cin>>n;
	Trikampis** trikampis= new Trikampis*[n];
	for(int i=0;i<n;i++)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		trikampis[i]=new Trikampis(x1,y1,x2,y2,x3,y3);
		if((trikampis[i]->S())>0)
		{
			min=trikampis[i]->S();
		}
	}

	for(int i=0;i<n;i++)
	{
		if(trikampis[i]->S()!=0)
		{
			if(trikampis[i]->S()<min)
			{
				min=trikampis[i]->S();
			}
		}
	}
	if(min==0)
	{
		cout<<"NO";
	}
	else cout<<fixed<<setprecision(2)<<min;
	delete[] trikampis;
	return 0;
}
