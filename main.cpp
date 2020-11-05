#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string>meses;
    string op;
    while(true)
    {
        cout<<"1)agregar "<<endl;
        cout<<"2)mostar"<<endl;
        cout<<"3)inicializar"<<endl;
        cout<<"4)frente"<<endl;
        cout<<"5)ultimo"<<endl;
        cout<<"6)ordenar"<<endl;
        cout<<"7)insertar"<<endl;
        cout<<"8)eliminar"<<endl;
        cout<<"9)eliminar ultimo"<<endl;
        cout<<"0)salir"<<endl;

        getline(cin,op);
        if(op=="1"){
            string mes;
            cout<<"mes: ";
            cin>>mes;cin.ignore();
            meses.push_back(mes);

        }
        else if(op=="2"){
            for(size_t i=0;i<meses.size();i++)
            {
                cout<<meses[i]<<", ";
            }
            cout<<endl;
        }
        else if(op=="3")
        {
         size_t n;
         string mes;
         cout<<"tamaño: ";
         cin>>n;
         cout<<"mes: ";
         cin>>mes;cin.ignore();

         meses=vector<string>(n,mes);
        }
        else if(op=="4")
        {
            if(meses.empty())
            {
                cout<<"vector vacio"<<endl;
            }else{
            cout<<meses.front()<<endl;
            }
        }
        else if(op=="5")
        {
             if(meses.empty())
            {
                cout<<"vector vacio"<<endl;
            }else{
            cout<<meses.back()<<endl;
            }
        }
        else if(op=="6")
        {
            sort(meses.begin(),meses.end());
        }
        else if(op=="7")
        {
            size_t p;
            string mes;
            cout<<"posicion: ";
            cin>>p;
            cout<<"mes: ";
            cin>>mes;cin.ignore();
            if(p>=meses.size())
            {
                cout<<"no velido"<<endl;
            }else{
            meses.insert(meses.begin()+p,mes);
            }

        }
        else if(op=="8")
        {
            size_t p;
            cout<<"posicion: ";
            cin>>p;cin.ignore();
            if(p>=meses.size())
            {
                cout<<"no valido"<<endl;
            }else{
            meses.erase(meses.begin()+p);
            }

        }
        else if(op=="9")
        {
            if(meses.empty())
            {
                cout<<"vector vacio"<<endl;
            }else{
            meses.pop_back();
            }
        }
        else if(op=="0")
        {
            break;
        }

    }
    return 0;
}
