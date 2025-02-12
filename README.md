# Proyecto HolaMon

Este proyecto es una pequeña aplicación en C++ que muestra el mensaje "Hola, món!" en la consola y genera un archivo de registro (`log.txt`) con la fecha y hora actuales.

## Estructura del Proyecto

```
Projecte
├── CMakeLists.txt      # Configuración para CMake
├── src
│   └── main.cpp        # Código fuente de la aplicación
├── bin                 # Directorio para el ejecutable compilado
├── build               # Directorio para archivos generados durante la compilación
└── README.md           # Documentación del proyecto
```

## Requisitos

- C++11 o superior
- CMake 3.10 o superior

## Compilación

Para compilar el proyecto, sigue estos pasos:

1. Abre una terminal y navega al directorio del proyecto:

   ```bash
   cd Projecte
   ```

2. Genera los archivos de construcción con CMake:

   ```bash
   cmake -B build
   ```

3. Compila el proyecto:

   ```bash
   cmake --build build
   ```

4. Ejecuta la aplicación:

   - En Linux o macOS:

     ```bash
     ./build/bin/HolaMon
     ```

   - En Windows:

     ```bash
     build\bin\HolaMon.exe
     ```

## Empaquetado

Una vez compilada, puedes empaquetar la aplicación para su distribución:

- En Windows (PowerShell o CMD):

  ```powershell
  Compress-Archive -Path build\bin\HolaMon.exe, README.txt -DestinationPath HolaMon_Windows.zip
  ```

- En Linux o macOS (Terminal):

  ```bash
  tar -czvf HolaMon_Linux.tar.gz -C build/bin HolaMon README.txt
  ```

## Pruebas y Verificación de Compatibilidad

Después de empaquetar la aplicación, descomprime el archivo en otro ordenador con el mismo sistema operativo y prueba si la aplicación funciona. Si tienes acceso a máquinas virtuales, prueba a ejecutar la aplicación en otro sistema operativo. Anota cualquier problema encontrado (por ejemplo, permisos de ejecución en Linux o macOS) y corrige los errores si es necesario antes de volver a empaquetar.