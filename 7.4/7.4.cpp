#include <iostream>
#include <iomanip>
using namespace std;
class Krepsininkas
{
	private:
		int np2,p2,np3,p3,nb,pb;
	public:
		Krepsininkas(int np2,int p2,int np3,int p3,int nb,int pb)
		{
			this->np2=np2;
			this->p2=p2;
			this->np3=np3;
			this->p3=p3;
			this->nb=nb;
			this->pb=pb;
		}
		long int naudingumoBalai()
		{
			return p2*2+p3*3+pb-np2-np3-nb;
		}
		double taiklumas()
		{
			int mesti;
			int pataikyti;
			mesti=np2+np3+nb;
			pataikyti=p2+p3+pb;
			return (double)pataikyti/mesti*100;
		}
		~Krepsininkas();
};
int main()
{
	int n;
	int imax=0;
	cin>>n;
	Krepsininkas** krepsininkas=new Krepsininkas*[n];
	for(int i=0;i<n;i++)
	{
		int np2,p2,np3,p3,nb,pb;
		cin>>np2>>p2>>np3>>p3>>nb>>pb;
		krepsininkas[i]=new Krepsininkas(np2,p2,np3,p3,nb,pb);
	}
	long long int nbmax=krepsininkas[0]->naudingumoBalai();
	for(int i=0;i<n;i++)
	{
		if(krepsininkas[i]->naudingumoBalai()>nbmax)
		{
			nbmax=krepsininkas[i]->naudingumoBalai();
			imax=i;
		}
	}
	cout<<fixed<<setprecision(2)<<krepsininkas[imax]->taiklumas();
	delete[] krepsininkas;
	return 0;
}
