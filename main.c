#include <stdio.h>
#include <time.h>

void recorrerOden(int pruebas, int entradas);
void recorrerOden1(int pruebas, int entradas);
void recorrerOden2(int pruebas, int entradas);
void recorrerOdelogn(int pruebas, int entradas);
void recorrerOdenlogn(int pruebas, int entradas);

int main() {
    /*
     * Funcion original con tiempo de ejecucion promedio 150% mas alto que metodo actual
     */
    /*
    recorrerOden(100,100);
    recorrerOden1(100,100);
    */

    recorrerOdelogn(10000,1000);
    recorrerOdelogn(10000,10000);
    recorrerOdelogn(10000,100);
    recorrerOden1(100,100);
    recorrerOden1(100,1000);
    recorrerOden1(100,10000);
    recorrerOdenlogn(100,100);
    recorrerOdenlogn(100,1000);
    recorrerOdenlogn(100,10000);
    recorrerOden2(100,100);
    recorrerOden2(100,1000);
    recorrerOden2(100,10000);

    /*
     *
     * Pruebas para medir diferencia de tiempo promedio para distinta cantidad de pruebas
     *
     */
    /*recorrerOden1(100,100);
    recorrerOden1(100,100);
    recorrerOden1(100,100);
    recorrerOden1(100,100);
    recorrerOden1(100,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
     */

    /*
     *
     * Pruebas para chequear si se observa diferencia de tiempo promedio en multiples instancias de la misma cantidad de pruebas
     *
     */
    /*
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
    recorrerOden1(1000,100);
     */
}

void recorrerOden1(int pruebas, int entradas){
    int var1 = 0;
    int var2 = 0;
    int pct = 0;     // porcentaje completado como entero

    printf("\nProgress: \e[s");

    clock_t start = clock();    // tiempo de inicio

    for(var1 = 0; var1<pruebas; var1++){

        for(var2 = 0; var2<entradas; var2++){
            pct = ((float)var1/pruebas)*100;
            printf("%d\e[u", pct);

        }
    }

    printf("%3d\e[u", 100);

    clock_t stop = clock(); // tiempo de finalización

    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;  // tiempo en segundos

    printf("\nResultado: %5fs, %5fs\t\tn = %d",elapsed/(pruebas*entradas),elapsed,entradas);
    //  imprime en la terminal los resultados obtenidos, el primer valor siendo el tiempo promedio por ejecucion, el segundo el total de tiempo
}


void recorrerOden2(int pruebas, int entradas){
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int pct = 0;     // porcentaje completado como entero

    printf("\nProgress: \e[s");

    clock_t start = clock();    // tiempo de inicio

    for(var1 = 0; var1<pruebas; var1++){

        for(var2 = 0; var2<entradas; var2++){
            for(var3 = 0; var3<entradas; var3++){
                pct = ((float)var1/pruebas)*100;
                printf("%d\e[u", pct);
            }
        }
    }

    printf("%3d\e[u", 100);

    clock_t stop = clock(); // tiempo de finalización

    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;  // tiempo en segundos

    printf("\nResultado: %5fs, %5fs\t\tn = %d",elapsed/(pruebas*entradas),elapsed,entradas);
    //  imprime en la terminal los resultados obtenidos, el primer valor siendo el tiempo promedio por ejecucion, el segundo el total de tiempo
}


void recorrerOdelogn(int pruebas, int entradas){
    int var1 = 0;
    int evaluar = entradas;
    int pct = 0;     // porcentaje completado como entero

    printf("\nProgress: \e[s");

    clock_t start = clock();    // tiempo de inicio

    for(var1 = 0; var1<pruebas; var1++){

        for(; 1 != evaluar; evaluar = evaluar / 2){
            pct = ((float)var1/pruebas)*100;
            printf("%d\e[u", pct);
        }
    }

    printf("%3d\e[u", 100);

    clock_t stop = clock(); // tiempo de finalización

    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;  // tiempo en segundos

    printf("\nResultado: %5fs, %5fs\t\tn = %d",elapsed/(pruebas*entradas),elapsed,entradas);
    //  imprime en la terminal los resultados obtenidos, el primer valor siendo el tiempo promedio por ejecucion, el segundo el total de tiempo
}

void recorrerOdenlogn(int pruebas, int entradas){
    int var1 = 0;
    int var2 = 0;
    int evaluar = entradas;
    int pct = 0;     // porcentaje completado como entero

    printf("\nProgress: \e[s");

    clock_t start = clock();    // tiempo de inicio

    for(var1 = 0; var1<pruebas; var1++){
        for(var2 = 0; var2<entradas; var2++){
            evaluar = entradas;
            for(; 1 != evaluar; evaluar = evaluar / 2){
                pct = ((float)var1/pruebas)*100;
                printf("%d\e[u", pct);
            }
        }
    }

    printf("%3d\e[u", 100);

    clock_t stop = clock(); // tiempo de finalización

    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;  // tiempo en segundos

    printf("\nResultado: %5fs, %5fs\t\tn = %d",elapsed/(pruebas*entradas),elapsed,entradas);
    //  imprime en la terminal los resultados obtenidos, el primer valor siendo el tiempo promedio por ejecucion, el segundo el total de tiempo

}


void recorrerOden(int pruebas, int entradas){

    int pct = 0;     // porcentaje completado como entero

    printf("\nProgress:\e[s");

    clock_t start = clock();    // tiempo de inicio

    for(int var1 = 0; var1<pruebas; var1++){

        for(int var2 = 0; var2<entradas; var2++){

            pct = ((float)var1/pruebas)*100;
            if(var2==entradas-1 && var1 == pruebas-1){
                printf(" (%3d%%)\e[u",100);
            }else {
                printf(" (%3d%%)\e[u", pct);
            }

        }
    }

    clock_t stop = clock(); // tiempo de finalización

    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;  // tiempo en segundos

    printf("\nResultado: %5fs, %5fs\t\tn = %d",elapsed/(pruebas*entradas),elapsed,entradas);
    //  imprime en la terminal los resultados obtenidos, el primer valor siendo el tiempo promedio por ejecucion, el segundo el total de tiempo
}
