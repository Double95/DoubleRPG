#include "menuMagasin.h"

using namespace std;

void menuMagasin(Personnage &joueur)
{
    int choixMenu(0);
    bool continuerMenu(true), confirmeAchat(true);

    do
    {
        joueur.afficherEtat(2);

        if(confirmeAchat == false)
        {
            confirmeAchat = true;
            cout << "#=>  /!\\..PAS ASSEZ D'OR../!\\" << endl << endl;
        }

        cout << "1. Retour             | VIES  | DEGATS | COUTS OR |" << endl;
        cout << "2. POTION >-----------|  +10  |        |    10    |" << endl;
        cout << "3. POTION >-----------|  +50  |        |    50    |" << endl;
        cout << "4. POTION >-----------| +100  |        |   100    |" << endl;
        cout << "5. HACHE >------------|       |  0-20  |    75    |" << endl;
        cout << "6. EPEE >-------------|       |  0-45  |   160    |" << endl;
        cout << "7. SABRE >------------|       |  0-85  |   320    |" << endl;

        cout << endl << "Que voulez-vous acheter ? : ";
        cin >> choixMenu;

        switch(choixMenu)
        {
            case 1: // RETOUR
                continuerMenu = false;
                break;
            case 2: // POTION +10 VIES? 10 OR
                confirmeAchat = joueur.achatPotion(10,10);
                break;
            case 3: // POTION +50 VIES? 50 OR
                confirmeAchat = joueur.achatPotion(50,50);
                break;
            case 4: // POTION +100 VIES? 100 OR
                confirmeAchat = joueur.achatPotion(100,100);
                break;
            case 5: // HACHE 20 DEGATS 75 OR
                confirmeAchat = joueur.achatArme("Hache", 20, 75);
                break;
            case 6: // EPEE 45 DEGATS 160 OR
                confirmeAchat = joueur.achatArme("Epee", 45, 160);
                break;
            case 7: // SABRE 85 DEGATS 320 OR
                confirmeAchat = joueur.achatArme("Sabre", 85, 320);
                break;
            default:
                choixMenu = 0;
                break;
        }
    }while(continuerMenu);
}
