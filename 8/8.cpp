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
			double x2, y2, r2, d;
			x2=y2=r2=6;
    		d=sqrt(pow(x-6,2)+pow(y-6,2));
    		if ((r+6)>=d)
        		return true;
    		else
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
