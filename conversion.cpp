cout << "Entrez une valeur positive : ";
cin >> valeur;

if (cin.fail() || valeur < 0) {
    cin.clear();  // efface le flag d’erreur
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // vide le buffer
    cout << " Erreur : valeur invalide !" << endl;
    break;
}