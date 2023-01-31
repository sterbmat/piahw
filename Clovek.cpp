#include "Clovek.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>


void Clovek::nacti()
{
    std::cout << "Zadejte krestni jmeno: ";
        std::cin >> krestni_jmeno;

        std::cout << "Zadejte prijmeni: ";
        std::cin >> prijmeni;

        std::cout << "Zadejte maximalni dosazene vzdelani:\n""(Pro ZS->1; SS->2; VS->3)\n";
        enum vzdelani {ZS,SS,VS};
        bool platne = false;
        while (platne == false) {
            std::cin >> i;
            vzdelani skola = vzdelani(i);
                if(i < 1 && i > 3) {
                    platne = false;
                }
                else {
                    platne = true;
                }
        }

        if (i==1){
            edu = "ZS";
        }
        else if (i==2){
            edu = "SS";
        }
        else if (i==3){
            edu = "VS";
        }

        bool dobre = false;
        while(dobre == false) {
            std::cout << "Zadejte vysku: \n";
            std::cin >> vyska;
            if(vyska < 240 && vyska > 100) {
                dobre = true;
            }
        }

        std::cout << "Zadejte hmotnost: \n";
        std::cin >> hmotnost;

        dobre = false;
        while(dobre == false) {
            std::cout << "Zadejte vek: \n";
            std::cin >> vek;
            if(vek < 120 && vek > 18) {
                dobre = true;
        }
        }
}

void Clovek::vypis()
{
    std::cout << "Krestni jmeno: " << krestni_jmeno << "\n";
        std::cout << "Prijmeni: " << prijmeni << "\n";
        if (i==1){
            std::cout << "Vzdelani: ZS \n";
        }
        else if (i==2){
            std::cout << "Vzdelani: SS \n";
        }
        else if (i==3){
            std::cout << "Vzdelani: VS \n";
        }
        else {
            std::cout << "Zadali jste cislo, ktere neni v intervalu \n";
        }
        std::cout << "Vyska: " << vyska << "\n";
        std::cout << "Hmotnost: " << hmotnost << "\n";
        std::cout << "Vek: " << vek << "\n";
}

void Clovek::uloz(std::ofstream& vystupni_soubor)
{
        vystupni_soubor << prijmeni << " ";
        vystupni_soubor << krestni_jmeno << " ";

        vystupni_soubor << "Dosazene vzdelani: " << edu << " ";

        vystupni_soubor << vyska << " cm ";
        vystupni_soubor << hmotnost << " kg ";
        vystupni_soubor << vek << " let \n";
}
