#include <iostream>
#include <bitset>
using namespace std;

// структура
struct CharacterBinary {
    unsigned short highPart : 4; // старші біти
    unsigned short lowPart : 4;  // молодші біти
};

// об'єднання
union CharUnion {
    char character;
    CharacterBinary binary;
};

int main() {
    char characters[] = { 'A', 'B', 'C', 'D', 'E' };
    CharUnion a;

    for (int i = 0; i < 5; i++) {
        a.character = characters[i]; // зберігання символу в об'єднанні

        // Print the original character and its binary representation
        cout << "Character: " << a.character << endl;
        cout << "Initial binary: ";
        cout << bitset<4>(a.binary.lowPart) << " ";
        cout << bitset<4>(a.binary.highPart) << endl;

        cout << "Flipped binary: ";
        cout << bitset<4>(a.binary.highPart) << " ";
        cout << bitset<4>(a.binary.lowPart) << endl;

        cout << endl;
    }


    return 0;
}
