// COMSC-210 | Lab 14 | Noel Mier-Luna
#include <iostream>
#include <iomanip>
using namespace std;

const int TABLE_WIDTH = 5; // Constant for table width, used in print() function.

class Color {
    int red;
    int green; // Private member variables to store color components.
    int blue;

    public:
    int getRed() const { return red; }
    void setRed(int r) { red = r; }
    int getGreen() const { return green; } // Getter functions const to avoid modifying objects. Used by print() to access private member variables.
    void setGreen(int g) { green = g; }   // Setter functions to modify private member variables.
    int getBlue() const { return blue; }
    void setBlue(int b) { blue = b; }

    void print() const {
        cout << setw(TABLE_WIDTH) << "R: " << getRed() << " "
             << setw(TABLE_WIDTH) << "G: " << getGreen() << " "
             << setw(TABLE_WIDTH) << "B: " << getBlue() << endl; // Prints color's RGB values.
    }
};

int main() {
    Color Yellow; //RGB values are 255, 224, 32.
    Yellow.setRed(255);
    Yellow.setGreen(224); // Setting RGB values for Yellow color using setter functions.
    Yellow.setBlue(32);  // Useful for controlled access to private member variables.
    cout << "Yellow's RGB Values are:" << endl;
    Yellow.print();

    


}