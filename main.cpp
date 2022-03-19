#include <iostream>

using namespace std;

int main()
{

    int operacao;
    float  num1 , num2 , resultado;

    cout<<"Digite a operação selecionada:"<<endl;
    cout<<"1 - Soma"<<endl;
    cout<<"2 - Subtracao"<<endl;
    cout<<"3 - Divisao"<<endl;
    cout<<"4 - Multiplicacao"<<endl;
    cout<<"                 "<<endl;
    cin>>operacao;

    if(operacao<1 || operacao>4){
        cout<<"Não existe a operação informada!";
        return 0;
    }

    cout << "digite o primeiro numero:";
    cin >> num1;
    cout <<"digite o segundo numero:";
    cin >> num2;

    // TODO Gustavo terminar

    cout << "O Resultado é " << resultado;


    return 0;
}
