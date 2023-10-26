# carroPID
En este repositorio se encuentran todas las funciones básicas para el funcionamiento mecánico del robot, y también para su procesamiento de control. Incluye partes (.prt) y ensamblajes (.asm) que conforman la construcción del robot
---------------------------------------
Carpetas: 
    . controlComponentes / En esta carpeta se subiran POR SEPARADO todos los códigos de control en el motor, servo, ultrasónico, IMU y comunicación con ESP32
    . masterCode / En esta carpeta está el código que integrará todos los códigos de la carpeta "controlComponentes".
---------------------------------------
**IMPORTANTE**
  - REVISAR QUE LOS PINES ASIGNADOS EN LA SCREENSHOT DEL ARDUINO SEAN LOS MISMOS A LOS QUE USAN EN EL CÓDIGO
  - SI VAN A PONERLE NOMBRE A UN PIN, ASEGURENSE QUE NO ESTÉ YA ASIGNADO EN OTRO CÓDIGO, Y SI SÍ UTILICEN EL MISMO AL CÓDIGO.
