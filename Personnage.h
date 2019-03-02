#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Arme.h"
#include "nbAleatoire.h"

class Personnage
{
    public:
        Personnage(std::string nom);
        Personnage(std::string nom, int degats, int gainOr, int gainXP);
        void afficherEtat(int quelMenu);
        bool estVivant();
        bool achatPotion(int vie, int coutOr);
        bool achatArme(std::string nomNouvelleArme, int degatsNouvelleArme, int coutOr);
        void attaquer(Personnage &cible);
        void recevoirDegats(int degats);
        void afficherEtatCombat();
        int getOr();
        int getXP();
        void recevoirGains(Personnage &cible);
    private:
        std::string m_nom;
        int m_vie;
        int m_xp;
        int m_or;
        int m_niveau;
        Arme m_arme;
};

#endif // PERSONNAGE_H_INCLUDED
