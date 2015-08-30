#include <iostream>
using namespace std;

void conversion (double f) {
double result = ((5)*(f-32))/9 ;
cout << f ;
cout << " grados Fahrenheit son iguales a ";
cout << result;
cout << " grados Celsius." << endl;
}

int main () {
double f;
cout << "Escibre tu temperatura en Fahrenheit: ";
cin >> f;
conversion (f);
if (f < 212) {
cout << "El agua no hierve a esta temperatura. (Bajo situaciones estandard)";
cout << endl;
} else {
cout << "El agua si hierve a esta temperatura. (Bajo situaciones estandard)";
cout << endl;
}
return 0;
}
