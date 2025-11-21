# Programación 2 - TP1

## 📌 Información del estudiante
- **Nombre:** Shirley Cascante
- **Carné:** C21766

---
## Descripción breve del proyecto
El proyecto implementa un **analizador de sentimientos básico en C++**.  
El programa carga un banco de palabras positivas y negativas desde un archivo (`palabras.txt`), procesa frases de entrada y calcula un puntaje de sentimiento.  
El resultado se clasifica como **POSITIVO, NEGATIVO o NEUTRO** según el puntaje obtenido.

---
## Instrucciones de compilación y ejecución
1. Abrir la terminal en la carpeta del proyecto.  
2. Compilar los archivos fuente con g++:
   ```bash
   g++ Main.cpp Mensaje.cpp Analizador.cpp Palabra.cpp -o prueba
