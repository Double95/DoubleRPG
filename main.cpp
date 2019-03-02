#include <iostream>
#include <string>
#include "menuCombattre.h"
#include "menuMagasin.h"
#include "Personnage.h"

using namespace std;

int main()
{
    bool continuerParti(true);
    string pseudoJoueur;
    int choixMenu(0);

    srand(time(0));

    // PRESENTATION DEBUT DE JEUX + DEMANDE PSEUDO AU JOUEUR
    cout << "####################################" << endl;
    cout << "#           DOUBLE R.P.G           #" << endl;
    cout << "############################By KF###" << endl;

    cout << endl << "Quel est votre pseudo ? : ";
    cin >> pseudoJoueur;

    Personnage joueur(pseudoJoueur);

    // LE JEUX COMMENCE ET CONTINUE EN BOUCLE TANT QUE LE JOUEUR A PAS DECIDER DE QUITTER LA PARTIE
    do
    {
        joueur.afficherEtat(0);

        cout << "1. COMBATTRE" << endl;
        cout << "2. MAGASIN" << endl;
        cout << "3. QUITTER" << endl;

        cout << endl << "Quel est votre choix ? : ";
        cin >> choixMenu;

        switch(choixMenu)
        {
            case 1: // COMBATTRE
                menuCombattre(joueur);
                break;
            case 2: // MAGASIN
                menuMagasin(joueur);
                break;
            case 3: // QUITTER
                continuerParti = false;
                break;
            default:
                choixMenu = 0;
                break;
        }
    }while(continuerParti);

    return 0;
}
