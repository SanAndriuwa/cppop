#include <iostream>
using namespace std;
class Brolis
{
	private:
		int x,y,z;
	public:
		Brolis(int x,int y,int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		int visoPinigu(int x,int y,int z)
		{
			return this->x+this->y*2+this->z*5;
		}
		~Brolis()
		{
		}
};

void MaxM(int max,int jp,int mp);

int main()
{
	int x,y,z;
	int suma=0;
	int jp;
	int mp;
	int max=18;
	
	Brolis Aloyzas(6,6,6);
	Brolis Antanas(0,1,3);
	
	suma+=Aloyzas.visoPinigu(6,6,6)+Antanas.visoPinigu(0,1,3);
	
	cin>>x>>y>>z;

	Brolis Jurgis(x,y,z);
	suma+=Jurgis.visoPinigu(x,y,z);
	jp=x+y+z;
	
	cin>>x>>y>>z;
	
	Brolis Martynas(x,y,z);
	suma+=Martynas.visoPinigu(x,y,z);
	mp=x+y+z;
	
	int M;
	cin>>M;
	
	if(suma>=M)
	{
		cout<<"Kombainas bus nupirktas"<<endl;
	}
	else cout<<"Kombaina pirks išsimoketinai"<<endl;
	
	cout<<"Pirkimo akte figuruos ";

  if(18==mp && 18==jp)
  {
    cout<<"Jurgio";
  }
	else MaxM(max,jp,mp);
	cout<<" vardas";
}

void MaxM(int max,int jp,int mp)
{
  if(jp>mp)
	{
		if(jp>=max)
		{
			cout<<"Jurgio";
		}
		else cout<<"Aloyzo";
	}
	else
	{
		if(mp>max)
		{
			cout<<"Martyno";
		}
		else cout<<"Aloyzo";
	}
}
