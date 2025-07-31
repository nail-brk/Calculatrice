ofstream fichier("historique.txt", ios::app);
fichier << "Conversion choisie : résultat = " << resultat << endl;
fichier.close();