#include "Personnage.h"

using namespace std;

Personnage::Personnage(std::string nom) : m_nom(nom), m_vie(100), m_xp(0), m_or(50), m_niveau(1), m_arme("Coup de poing", 10)
{
}

Personnage::Personnage(string nom, int degats, int gainOr, int gainXP) : m_vie(100), m_nom(nom), m_arme(degats), m_or(gainOr), m_xp(gainXP)
{
}

void Personnage::afficherEtat(int quelMenu)
{
    system("CLS");
    cout << "===============================================================================" << endl;
    cout << "               " << m_nom << " (NV " << m_niveau << ")" << endl;
    cout << "          " << m_xp << "/100 XP  #  " << m_vie << "/100 VIES  #  " << m_or << " OR" << endl;
    cout << "          ";
    m_arme.afficher();
    cout << "========================================================================By KF==" << endl;

    if(quelMenu == 1) // MENU COMBATTRE
    {
        cout << "#=>    MENU COMBATTRE" << endl;
        cout << "===============================================================================" << endl;
    }
    else if(quelMenu == 2) // MENU MAGASIN
    {
        cout << "#=>    MENU MAGASIN" << endl;
        cout << "===============================================================================" << endl;
    }
    else // MENU PRINCIPAL
    {
        cout << "#=>    MENU PRINCIPAL" << endl;
        cout << "===============================================================================" << endl;
    }
    cout << endl;
}

bool Personnage::estVivant()
{
    return m_vie > 0;
}

bool Personnage::achatPotion(int vie, int coutOr)
{
    if(coutOr <= m_or)
    {
        m_or -= coutOr;
        m_vie += vie;

        if(m_vie > 100)
        {
            m_vie = 100;
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool Personnage::achatArme(string nomNouvelleArme, int degatsNouvelleArme, int coutOr)
{
    if(coutOr <= m_or)
    {
        m_or -= coutOr;
        m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
        return true;
    }
    else
    {
        return false;
    }
}

 void Personnage::attaquer(Personnage &cible)
 {
     int degats = nbAleatoire(m_arme.getDegats());
     cible.recevoirDegats(degats);

     cout << m_nom << " attaque et cause " << degats << " degats." << endl;
 }

 void Personnage::recevoirDegats(int degats)
 {
     m_vie -= degats;

     if(m_vie < 0)
     {
         m_vie = 0;
     }
 }

 void Personnage::afficherEtatCombat()
 {
     cout << "#=> " << m_nom << " : " << m_vie << " vies" << endl;
 }

 int Personnage::getOr()
 {
     return m_or;
 }

 int Personnage::getXP()
 {
     return m_xp;
 }

 void Personnage::recevoirGains(Personnage &cible)
 {
     m_or += cible.getOr();
     m_xp += cible.getXP();

     if(m_xp == 100)
     {
         m_niveau++;
         m_xp = 0;
     }
     else if(m_xp > 100)
     {
         int calculXP = m_xp - 100;
         m_niveau++;
         m_xp = calculXP;
     }

     cout << "===============================================================================" << endl;
     cout << "#=>    COMBAT TERMINER" << endl;
     cout << "===============================================================================" << endl << endl;

     cout << "Vous avez gagner " << cible.getOr() << " or, et " << cible.getXP() << " XP." << endl;
 }
