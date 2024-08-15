#include <iostream>
#include <string>

class Perro {
private:
    std::string name;
    std::string raza;
    std::string colorPelo;
    std::string colorOjos;
    std::string sexo;
    std::string fechaNacimiento;
    std::string vacunas;
    int edad;
    int altura;
    bool largo_pelo;
    bool esterilizado;
    bool dueno;
    bool entrenado;
    bool sociable;
    float peso;

public:
   Perro(std::string name, std::string raza, std::string color_pelo, std::string color_ojos, std::string sexo, std::string fechaNacimiento, std::string vacunas, int edad, int altura, bool largo_pelo, bool esterilizado, bool dueno, bool entrenado, bool sociable, float peso)
        :name(name), raza(raza), colorPelo(color_pelo), colorOjos(color_ojos), sexo(sexo), fechaNacimiento(fechaNacimiento), vacunas(vacunas), edad(edad), altura(altura), largo_pelo(largo_pelo), esterilizado(esterilizado), dueno(dueno), entrenado(entrenado), sociable(sociable), peso(peso) {}

    void setName(std::string name) {
        this->name = name;
    }
    void setRaza(std::string raza) {
        this->raza = raza;
    }
    void setColorPelo(std::string colorPelo) {
        this->colorPelo = colorPelo;
    }
    void setColorOjos(std::string colorOjos) {
        this->colorOjos = colorOjos;
    }
    void setSexo(std::string sexo) {
        this->sexo = sexo;
    }
    void setFechaNacimiento(std::string fechaNacimiento) {
        this->fechaNacimiento = fechaNacimiento;
    }
    void setVacunas(std::string vacunas) {
        this->vacunas = vacunas;
    }
    void setEdad(int edad) {
        this->edad = edad;
    }
    void setAltura(int altura) {
        this->altura = altura;
    }
    void setLargoPelo(bool largoPelo) {
        this->largo_pelo = largoPelo;
    }
    void setEsterilizado(bool esterilizado) {
        this->esterilizado = esterilizado;
    }
    void setDueno(bool dueno) {
        this->dueno = dueno;
    }
    void setEntrenado(bool entrenado) {
        this->entrenado = entrenado;
    }
    void setSociable(bool sociable) {
        this->sociable = sociable;
    }
    void setPeso(float peso) { 
        this->peso = peso;
    }


    std::string getName() const {
        return name;
    }
    std::string getRaza() const {
        return raza;
    }
    std::string getColorPelo() const {
        return colorPelo;
    }
    std::string getColorOjos() const {
        return colorOjos;
    }
    std::string getSexo() const {
        return sexo;
    }
    std::string getFechaNacimiento() const {
        return fechaNacimiento;
    }
    std::string getVacunas() const {
        return vacunas;
    }
    int getEdad() const {
        return edad;
    }
    int getAltura() const {
        return altura;
    }
    bool getLargoPelo() const {
        return largo_pelo;
    }
    bool getEsterilizado() const {
        return esterilizado;
    }
    bool getDueno() const {
        return dueno;
    }
    bool getEntrenado() const {
        return entrenado;
    }
    bool getSociable() const {
        return sociable;
    }
    float getPeso() const {
        return peso;
    }

    void mostrarWawa() const{
        std::cout << "Perro:" << "\n\n"
            << "Nombre: " << name << "\n"
            << "Raza: " << raza << "\n"
            << "Color de pelaje: " << colorPelo << "\n"
            << "Color de ojos: " << colorOjos << "\n"
            << "Sexo: " << sexo << "\n"
            << "Fecha de nacimiento: " << fechaNacimiento << "\n"
            << "Vacunas: " << vacunas << "\n"
            << "Edad: " << edad << "\n"
            << "Altura: " << altura << "\n"
            << "Pelo largo: " << (largo_pelo ? "Si" : "No") << "\n"
            << "Esterilizado: " << (esterilizado ? "Si" : "No") << "\n"
            << "Con dueno: " << (dueno ? "Si" : "No") << "\n"
            << "Entrenado: " << (entrenado ? "Si" : "No") << "\n"
            << "Sociable: " << (sociable ? "Si" : "No") << "\n"
            << "Peso: " << peso << "\n\n";
    }
};

