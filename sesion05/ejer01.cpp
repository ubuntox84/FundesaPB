#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
struct persona
{
    string dni;
    string nombre;
    string apellido;
    string correo;
    string celular;
};
void agregar(vector<persona> &lista)
{
    persona p;
    cout << "ing. DNI:";
    cin >> p.dni;
    cin.ignore();
    cout << "ing. Nombre: ";
    getline(cin, p.nombre);
    cout << "ing. Apellido: ";
    getline(cin, p.apellido);
    cout << "ing. Celular: ";
    getline(cin, p.celular);
    cout << "ing. Correo: ";
    getline(cin, p.correo);
    lista.push_back(p);
}
string mostrarpersona(persona p)
{
    string cad;
    cad = p.dni + "," + p.nombre + "," + p.apellido + "," + p.celular + "," + p.correo;
    return cad;
}
void mostrar(vector<persona> &lista)
{
    if (lista.empty())
    {
        cout << "No hay personas registradas!\n";
        return;
    }
    cout<<"---------------------------"<<endl;
    for (persona p : lista)
    {
        cout << mostrarpersona(p) << endl;
    }
    cout<<"---------------------------"<<endl;
}
int buscar(vector<persona> lista, string dni)
{
    int resp = -1;
    int i = 0;
    for (persona p : lista)
    {
        if (p.dni == dni)
        {
            resp = i;
            break;
        }
        i++;
    }
    return resp;
}
vector<persona> leerArchivo() {
    vector<persona> personas;
    ifstream archivo("persona.txt"); // Abrir archivo en modo lectura
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo para leer.\n";
        return personas;
    }

    string linea;
    while (getline(archivo, linea)) {
        persona persona;
        size_t pos1 = linea.find(',');
        size_t pos2 = linea.find(',', pos1 + 1);
        size_t pos3 = linea.find(',', pos2 + 1);
        size_t pos4 = linea.find(',', pos3 + 1);

        persona.dni = linea.substr(0, pos1);
        persona.nombre = linea.substr(pos1 + 1, pos2 - pos1 - 1);
        persona.apellido = linea.substr(pos2 + 1, pos3 - pos2 - 1);
        persona.correo = linea.substr(pos3 + 1, pos4 - pos3 - 1);
        persona.celular = linea.substr(pos4 + 1);

        personas.push_back(persona);
    }

    archivo.close();
    return personas;
}
void escribirArchivo(const vector<persona>& lista) {
    ofstream archivo("persona.txt"); // Abrir archivo en modo escritura
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo para escribir.\n";
        return;
    }
    for (const auto& persona : lista) {
        archivo << persona.dni << ","
                << persona.nombre << ","
                << persona.apellido << ","
                << persona.correo << ","
                << persona.celular << endl;
    }
    archivo.close();
    cout << "Datos escritos en el archivo con éxito.\n";
}
int main()
{
    std::vector<persona> lista;
    int op;
    bool band = true;
    lista=leerArchivo();
    do
    {
        cout << "\n[1] agregar\n[2] mostrara\n[3] buscar\n[4] Eliminar\n[0] Salir: \nQue desea realiza?";
        cin >> op;
        switch (op)
        {
        case 1:
            agregar(lista);
            break;
        case 2:
            mostrar(lista);
            break;
        case 3:
        {
            string dni;
            cout << "ing. DNI a buscar: ";
            cin >> dni;
            cin.ignore();
            int indice = buscar(lista, dni);
            if (indice >= 0)
                cout<<mostrarpersona(lista[indice])<<endl;
            else
                cout << "No se encontro persona con el DNI: " << dni<<endl;
        }
        break;
        case 4:
        {
            string dni;
            char op1;
            cout << "ing. DNI a eliminar: ";
            cin >> dni;
            int indice = buscar(lista, dni);
            if (indice >= 0){
                cout<<"Esta seguro que quiere eliminar a: "<<mostrarpersona(lista[indice])<<" SI o NO"<<endl;
                cin>>op1;
                cin.ignore();
                if(op1=='s' || op1=='S'){
                    lista.erase(lista.begin()+indice);
                    cout<<"Persona eliminada!!";
                }
                }
            else
                cout << "No se encontro persona con el DNI: "<< dni<<endl;
        }
        break;
        case 0:
            band = false;
            break;
        default:
            cout << "Caracter no identificado!!";
            break;
        }
    } while (band);
    cout << "Hasta pronto!!";
    escribirArchivo(lista);
}