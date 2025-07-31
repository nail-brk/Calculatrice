void afficherResultat(double resultat, bool erreur, char op) {
    if (erreur) {
        if (op == '/') cout << "Erreur : division par zéro !" << endl;
        else cout << "Erreur : opérateur invalide !" << endl;
    } else {
        cout << "Résultat : " << resultat << endl;
    }
}
