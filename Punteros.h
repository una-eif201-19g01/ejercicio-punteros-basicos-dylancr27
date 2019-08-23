/*
 * =====================================================================================
 *
 *       Filename:  Punteros.h
 *
 *    Description:  Clase principal para Punteros
 *
 *        Created:  2019-08-18
 *
 *         Author:  Dylan Molina Obando
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef PUNTEROSBASICO_PUNTEROS_H
#define PUNTEROSBASICO_PUNTEROS_H


class Punteros {
    static int numeroAlCuboValor(int);
    static int numeroAlCuboPuntero(int *);
    static int numeroAlCuboReferencia(int &);
    static float raizCuadradaValor(float);
    static float raizCuadradaPuntero(float *);
    static float raizCuadradaReferencia(float &);

public:
    Punteros();

    static void imprimirDatosPuntero();
    static void imprimirCalculoAlCuboReferenciaValor();
    static void imprimirCalculoAlCuboReferenciaPuntero();
    static void imprimirCalculoAlCuboReferenciaReferencia();
    static void imprimirRaizCuadradaValor();
    static void imprimirRaizCuadradaPuntero();
    static void imprimirRaizCuadradaReferencia();
};


#endif //PUNTEROSBASICO_PUNTEROS_H
