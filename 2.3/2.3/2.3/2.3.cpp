#include <iostream>
#include <bitset>
using namespace std;

// структура
struct CharacterBinary {
    unsigned short pos : 6; 
    unsigned short even : 1;  
    unsigned short code : 8;
    unsigned short code_even : 1;
};

// об'єднання
union CharUnion {
    char character;
    CharacterBinary binary;
};

int main() {
    CharUnion a;
    char S[128];
    cout << "Input the text: ";
    cin.get(S, 128);
    for (int i = 0; i < 128; i++)
    {
        a.character = S[i];
        a.binary.pos = i;
        if (i % 2 == 0)a.binary.even = 1; else a.binary.even = 0;
        a.binary.code = S[i];
        a.binary.code_even = 0;
               

        cout << "Character: " <<S[i] << endl;
        cout << bitset<1>(a.binary.code_even);
        cout << bitset<8>(a.binary.code);
        cout << bitset<1>(a.binary.even);
        cout << bitset<6>(a.binary.pos)<<endl;

    }



    return 0;
}
