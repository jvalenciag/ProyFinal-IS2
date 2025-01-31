#ifndef SESION_H
#define SESION_H

#include  <QTime>
#include <QObject>
#include "usuario.h"

/**
 * @class Sesion
 * @brief Clase singletone que representa el la sesion de el sistema
 */
class Sesion:public QObject
{
    Q_OBJECT
public:

    enum sesionState{UsuarioDeshabilitado,PassUsrWrong,SleepTime,ResetPass,inicioOK};

    static Sesion* getSesion();
    static int Iniciar(QString user,QString pass);
    static void Configurar(int nminI,int nmaxI,int tEspera);
    Usuario * get_Usuario(){return s_user;}
    /// @return Retorna el tiempo en milisegundos desde que se inicio la sesion
    int get_time(){return s_time.elapsed();}

private:
    Sesion(Usuario * usr = 0);
    static Sesion* mp_instance;  ///<instancia de la clase singletone
    static int intentos;         ///<Numero de intentos de inicio de sesion
    static bool sleep;           ///<inhabilita el inicio de sesion por un tiempo determinado
    static QTime tiempoBloqueo;  ///<Cuenta el tiempo de bloqueo
    static int numMinIntentos;  ///<Numero minimo de intentos de inicio
    static int numMaxIntentos;  ///<Numero maximo de intentos de inicio
    static int tiempoEspera;    ///<Tiempo de bloqueo de el inicio

    QTime s_time;               ///<tiempo de inicio de sesion
    Usuario * s_user;           ///<referencia a un usuario
};

#endif // SESION_H
