//
// Created by JUAN ESTEBAN BECERRA on 11/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULO_H
#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

class Triangulo: public FiguraGeometrica {
    private:
        float base;
        float altura;
        float l2, l3;
    public:
        Triangulo();
        Triangulo(float base, float altura, float l2, float l3);
        virtual ~Triangulo() = default;
        void dibujarFigura() override;
        float calcularArea() override;
        float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_TRIANGULO_H
