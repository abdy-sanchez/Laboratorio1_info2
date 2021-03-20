#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Laboratorio 1, Ejercicios y Problemas (Info II)

int main()
{
     short int menu,ejercicio ;                  //Variables para el despliegue del menu

     short int num_1, num_2 ;   //Variables E#1

     short int numero, resi ;         //Var E#2

     short int m_1, m_2 ;           //Var E#3

     short int m_3, m_4 ;           //Var E#4

     double n_1, n_2, division, resta ;        //Var E#5
     short int p_int ;

     short int base, pot, sum_pot = 1 ;      //Var E#6

     short int N, sum_num = 0 ;         //Var#7

     short int N_2, sum_mult = 1 ;                   //Var E#8

     short int nu_1 ;                   //Var E#9
     double pi = 3.1415, area, perimetro ;

     short int nume_1 ;         //Var E#10

     short int nU_1 ;               //Var E#11

     short int NUM, suma_pote = 1 ;                // Var E#12

     short int nd ;         //Var E#13
                                                //NO HAY VARIABLES PARA El E#14
     short int nm_1, suma_numeros = 0 ;           //Var E#15

     short int nn_1, s_numeros = 0, cont = 0 ;        //Var E#16

     short int k_1, k_2, k_mayor = 0 ;              //Var E#17

     short int num_perfecto ;           //Var E#18
     bool n_perf = false ;

     short int n_p, mltps = 0 ;            //Var E#19

     short int pal, r_div, n_dig = 0, modulo, cociente, pal_2 = 0, pot_10 = 1,pmto ;        //Var E#20

     char caracter ;            //Var E#21

     short int tiempo, t_h, t_min, t_seg ;         //Var E#22

     short int A, B, temporal, k_A, k_B ;           //Var E#23

     short int t_figura ;           //Var E#24

     short int entero, auxiliar, digitos = 0 ;             // Var E#25

     short int l_1, l_2, l_3, validez = 0 ;              //Var E#26

     short int V_1 , V_2 ;              //Var E#27
     char op ;

     short int numer_o, numerador, base_1 = -1 ;          //Var E#28
     float aproximacion = 0.0, pi_2, exp_o, denominador_2 ;

     short int l_inf = 0, l_sup = 100 , m = 50 ;            //Var E#29
     char signo ;

     short int numero_aleatorio, num_intento, loser=0 ;
     srand(time(NULL)) ;


     cout << endl << " EJERCICIOS Y PROBLEMAS. " << endl << "  ~Que desea resolver?" << endl ;

    cout << endl << " *Ejercicios= 0 " << endl << " *Problemas= 1 " << endl ;

    cout << endl << " Respuesta: " ;

    cin >> menu ;







            //Ejercicios del 1 al 30


    if( menu == 0 ){

        cout << endl << " EJERCICIOS -> Desde 1 hasta 30. " << endl ;
        cout << " +Escribe el numero del ejercicio que deseas resolver:  " ;
        cin >> ejercicio ;
        cout << endl ;


        switch (ejercicio) {

        case 1 :            //Ej #1

            cout << " --EJERCICIO No.1--" << endl ;
            cout << endl << " Ingrese dos numeros A y B para calcular su residuo :" ;
            cin >> num_1 >> num_2 ;

            cout << endl <<" El residuo de la division de los numeros ingresados es: " << num_1 % num_2 << endl ;

        break;

        case 2 :            //Ej #2

            cout << " --EJERCICIO No.2--" << endl ;
            cout << endl << " Ingrese un numero para saber si es PAR o IMPAR: " ;
            cin >> numero ;
            resi = numero%2 ;
            if( resi == 0 ){

                cout << endl << numero << " es PAR." ;
            }
            else {

                cout << endl << numero << " es IMPAR." ;
            }

        break;

        case 3 :            //Ej #3

            cout << " --EJERCICIO No.3--" << endl ;
            cout << endl << " Ingrese dos sumeros: " ;
            cin >> m_1 >> m_2 ;

            if( m_1 > m_2 ){

                cout << endl << " El Mayor es " << m_1 ;
            }
            else if ( m_2 > m_1) {

                cout << endl << " El Mayor es " << m_2 ;
            }
            else {

                cout << " Si ves este emnsaje, seguramente hiciste algo mal :( " << endl ;
            }

        break;

        case 4 :            //Ej #4

            cout << " --EJERCICIO No.4--" << endl ;
            cout << endl << " Ingrese dos numeros: " ;
            cin >> m_3 >> m_4 ;

            if( m_3 < m_4 ){

                cout << endl << " El menor es " << m_3 ;
            }
            else if ( m_4 < m_3) {

                    cout << endl << " El menor es " << m_4 ;
            }
            else {

                cout << " Si ves este emnsaje, seguramente hiciste algo mal :( " << endl ;
            }

        break;

        case 5 :            //Ej #5

            cout << " --EJERCICIO No.5--" << endl ;
            cout << " Ingrese dos numeros: " ;
            cin >> n_1 >> n_2 ;

            division = n_1 / n_2 ;
            p_int = division ;                  //p_int es la parte entera del rest. de la division
            resta = division - p_int ;

            if( resta >= 0.6 ){

                cout << endl << " El resultado de la divison es: " << p_int + 1 ;
            }
            else {

                cout << endl << " El resultado de la division es: " << p_int ;
            }

        break;

        case 6 :            //Ej #6

            cout << " --EJERCICIO No.6--" << endl ;
            cout << endl << " Ingrese dos numeros: " ;
            cin >> base >> pot ;

            for( int i = 1 ; i <= pot ; i++ ){

                sum_pot = base * sum_pot ;
            }

            cout << " El resultado de elevar " << base << " a la " << pot << " es: " << sum_pot ;

        break;

        case 7 :            //Ej #7

            cout << " --EJERCICIO No.7--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> N ;

            for( int i = 1 ; i <= N ; i++ ){

                sum_num = i + sum_num ;
            }

            cout << " La suma de 0 hasta " << N << " es: " << sum_num ;

        break;

        case 8 :            //Ej #8

            cout << " --EJERCICIO No.8--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> N_2 ;

            for( int i = 1 ; i <= N_2 ; i++ ){

                sum_mult = i * sum_mult ;
            }

            cout << endl << " El resultado de " << N_2 << "! es: " << sum_mult ;

        break;

        case 9 :            //Ej #9

            cout << " --EJERCICIO No.9--" << endl ;
            cout << endl << " Ingrese un numero para el radio de un circulo: " ;
            cin >> nu_1 ;

            area = pi*(nu_1*nu_1) ;
            perimetro = 2*pi*(nu_1) ;

            cout << endl << " Area= " << area << endl ;
            cout << endl << " Perimetro= " << perimetro << endl ;

        break;

        case 10 :            //Ej #10

            cout << " --EJERCICIO No.10--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> nume_1 ;
            cout << endl << " Multiplos de " << nume_1 << " menores que 100:" << endl ;

            for( int i = 1 ; i <= 100 ; i++ ){

                if( i % nume_1 == 0 ){

                    cout <<" > " << i << endl ;
                }
            }


        break;

        case 11 :            //Ej #11

            cout << " --EJERCICIO No.11--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> nU_1 ;
            cout << endl << " --TABLA DEL " << nU_1 << "--" << endl << endl ;

            for( int i = 1 ; i <= 10 ; i++  ){

                cout << " > " << i << "x" << nU_1 << "= " << i * nU_1 << endl ;

            }

        break;

        case 12 :            //Ej #12

            cout << " --EJERCICIO No.12--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> NUM ;
            cout << endl ;

            for( int i = 1 ; i <= 5 ; i++ ){

                for( int c = 1 ; c <= i ; c++ ){

                    suma_pote = NUM * suma_pote ;
                }

                cout << " > " << NUM << "^" << i << "= " << suma_pote << endl ;

                suma_pote = 1 ;
            }

        break;

        case 13 :            //Ej #13

            cout << " --EJERCICIO No.13--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> nd ;
            cout << endl << " --DIVISORES DE " << nd << "--" << endl << endl ;

            for( int i = 1 ; i <= nd ; i++ ){

                if( nd % i == 0 ){

                    cout << " > " << i << endl ;
                }
            }


        break;

        case 14 :            //Ej #14

            cout << " --EJERCICIO No.14--" << endl ;
            cout << endl ;

            for( int i = 1 ; i <= 50 ; i++ ){

                cout << " " << i << "  " << 51 - i << endl ;

            }


        break;

        case 15 :            //Ej #15

            cout << " --EJERCICIO No.15--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> nm_1 ;
            cout << endl ;

           do{

             suma_numeros = nm_1 + suma_numeros ;

             cout << " Ingrese otro numero [0 para parar]: " ;
             cin >> nm_1 ;
             cout << endl ;

            }
            while( nm_1 != 0) ;

            cout << " La suma de todos los numeros ingresados fue: " << suma_numeros << endl ;

        break;

        case 16 :            //Ej #16

            cout << " --EJERCICIO No.16--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> nn_1 ;
            cout << endl ;

            do{

                s_numeros = nn_1 + s_numeros ;

                cout << " Ingrese otro numero [0 para parar]: " ;
                cin >> nn_1 ;
                cout << endl ;
                cont++ ;

            }
            while( nn_1 != 0 ) ;

            cout << " El promedio de todos los numeros ingresados es: " << s_numeros/cont << endl ;

        break;

        case 17 :            //Ej #17

            cout << " --EJERCICIO No.17--" << endl ;
            cout << endl << " Ingrese dos numeros: " ;
            cin >> k_1 >> k_2 ;
            cout << endl ;



            do{

                if( k_1 > k_2 ){

                    k_mayor = k_1 ;
                }
                else if ( k_2 > k_1 ) {

                    k_mayor = k_2 ;
                }

            cout << " Ingrese otro numero [0 para parar]: " ;
            cin >> k_2 ;

            k_1 = k_mayor ;

            }
            while( k_2 != 0 ) ;

            cout << endl << " El mayor numero de todos los ingresados es: " << k_mayor ;

        break;

        case 18 :            //Ej #18

            cout << " --EJERCICIO No.18--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> num_perfecto ;
            cout << endl ;

            for( int i = 1 ; i <= num_perfecto ; i++  ){            //For ineficiente pero funciona :)

                if( i*i == num_perfecto ){

                    n_perf = true ;
                }
            }

            if( n_perf == true ){

                cout << " " << num_perfecto << " es un cuadrado perfecto." << endl ;
            }
            else {

               cout << " " << num_perfecto << " NO es un cuadrado perfecto." << endl ;
            }

        break;

        case 19 :            //Ej #19

            cout << " --EJERCICIO No.19--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> n_p ;
            cout << endl ;

            for( int i = 1 ; i <= n_p ; i++ ){

                if( n_p % i == 0 ){

                    mltps++ ;
                }
            }

            if( mltps == 2 ){

                cout << " " << n_p << " es un numero Primo." << endl ;
            }
            else {

                cout << " " << n_p << " NO es un numero Primo." << endl ;
            }

        break;

        case 20 :            //Ej #20

            cout << " --EJERCICIO No.20--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> pal ;
            cout << endl ;

            r_div = pal ;
            cociente = pal ;

            do{

                r_div = r_div / 10 ;

                n_dig++ ;
            }
            while( r_div > 0) ;

            pmto = n_dig - 1 ;

            for( int i = 1 ; i <= n_dig ; i++ ){

                modulo = cociente % 10 ;

                r_div = cociente / 10 ;



                for( int e = pmto ; e > 0 ; e-- ){

                    pot_10 = 10 * pot_10 ;
                }

                pal_2 = (modulo*pot_10) + pal_2 ;
                cociente = r_div ;
                pmto-- ;
                pot_10 = 1 ;
            }

            if( pal == pal_2 ){

                cout << " " << pal << " es un palindromo." << endl ;
            }
            else {

                cout << " " << pal << " NO es un palindromo." << endl ;

            }

        break;

        case 21 :            //Ej #21

            cout << " --EJERCICIO No.21--" << endl ;
            cout << endl << " Ingrese un caracter: " ;
            cin >> caracter ;
            cout << endl ;

            if( ( caracter >= 65 )&&( caracter <= 90 ) ){           //Letra mayuscula

                caracter = caracter + 32 ;

                cout << " Letra Invertida: " << caracter << endl ;
            }
            else if ( ( caracter >= 97 )&&( caracter <= 122 ) ) {           //Letra minuscula

                caracter = caracter - 32 ;

                cout << " Letra Invertida: " << caracter << endl ;
            }
            else {

                cout << " " << caracter << " NO es una letra." << endl ;
            }


        break;


        case 22 :            //Ej #22

            cout << " --EJERCICIO No.22--" << endl ;
            cout << endl << " Ingrese un numero entero: " ;
            cin >> tiempo ;
            cout << endl ;

            t_h = tiempo / 3600 ;

            if( (tiempo % 3600) >= 60  ){

                t_min = (tiempo%3600) / 60 ;

                t_seg = (tiempo%3600) % 60 ;
            }
            else{
                t_min = 0 ;
                t_seg = tiempo % 3600 ;

            }

        cout << endl << " El numero ingresado en formato horas:minutos:segundos es= " << t_h << ":" << t_min << ":" << t_seg << endl ;

        break;

        case 23 :            //Ej #23

            cout << " --EJERCICIO No.23--" << endl ;
            cout << endl << " ingrese dos numeros: " ;
            cin >> A >> B ;
            k_A = A ;
            k_B = B ;
            cout << endl ;

            while( k_B != 0 ) {             // Ciclo que obtiene el maxico comun divisor de A y B (k_A)

                temporal = k_B ;

                k_B = k_A % k_B ;

                k_A = temporal ;

            }

            cout << " El Minimo comun Multiplo de " << A << " y " << B << " es: " << ( A * B )/k_A << endl ;

        break;

        case 24 :            //Ej #24

            cout << " --EJERCICIO No.24--" << endl ;
            cout << endl << " Ingrese un numero entero: " ;
            cin >> t_figura ;
            cout << endl << " >Cuadrado de " << t_figura << "x" << t_figura << endl << endl ;

            for( int f = 1 ; f <= t_figura ; f++ ){

                for( int c = 1 ; c <= t_figura ; c++ ){

                    if( f==1 && c <= t_figura ){

                        cout << " +" ;
                    }
                    else if ( f== t_figura && c <= t_figura ) {

                        cout << " +" ;
                    }
                    else if ( c == 1 || c == t_figura ) {

                        cout << " +" ;
                    }
                    else {

                        cout << "  " ;
                    }

                }

                cout << endl ;

            }


        break;


        case 25 :            //Ej #25

            cout << " --EJERCICIO No.25--" << endl ;
            cout << endl << " Ingrese un numero entero: " ;
            cin >> entero ;
            cout << endl ;

            do{
                auxiliar = entero / 10 ;
                entero = auxiliar ;
                digitos++ ;

            }
            while( auxiliar > 0 ) ;

            cout << " El numero de digitos que tiene es: " << digitos << endl ;

        break;

        case 26 :            //Ej #26

            cout << " --EJERCICIO No.26--" << endl ;
            cout << endl << " Ingrese 3 longitudes: " ;
            cin >> l_1 >> l_2 >> l_3 ;
            cout << endl ;

            if( l_1 + l_2 > l_3 ){

                validez++ ;
            }

            if( l_1 + l_3 > l_2 ){              // Condicionales que miran si los
                                                //Lados ingresados forman un triangulo
                 validez++ ;
            }

            if( l_2 + l_3 > l_1 ){

                validez++ ;
            }

            if( validez == 3 ){

                if( l_1 == l_2 && l_1 == l_3 ){

                    cout << endl << " Se forma un triangulo Equilatero." << endl ;
                }
                else if ( l_1 == l_2 && l_1 != l_3 ) {

                    cout << endl << " Se forma un triangulo Isoceles." << endl ;
                }
                else if ( l_1 == l_3 && l_3 != l_2 ) {

                    cout << endl << " Se forma un triangulo Isoceles." << endl ;
                }
                else if( l_2 == l_3 && l_2 != l_1 ){

                    cout << endl << " Se forma un triangulo Isoceles." << endl ;
                }
                else {

                    cout << endl << " Se forma un triangulo Escaleno." << endl ;
                }
            }
            else{

                cout << endl << " Las longitudes NO forman un triangulo. " << endl ;
            }



        break;

        case 27 :            //Ej #27

            cout << " --EJERCICIO No.27--" << endl ;
            cout << endl << " --WEB Calc 2.0--" << endl ;
            cout << " >Realiza tus operaciones..." << endl ;
            cout << endl << " A ( + , - , * , / ) B" << endl ;
            cout << endl ;
            cin >> V_1 >> op >> V_2 ;
            cout << endl ;

            switch (op) {

            case '+' :                  //SUMA

                cout << endl << " Resultado de la Suma: " << V_1 + V_2 << endl ;

            break;

            case '-' :                  //RESTA

                cout << endl << " Resultado de la Resta: " << V_1 - V_2 << endl ;

            break;

            case '*' :                      //MULTIPLICACION

                cout << endl << " Resultado de la Multiplicacion: " << V_1 * V_2 << endl ;

            break;

            case '/' :                      //DIVISION

                cout << endl << " Resultado de la Division entera: " << V_1 / V_2 << endl ;

            break;

            default:
                cout << endl << " Ingresaste un comando erroneo :( " << endl ;

            break;

            }

            cout << endl << " APAGANDO CALCULADORA..." << endl ;

        break;

        case 28 :            //Ej #28

            cout << " --EJERCICIO No.28--" << endl ;
            cout << endl << " Ingrese un numero entero: " ;
            cin >> numer_o ;
            cout << endl ;

            for( int i = 1 ; i <= numer_o ; i++ ){

                exp_o = ( -1 ) * base_1 ;

                base_1 = exp_o ;

                numerador = base_1 ;

                denominador_2 = ( 2*i ) - 1 ;

                aproximacion = aproximacion + ( ( numerador/denominador_2 ) ) ;

            }

            pi_2 = 4 * aproximacion ;

            cout << endl << "El valor de Pi, con " << numer_o << " elementos sumados es: " << pi_2 << endl ;

        break;

        case 29 :            //Ej #29

            cout << " --EJERCICIO No.29--" << endl ;
            cout << endl << " --Adivinacion de un Numero--" << endl ;
            cout << "    [>] MAYOR ; [<] MENOR" << endl ;

            do{

                cout << endl << " Es " << m << " su numero?" << endl ;
                cin >> signo ;

                if( signo == '>' ){             //MAYOR

                    l_inf = m ;

                    m = ( l_sup + l_inf )/2 ;

                }
                else if ( signo == '<' ) {              //MENOR

                    l_sup = m ;

                    m = ( l_sup + l_inf )/2 ;

                }

            }
            while( signo != '=' ) ;

            cout << endl << " ++ El numero era " << m << " ++" << endl ;



        break;

        case 30 :            //Ej #30

            cout << " --EJERCICIO No.30--" << endl ;
            cout << endl << " --Adivinacion de un Numero 2.0--" << endl ;
            cout << " >La maquina elige un numero al azar entre 0 y 100." << endl ;

            numero_aleatorio = rand() % 101 ;

            do{
                cout << endl << " Ingrese un numero: " ;
                cin >> num_intento ;

                if( num_intento > numero_aleatorio ){

                    cout << endl << " El numero a adivinar es MENOR." << endl ;
                }
                else if ( num_intento < numero_aleatorio ) {

                    cout << endl << " El numero a adivinar es MAYOR." << endl ;
                }
                loser++ ;
            }
            while( numero_aleatorio != num_intento ) ;

            cout << endl << " ++ Acertaste, el numero era " << numero_aleatorio << " ++" << endl ;
            cout << "       [No. de Intentos: " << loser << "]" << endl ;

        break;


        // +*+*+*+*+*+*+*+*

        default:

            cout << endl << "  DEBES ESCRIBIR UN # ENTRE 1 Y 30. " << endl ;

        break;
        }

    }
















             //Problemas del 1 al 17



    else if ( menu == 1 ) {

        cout << endl << " PROBLEMAS -> Desde 1 hasta 17." << endl ;
        cout << endl << "  Debido a razones tecnicas \n Los problemas estan en otro \n        archivo .cpp" << endl ;

    }








                // Sale del menu


    else {

        cout << endl << "  Consejo: Re-lee las opciones :/ " ;

    }

    cout << endl << endl << " Suerte muerte <3 " << endl ;
    return 0;
}
