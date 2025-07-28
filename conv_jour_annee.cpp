#include <iostream>
using namespace std;

int main ()
{
    int nombre, sem, jour, mois, annee, reste;
    do
    {
        cout<<"donnez un entier"<<endl;
        cin >> nombre ;
    } while (nombre<0);
    reste= nombre % 365;
    mois = reste / 30;
    reste=reste % 30;
    annee = nombre / 365;
    sem = reste / 7;
    jour = reste % 7;
    cout<<nombre<<" jours = "<<annee<<" année "<<mois<<" mois "<<sem<<" semaines et "<<jour<<" jours"<<endl;
    return 0;
}
