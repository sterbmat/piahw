#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstring>
#include "Clovek.h"

int main(){

    std::ofstream vystupni_soubor("vystup.txt");
    std::vector<Clovek> lidi;

    bool dalsi = true;
    while (dalsi == true) {
        Clovek c;
        c.nacti();
        lidi.push_back(c);
        std::cout << "Chcete vlozit dalsi osobu? (ano/ne)";
        std::string j;
        std::cin >> j;
        if(j != "ano") {
            dalsi = false;
        }
    }

    std::sort(lidi.begin(), lidi.end(), [](const Clovek& lhs, const Clovek& rhs) {
        return lhs.prijmeni < rhs.prijmeni;
    });

    for(int i = 0;i<lidi.size();i++) {
        lidi[i].vypis();
        lidi[i].uloz(vystupni_soubor);
    }

    return 0;
}
