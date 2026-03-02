#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Hibás konstansnév 
    std::cout << '1-100 ertekek duplazasa' //Hiányzik a sort záró ';', és a szöveg nem a megfelelő jelek közt van
    for (int i = 0;) //Nincs megadva, hogy meddig, és mekkora lépésekben haladjona ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //Nincs megdva meddig menjen a ciklus
    {
        std::cout << "Ertek:" //Nem irja ki az értéket, és hiányzik a parancs végét jező ';'
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //a változo nem kapott értéket
    for (int i = 0; i < N_ELEMENTS, i++) // ','  a ';' helyett a ciklusban
    {
        atlag += b[i] //hiányzó ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
