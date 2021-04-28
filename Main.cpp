#include "NumberWithUnits.hpp"
#include <sstream>
using namespace::std;
using namespace::ariel;


int main() {
    ofstream units_file;
    units_file.open ("units.txt");
    units_file << "1 BTC = 54926 USD" << endl;
    units_file << "1 ETH = 2629 USD" << endl;
    units_file << "1 DOGE = 0.27 USD" << endl;
    units_file << "1 USD = 3.33 ILS" << endl;
    units_file << "1 ADA = 1.3 USD" << endl;
    units_file.close(); 
    ifstream units_file_stream{"units.txt"};
    NumberWithUnits::read_units(units_file_stream); 
    cout << "( ͡° ͜ʖ ͡°) Welcome to the Crypto Trading Unit! ( ͡° ͜ʖ ͡°)" << endl << endl;
    cout << "              you shouls Trade With Us !  " << endl << endl;
    istringstream iss{" 1[BTC] 1 [ETH] 1 [DOGE ] 1[USD] 1[ILS] 1[ADA]"};
    NumberWithUnits BTC(8, "BTC"), ETH(3, "BTC"), DOGE(7, "ETH"), USD(6, "ILS"), ILS(1, "ADA"), ADA(7, "ADA");
    iss >> BTC >> ETH >> DOGE >> USD >> ILS >> ADA;
    cout << BTC << " " << ETH << " " << DOGE << " " << USD << " " << ILS << " " << ADA << endl;
    cout << "In the line below will be printed the amount of alternative currencies required to get 1 BTC, look how strong the BTC is! " << endl << endl;
    cout << ETH+BTC << " " << DOGE+BTC << " " << USD+BTC << " " << ADA+BTC << endl;
}