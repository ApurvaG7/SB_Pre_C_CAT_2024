
// Question 1:
// Create class Chair having following members.
// data members:
// 	int height
// 	int weight
// 	double price;
// 	Color color (use enum for color)
// member functions
// 	parameterless Constructor
// 	parameterized constructor
// 	Input function
// 	Display function
// 	SetPrice function(static)
// 	Destructor
// Note: price must be shared by all the objects.
// -----------------------------------------------------
#include <iostream>
using namespace std;

class Chair {
public:
    int ht;
    int wt;
    int price;
    
    enum class Color { Red, Green, Blue, Black, White };

    Chair(int h = 0, int w = 0, int p = 0, Color c = Color::Black)
        : ht(h), wt(w), price(p), clr(c) {}

    void input() {
        cout << "Enter height: ";
        cin >> ht;
        cout << "Enter weight: ";
        cin >> wt;
        cout << "Enter price: ";
        cin >> price;
        
        int key;
        cout << "\nEnter clr (1-Red, 2-Green, 3-Blue, 4-Black, 5-White): ";
        cin >> key;
        switch (key) {
            case 1:
                clr = Color::Red;
                break;
            case 2:
                clr = Color::Green;
                break;
            case 3:
                clr = Color::Blue;
                break;
            case 4:
                clr = Color::Black;
                break;
            case 5:
                clr = Color::White;
                break;
            default:
                cout << "Invalid Color Choice. Defaulting to Black." << endl;
                clr = Color::Black;
        }
    }

    void Display() const {
        cout << "\nThe ht: " << ht << "\nThe wt: " << wt << "\nThe Color: ";
        switch (clr) {
            case Color::Red:
                cout << "Red";
                break;
            case Color::Green:
                cout << "Green";
                break;
            case Color::Blue:
                cout << "Blue";
                break;
            case Color::Black:
                cout << "Black";
                break;
            case Color::White:
                cout << "White";
                break;
        }
        cout << "\nPrice Rs: " << price << endl;
    }

private:
    Color clr; 
};

int main() {
    Chair c1;
    c1.input();
    c1.Display();
    
    Chair c2(58,25,587);
    c2.Display();
    
    Chair c3;
    c3.input();
    c3.Display();

    return 0;
}
