#include<iostream>
#include<string>

// NÃO É QUESTÃO APENAS TESTES DE STRINGS

using namespace std;


int main(){
    
    string s1("bala");

    string s2 , s3;

    s2 = s1;
    s3.assign(s1);
    s2[0] = s3[2] = 't';
    int tamanho = s3.length();
    for(int i = 0 ; i < tamanho ; i++){
        cout<< s3.at(i)<<endl;
    }
    string s4("Trem-"+ s1), s5;
    s1.append("da");
    s3 += "lhador";
    s5.append(s1 , 2 , s1.size());
    s5.append("inha");
    
    cout << " S1:" << s1 << endl;
    cout << " S2:" << s2 << endl;
    cout << " S3:" << s3 << endl;
    cout << " S4:" << s4 << endl;
    cout << " S5:" << s5 << endl;
    






}