#include <bits/stdc++.h>

using namespace std;

class Metimai {
private:
int bandymai, pataikymai, taskai;

public:
Metimai(int t)
{
taskai = t;
cin >> bandymai;
cin >> pataikymai;
}

int taiklumas() {

if (pataikymai <= 0) {
return 0;
}
else {
return taskai * pataikymai;
}
}
double bandymas() {
return bandymai;
};
double pataikymas() {
return pataikymai;
};
};

class Krepsininkas {
private:
list<Metimai> metimai;
int numeris;

public:

Krepsininkas()
{
metimai = list<Metimai>();
numeris = 0;
}

Krepsininkas(int n, list<Metimai> m)
{
metimai = m;
numeris = n;
}

long long taiklumas() {

long long taiklumas = 0;

for (list<Metimai>::iterator it = metimai.begin(); it != metimai.end(); ++it) {
Metimai metimas = *it;
taiklumas += metimas.taiklumas();
}

return taiklumas;
}
double bandymas() {
double bandymai = 0;
for (list<Metimai>::iterator iter = metimai.begin(); iter != metimai.end(); ++iter) {
Metimai metimas = *iter;
bandymai += metimas.bandymas();
}
return bandymai;
}
double pataikymas() {
double pataikymai = 0;
for (list<Metimai>::iterator iter = metimai.begin(); iter != metimai.end(); ++iter) {
Metimai metimas = *iter;
pataikymai += metimas.pataikymas();
}
return pataikymai;
}
double MetimoTaiklumas() {
double bandymai = bandymas();
double pataikymai = pataikymas();
return (pataikymai/bandymai)*100;
}
int getNumeris() {
return numeris;
}

};

class TaskuLenta {
private:
list<Krepsininkas> krepsininkai;

public:
TaskuLenta(list<Krepsininkas> k)
{
krepsininkai = k;
}

Krepsininkas taikliausias() {

long long rezultatas = 0;
double metTaik = 0;
Krepsininkas taikliausias;
for (list<Krepsininkas>::iterator it = krepsininkai.begin(); it != krepsininkai.end(); ++it) {
Krepsininkas krepsininkas = *it;
long long taiklumas = krepsininkas.taiklumas();
double MetimoTaiklumas = krepsininkas.MetimoTaiklumas();
if (metTaik < MetimoTaiklumas) {
metTaik = MetimoTaiklumas;
rezultatas = taiklumas;
taikliausias = krepsininkas;
}
}

return taikliausias;
}
};

int main() {

int n = 0;
cin >> n;

list <Krepsininkas> krepsininkai;

for (int i = 0; i < n; i++) {
int krepsininkoNumeris = i + 1;
list<Metimai> metimai;
metimai.push_back(*(new Metimai(2)));
metimai.push_back(*(new Metimai(3)));
metimai.push_back(*(new Metimai(1)));

Krepsininkas* sitas = new Krepsininkas(krepsininkoNumeris, metimai);

krepsininkai.push_back(*sitas);
}

TaskuLenta* lenta = new TaskuLenta(krepsininkai);
Krepsininkas taikliausias = lenta->taikliausias();

cout <<taikliausias.taiklumas();
}
