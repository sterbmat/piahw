#ifndef CLOVEK_H
#define CLOVEK_H
#include <iostream>
#include <string>


class Clovek
{
    public:
        std::string krestni_jmeno;
        std::string prijmeni;
        int i;
        float vyska;
        float hmotnost;
        float vek;
        std::string edu;
        void nacti();
        void vypis();
        void uloz(std::ofstream&);

    protected:

    private:
};

#endif // CLOVEK_H
