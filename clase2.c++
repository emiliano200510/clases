#include <iostream>
#include <string>

class Persona {
public:
    enum class Genero { MASCULINO, FEMENINO, OTRO };
    enum class ColorPiel { BLANCA, NEGRA, MORENA, OTRO };
    enum class ColorCabello { NEGRO, CAFE, RUBIO, ROJO, OTRO };
    enum class Nacionalidad { MEXICANA, ESTADOUNIDENSE, CANADIENSE, OTRO };
    enum class Ocupacion { DESOCUPADO, EMPLEADO, ESTUDIANTE, OTRO };

private:
    Genero genero;
    std::string nombre;
    ColorPiel colorPiel;
    ColorCabello colorCabello;
    int altura; // Altura en cm
    int peso; // Peso en kg
    int diaNacimiento;
    int mesNacimiento;
    int anoNacimiento;
    Nacionalidad nacionalidad;
    Ocupacion ocupacion;
    std::string numeroTelefono;
    std::string email;
    bool estadoDiscapacidad;
    std::string descripcion;

public:
    // Métodos para establecer valores
    void setGenero(Genero g) {
        genero = g;
    }
    void setNombre(const std::string& n) {
        nombre = n;
    }
    void setColorPiel(ColorPiel c) {
        colorPiel = c;
    }
    void setColorCabello(ColorCabello c) {
        colorCabello = c;
    }
    void setAltura(int a) {
        altura = a;
    }
    void setPeso(int p) {
        peso = p;
    }
    void setDiaNacimiento(int d) {
        diaNacimiento = d;
    }
    void setMesNacimiento(int m) {
        mesNacimiento = m;
    }
    void setAnoNacimiento(int a) {
        anoNacimiento = a;
    }
    void setNacionalidad(Nacionalidad n) {
        nacionalidad = n;
    }
    void setOcupacion(Ocupacion o) {
        ocupacion = o;
    }
    void setNumeroTelefono(const std::string& t) {
        numeroTelefono = t;
    }
    void setEmail(const std::string& e) {
        email = e;
    }
    void setEstadoDiscapacidad(bool d) {
        estadoDiscapacidad = d;
    }
    void setDescripcion(const std::string& d) {
        descripcion = d;
    }

    // Métodos para obtener valores
    Genero getGenero() const {
        return genero;
    }
    std::string getNombre() const {
        return nombre;
    }
    ColorPiel getColorPiel() const {
        return colorPiel;
    }
    ColorCabello getColorCabello() const {
        return colorCabello;
    }
    int getAltura() const {
        return altura;
    }
    int getPeso() const {
        return peso;
    }
    int getDiaNacimiento() const {
        return diaNacimiento;
    }
    int getMesNacimiento() const {
        return mesNacimiento;
    }
    int getAnoNacimiento() const {
        return anoNacimiento;
    }
    Nacionalidad getNacionalidad() const {
        return nacionalidad;
    }
    Ocupacion getOcupacion() const {
        return ocupacion;
    }
    std::string getNumeroTelefono() const {
        return numeroTelefono;
    }
    std::string getEmail() const {
        return email;
    }
    bool getEstadoDiscapacidad() const {
        return estadoDiscapacidad;
    }
    std::string getDescripcion() const {
        return descripcion;
    }

    void imprimirInfo() const {
        std::string generoStr = (genero == Genero::MASCULINO) ? "Masculino" :
                                (genero == Genero::FEMENINO) ? "Femenino" : "Otro";
        std::string colorPielStr = (colorPiel == ColorPiel::BLANCA) ? "Blanca" :
                                   (colorPiel == ColorPiel::NEGRA) ? "Negra" :
                                   (colorPiel == ColorPiel::MORENA) ? "Morena" : "Otro";
        std::string colorCabelloStr = (colorCabello == ColorCabello::NEGRO) ? "Negro" :
                                      (colorCabello == ColorCabello::CAFE) ? "Café" :
                                      (colorCabello == ColorCabello::RUBIO) ? "Rubio" :
                                      (colorCabello == ColorCabello::ROJO) ? "Rojo" : "Otro";
        std::string nacionalidadStr = (nacionalidad == Nacionalidad::MEXICANA) ? "Mexicana" :
                                      (nacionalidad == Nacionalidad::ESTADOUNIDENSE) ? "Estadounidense" :
                                      (nacionalidad == Nacionalidad::CANADIENSE) ? "Canadiense" : "Otro";
        std::string ocupacionStr = (ocupacion == Ocupacion::DESOCUPADO) ? "Desocupado" :
                                   (ocupacion == Ocupacion::EMPLEADO) ? "Empleado" :
                                   (ocupacion == Ocupacion::ESTUDIANTE) ? "Estudiante" : "Otro";

        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Género: " << generoStr << std::endl;
        std::cout << "Color de Piel: " << colorPielStr << std::endl;
        std::cout << "Color de Cabello: " << colorCabelloStr << std::endl;
        std::cout << "Altura: " << altura << " cm" << std::endl;
        std::cout << "Peso: " << peso << " kg" << std::endl;
        std::cout << "Fecha de Nacimiento: " << diaNacimiento << "/" << mesNacimiento << "/" << anoNacimiento << std::endl;
        std::cout << "Nacionalidad: " << nacionalidadStr << std::endl;
        std::cout << "Ocupación: " << ocupacionStr << std::endl;
        std::cout << "Número de Teléfono: " << numeroTelefono << std::endl;
        std::cout << "Correo Electrónico: " << email << std::endl;
        std::cout << "Estado de Discapacidad: " << (estadoDiscapacidad ? "Sí" : "No") << std::endl;
        std::cout << "Descripción: " << descripcion << std::endl;
    }
};

int main() {
    Persona mia;

    mia.setGenero(Persona::Genero::MASCULINO);
    mia.setNombre("Mia Puga");
    mia.setColorPiel(Persona::ColorPiel::BLANCA);
    mia.setColorCabello(Persona::ColorCabello::NEGRO);
    mia.setAltura(160);
    mia.setPeso(55);
    mia.setDiaNacimiento(3);
    mia.setMesNacimiento(5);
    mia.setAnoNacimiento(2002);
    mia.setNacionalidad(Persona::Nacionalidad::MEXICANA);
    mia.setOcupacion(Persona::Ocupacion::DESOCUPADO);
    mia.setNumeroTelefono("3333333333");
    mia.setEmail("miapuga01@gmail.com");
    mia.setEstadoDiscapacidad(false);
    mia.setDescripcion("Amante del maquillaje");

    mia.imprimirInfo();

    return 0;
}
