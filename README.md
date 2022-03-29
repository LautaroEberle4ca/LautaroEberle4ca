5
a_ v
b_ v
c_ v
d_ f
e_ f
f_ v
g_ v

10

A_ the data doesn’t make  sense

14

a_ very good

15

a_very good and excellent

200
10
a_ en este caso a partir del segundo if, es reemplazado todo por el else if y finalmente else, quedando como secuencia if, else if, else if, else if, else.


1)

#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese un numero para determinar la base: ";
    int base;
    cin>>base;
    cout<<"El numero ingresado fué: "<<base<< endl;
    
    cout<<"Ingrese un numero para determinar la altura: ";
    int altura;
    cin>>altura;
    cout<<"El numero ingresado fué: "<<altura<< endl;
    
    int suma= (base*altura)/2;
    
    cout<<"El resultado del area es: "<<suma<< endl;
    
    

    return 0;
}

2)
#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese un numero: ";
    int n1;
    cin>>n1;
    cout<<"El numero ingresado fué: "<<n1<< endl;
    
    cout<<"Ingrese otro numero: ";
    int n2;
    cin>>n2;
    cout<<"El numero ingresado fué: "<<n2<< endl;
    
    int suma= (n1+n2);
    int resta=(n1-n2);
    int division=(n1/n2);
    int multiplicacion=(n1*n2);
    
    cout<<"El resultado de la suma es: "<<suma<< endl;
    
    cout<<"El resultado de la resta es: "<<resta<< endl;
    cout<<"El resultado de la division es: "<<division<< endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<< endl;

    return 0;
}

3)

#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese un numero: ";
    int n1;
    cin>>n1;
    cout<<"El numero ingresado fué: "<<n1<< endl;
    
    cout<<"Ingrese otro numero: ";
    int n2;
    cin>>n2;
    cout<<"El numero ingresado fué: "<<n2<< endl;
    
    if(n2==0){
        
     cout<<"ERROR"<<endl;
     
     }else if(n2!=0){
         int division=n1/n2;
         cout<<"El resultado es: "<<division<<endl;
     }
    
    
  

    return 0;
}

4)

#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese la cantidad de libros que el cliente comprará: ";
    int n1;
    cin>>n1;
    cout<<"El cantidad ingresada fué: "<<n1<< endl;
    
    
    if(n1>=5){
        
     int multiplicacion=(250*n1);  
     cout<<"El monto a pagar es: "<<multiplicacion<<endl;
     
     }else if(n1<=4){
         int multiplicacion=(300*n1);
         cout<<"El monto a pagar es: "<<multiplicacion<<endl;
     }
    
    
  

    return 0;
}

5)


#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese un número: ";
    int n1;
    cin>>n1;
    cout<<"El numero ingresado fué: "<<n1<< endl;
    

    if(n1/2==0){
        
     cout<<"El número es par"<<endl;
     
     }else{
        
         cout<<"El número es impar "<<endl;
     }
    
    

    return 0;
}
