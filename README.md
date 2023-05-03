# Arduino

## Descripción
**Arduino** es un projecto de creación de un pequeño auto manejado a través del celular, tendrá un motor, luces y detección de objetos. 

## Estructura de ramas
Estructura de las diferentes ramas que componen el proyecto

 - main: Rama principal donde estará el proyecto listo para ejecutarse 
 - development: Rama para el desarrollo general
 - AR-[n]: Rama para la resolución de tickets, se utilizará de forma provicional y se mergeará a la rama de desarrollo cuando sea necesario
 - test: Rama para generar test en base al codigo de desarrollo

## Uso
Para utilizar el entorno de desarrollo de la aplicación se requiere de los siguientes programas y dependencias

- Windows, linux o macOS
- Arduino compatible con el IDE
- Placa Bluetooth:X M-15B SPP
- [Arduino IDE](https://www.arduino.cc/en/software)

Se debe ejecutar 

## Estructura de carpetas
Estructura de carpetas que sigue la aplicación
```
Arduino/      # Carpeta principal.
|- arduino/         # Guarda el archivo principal del proyecto.
|- docs/            # Guarda la documentación del proyecto.
|- schematics/      # Guarda los esquemas de la placa y el autito.
|- test/            # Guarda los tests que se realizaran.
```