class Pelicula {
private:
    std::string titulo;
    std::string genero;
    std::string director;
    std::string guionista;
    std::string productor;
    std::string pais;
    std::string idioma;
    std::string productora;
    std::string actorPrincipal;
    std::string personajePrincipal;
    int anioEstreno;
    int duracion;
    int presupuesto;
    float calificacionEspecializada;
    float calificacionPublico;

public:
    Pelicula(std::string titulo, std::string genero, std::string director, std::string guionista, std::string productor, std::string pais, std::string idioma, std::string productora,
        std::string actorPrincipal, std::string personajePrincipal, int anioEstreno, int duracion, int presupuesto, float calificacionEspecializada, float calificacionPublico)
        : titulo(titulo), genero(genero), director(director), guionista(guionista), productor(productor), pais(pais), idioma(idioma), productora(productora), actorPrincipal(actorPrincipal),
        personajePrincipal(personajePrincipal), anioEstreno(anioEstreno), duracion(duracion), presupuesto(presupuesto), calificacionEspecializada(calificacionEspecializada), calificacionPublico(calificacionPublico){}
        

    void setTitulo(std::string titulo) {
        this->titulo = titulo;
    }
    void setGenero(std::string genero) {
        this->genero = genero;
    }
    void setDirector(std::string director) {
        this->director = director;
    }
    void setGuionista(std::string guionista) {
        this->guionista = guionista;
    }
    void setProductor(std::string productor) {
        this->productor = productor;
    }
    void setPais(std::string pais) {
        this->pais = pais;
    }
    void setIdioma(std::string idioma) {
        this->idioma = idioma;
    }
    void setProductora(std::string productora) {
        this->productora = productora;
    }
    void setActorPrincipal(std::string actorPrincipal) {
        this->actorPrincipal = actorPrincipal;
    }
    void setPersonajePrincipal(std::string personajePrincipal) {
        this->personajePrincipal = personajePrincipal;
    }
    void setAnioEstreno(int anioEstreno) {
        this->anioEstreno = anioEstreno;
    }
    void setDuracion(int duracion) {
        this->duracion = duracion;
    }
    void setPresupuesto(int presupuesto) {
        this->presupuesto = presupuesto;
    }
    void setCalificacionEspecializada(float calificacionEspecializada) {
        this->calificacionEspecializada = calificacionEspecializada;
    }
    void setCalificacionPublico(float calificacionPublico) {
        this->calificacionPublico = calificacionPublico;
    }

    std::string getTitulo() const {
        return titulo;
    }
    std::string getGenero() const {
        return genero;
    }
    std::string getDirector() const {
        return director;
    }
    std::string getGuionista() const {
        return guionista;
    }
    std::string getProductor() const {
        return productor;
    }
    std::string getPais() const {
        return pais;
    }
    std::string getIdioma() const {
        return idioma;
    }
    std::string getProductora() const {
        return productora;
    }
    std::string getActorPrincipal() const {
        return actorPrincipal;
    }
    std::string getPersonajePrincipal() const {
        return personajePrincipal;
    }
    int getAnioEstreno() const {
        return anioEstreno;
    }
    int getDuracion() const {
        return duracion;
    }
    int getPresupuesto() const {
        return presupuesto;
    }
    float getCalificacionEspecializada() const {
        return calificacionEspecializada;
    }
    float getCalificacionPublico() const {
        return calificacionPublico;
    }

    void mostrarPeli() const{
        std::cout << "Pelicula:" << "\n\n"
            << "Titulo: " << titulo << "\n"
            << "Genero: " << genero << "\n"
            << "Director: " << director << "\n"
            << "Guionista: " << guionista << "\n"
            << "Productor: " << productor << "\n"
            << "Pais: " << pais << "\n"
            << "Idioma: " << idioma << "\n"
            << "Productora :" << productora << "\n"
            << "Actor principal: " << actorPrincipal << "\n"
            << "Personaje principal: " << personajePrincipal << "\n"
            << "Anio de estreno: " << anioEstreno << "\n"
            << "Duracion: " << duracion << "\n"
            << "Presupuesto: " << presupuesto << "\n"
            << "Calificacion especializada: " << calificacionEspecializada << "\n"
            << "Calificacion publico: " << calificacionPublico << "\n\n";
    }
};

