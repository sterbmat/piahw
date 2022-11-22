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

        std::cout << "Zadejte sve maximalni dosazene vzdelani:\n""(Pro ZS->1; SS->2; VS->3)\n";
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
            std::cout << "Zadejte svoji vysku: \n";
            std::cin >> vyska;
            if(vyska < 240 && vyska > 100) {
                dobre = true;
            }
        }

        std::cout << "Zadejte svoji hmotnost: \n";
        std::cin >> hmotnost;

        dobre = false;
        while(dobre == false) {
            std::cout << "Zadejte svuj vek: \n";
            std::cin >> vek;
            if(vek < 120 && vek > 18) {
                dobre = true;
        }
        }

        //std::vector<std::string> = prijmeni, + " ", + krestni_jmeno, + " ",  + edu, + " ", + vyska, + " ", + hmotnost, + " ", + vek;
}
