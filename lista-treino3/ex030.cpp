#include<iostream>
#include<string>

using namespace std;


int main(){
    
    string s1("bala");

    string s2 , s3,s4;

    s2 = s1;
    s3.assign(s1);
    s2[0] = s3[2] = 't';
    int tamanho = s3.length();
    cout << " S1:" << s1 << endl;
    cout << " S2:" << s2 << endl;
    cout << " S3:" << s3 << endl;
    cout << " S4:" << s4 << endl;
    cout << " Tamanho" << tamanho << endl;






}