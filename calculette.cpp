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
