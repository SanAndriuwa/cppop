#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
class Grybautojas
{
	private:
		string vardas;
		int raudonikis,baravykas,sungrybis;
	public:
		Grybautojas(string vardas,int raudonikis,int baravykas,int sungrybis)
		{
			this->vardas=vardas;
			this->raudonikis=raudonikis;
			this->baravykas=baravykas;
			this->sungrybis=sungrybis;
		}	
		int taskai()
		{
			return this->raudonikis*5+this->baravykas*3+this->sungrybis*15;
		}
		string printName()
		{
			return vardas;
		}
};
int main()
{
	int n;
	cin>>n;
	Grybautojas** grybautojas=new Grybautojas*[n];
	for(int i=0;i<n;i++)
	{
		string vardas;
		int raudonikis,baravykas,sungrybis;
		cin>>vardas>>raudonikis>>baravykas>>sungrybis;
		grybautojas[i]=new Grybautojas(vardas,raudonikis,baravykas,sungrybis);
	}
	for(int i=0;i<n-1;i++)
	{
		bool radau=false;
		for(int j=i+1;j<n;j++)
		{
			if(grybautojas[i]->taskai()==grybautojas[j]->taskai())
			{
				if(grybautojas[i]->printName()=="Diskvalifikuotas")
				{
				}
				else 
				{
				grybautojas[j]=new Grybautojas("Diskvalifikuotas",0,0,0);
				radau=true;	
				}
			}				
		}
		if(radau)
		{
			grybautojas[i]=new Grybautojas("Diskvalifikuotas",0,0,0);
		}
	}
	int maxt;
	int imax;
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(grybautojas[i]->printName()=="Diskvalifikuotas")
		{
			
		}
		else
		{
			maxt=grybautojas[i]->taskai();
			imax=i;
			k++;
		}
	}
	if(k==0)
	{
		maxt=grybautojas[0]->taskai();
		imax=0;
	}
	for(int i=0;i<n;i++)
	{
		if(maxt<grybautojas[i]->taskai())
		{
			maxt=grybautojas[i]->taskai();
			imax=i;
		}
	}
	if(grybautojas[imax]->printName()=="Diskvalifikuotas")
	{
		cout<<"MARCINKEVICIUS";
	}
	else cout<<grybautojas[imax]->printName();
	return 0;
}
