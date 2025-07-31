int main() {
    int choix;
    double valeur, resultat;

    do {
        cout << "\n--- Menu de conversion ---" << endl;
        cout << "1. Celsius -> Kelvin" << endl;
        cout << "2. Mètres -> Pieds" << endl;
        cout << "3. Euro -> Dinar algérien" << endl;
        cout << "4. Euro -> Dollar américain" << endl;
        cout << "5. km/h -> m/s" << endl;
        cout << "0. Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Température (°C) : ";
                cin >> valeur;
                cout << "Résultat : " << celsiusVersKelvin(valeur) << " K" << endl;
                break;
            case 2:
                cout << "Distance (mètres) : ";
                cin >> valeur;
                cout << "Résultat : " << metresVersPieds(valeur) << " pieds" << endl;
                break;
            case 3:
                cout << "Montant (€) : ";
                cin >> valeur;
                cout << "Résultat : " << euroVersDinar(valeur) << " DZD" << endl;
                break;
            case 4:
                cout << "Montant (€) : ";
                cin >> valeur;
                cout << "Résultat : " << euroVersDollar(valeur) << " USD" << endl;
                break;
            case 5:
                cout << "Vitesse (km/h) : ";
                cin >> valeur;
                cout << "Résultat : " << kmhVersMs(valeur) << " m/s" << endl;
                break;
            case 0:
                cout << "Fermeture du programme." << endl;
                break;
            default:
                cout << "Choix invalide." << endl;
        }

    } while (choix != 0);

    return 0;
}