#include <iostream>
#include <string>

class Coche {
private:
    std::string nombreModelo;       // Nombre del modelo
    int añoModelo;                  // Año del modelo
    std::string nombrePropietario;  // Nombre del propietario
    std::string color;              // Color
    std::string estiloCarroceria;   // Estilo de carrocería
    std::string vin;                // Número de identificación del vehículo (VIN)
    std::string tipoTransmision;    // Tipo de transmisión
    std::string tipoMotor;          // Tipo de motor
    int numeroCilindros;            // Número de cilindros
    int volumenCilindro;            // Volumen de los cilindros (en cc)
    int velocidadMaxima;            // Velocidad máxima (en km/h)
    int caballosFuerza;             // Potencia en caballos de fuerza
    int numeroPuertas;              // Número de puertas
    int tamañoRines;                // Tamaño de las llantas (en pulgadas)

public:
    // Métodos para establecer valores
    void establecerNombreModelo(const std::string& nombre) { nombreModelo = nombre; }
    void establecerAñoModelo(int año) { añoModelo = año; }
    void establecerNombrePropietario(const std::string& propietario) { nombrePropietario = propietario; }
    void establecerColor(const std::string& c) { color = c; }
    void establecerEstiloCarroceria(const std::string& estilo) { estiloCarroceria = estilo; }
    void establecerVin(const std::string& v) { vin = v; }
    void establecerTipoTransmision(const std::string& trans) { tipoTransmision = trans; }
    void establecerTipoMotor(const std::string& motor) { tipoMotor = motor; }
    void establecerNumeroCilindros(int num) { numeroCilindros = num; }
    void establecerVolumenCilindro(int volumen) { volumenCilindro = volumen; }
    void establecerVelocidadMaxima(int velocidad) { velocidadMaxima = velocidad; }
    void establecerCaballosFuerza(int hp) { caballosFuerza = hp; }
    void establecerNumeroPuertas(int puertas) { numeroPuertas = puertas; }
    void establecerTamañoRines(int tamaño) { tamañoRines = tamaño; }

    // Métodos para obtener valores
    std::string obtenerNombreModelo() const { return nombreModelo; }
    int obtenerAñoModelo() const { return añoModelo; }
    std::string obtenerNombrePropietario() const { return nombrePropietario; }
    std::string obtenerColor() const { return color; }
    std::string obtenerEstiloCarroceria() const { return estiloCarroceria; }
    std::string obtenerVin() const { return vin; }
    std::string obtenerTipoTransmision() const { return tipoTransmision; }
    std::string obtenerTipoMotor() const { return tipoMotor; }
    int obtenerNumeroCilindros() const { return numeroCilindros; }
    int obtenerVolumenCilindro() const { return volumenCilindro; }
    int obtenerVelocidadMaxima() const { return velocidadMaxima; }
    int obtenerCaballosFuerza() const { return caballosFuerza; }
    int obtenerNumeroPuertas() const { return numeroPuertas; }
    int obtenerTamañoRines() const { return tamañoRines; }
};

int main() {
    Coche coche1;

    // Configurar los datos del coche
    coche1.establecerNombreModelo("Nissan Versa");
    coche1.establecerAñoModelo(2024);
    coche1.establecerNombrePropietario("Emiliano");
    coche1.establecerColor("Naranja");
    coche1.establecerEstiloCarroceria("Sedán");
    coche1.establecerVin("13214123412");
    coche1.establecerTipoTransmision("Estándar");
    coche1.establecerTipoMotor("Gasolina");
    coche1.establecerNumeroCilindros(4);
    coche1.establecerVolumenCilindro(2000);
    coche1.establecerVelocidadMaxima(260);
    coche1.establecerCaballosFuerza(140);
    coche1.establecerNumeroPuertas(4);
    coche1.establecerTamañoRines(17);

    // Mostrar los datos del coche
    std::cout << "Nombre del Modelo: " << coche1.obtenerNombreModelo() << std::endl;
    std::cout << "Año del Modelo: " << coche1.obtenerAñoModelo() << std::endl;
    std::cout << "Nombre del Propietario: " << coche1.obtenerNombrePropietario() << std::endl;
    std::cout << "Color: " << coche1.obtenerColor() << std::endl;
    std::cout << "Estilo de Carrocería: " << coche1.obtenerEstiloCarroceria() << std::endl;
    std::cout << "VIN: " << coche1.obtenerVin() << std::endl;
    std::cout << "Tipo de Transmisión: " << coche1.obtenerTipoTransmision() << std::endl;
    std::cout << "Tipo de Motor: " << coche1.obtenerTipoMotor() << std::endl;
    std::cout << "Número de Cilindros: " << coche1.obtenerNumeroCilindros() << std::endl;
    std::cout << "Volumen del Cilindro: " << coche1.obtenerVolumenCilindro() << " cc" << std::endl;
    std::cout << "Velocidad Máxima: " << coche1.obtenerVelocidadMaxima() << " km/h" << std::endl;
    std::cout << "Caballos de Fuerza: " << coche1.obtenerCaballosFuerza() << " HP" << std::endl;
    std::cout << "Número de Puertas: " << coche1.obtenerNumeroPuertas() << std::endl;
    std::cout << "Tamaño de Rines: " << coche1.obtenerTamañoRines() << " pulgadas" << std::endl;

    return 0;
}
