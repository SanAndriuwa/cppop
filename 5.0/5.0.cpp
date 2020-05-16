#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Trikampis{
private:
int x1,y1,x2,y2,x3,y3;
double a, b, c;
public:
Trikampis(int x1, int y1, int x2, int y2, int x3, int y3)
{
this->x1 = x1;
this->y1 = y1;
this->x2 = x2;
this->y2 = y2;
this->x3 = x3;
this->y3 = y3;

}
double Plotas()
{
double S;
S=sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));

return S;
}
bool tikrinimas()
{
a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));

if(a+b>c && a+c>b && b+c>a) return true;
else return false;
}
};

int main()
{
int n, x1, y1, x2, y2, x3, y3;
double sum=0;

cin >> n;

for (int i=0; i<n; i++)
{
cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;

Trikampis trik(x1,y1,x2,y2,x3,y3);

if(trik.tikrinimas())
{
sum+=trik.Plotas();
}
}

if(sum==0) cout << "NO";
else cout << fixed << setprecision(3) << sum;

return 0;
}
