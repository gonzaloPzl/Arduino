# Arduino

## Descripción
**Arduino** es un projecto de creación de un pequeño auto manejado a través del celular, tendrá un motor, luces y detección de objetos. 

## Videos del funcionamiento

#### Prueba de energia
[![Funcionamiento general](https://i9.ytimg.com/vi/s7uqO6EEBAY/mqdefault.jpg?sqp=CPTfmKQG-oaymwEmCMACELQB8quKqQMa8AEB-AH-BIAC8AKKAgwIABABGGUgZShlMA8=&rs=AOn4CLB-dUViwRom0-SpC9L1MxzesiXptw)](https://youtu.be/s7uqO6EEBAY)

#### Prueba de energia
[![Prueba de energia](https://i9.ytimg.com/vi/lUuYXvtRW9M/mqdefault.jpg?sqp=CPTfmKQG-oaymwEoCMACELQB8quKqQMcGADwAQH4AYwCgALgA4oCDAgAEAEYZSBLKD0wDw==&rs=AOn4CLCu9Dwv0DHhE_dOUwIwwcexvCl0qQ)](https://youtube.com/shorts/lUuYXvtRW9M)

#### Prueba de motores
[![Prueba de motores](https://i9.ytimg.com/vi/Max0B-2PMMs/mqdefault.jpg?sqp=CPTfmKQG-oaymwEoCMACELQB8quKqQMcGADwAQH4AYwCgALgA4oCDAgAEAEYYSBhKGEwDw==&rs=AOn4CLBKWBRU6PpaSnCuMp75W1mJAQTFLA)](https://youtube.com/shorts/Max0B-2PMMs)

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

### Requerimientos de hardware
- Protoboard Breadboard 830
- DRIVER L293B
- Regulador L7805CV V6
- 2 motoreguladores
- Modulo bluetooth XM-15

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