class Gomitas {
private:
    std::string color;
    std::string sabor;
    std::string forma;
    std::string tamano;
    std::string marca;
    std::string textura;
    std::string saborizante;
    std::string distribuidor;
    int cantidad;
    int caducidad;
    float pesoUnidad;
    float precio;
    bool dulce;
    bool tieneEnvoltura;
    bool vegano;

public:
    Gomitas(std::string color, std::string sabor, std::string forma, std::string tamano, std::string marca, std::string textura, std::string saborizante, std::string distribuidor,
        int cantidad, int caducidad, float pesoUnidad, float precio, bool dulce, bool tieneEnvoltura, bool vegano)
        :color(color), sabor(sabor), forma(forma), tamano(tamano), marca(marca), textura(textura), saborizante(saborizante), distribuidor(distribuidor), cantidad(cantidad),
        caducidad(caducidad), pesoUnidad(pesoUnidad), precio(precio), dulce(dulce), tieneEnvoltura(tieneEnvoltura), vegano(vegano) {}
    
    void setColor(std::string color) {
        this->color = color;
    }
    void setSabor(std::string sabor) {
        this->sabor = sabor;
    }
    void setForma(std::string forma) {
        this->forma = forma;
    }
    void setTamano(std::string tamano) {
        this->tamano = tamano;
    }
    void setMarca(std::string marca) {
        this->marca = marca;
    }
    void setTextura(std::string textura) {
        this->textura = textura;
    }
    void setSaborizante(std::string saborizante) {
        this->saborizante = saborizante;
    }
    void setDistribuidor(std::string distribuidor) {
        this->distribuidor = distribuidor;
    }
    void setCantidad(int cantidad) {
        this->cantidad = cantidad;
    }
    void setCaducidad(int caducidad) {
        this->caducidad = caducidad;
    }
    void setPesoUnidad(float pesoUnidad) {
        this->pesoUnidad = pesoUnidad;
    }
    void setPrecio(float precio) {
        this->precio = precio;
    }
    void setDulce(bool dulce) {
        this->dulce = dulce;
    }
    void setTieneEnvoltura(bool tieneEnvoltura) {
        this->tieneEnvoltura = tieneEnvoltura;
    }
    void setVegano(bool vegano) {
        this->vegano = vegano;
    }

    std::string getColor() const {
        return color;
    }
    std::string getSabor() const {
        return sabor;
    }
    std::string getForma() const {
        return forma;
    }
    std::string getTamano() const {
        return tamano;
    }
    std::string getMarca() const {
        return marca;
    }
    std::string getTextura() const {
        return textura;
    }
    std::string getSaborizante() const {
        return saborizante;
    }
    std::string getDistribuidor() const {
        return distribuidor;
    }
    int getCantidad() const {
        return cantidad;
    }
    int getCaducidad() const {
        return caducidad;
    }
    float getPesoUnidad() const {
        return pesoUnidad;
    }
    float getPrecio() const {
        return precio;
    }
    bool getDulce() const {
        return dulce;
    }
    bool getTieneEnvoltura() const {
        return tieneEnvoltura;
    }
    bool getVegano() const {
        return vegano;
    }

    void mostrarDulce() const {
        std::cout << "Dulce" << "\n\n"
            << "Color: " << color << "\n"
            << "Sabor: " << sabor << "\n"
            << "Forma: " << forma << "\n"
            << "Tamano: " << tamano << "\n"
            << "Marca: " << marca << "\n"
            << "Textura: " << textura << "\n"
            << "Saborizante: " << saborizante << "\n"
            << "Distribuidor: " << distribuidor << "\n"
            << "Cantidad: " << cantidad << "\n"
            << "Caducidad: " << caducidad << "\n"
            << "Peso por unidad: " << pesoUnidad << "\n"
            << "Precio: " << precio << "\n"
            << "Dulce: " << (dulce ? "Si" : "No") << "\n"
            << "Envoltura: " << (tieneEnvoltura ? "Si" : "No") << "\n"
            << "Vegano: " << (vegano ? "Si" : "No") << "\n";
    }
};


int main()
{
    Perro myWawa("Bruno", "Yorkie", "Tostado", "Cafe", "Macho", "24/Junio/2008", "rabia", 16, 65, 1, 0, 1, 0, 1, 2.5);
    myWawa.mostrarWawa();
    
    Pelicula peli("El padrino", "Crimen", "Francis Ford Coppola", "Mario y Francis", "Albert S. Ruddy", "Estados Unidos", "Ingles", "Paramount Pictures",
        "Marlon Brando", "Vito Corloene", 1972, 175, 7, 97, 98);
    peli.mostrarPeli();

    Gomitas misGomitas("Rojo", "Fresa", "Osito", "Pequeno", "GummyBears", "Suave", "Natural", "Dulces del mundo", 50, 202506, 4.5, 2.99, 1, 0, 1);
    misGomitas.mostrarDulce();

    return 0;
}
