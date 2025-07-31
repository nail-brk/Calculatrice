#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    double num1, num2;
    char operateur;
    double resultat;

    cout  << "Entrez une opération (ex: 5 + 2) : ";
    cin >> num1 >> operateur >> num2;

    switch (operateur) {
    case '+':
        resultat = num1 + num2;
        break;
    case '-':
        resultat = num1 - num2;
        break;
    case '*':
        resultat = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            resultat = num1 / num2;
        else {
            cout << "Erreur : division par zéro !" << endl;
            return 1;
        }
        break;
    default:
        cout << "Opérateur invalide !" << endl;
        return 1;
    }

    cout << "Résultat : " << resultat << endl;
    return 0;
}