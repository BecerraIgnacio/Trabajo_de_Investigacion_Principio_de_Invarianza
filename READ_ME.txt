DOCUMENTACIÓN TRABAJO: PRINCIPIO DE INVARIANZA

Fecha de Actualización: 31/08/2023

Trabajo: Principio de Invarianza

Objetivo: El propósito de este proyecto es verificar si el valor de "c" se mantiene constante en la proposición T1 <= c * T2, sin importar la complejidad de los algoritmos.


Desarrollo:

Para medir los algoritmos, se emplea una función específica para cada nivel de complejidad. Comparten datos comunes:

Pruebas: Iteraciones sobre algoritmos para promediar los tiempos.
Promedio = Tiempo total / (Pruebas * Entradas)

Entradas: Número equivalente a "n" en complejidad.

A su vez comparten método de medición del tiempo, cálculo del porcentaje de completado e instrucciones para pruebas.


I) Medición del tiempo:
// Inicio de la medición del tiempo
clock_t start = clock(); // Almacena el tiempo de inicio en "start"
// Algoritmo a evaluar
clock_t stop = clock(); // Almacena el tiempo de finalización en "stop"
// Cálculo del tiempo transcurrido en segundos
double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
// Imprime resultados: tiempo promedio por ejecución y tiempo total
printf("\nResultado: %5fs, %5fs\t\tn = %d",elapsed / (Pruebas * Entradas), elapsed, Entradas);


II) Porcentaje de completado:
int pct = 0; // Variable para almacenar el porcentaje de completado como número entero
// Actualiza pct en función del porcentaje de pruebas realizadas en relación a Pruebas
pct = ((float) var1 / Pruebas) * 100;
// Imprime el porcentaje de completado en la terminal
printf("%d\e[u", pct);
// Imprime 100 en la terminal para evitar que el completado quede en 99
printf("%3d\e[u", 100);


III) Instrucción para pruebas:
int var1 = 0; // Inicializa una variable llamada var1 con el valor 0
// Repite el algoritmo mientras var1 sea menor a Pruebas
for (var1 = 0; var1 < Pruebas; var1++) {
    // Algoritmo a evaluar
}


Funcionamiento de cada función:


I) recorrerOden1:
int var2 = 0; // Inicializa una variable llamada var2 con el valor 0
// Repite el algoritmo mientras var2 sea menor a Entradas
for (var2 = 0; var2 < Entradas; var2++) {
    // Actualiza el porcentaje de completado en función del porcentaje de pruebas realizadas en relación a Pruebas
    pct = ((float) var1 / Pruebas) * 100;
    // Imprime el porcentaje de completado en la terminal
    printf("%d\e[u", pct);
}


II) recorrerOden2:
int var2 = 0; // Inicializa una variable llamada var2 con el valor 0
int var3 = 0; // Inicializa una variable llamada var3 con el valor 0
// Repite el primer bucle mientras var2 sea menor a Entradas
for (var2 = 0; var2 < Entradas; var2++) {
    // Repite el segundo bucle mientras var3 sea menor a Entradas
    for (var3 = 0; var3 < Entradas; var3++) {
        // Actualiza el porcentaje de completado en función del porcentaje de pruebas realizadas en relación a Pruebas
        pct = ((float) var1 / Pruebas) * 100;
        // Imprime el porcentaje de completado en la terminal
        printf("%d\e[u", pct);
    }
}


III) recorrerOdelogn:
int evaluar = Entradas; // Inicializa una variable llamada evaluar con el valor de Entradas
// Repite el bucle mientras evaluar sea diferente de 1
for (; 1 != evaluar; evaluar = evaluar / 2) {
    // Actualiza el porcentaje de completado en función del porcentaje de pruebas realizadas en relación a Pruebas
    pct = ((float) var1 / Pruebas) * 100;
    // Imprime el porcentaje de completado en la terminal
    printf("%d\e[u", pct);
}


IV) recorrerOdenlogn:
int var2 = 0; // Inicializa una variable llamada var2 con el valor 0
int evaluar = Entradas; // Inicializa una variable llamada evaluar con el valor de Entradas
// Repite el bucle mientras var2 sea menor a Entradas
for (var2 = 0; var2 < Entradas; var2++) {
    evaluar = Entradas; // Reinicia evaluar a Entradas en cada iteración de var2
    // Repite el bucle mientras evaluar sea diferente de 1
    for (; 1 != evaluar; evaluar = evaluar / 2) {
        // Actualiza el porcentaje de completado en función del porcentaje de pruebas realizadas en relación a Pruebas
        pct = ((float) var1 / Pruebas) * 100;
        // Imprime el porcentaje de completado en la terminal
        printf("%d\e[u", pct);
    }
}


Problemáticas:


I) Cantidad de Pruebas:
Inicialmente se propuso ejecutar 100, 1000 y 10000 pruebas para algoritmos O(n^2), pero se redujo debido a la duración. La reducción no afectó significativamente los resultados.


II) Algoritmo O(log(n)) y O(n*log(n)):
Se usaron bucles "for" para lograr complejidades O(log(n)) y O(n*log(n)). ¿Es suficiente o se necesita una evaluación diferente de las entradas?


III) Método de medición de tiempo limitado:
Se cambió el enfoque para medir tiempo total. Introdujo complejidad, pero no afectó resultados significativamente.


Actualidad:
Problemas al medir algoritmo con complejidad O(log(n)), ya que puede ejecutarse más rápido que el tiempo mínimo medible.

