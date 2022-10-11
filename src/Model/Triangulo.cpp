//
// Created by JUAN ESTEBAN BECERRA on 11/10/2022.
//

#include "Triangulo.h"

Triangulo::Triangulo() {
    altura = 0;
    base = 0;
    l2 = 0;
    l3 = 0;
    nombreFigura = "Triangulo";
}

Triangulo::Triangulo(float base, float altura, float l2, float l3): Triangulo(){
    this->base = base;
    this->altura = altura;
    this->l2 = l2;
    this->l3 = l3;
}

float Triangulo::calcularArea() {
    area = (base*altura)/2;
    return area;
}

float Triangulo::calcularPerimetro() {
    perimetro = base+l2+l3;
    return perimetro;
}

void Triangulo::dibujarFigura() {
    cout << nombreFigura;
    cout <<"\n";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}