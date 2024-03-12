#include <iostream>

//define IDADE_MINIMA 18,
//using std::cin, std::cout, std::endl;
using namespace std;

int main(){
    int x;

    cout << "Digite um número: " << endl;
    cin >> x;

    if (x >= 18)
    {
        cout << "Você é velho" << endl;  
    } else {
        cout << "Você é novo" << endl;
    }
    
    return 0;
}