#include <iostream>
#include <cmath>
using namespace std;
class Apskritimas
{
	private:
		int	x,y,r;
	public:
		Apskritimas(int x,int y,int r)
		{
			this->x=x;
			this->y=y;
			this->r=r;
		}
		bool arKertasi()
		{
			double x2=6;
			double y2=6;
			double r2=6;
			double sum = r + r2;
			double distance = (double)sqrt(pow(x2-x,2)+pow(y2-y,2));
    		double diff = abs(r - r2);
    		if( diff > distance ) return false;
    		if( diff == distance ) return false;
    		if( distance < sum ) return true; 
    		if( distance == sum ) return false;
    		return false;
		}
};
int main()
{
	int n;
	cin>>n;
	int k=0;
	Apskritimas** apskritimas=new Apskritimas*[n];
	for(int i=0;i<n;i++)
	{
		int x,y,r;
		cin>>x>>y>>r;
		apskritimas[i]=new Apskritimas(x,y,r);
	}
	
	for(int i=0;i<n;i++)
	{
		if(apskritimas[i]->arKertasi())
		{
			k++;
		}
		else
		{
		}
	}
	cout<<k;
	return 0;
}
