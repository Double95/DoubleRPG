#include "menuCombattre.h"

using namespace std;

void menuCombattre(Personnage &joueur)
{
    int choixMenu(0);
    bool continuerMenu(true);

    do
    {
        joueur.afficherEtat(1);

        cout << "1. Retour             | VIES  | DEGATS | GAINS OR | GAINS XP |" << endl;
        cout << "2. ELFE >-------------|  100  |  0-4   |   0-30   |   0-50   |" << endl;
        cout << "3. OGRE >-------------|  100  |  0-12  |   0-50   |   0-70   |" << endl;
        cout << "4. GEANT >------------|  100  |  0-30  |   0-100  |   0-100  |" << endl;

        cout << endl << "Contre qui ce battre ? : ";
        cin >> choixMenu;

        switch(choixMenu)
        {
            case 1: // RETOUR
                continuerMenu = false;
                break;
            case 2: // ELFE 4 DEGATS
                combat(joueur, 1);
                break;
            case 3: // OGRE
                combat(joueur, 2);

                break;
            case 4: // GEANT
                combat(joueur, 3);
                break;
            default:
                choixMenu = 0;
                break;
        }
    }while(continuerMenu);
}
