/**
 * @file ParametroNoValido.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @desc Clase ParametroNoValido para las prácticas de POO
 * @date 10 de marzo de 2019
 */

#ifndef PARAMETRONOVALIDO_H
#define PARAMETRONOVALIDO_H

#include <string>

class ParametroNoValido {
public:
    ParametroNoValido();
    ParametroNoValido(const ParametroNoValido& orig);
    virtual ~ParametroNoValido();
    std::string queOcurre() const;
private:
    std::string _fichero = "Sin nombre"; ///< Nombre del fichero en el que se realiza el throw de la excepcion
    std::string _funcion = "Sin nombre de funcion"; ///< Nombre de la funcion o metodo en el que se realiza el throw
    std::string _descripcion = "Descripcion vacia"; ///< Una descripcion de que parametro no es valido y por que
};

#endif /* PARAMETRONOVALIDO_H */

