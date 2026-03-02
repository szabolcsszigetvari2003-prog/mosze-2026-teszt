#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    long *b = new long[N_ELEMENTS]; //Hibás konstansnév, az int nem elég nagy
    std::cout << "1-100 ertekek duplazasa"; //Hiányzik a sort záró ';', és a szöveg nem a megfelelő jelek közt van
    for (int i = 0;i > b, i++) //Nincs megadva, hogy meddig, és mekkora lépésekben haladjona ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i > *b; i++) //Nincs megdva meddig menjen a ciklus
    {
         std::cout << "Ertek: " << b[i]; //Nem irja ki az értéket, és hiányzik a parancs végét jező ';'
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //a változo nem kapott értéket
    for (int i = 0; i < N_ELEMENTS; i++) // ','  a ';' helyett a ciklusban
    {
        atlag += b[i]; //hiányzó ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; //lefoglalt memoria tisztitasa
    std::cout << "Program vege" << std::endl;
    return 0;
}
