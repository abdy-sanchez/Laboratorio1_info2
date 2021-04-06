#include <iostream>
using namespace std;


//  Laboratorio 1, Ejercicios y Problemas (Info II)


int main()
{

    short int menu, problema ;                // Variable para el despliegue del menu

    char caracter ;                         //Var P #1

    short int  resto, faltante, b_50k, b_20k, b_10k, b_5k, b_2k, b_1k, m_500, m_200, m_100, m_50 ;   //Var P#2
    int dinero ;

    short int mes, fecha ;          //Var P #3
    bool cond_1, cond_2 ;

    int dato_1, dato_2, hora_final, minuto_final, hora_1,hora_2, min_1, min_2 ;      //Var P#4
    bool rango_1, rango_2 ;

    short int n_impar, modo, l1,l2 ;                 //Var P#5

    short int elementos ;                   //Var P#6
    double euler = 1.0, suma_mult = 1.0 ;

    short int fibonacci, actual = 1, ant = 0, ste, suma_fib = 0 ;                   //Var P#7

    short int a, b, c, conta_1 = 0, suma_multiplos = 0, multiplo_1, multiplo_2 ;                   //Var P#8

    short int numero, r_div, num_digito = 1, resultado = 0, modulo_i, res_div_i, r_exp = 1 ;        //Var P#9

    short int n_final = 0 , n_primo = 0, conta_2 = 0, num_i ;           //Var P#10

    short int mcm_numero1, mcm_numero2, mcm_numero3, mcm_cont = 0 ; //Var P#11
    bool mcm_verda = true ;

    short int num_ero, divisor = 2, f_primo = 1, cont_3 = 0 ;                //Var P#12

    short int num_efinal = 0, cont_4 = 0, n_um ;                        // Var P#13

                                            // Var P#14
    int palindromo, res_div2, ndigitos = 0, modulo2, cociente, palindromo_2 = 0, potencia10 = 1, parametro, p_mayor = 0, m1, m2 ;

    short int n , n0 ;              // Var P#15

    short int k, m_terminos = 0, n_p16, t = 1, semilla = 0, cont_5 = 0, m2_term ;           // Var P#16

    short int k_p17, n_triangular, n_ii = 1, div_p17 = 0, num_divisores ;           // Var P#17
    bool cond_p17 = true ;










    cout << endl << " EJERCICIOS Y PROBLEMAS. " << endl << "  ~Que desea resolver?" << endl ;

   cout << endl << " *Ejercicios= 0 " << endl << " *Problemas= 1 " << endl ;

   cout << endl << " Respuesta: " ;

   cin >> menu ;


            // Ejercicios (ESTAN EN OTRO ARCHIVO)

   if( menu == 0 ){

       cout << endl << " EJERCICIOS -> Desde 1 hasta 30." << endl ;
       cout << endl << "  Debido a razones tecnicas \n Los Ejercicios estan en otro \n        archivo .cpp" << endl ;

   }


        //Problemas del 1 al 17


   else if( menu == 1 ){

       cout << endl << " PROBLEMAS -> Desde 1 hasta 17." << endl ;
       cout << " +Escribe el numero del Problema que deseas resolver:  " ;
       cin >> problema ;
       cout << endl ;

        switch ( problema ) {

            case 1 :               // Problema #1

            cout << " --PROBLEMA No.1--" << endl ;
            cout << endl << " Ingrese un caracter: " ;
            cin >> caracter ;
            cout << endl ;

            if( caracter >= 65 && caracter <= 90 ){         //Letras Mayusculas

                if( caracter == 65 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else if( caracter == 69 ){

                    cout << " El carcter ingresado es Vocal." << endl ;

                }
                else if( caracter == 73 ){

                    cout << " El carcter ingresado es Vocal." << endl ;

                }
                else if( caracter == 79 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else if( caracter == 85 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else {

                    cout << " El carcter ingresado es Consonante." << endl ;
                }
            }

            else if ( caracter >= 97 && caracter <= 122 ) {                                // Letras Minusculas

                if( caracter == 97 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else if( caracter == 101 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else if( caracter == 105 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else if( caracter == 111 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else if( caracter == 117 ){

                    cout << " El carcter ingresado es Vocal." << endl ;
                }
                else {

                    cout << " El carcter ingresado es Consonante." << endl ;

                }

            }

            else {

                cout << endl << " NO es un caracter valido." << endl ;
            }


            break;

        case 2 :               // Problema #2


            cout << " --PROBLEMA No.2--" << endl ;
            cout << endl << " Ingrese una cantidad: " ;
            cin >> dinero ;
            cout << endl ;

            if( dinero > 0 ){

                b_50k = dinero / 50000 ;

                resto = dinero % 50000 ;

                b_20k = resto / 20000 ;

                resto = resto % 20000 ;

                b_10k = resto / 10000 ;

                resto = resto % 10000 ;

                b_5k = resto / 5000 ;

                resto = resto % 5000 ;

                b_2k = resto / 2000 ;

                resto = resto % 2000 ;

                b_1k = resto / 1000 ;

                resto = resto % 1000 ;

                m_500 = resto / 500 ;

                resto = resto % 500 ;

                m_200 = resto / 200 ;

                resto = resto % 200 ;

                m_100 = resto / 100 ;

                resto = resto % 100 ;

                m_50 = resto / 50 ;

                faltante = resto % 50 ;

                cout << endl ;

                cout << " >Billete(s) de 50k: " << b_50k << endl ;
                cout << " >Billete(s) de 20k: " << b_20k << endl ;
                cout << " >Billete(s) de 10k: " << b_10k << endl ;
                cout << " >Billete(s) de 5k: " << b_5k << endl ;
                cout << " >Billete(s) de 2k: " << b_2k << endl ;
                cout << " >Billete(s) de 1k: " << b_1k << endl ;
                cout << " >Moneda(s) de 500: " << m_500 << endl ;
                cout << " >Moneda(s) de 200: " << m_200 << endl ;
                cout << " >Moneda(s) de 100: " << m_100 << endl ;
                cout << " >Moneda(s) de 50: " << m_50 << endl ;
                cout << " >Faltante: " << faltante << endl ;

            }
            else if ( dinero <= 0 ) {

                cout << endl << " Ingrese una cantidad de dinero superior a cero. " << endl ;

            }
            else {

                cout << endl << " Debes ingresar valores numericos." << endl ;
            }

        break;

        case 3 :               // Problema #3

            cout << " --PROBLEMA No.3--" << endl ;
            cout << endl << " Ingrese el numero de un mes: " ;
            cin >> mes ;
            cout << endl << " Ingrese el numero del dia: " ;
            cin >> fecha ;
            cout << endl ;

            cond_1 = mes >= 1 && mes <= 12 ;
            cond_2 = fecha >= 1 && fecha <= 31 ;          // Condiciones que evaluan los intervalos del mes y del dia

            if( cond_1 == true && cond_2 == true ){

                switch ( mes ) {

                    case 1 :

                    if( fecha <= 31 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                    break;

                case 2 :

                    if( fecha <= 28 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }
                    else if ( fecha == 29 ) {

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida \n Unicamente si el ano es bisiesto." << endl ;
                    }
                    else {

                        cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                    }

                break;

                case 3 :

                    if( fecha <= 31 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                break;

                case 4 :

                    if( fecha <= 30 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }
                    else {

                        cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                    }

                break;

                case 5 :

                    if( fecha <= 31 ){

                       cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                break;

                case 6 :

                    if( fecha <= 30 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }
                    else {

                        cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                    }

                break;

                case 7 :

                    if( fecha <= 31 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                break;

                case 8 :

                    if( fecha <= 31 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                break;

                case 9 :

                    if( fecha <= 30 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }
                    else {
                        cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                    }

                break;

                case 10 :

                    if( fecha <= 31 ){

                       cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                break;

                case 11 :

                    if( fecha <= 30 ){
                      cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;

                    }
                    else {
                        cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                    }

                break;

                case 12 :

                    if( fecha <= 31 ){

                        cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                    }

                break;


                }

            }
            else {

                cout << " " << fecha << "/" << mes << " NO ES VALIDO..." ;
                cout << endl << " Ingrese formatos de mes o dia validos." << endl ;
            }

        break;

        case 4 :               // Problema #4

            cout << " --PROBLEMA No.4--" << endl ;
            cout << endl << " Ingrese un numero entero que represente la hora: " ;
            cin >> dato_1 ;
            cout << endl << " Ingrese otro dato con el mismo formato: " ;
            cin >> dato_2 ;
            cout << endl ;

            hora_1 = dato_1 / 100 ;
            hora_2 = dato_2 / 100 ;

            min_1 = dato_1 % 100 ;
            min_2 = dato_2 % 100 ;

            hora_final = hora_1 + hora_2 ;
            minuto_final = min_1 + min_2 ;

            rango_1 = 0 <= dato_1 && dato_1 <= 2359 ;
            rango_2 = 0 <= dato_2 && dato_2 <= 2359 ;

            if( rango_1 == true && rango_2 == true ){

                if( minuto_final > 59 ){

                    minuto_final = minuto_final - 60 ;

                    hora_final = hora_final + 1 ;
                }

                if( hora_final > 23 ){

                    hora_final = hora_final - 24 ;

                }

                cout << endl << " La hora es " << hora_final << ":" << minuto_final << endl ;

            }
            else {

                cout << endl << " Ingrese un formato de tiempo Valido." << endl ;

            }


        break;

        case 5 :               // Problema #5

            cout << " --PROBLEMA No.5--" << endl ;
            cout << endl << " Ingrese un numero Impar: " ;
            cin >> n_impar ;
            cout << endl ;

            l1 = (n_impar+1)/2 ;
            l2 = (n_impar+1)/2 ;

            if( n_impar % 2 != 0 ){

                modo = 0 ;                                          //Variable que dice que modo se debe ejecutar

                for( int f = 1 ; f <= n_impar ; f++ ){

                    for( int c = 1 ; c <= n_impar ; c++ ){


                        switch ( modo ) {

                            case 0:                             //Caso 0, la mitad de la piramide

                                if( c >= l1 && c <= l2 ){

                                    cout << "* " ;
                                }
                                else {

                                    cout << "  " ;
                                }

                            break;

                            case 1:                             //Caso 1, la parte de abajo de la piramide

                                if( c <= l1 && c >= l2 ){

                                    cout << "* " ;
                                }
                                else {

                                    cout << "  " ;
                                }

                            break;

                        }




                    }

                    if( f == (n_impar+1)/2 ){                     //Condicional que evalua si la fila esta en la mitad

                        l1 = n_impar ;                          //Si lo esta, cambia el modo de 0 a 1

                        l2 = 1 ;

                        modo = 1 ;

                    }


                    l1 = l1 - 1 ;
                    l2 = l2 + 1 ;


                    cout << endl ;
                }

            }
            else{

                cout << endl << " El numero ingresado es Par..." << endl ;
            }

        break;


        case 6 :               // Problema #6

            cout << " --PROBLEMA No.6--" << endl ;
            cout << endl << " Ingrese el numero de elemntos: " ;
            cin >> elementos ;
            cout << endl ;

            if( elementos > 1 ){

                for( int i = 1 ; i <= elementos-1 ; i++ ){

                    for( int c = 1 ; c <= i ; c++ ){

                        suma_mult = c * suma_mult ;

                    }

                    euler = euler + (1/suma_mult) ;

                    suma_mult = 1.0 ;
                }

                cout << endl << " e con " << elementos << " elementos es: " << euler << endl ;
            }
            else {

                cout << endl << " Ingrese un numero valido de elemntos..." << endl ;
            }



        break;

        case 7 :               // Problema #7

            cout << " --PROBLEMA No.7--" << endl ;
            cout << endl << " Ingrese un entero: " ;
            cin >> fibonacci ;
            cout << endl ;

            while ( actual <= fibonacci) {

                ste = ant + actual ;

                if( actual % 2 == 0 ){              //Condicional para saber si el numero de la serie es par

                    suma_fib = suma_fib + actual ;

                }

                ant = actual ;

                actual = ste ;

            }

            cout << endl << " La suma de los numeros pares menores a " << fibonacci << " de la serie de Fibonacci es: " << suma_fib << endl ;


        break;

        case 8 :               // Problema #8

            cout << " --PROBLEMA No.8--" << endl ;
            cout << endl << " Ingrese 2 numeros: ";
            cin >> a >> b ;
            cout << endl << " Ingrese un numero limite: ";
            cin >> c ;
            cout << endl ;

            for( int i = 1 ; a*i < c ; i++ ){

                if( i > 1 ){

                   cout << " +" ;

                }

                multiplo_2 = a*i ;

                cout << " " << multiplo_2 ;

                suma_multiplos = suma_multiplos + multiplo_2 ;

            }

            for( int i = 1 ; b*i < c ; i++ ){

                multiplo_1 = b*i ;

                for( int k = 1 ; a*k < c ; k++ ){

                    if( multiplo_1 == a*k ){

                        conta_1++ ;

                    }

                }

                if( conta_1 == 0 ){

                    cout << " + " << multiplo_1 ;

                    suma_multiplos = suma_multiplos + multiplo_1 ;

                }

            }

            cout << " = " << suma_multiplos ;

            cout << endl ;



        break;


        case 9 :               // Problema #9

            cout << " --PROBLEMA No.9--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> numero ;
            cout << endl ;

            r_div = numero/10 ;

            if( r_div == 0){

               cout << "El numero ingresado tiene solo 1 digito..." << endl << endl ;
               num_digito = 0 ;

            }
            else {

                while ( r_div > 0 ) {

                    r_div = r_div/10 ;              //Codigo para obtener el # de digitos del numero ingresado

                    num_digito = num_digito + 1 ;

                }

            }

            for( int i = 1 ; i <= num_digito ; i = i + 1){

                modulo_i = numero % 10 ;
                                                                  // Codigo para descomponer cada numero en digitos
                res_div_i = numero / 10 ;                         // Y luego elevarlos al valor de cada uno

                for( int c = 1 ; c <= modulo_i ; c = c + 1){

                    r_exp = ( modulo_i )*(r_exp) ;

                }

                resultado = resultado + r_exp ;

                numero = res_div_i ;

                r_exp = 1 ;
            }

            cout << " Resultado de la suma de cada digito elevado a si mismo: " << resultado << endl ;

            cout << endl ;


        break;

        case 10 :               // Problema #10

            cout << " --PROBLEMA No.10--" << endl ;
            cout << endl << " Ingrese un numero n: ";
            cin >> num_i ;
            cout << endl ;

            for( int numero = 1 ; n_primo < num_i ; numero++ ){

                for( int c = 1 ; c <= numero ; c++ ){

                    if( numero%c == 0 ){

                        conta_2++ ;

                    }

                }

                if( conta_2 == 2 ){

                    n_primo++ ;

                    n_final = numero ;

                }

                conta_2 = 0 ;

            }

            cout << " n-esimo numero primo: " << n_final << endl ;


        break;

        case 11 :               // Problema #11

            cout << " --PROBLEMA No.11--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> mcm_numero1 ;
            cout << endl ;

            mcm_verda = true;

            mcm_numero2 = mcm_numero1 - 1 ;

            while( mcm_verda ){

                mcm_numero2 = mcm_numero2 + 1 ;

                mcm_numero3 = 0 ;

                for( mcm_cont = 1 ; mcm_cont <= mcm_numero1 ; mcm_cont++ ){

                    if( mcm_numero2 %mcm_cont == 0 ){

                        mcm_numero3 = mcm_numero3 + 1 ;

                        if( mcm_numero3 == mcm_numero1 ){

                            mcm_verda = false ;

                        }

                    }


                }

            }


            cout<< " El MCM es: " << mcm_numero2 << endl ;

        break;

        case 12 :               // Problema #12

            cout << " --PROBLEMA No.12--" << endl ;
            cout << endl << " Ingrese un numero: " ;
            cin >> num_ero ;
            cout << endl ;

            do{

                if( num_ero % divisor == 0 ){

                    num_ero = num_ero / divisor ;

                    for( int i = 1 ; i <= divisor ; i++ ){

                        if( divisor % i == 0 ){

                            cont_3++ ;

                        }

                    }

                    if( cont_3 == 2 ){

                        if( f_primo < divisor ){

                            f_primo = divisor ;

                        }

                    }

                    cont_3 = 0 ;

                }
                else{

                    divisor++ ;

                }

            }
            while( num_ero > 1 ) ;

            cout << " El mayor factor primo es: " << f_primo << endl ;


        break;

        case 13 :               // Problema #13

            cout << " --PROBLEMA No.13--" << endl ;
            cout << endl << " Ingrese un numero n: " ;
            cin >> n_um ;
            cout << endl ;

            for( int numero = 1 ; numero < n_um ; numero++ ){

                for( int i = 1 ; i <= numero ; i++ ){

                    if( numero % i == 0 ){

                        cont_4++ ;

                    }

                }

                if( cont_4 == 2 ){

                    num_efinal = num_efinal + numero ;

                }

                cont_4 = 0 ;

            }

            cout << " La suma de los numeros primos menores a n es: " << num_efinal << endl ;

        break;

        case 14 :               // Problema #14

            cout << " --PROBLEMA No.14--" << endl ;
            cout << endl ;

            for( int a = 100 ; a <= 999 ; a++ ){

                for( int b = 100 ; b <= 999 ; b++ ){

                    palindromo = a*b ;

                    res_div2 = palindromo ;

                    cociente = palindromo ;

                    do{

                        res_div2 = res_div2 / 10 ;

                        ndigitos++ ;

                    }
                    while( res_div2 > 0 ) ;

                    parametro = ndigitos - 1 ;

                    for( int i = 1 ; i <= ndigitos ; i++ ){

                        modulo2 = cociente % 10 ;

                        res_div2 = cociente / 10 ;



                        for( int e = parametro ; e > 0 ; e-- ){

                            potencia10 = 10 * potencia10 ;

                        }

                        palindromo_2 = (modulo2 * potencia10) + palindromo_2 ;

                        cociente = res_div2 ;

                        parametro-- ;

                        potencia10 = 1 ;

                    }

                    if( palindromo == palindromo_2 ){



                        if( p_mayor < palindromo ){

                            p_mayor = palindromo ;

                            m1 = a ;

                            m2 = b ;

                        }

                    }

                   ndigitos = 0 ;

                   potencia10 = 1 ;

                   palindromo_2 = 0 ;

                }

            }
            cout << " El palindromo mas grande es: "<< p_mayor << endl << " Del producto de: "<< m1 << "*" << m2 ;

        break;


        case 15 :               // Problema #15

            cout << " --PROBLEMA No.15--" << endl ;
            cout << endl << " Ingrese un numero impar: " ;
            cin >> n ;
            cout << endl ;

            if( n%2 != 0 ){

                for(int f = 0 ;f < n ; f++ ){


                                for(int c = 0 ; c < n ; c++ ){


                                    if( f > c && f >= n-c-1 ){

                                        n0 = 2*(1+f)-n ;

                                        cout << n0*n0-2*(n0-1)-c+n-1-f << '\t' ;

                                    }
                                    else if( f <= c && f > n-c-1 ){

                                        n0 = n-1-c ;

                                        cout << ( n-2*(1+n0) )*( n-2*(1+n0) ) + 1 + f-(n0+1) << '\t' ;  // Triangulo derecho

                                    }

                else if( f <= c && f <= n-c-1 ){

                                        cout << ( n-2*f )*( n-2*f-1 )+1+c-f << '\t' ;

                                    }
                                    else{

                                        cout << ( n-2*c )*( n-2*c-1 )+1-f+c << '\t' ;

                                    }
                                }

                                cout << endl << endl << endl;

                            }

            }
            else{

                cout << endl << " Ingreso un numero par..." << endl ;

            }

        break;


        case 16 :               // Problema #16

            cout << " --PROBLEMA No.16--" << endl ;
            cout << endl << " Ingrese un numero k: " ;
            cin >> k ;
            cout << endl ;

            for( int i = 1 ; i < k ; i++ ){

                    n_p16 = i ;
                    m_terminos = 0 ;

                do{

                    if( n_p16 %2 == 0 ){

                        n_p16 = n_p16 /2 ;


                    }
                    else if( n_p16 %2 != 0 ){

                        n_p16 = (3*n_p16)+1 ;

                    }

                   m_terminos++ ;

                   m2_term = m_terminos ;

                }
                while(n_p16 != 1) ;

                 if( t > m2_term ){

                     semilla = i-1 ;
                     t = m_terminos ;


                 }
                 else if( m2_term > t ){

                     t = m2_term ;


                 }


                }

                cout << " Semilla: " << semilla << endl << endl ;

                    do{

                    if( semilla %2 == 0 ){

                        semilla = semilla /2 ;
                        cout << " " << semilla ;

                    }
                    else if( semilla %2 != 0 ){

                        semilla = (3*semilla)+1 ;
                        cout << " " << semilla ;

                    }

                 cont_5++ ;

                }
                while(semilla != 1) ;

                cout << endl << endl << " Terminos: " << cont_5 << endl ;

        break;

        case 17 :               // Problema #17

            cout << " --PROBLEMA No.17--" << endl ;
            cout << endl << " Ingrese un numero k: " ;
            cin >> k_p17 ;
            cout << endl ;

            do{

               n_triangular = ( n_ii*( n_ii + 1 ) ) /2 ;

               for( int i = 1 ; i <= n_triangular ; i++ ){

                   if( n_triangular %i == 0 ){

                      div_p17++ ;

                   }


               }

               if( div_p17 > k_p17 ){

                   cond_p17 = false ;
                   num_divisores = div_p17 ;

               }

               n_ii++ ;
               div_p17 = 0 ;

            }
            while( cond_p17 == true ) ;

            cout << " El numero " << n_triangular << " tiene " << num_divisores << " divisores." << endl ;

        break;






        //+*+*+*+*+++*+****+++***

        default:

            cout << endl << "  DEBES ESCRIBIR UN # ENTRE 1 Y 17. " << endl ;

        break;




       }


   }


            // Sale del menu


   else {

       cout << endl << "  Consejo: Re-lee las opciones :/ " ;
   }

   cout << endl << endl << " Suerte muerte <3 " << endl ;

    return 0;
}
