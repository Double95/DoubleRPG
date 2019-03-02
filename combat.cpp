#include "combat.h"

using namespace std;

void combat(Personnage &joueur, int monstre)
{
    int gainOr(0), gainXP(0);

    if(monstre == 2) // OGRE 12 DEGATS 50 OR 70XP
    {
        gainOr = nbAleatoire(50);
        gainXP = nbAleatoire(70);

        Personnage ogre("Ogre", 12, gainOr, gainXP);

        do
        {
            system("CLS");
            cout << "===============================================================================" << endl;
            cout << "#=>    COMBAT" << endl;
            cout << "===============================================================================" << endl << endl;

            joueur.attaquer(ogre);
            ogre.attaquer(joueur);

            joueur.afficherEtatCombat();
            ogre.afficherEtatCombat();

            system("PAUSE");
        }while(ogre.estVivant() && joueur.estVivant());

        // VERIFIER SI TOUJOURS VIVANT
        bool estVivant;
        estVivant = joueur.estVivant();
        if(estVivant == false)
        {
            system("CLS");
            cout << endl << "     #=> GAME OVER !" << endl << endl;
            system("PAUSE");
            exit(0);
        }
        else
        {
            system("CLS");
            joueur.recevoirGains(ogre);
            system("PAUSE");
        }
    }
    else if(monstre == 3) // GEANT 30 DEGATS 100 OR 100 XP
    {
        gainOr = nbAleatoire(100);
        gainXP = nbAleatoire(100);

        Personnage geant("Geant", 30, gainOr, gainXP);

        do
        {
            system("CLS");
            cout << "===============================================================================" << endl;
            cout << "#=>    COMBAT" << endl;
            cout << "===============================================================================" << endl << endl;

            joueur.attaquer(geant);
            geant.attaquer(joueur);

            joueur.afficherEtatCombat();
            geant.afficherEtatCombat();

            system("PAUSE");
        }while(geant.estVivant() && joueur.estVivant());

        // VERIFIER SI TOUJOURS VIVANT
        bool estVivant;
        estVivant = joueur.estVivant();
        if(estVivant == false)
        {
            system("CLS");
            cout << endl << "     #=> GAME OVER !" << endl << endl;
            system("PAUSE");
            exit(0);
        }
        else
        {
            system("CLS");
            joueur.recevoirGains(geant);
            system("PAUSE");
        }
    }
    else // ELFE 4 DEGATS 30 OR 50 XP
    {
        gainOr = nbAleatoire(30);
        gainXP = nbAleatoire(50);

        Personnage elfe("Elfe", 4, gainOr, gainXP);

        do
        {
            system("CLS");
            cout << "===============================================================================" << endl;
            cout << "#=>    COMBAT" << endl;
            cout << "===============================================================================" << endl << endl;

            joueur.attaquer(elfe);
            elfe.attaquer(joueur);

            joueur.afficherEtatCombat();
            elfe.afficherEtatCombat();

            system("PAUSE");
        }while(elfe.estVivant() && joueur.estVivant());

        // VERIFIER SI TOUJOURS VIVANT
        bool estVivant;
        estVivant = joueur.estVivant();
        if(estVivant == false)
        {
            system("CLS");
            cout << endl << "     #=> GAME OVER !" << endl << endl;
            system("PAUSE");
            exit(0);
        }
        else
        {
            system("CLS");
            joueur.recevoirGains(elfe);
            system("PAUSE");
        }
    }
}
