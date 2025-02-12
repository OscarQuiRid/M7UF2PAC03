#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>

int main() {
    // Mostrar el mensaje en la consola
    std::cout << "Hola, món!" << std::endl;

    // Obtener la fecha y hora actual
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    
    // Abrir el archivo de registro
    std::ofstream logFile("log.txt");
    if (logFile.is_open()) {
        logFile << "Fecha y hora: " << std::ctime(&now_c);
        logFile.close();
    } else {
        std::cerr << "No se pudo abrir el archivo de registro." << std::endl;
    }

    return 0;
}