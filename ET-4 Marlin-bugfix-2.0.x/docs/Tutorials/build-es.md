![guía para principiantes de marlin](media/2c3188c73460a962eb364d4152f5d781.jpg)

# Tutorial detallado para compilar Marlin

Requisitos previos

1.  Última versión del código fuente (descomprimida): [Haga clic
    aquí](https://github.com/davidtgbe/Marlin/archive/bugfix-2.0.x.zip)

2.  VSCode para su SO/Arquitectura: [Haga clic aquí](https://code.visualstudio.com/download)

Eso es todo lo que se necesita. A continuación, veremos la instalación de PlatformIO en VSCode.  

## Instalación de Platform IO Extension con VSCode

Abra VSCode y haga clic en el ícono de Extensiones ubicado en la barra de
herramientas izquierda. 

![icono de tutorial de marlin vscode](media/13975dc67301d7b8ef1beb06fdcf8af1.jpg)

A continuación, en el campo de búsqueda, escriba: **PlatformIO**

![instalación de vscode de extensión de plataforma de marlin 2.0](media/06e6f48f155884b6acd40138f31e312a.jpg)

Busque la extensión PlatformIO IDE y haga clic en instalar.

![plataforma marlin io ide vs progreso del código](media/ca4da79126b2382255f9b7e0e971576c.jpg)

Este proceso de instalación puede llevar algún tiempo
dependiendo de su máquina y sistema operativo.

![instalar plaftformio éxito marlin](media/7cf3646f7271cdd6282fe6b17e4ec0a5.jpg)

Si todo va bien, puede que vea una notificación en la parte inferior derecha de su
IDE (entorno de desarrollo). Si es así, haga clic en "Recargar ahora".

¡Ya ha instalado PlatformIO para VSCode! 👏

## Abriendo Marlin en VSCode con PlatformIO

Si aún no lo ha hecho, descomprima los archivos descargados del 1er paso de los requisitos (el código fuente de marlin) en su directorio
preferido.

Ahora, con VSCode abierto, haga clic en el ícono PlatformIO en la barra de
herramientas derecha y luego abra la carpeta marlin que acaba de descomprimir en
su directorio preferido.

![abrir la carpeta marlin en vscode](media/63376a00054974f3f9d4314929053f9e.jpg)

Abra la carpeta de nivel superior marlin y asegúrese de que vea el archivo
platformio.ini. Luego haga clic en "abrir".

![](media/3f80304b603bf12785736e81680cab3e.png)

Bien, ahora está listo para comenzar a configurar y compilar su compilación.

## Archivos de configuración

Para ajustar Marlin a las especificaciones de su impresora 3D, deberá editar
el archivo Configuration.h y, si necesita una configuración avanzada, el archivo
Configuration_adv.h. 

Como se dice en las instrucciones principales, la configuración por defecto está en español y es para ua ET4 con placa silenciosa sin ninguna modificación adicional.

En estos archivos podemos encontrar todos los parámetros necesarios para ajustar Marlin a nuestro hardware. Por ejemplo, tipo de drivers, volumen de impresión, ajustes de la sonda de autonivelado, idioma, etc.

![http://3daddict.com/wp-content/uploads/2019/04/marlin-configuration-files.jpg](media/856cc799d3373387a3c34e7416b87e29.jpg)

Si nunca antes ha ajustado esta configuración y desea aprender cómo puede hacerlo, puede
seguir el tutorial de Marlin 2.0.

Existen también programas que pueden asistirle para llevar a cabo una configuración exitosa.

https://github.com/akaJes/marlin-config/releases


También dispone de varios tutoriales en la web, como por ejemplo:

<https://3dwork.io/configurar-marlin-2-0-x-desde-cero/>

## Compilar

Es hora de probar la compilación y ver si se compila correctamente.

Para ejecutar una compilación, haga clic en el icono de la extensión Plataform.io y luego
haga clic en el botón de compilar. Tenga en cuenta que también
hay iconos en la parte inferior de la barra de herramientas que puede utilizar.

![marlin ejecutar build 2.0](media/57492593f20f1086fb37b92f580a908b.jpg)

Esto ejecutará el comando de compilación y comenzará a compilar marlin. Verá una
ventana de terminal abierta y el progreso de la compilación. Si todo va bien,
verá un mensaje de éxito. Si algo falla, asegúrese de tener la
configuración correcta o busque en Google el error.

![éxito de compilación de marlin 2.0](media/7885004ed1f9dbbd6055025d52ed7f7c.jpg)

Puede encontrar el firmware compilado en "carpeta_raiz_proyecto/.pio/build/et4/"

![](media/7cf3646f7271cdd6282fe6b17e4ec0a6.jpg)

## Flashear el firmware

Hay varios tutoriales disponibles para distintos programadores xej: [stlink](https://www.cnx-software.com/2020/02/04/how-to-recover-from-a-bad-firmware-upgrade-on-anet-et4-3d-printer/)/[j-link](https://danielabalo.wordpress.com/flasear-anet-et4/) flashers. 

En el grupo de ET4 España de Telegram nuestro compañero @Macugo también ha hecho uno.

Lo único a tener en cuenta y que puede diferir del fin de los manuales expuestos previamente es la dirección de memoria en la cual hay que flashear. **Es imprescindible flashear en la 0x08000000**.

## Agradecimientos

Este tutorial está basado en el tutorial de 3dwork.io que podéis encontrar en:

https://3daddict.com/marlin-2-0-beginner-guide-for-3d-printer-firmware/
