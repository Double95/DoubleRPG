#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include <string>
#include <iostream>

class Arme
{
    public:
        Arme(std::string nom, int degats);
        Arme(int degats);
        void afficher();
        void changer(std::string nomNouvelleArme, int degatsNouvelleArme);
        int getDegats();

    private:
        std::string m_nom;
        int m_degats;
};

#endif // ARME_H_INCLUDED
