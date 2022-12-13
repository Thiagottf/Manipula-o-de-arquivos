#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	double media;
	double desvio;
	double Valores;
	int numero;
	double dados;
    double n;
	 double dadoEntrada;
    ifstream arquivoEntrada;
    arquivoEntrada.open("out.txt");

    if(arquivoEntrada.is_open());
    {
        
         while(!arquivoEntrada.eof())
		 {
        arquivoEntrada >> dadoEntrada;
        media+=dadoEntrada; 
        numero ++ ;
         }  
		 media = media/numero; 
    }
    cout<< "A media eh\n" << media;
     
     while(!arquivoEntrada.eof())
		 {
        arquivoEntrada >> dadoEntrada;
        dados=pow(dadoEntrada-media,2);
        n+=dados;
         }  
       desvio=sqrt(n/numero); 
    cout << "\nSeu desvio eh:\n"<< desvio;
    
    
    


    arquivoEntrada.close();
    return 0;
}