#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include "Clovek.h"

int main(){

    std::ofstream vystupni_soubor("vystup.txt");

    bool dalsi = true;
    while (dalsi == true) {
        Clovek c;
        c.nacti();
        std::cout << "Vase krestni jmeno je " << c.krestni_jmeno << "\n";
        std::cout << "Vase prijmeni je " << c.prijmeni << "\n";
        if (c.i==1){
            std::cout << "Vase vzdelani je ZS \n";
        }
        else if (c.i==2){
            std::cout << "Vase vzdelani je SS \n";
        }
        else if (c.i==3){
            std::cout << "Vase vzdelani je VS \n";
        }
        else {
            std::cout << "Zadali jste cislo, ktere neni v intervalu \n";
        }
        std::cout << "Vase vyska je " << c.vyska << "\n";
        std::cout << "Vase hmotnost je " << c.hmotnost << "\n";
        std::cout << "Vas vek je " << c.vek << "\n";

        vystupni_soubor << c.prijmeni << " ";
        vystupni_soubor << c.krestni_jmeno << " ";

        vystupni_soubor << "Dosazene vzdelani: " << c.edu << " ";

        vystupni_soubor << c.vyska << "cm ";
        vystupni_soubor << c.hmotnost << "kg ";
        vystupni_soubor << c.vek << "let \n";

        //int pocet = 0;
        //info[pocet] = prijmeni;
        //+pocet;

        //sort


        std::cout << "Chcete vlozit dalsi osobu? (ano/ne)";
        std::string j;
        std::cin >> j;
        if(j != "ano") {
            dalsi = false;
        }
    }
    //vystupni_soubor << info[pocet];
    return 0;
}
