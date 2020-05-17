#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Vamzdis
{
	private:
		int L,R,D;
	public:
		Vamzdis(int L,int R,int D)
		{
			this->L=L;
			this->R=R;
			this->D=D;
		}
		double turis()
		{
			double pi=355./113.;
			double a=(double)D/2;
			double r=(double)R/2;
			double Vc=(double)pi*pow(r,2)*L;
			double Vs=(double)3*sqrt(3)/2*pow(a,2)*L;
			return Vs-Vc;
		}	
		double S()
		{
			double pi=355./113.;
			double a=(double)D/2;
			double r=(double)R/2;
			double Ss=(double)3*a*(sqrt(3)*a+2*L)-pi*pow(r,2)+(2*pi*r*L-pi*pow(r,2));
			return Ss;
		}
};
int main()
{
	int n;
	double suma=0;
	cin>>n;
	Vamzdis** vamzdis=new Vamzdis*[n];
	for(int i=0;i<n;i++)
	{
		int L,R,D;
		cin>>L>>R>>D;
		vamzdis[i]=new Vamzdis(L,R,D);
		suma+=vamzdis[i]->S();
	}
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" vamzdio turis: "<<fixed<<setprecision(3)<<vamzdis[i]->turis()<<endl;
	}
	cout<<"Pavirsiu plotu suma yra "<<fixed<<setprecision(3)<<suma;
	return 0;
}
