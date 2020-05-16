#include <iostream>
#include <string>
using namespace std;
class Studentas
{
	private:
		string vardas;
		int x1,x2,x3,x4,x5;
	public:
		Studentas(string vardas, int x1,int x2,int x3,int x4,int x5)
		{
			this->vardas=vardas;
			this->x1=x1;
			this->x2=x2;
			this->x3=x3;
			this->x4=x4;
			this->x5=x5;
		}
		double vidurkis()
		{
			int sum;
			sum=this->x1+this->x2+this->x3+this->x4+this->x5;
			return (double)sum/5;
		}
		bool arDaugiau9()
		{
			int suma;
			suma=this->x1+this->x2+this->x3+this->x4+this->x5;
			if(((double)suma/5)>9)
			{
				return true;
			}
			else return false;
		}
		void printName()
		{
			cout<<this->vardas;
		}
		~Studentas()
		{
			cout<<"++";
		}
};

int main()
{
	int n;
	cin>>n;
	Studentas** studentas=new Studentas*[n];
	for (int i=0;i<n;i++) 
	{ 
		string vardas;
		int x1,x2,x3,x4,x5;
		cin>>vardas>>x1>>x2>>x3>>x4>>x5;
		studentas[i]= new Studentas(vardas,x1,x2,x3,x4,x5);
    }
    int k=0;
    int imax=0;
    double vmax=studentas[0]->vidurkis();
    for (int i=0;i<n;i++)
    {
    	if((double)studentas[i]->arDaugiau9())
    	{
    		k++;
		}
	
		if((double)studentas[i]->vidurkis()>vmax)
		{
			vmax=studentas[i]->vidurkis();
			imax=i;
		}
	}

	cout<<k<<" studentas/ai gaus stipendija."<<endl;
	cout<<"Geriausiai mokosi ";
	studentas[imax]->printName();
 	cout<<".";
	delete[] studentas;
	return 0;
}
