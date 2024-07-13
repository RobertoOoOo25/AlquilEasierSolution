#pragma once
#include "Inquilino.h" 

#ifndef _ALARMA_H
#define _ALARMA_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Alarma {
        public:
            property int Id;
            property String^ Hora;
            property bool IncendioRobo;
            property bool Cochera;


            property int ContadorCochera; // Contador específico para veces activada la cochera
            property int ContadorIncendioRobo; // Contador específico para veces sonada la alarma


            property DateTime^ Fecha;

            property Inquilino^ Inquilino;//de quien es la alarma
            void ConsultarAlarma();

            Alarma() {
                ContadorCochera = 0;
                ContadorIncendioRobo = 0;
            }
    };
}

#endif //_ALARMA_H