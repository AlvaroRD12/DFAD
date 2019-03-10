/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ParametroNoValido.cpp
 * Author: Usuario
 * 
 * Created on 10 de marzo de 2019, 20:44
 */

#include "ParametroNoValido.h"

/**
 * @brief Constructor parametrizado de la clase
 * @param nombre Nombre del garito
 * @param direccion Direccion del garito
 * @post Crea un nuevo objeto de la clase Garito
 */
ParametroNoValido::ParametroNoValido(std::string fichero, std::string funcion, std::string descripcion) :
_fichero(fichero)
, _funcion(funcion)
, _descripcion(descripcion) {
}

/**
 * @brief Constructor de copia de la clase
 * @param orig Objeto de tipo ParametroNoValido del que se copiarán los datos
 * @post Crea un nuevo objeto de la clase ParametroNoValido
 */

ParametroNoValido::ParametroNoValido(const ParametroNoValido& orig) :
_fichero(orig._fichero)
, _funcion(orig._funcion)
, _descripcion(orig._descripcion) {
}

ParametroNoValido::~ParametroNoValido() {
}