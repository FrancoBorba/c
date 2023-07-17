#include <iostream>
#include<string>
using namespace std;

// NÃO É QUESTÃO APENAS TESTES DE STRINGS
int main(){
    string s1("Comparando strings."), s2("biblioteca"),
            s3("varanda"), c2(s2) ;



    cout << " S1:" << s1 << endl;
    cout << " S2:" << s2 << endl;
    cout << " S3:" << s3 << endl;
    cout << " C2:" << c2 << endl;

    // comparando s1 e s2
        if (s1 == s2) {
            cout << "s1 == s2\n";
        } 
        else{ 
            if( s1 > s2){
            cout << "S1 > S2\n";
        }
        else{
            cout << " S1 < S2\n";
        }
        }

    // comparando S2 e C2

    /* int f = s2.compare(c2); // se for iguais retorna 0 , se não retorna 1 ou -1
    
            if (f == 0){
            cout << "s2 == c2 \t s2.compare(c2) == 0\n";
            }
            else{
            if (f > 0)
                    cout << "s2 > c2 \t s2.compare(c2) > 0\n";
                        else
                    cout << "s2 < c2 \t s2.compare(c2) < 0\n";
                    } */

    string t1( "abcd") , t2("tesabtcdeefg");
    int tamanho = t2.length();
   
    cout << tamanho << endl;
    
    int v , controle;
    for( int i = 0 ; i < tamanho ; i++){
            v = t1.compare(0 , 4 , t2 , i ,4);
           
            if(v == 0){
                controle = i;
                break;
            }
          
    } 
    if( v == 0){
        cout << " A string 1 esta contida na string 2 a partir da " << controle + 1 << " ate a " << (controle + 1) + t1.length()<<endl;
    }
    else{
        cout << " A string nao esta contida" << endl;
    }

      
     int f = s3.compare(1 , 1 , s2 , s2.size()-1,1); // comparação da letra de um com a letra de outro
     cout << f << endl;

       

}