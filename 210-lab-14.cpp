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
    int getGreen() const { return green; } // Getter functions const to avoid modifying objects.
    void setGreen(int g) { green = g; }   // Setter functions to modify private member variables.
    int getBlue() const { return blue; }
    void setBlue(int b) { blue = b; }

    void print() const {
        cout << setw(TABLE_WIDTH) << "R: " << getRed() << " "
             << setw(TABLE_WIDTH) << "G: " << getGreen() << " "
             << setw

    }
}

int main() {


}