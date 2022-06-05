# TC1030-actividad-herencia

## PARA COMPILAR EL PROGRAMA
### WINDOWS:
1) Utiliza g++ para compilar EL programa con la siguiente instrucción desde línea de comandos:  
> g++ -o main ./*.cpp && ./main
2) Una vez compilado, se puede probar el programa desde una línea de comandos con la siguiente instrucción: 
> main.exe

### PROVISTO POR LA DOCUMENTACIÓN:
1) Utiliza g++ para compilar EL programa con la siguiente instrucción desde línea de comandos:  
> g++ snakes.cpp -o snakes.out
2) Una vez compilado, se puede probar el programa desde una línea de comandos con la siguiente instrucción: 
> ./snakes.out


## JUSTIFICACIÓN DE PROGRAMACIÓN ORIENTADA A OBJETOS
En cuanto a la programación orientada a objeto, en este programa se utilizaron 3 objetos (board [tablero], player [jugador] y dice [dado]) los cuales fueron heredados a la clase MyGame. El motivo de esta decisión es que los atributos y métodos de cada objeto eran necesarios para el funcionamiento final del juego, pero de incluir todo en una misma clase, aparte de no haber mucho orden, sería dificil para una persona que esté revisando el código. De esta manera, la persona puede relacionar el programa con objetos de la vida real con ciertos atributos y funciones que puede hacer dicho objeto, al igual que todo está presentado de una manera más entendible. Adicionalmente, esto permite la reutilización de código tanto dentro de este proyecto como para proyectos alternos. En el caso de este proyecto, si se necesita hacer varias copias de un mismo objeto, solo se necesita crear una clase como plantilla y de allí se hacen diversas instancias. En el caso de un proyecto externo, debido a que está separado por objetos, si un proyecto necesita incluir el mismo objeto, puede solo reutilizar ese código, mientras que si los atributos y métodos del objeto estuvieran entrelazados con la clase principal, sería más complicado este proceso.


## DOCUMENTACIÓN
![Documentacion](https://user-images.githubusercontent.com/62347713/170847243-cf610a76-561b-4e62-9913-64501cc6e75a.png)
