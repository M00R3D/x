#include <iostream>
#include <string>


class T1 {
protected:
    int a;

public:
    void captura_a(int valor) {
        a = valor;
    }

    int ver_a() {
        return a;
    }
};

class T2 : public T1 {
public:
    void mostrarT2() {
        std::cout << "Soy un objeto de T2." << std::endl;
    }
};

class T3 : public T1 {
public:
    void mostrarT3() {
        std::cout << "Soy un objeto de T3." << std::endl;
    }
};

class T4 : public T1 {
public:
    void mostrarT4() {
        std::cout << "Soy un objeto de T4." << std::endl;
    }
};

class T5 : public T2 {
public:
    void mostrarT5() {
        std::cout << "Soy un objeto de T5." << std::endl;
    }
};

class T6 : public T2 {
public:
    void mostrarT6() {
        std::cout << "Soy un objeto de T6." << std::endl;
    }
};

class T7 : public T4 {
public:
    void mostrarT7() {
        std::cout << "Soy un objeto de T7." << std::endl;
    }
};

class T8 : public T4 {
public:
    void mostrarT8() {
        std::cout << "Soy un objeto de T8." << std::endl;
    }
};

int main() {
    T5 objetoT5;
    objetoT5.captura_a(42);

    std::cout << "Valor de a en T5: " << objetoT5.ver_a() << std::endl;
    objetoT5.mostrarT2();
    objetoT5.mostrarT5();

    return 0;
}

























// // Declaración de las funciones con la misma firma pero tipos de datos diferentes
// int abs(int n) {
//     return (n < 0) ? -n : n;
// }

// long abs(long n) {
//     return (n < 0) ? -n : n;
// }

// double abs(double n) {
//     return (n < 0) ? -n : n;
// }

// int main() {
//     int num1 = -5;
//     long num2 = -12345L;
//     double num3 = -7.89;

//     // Uso de las funciones abs con diferentes tipos de datos
//     std::cout << "Valor absoluto de " << num1 << " es: " << abs(num1) << std::endl;
//     std::cout << "Valor absoluto de " << num2 << " es: " << abs(num2) << std::endl;
//     std::cout << "Valor absoluto de " << num3 << " es: " << abs(num3) << std::endl;

//     return 0;
// }































// struct carro {
//     std::string plates;
//     std::string model;
//     std::string brand;
//     std::string color;
//     std::string owner;
// };
// void leer(carro &car) 
// {std::cout << "Ingrese la información del carro:" << std::endl;
//     std::cout << "Placas: ";
//     std::cin >> car.plates;
//     std::cout << "Modelo: ";
//     std::cin >> car.model;
//     std::cout << "Marca: ";
//     std::cin >> car.brand;
//     std::cout << "Color: ";
//     std::cin >> car.color;
//     std::cout << "Pro pietario: ";
//     std::cin.ignore(); // Clear newline character from previous input
//     std::getline(std::cin, car.owner);}
// void escribir(const carro &car) {
//     std::cout << "\nInformacion del carro:" << std::endl;
//     std::cout << "Placas: " << car.plates << std::endl;
//     std::cout << "Modelo: " << car.model << std::endl;
//     std::cout << "Marca: " << car.brand << std::endl;
//     std::cout << "Color: " << car.color << std::endl;
//     std::cout << "Propietario: " << car.owner << std::endl;
// }
// int main() {
//     carro carInfo;
//     leer(carInfo);
//     escribir(carInfo);
//     return 0;
// }
