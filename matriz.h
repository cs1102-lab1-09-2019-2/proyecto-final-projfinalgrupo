#ifndef PROYECTONATMAR_MATRIZ_H
#define PROYECTONATMAR_MATRIZ_H
#include "tipos.h"
class TMatriz {
private:
    TipoEntero filas;
    TipoEntero columnas;
    TipoEntero **arena;
  
public:
    TMatriz(TipoEntero _filas, TipoEntero _columnas);
    void MatrizNueva(TipoEntero _filas, TipoEntero _columnas);
    void Liberar (TipoEntero _filas, TipoEntero _columnas);
    void Mostrar(TipoEntero _filas, TipoEntero _columnas);
    TipoEntero ** getplano() {return arena;}
    TipoEntero **getmatriz(){return arena;}
    friend class mapas;
    friend class MenuPrincipalMapas;
};

#endif //PROYECTONATMAR_MATRIZ_H
