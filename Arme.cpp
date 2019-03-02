#include "Arme.h"

using namespace std;

Arme::Arme(std::string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

Arme::Arme(int degats) : m_degats(degats)
{
}

void Arme::afficher()
{
    cout << m_nom << "  #  0 - " << m_degats << " degats" << endl;
}

void Arme::changer(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nom = nomNouvelleArme;
    m_degats = degatsNouvelleArme;
}

int Arme::getDegats()
{
    return m_degats;
}

