#include <iostream>
#include <vector>
using namespace std;

int main() {
    char operateur;
    int n;
    double nombre, resultat = 0;

    cout << "Entrez l'opération (+, -, *, /) : ";
    cin >> operateur;

    cout << "Combien de nombres voulez-vous entrer ? ";
    cin >> n;

    vector<double> nombres(n);
    cout << "Entrez les " << n << " nombres : ";
    for (int i = 0; i < n; i++) {
        cin >> nombres[i];
    }

    resultat = nombres[0]; 

    for (int i = 1; i < n; i++) {
        switch (operateur) {
            case '+':
                resultat += nombres[i];
                break;
            case '-':
                resultat -= nombres[i];
                break;
            case '*':
                resultat *= nombres[i];
                break;
            case '/':
                if (nombres[i] != 0)
                    resultat /= nombres[i];
                else {
                    cout << "Erreur : division par zéro !" << endl;
                    return 1;
                }
                break;
            default:
                cout << "Opérateur invalide !" << endl;
                return 1;
        }
    }

    cout << "Résultat = " << resultat << endl;
    return 0;
}
