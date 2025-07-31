#include <iostream>
using namespace std;


double calculer(double a, double b, char op, bool& erreur) {
    erreur = false;

    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                erreur = true;
                return 0;
            }
            return a / b;
        default:
            erreur = true;
            return 0;
    }
}


void afficherResultat(double resultat, bool erreur, char op) {
    if (erreur) {
        if (op == '/' || op == '*') cout << "Erreur : division par zéro !" << endl;
        else cout << "Erreur : opérateur invalide !" << endl;
    } else {
        cout << "Résultat : " << resultat << endl;
    }
}

int main() {
    double num1, num2;
    char op;
    bool erreur;

    cout << "Entrez une opération (ex: 5 + 2) : ";
    cin >> num1 >> op >> num2;

    double resultat = calculer(num1, num2, op, erreur);
    afficherResultat(resultat, erreur, op);

    return erreur ? 1 : 0;
}
