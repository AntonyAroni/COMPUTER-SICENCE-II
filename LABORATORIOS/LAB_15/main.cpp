/*
 El alumno deberá de implementar un conjunto de clases que permita seleccionar
las piezas de un automóvil, es decir, se podrán tener componentes a disposición
del cliente (puertas, llantas, timón, asientos, motor, espejos, vidrios, etc.). Del cual
el cliente puede indicar que características de color puede tener cada pieza. Al
final mostrar opciones al Cliente o permitirle que él pueda escoger las piezas e
indicar el color. Utilizar el patrón Builder.
*Pista, en lugar de trabajar el producto con una lista de componentes, se puede
alojar una estructura o clase.
 */

#include "iostream"
#include "BuilderEspecifico.h"
using namespace std;
 void ClienteCodeAgregar(BuilderEspecifico *builder, Coche *p){
     int opc_secundaria=0;
     string color;
    while (opc_secundaria!=8){
        system("cls");
        cout<<"--------MENU DE PEDIDO--------"<<endl<<endl;
        cout<<"1. Agregar puerta."<<endl;
        cout<<"2. Agregar llanta."<<endl;
        cout<<"3. Agregar timon."<<endl;
        cout<<"4. Agregar asiento."<<endl;
        cout<<"5. Agregar motor."<<endl;
        cout<<"6. Agregar espejos."<<endl;
        cout<<"7. Agregar vidrios."<<endl;
        cout<<"8. Terminar y retroceder."<<endl;
        cin>>opc_secundaria;
        switch (opc_secundaria) {
            case 1:
                system("cls");
                cout<<"De que color desea que sea la puerta?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirPuerta(color);
                cout<<"Puerta agregada correctamente!"<<endl;
                system("pause");
                break;
            case 2:
                system("cls");
                cout<<"De que color desea que sea la llanta?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirLlanta(color);
                cout<<"Llanta agregada correctamente!"<<endl;
                system("pause");
                break;
            case 3:
                system("cls");
                cout<<"De que color desea que sea el timon?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirTimon(color);
                cout<<"Timon agregado correctamente!"<<endl;
                system("pause");
                break;
            case 4:
                system("cls");
                cout<<"De que color desea que sea el asiento?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirAsiento(color);
                cout<<"Asiento agregado correctamente!"<<endl;
                system("pause");
                break;
            case 5:
                system("cls");
                cout<<"De que color desea que sea el motor?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirMotor(color);
                cout<<"Motor agregado correctamente!"<<endl;
                system("pause");
                break;
            case 6:
                system("cls");
                cout<<"De que color desea que sean los espejos?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirEspejos(color);
                cout<<"Espejos agregados correctamente!"<<endl;
                system("pause");
                break;
            case 7:
                system("cls");
                cout<<"De que color desea que sean los vidrios?"<<endl;
                getline(cin >> ws, color);
                builder->ProducirVidrios(color);
                cout<<"Vidrios agregados correctamente!"<<endl;
                system("pause");
                break;

        }

    }
    opc_secundaria=0;
}

void ClienteCodeMenu(BuilderEspecifico *builder, Coche *p) {
    int opc_principal;
    do {
        system("cls");
        cout << "--------Menu Principal--------" << endl << endl;
        cout << "1. Crear pedido de coche" << endl;
        cout << "2. Mostrar pedido actual" << endl;
        cout << "3. Salir" << endl;
        cin>>opc_principal;

        switch (opc_principal) {
            case 1:
                ClienteCodeAgregar(builder, p);
                break;
            case 2:
                system("cls");
                p = builder->GetProducto();
                p->ListaComp();
                system("pause");
                break;
            default:
                break;
        }
    } while (opc_principal != 3);


}

int main() {
    auto *builder = new BuilderEspecifico();
    Coche *p;
    ClienteCodeMenu(builder, p);
    delete p;
    delete builder;
    return 0;
}