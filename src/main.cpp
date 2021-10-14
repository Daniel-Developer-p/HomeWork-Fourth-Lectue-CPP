#include <iostream>

using namespace std;

void triangle();
void cube();
void star();
void circle();

struct Point {
    double x;
    double y;
};

int main() {
    cout << "Which figure you wanna take?\n\n";
    cout << "1. Triangle\n";
    cout << "2. Cube\n";
    cout << "3. Star\n";
    cout << "4. Circle\n";

    int num;
    cout << "Your number is: ";
    cin >> num;

    switch(num) {
        case 1:
            triangle();
            break;
        case 2:
            cube();
            break;
        case 3:
            star();
            break;
        case 4:
            circle();
            break;
        default:
            cout << "Idk this number :(" << endl;
            break;
    }

    return 0;
}

void triangle() {
    Point triangle[3];
    for(int i = 0; i < 3; i++) {
        cin >> triangle[i].x;
        cin >> triangle[i].y;
    }
    cout << "Triangle ABC location by coorinates: " << endl;
    cout << "A(" << triangle[0].x << ";" << triangle[0].y << ")" << endl;
    cout << "B(" << triangle[1].x << ";" << triangle[1].y << ")" << endl;
    cout << "C(" << triangle[2].x << ";" << triangle[2].y << ")" << endl;
}

void cube() {
    Point cube[4];
    for(int i = 0; i < 4; i++) {
        cin >> cube[i].x;
        cin >> cube[i].y;
    }
    cout << "Cube ABCD location by coorinates: " << endl;
    cout << "A(" << cube[0].x << ";" << cube[0].y << ")" << endl;
    cout << "B(" << cube[1].x << ";" << cube[1].y << ")" << endl;
    cout << "C(" << cube[2].x << ";" << cube[2].y << ")" << endl;
    cout << "D(" << cube[3].x << ";" << cube[3].y << ")" << endl;
}

void star() {
    Point star[10];
    for(int i = 0; i < 10; i++) {
        cin >> star[i].x;
        cin >> star[i].y;
    }
    cout << "Star ABCDEFGHII location by coorinates: " << endl;
    cout << "A(" << star[0].x << ";" << star[0].y << ")" << endl;
    cout << "B(" << star[1].x << ";" << star[1].y << ")" << endl;
    cout << "C(" << star[2].x << ";" << star[2].y << ")" << endl;
    cout << "D(" << star[3].x << ";" << star[3].y << ")" << endl;
    cout << "E(" << star[4].x << ";" << star[4].y << ")" << endl;
    cout << "F(" << star[5].x << ";" << star[5].y << ")" << endl;
    cout << "G(" << star[6].x << ";" << star[6].y << ")" << endl;
    cout << "H(" << star[7].x << ";" << star[7].y << ")" << endl;
    cout << "I(" << star[8].x << ";" << star[8].y << ")" << endl;
    cout << "J(" << star[9].x << ";" << star[9].y << ")" << endl;
}

void circle() {
    Point circle[8];
    for(int i = 0; i < 8; i++) {
        cin >> circle[i].x;
        cin >> circle[i].y;
    }

    cout << "Circle ABCDEFGHI location by coorinates: " << endl;
    cout << "A(" << circle[0].x << ";" << circle[0].y << ")" << endl;
    cout << "B(" << circle[1].x << ";" << circle[1].y << ")" << endl;
    cout << "C(" << circle[2].x << ";" << circle[2].y << ")" << endl;
    cout << "D(" << circle[3].x << ";" << circle[3].y << ")" << endl;
    cout << "E(" << circle[4].x << ";" << circle[4].y << ")" << endl;
    cout << "F(" << circle[5].x << ";" << circle[5].y << ")" << endl;
    cout << "G(" << circle[6].x << ";" << circle[6].y << ")" << endl;
    cout << "H(" << circle[7].x << ";" << circle[7].y << ")" << endl;
}