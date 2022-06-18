# TC1030-actividad-herencia

## PARA COMPILAR EL PROGRAMA

### WINDOWS:

1. Utiliza g++ para compilar EL programa con la siguiente instrucción desde línea de comandos:
   > g++ -o main ./\*.cpp && ./main
2. Una vez compilado, se puede probar el programa desde una línea de comandos con la siguiente instrucción:
   > main.exe

### MAC:

la diferencia dentro de la compilacion en mac es que se requiere mover los archivos csv a el root de nuestro sistema esto porque al dar el nombre como entrada en la consola no los tomara de la carpeta donde se contiene el codigo que se esta compilando

## JUSTIFICACIÓN DE PROGRAMACIÓN ORIENTADA A OBJETOS

En este parte del proyecto se nos pidió usar, identificar nuestras clases, en este caso generamos varias clases que derivan de una clase video, en este caso las clases serie y película, luego implementamos una clase episodio, la cual es un elemento dentro de la clase serie, pues la clase serie tiene un vector de este tipo de objeto, también utilizamos clase que nos ayudan a leer archivos tipo csv, ya en la clase main.cpp. usamos esta solución porque dentro de las relaciones que consideramos en el uml es lo que nos hacia mas sentido para poder cumplir el reto.
Usamos la herencia en las clases series y películas, las cuales heredan de serie, estas clases usan esta herencia para reciclar métodos como los setters y getters, y crear los constructores para los hijos. usamos esta solución para poder reciclar código y no repetir nuestro código mucho.
Utilizamos diferentes modificadores de acceso, como private, public y protected dentro de nuestro código, para proteger estos datos de accesos externos, esto lo hicimos para tener más control de qué información puede ser accedida porque cosa, estos modificadores de acceso se usaron dentro de toda la clase.
Hicimos sobrecarga mayormente en los constructores de nuestros objetos, también aplicamos sobrecarga en algunos métodos de nuestros objetos, estas sobrecargas las usamos para poder tener diferentes tipos de parámetros en los métodos y en los constructores.
Se utilizó el polimorfismo para sobreescribir el método de imprimir ya que dependiendo de si se trataba de una película o de una serie, la búsqueda de los videos por calificación era diferente, sin embargo, usar el mismo nombre del método, permite una lectura más fácil del código.
Las clases abstractas se crean cuando se declara un método virtual en una clase. En nuestro caso, para poder usar el polimorfismo, tuvimos que declarar en la clase base Video un método virtual para que se sobreescriba en el resto de las clases que heredan.
La sobrecarga de un operador se puede observar en las clases Serie y Película, siendo << el operador sobrecargado. La sobrecarga de este operador, permite imprimir un resumen de los datos de la serie/película y se utilizó este resumen para el catálogo que se imprime para que el usuario indique el ID. La sobrecarga hace que sea más entendible y fácil de programar la impresión de estos atributos.
El manejo de excepciones se usó en la introducción de ID’s. En caso de que se introduzca un ID inválido, se presenta un mensaje de error. Esto sirve para evitar que el programa termine abruptamente en caso de que el usuario introduzca valores atípicos y se muestra un mensaje de advertencia/sugerencia para el usuario sobre cómo no cometer el error nuevamente.

## DOCUMENTACIÓN

![Documentacion](https://user-images.githubusercontent.com/62347713/170847243-cf610a76-561b-4e62-9913-64501cc6e75a.png)
