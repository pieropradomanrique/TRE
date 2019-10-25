#include <iostream>

using namespace std;

int lencade(char *cadena){
    int tam=0;
    for(int i=0;*cadena++!='\0';i++)
        tam++;
    return tam;
}

int lencader(char *cad){
    if(*cad=='\0')
        return 0;
    return 1+lencader(++cad);
}

void inv(char *cad){
    char *fin =cad+lencade(cad)-1;
    while(fin>cad){
       char t=*cad;
       *cad=*fin;
       *fin=t;
       fin--;
       cad++;
    }
}

void invre(char *cad,int i=0){
    char *fin= cad+lencade(cad)-1-i;
    if (fin<=cad)
        return;
    char t=*cad;
    *cad=*fin;
    *fin=t;
    invre(++cad,++i);


}

bool pali(char *cad){
    int tam=lencade(cad);
    char *ptr=tam-1+cad;
    while(ptr-->=cad++)
    if(*cad!=*ptr)
        return false;
    return true;



}

bool palire(char *cadena,int i=0){
    char *fin=cadena+lencade(cadena)-1-i;
    if(*cadena!=*fin)
        return 0;
    if(i==lencade(cadena)/2)
        return 1;
    return palire(++cadena,++i);

}

int main()
{
    char cadena3[]="luz azul";
    cout<<lencade(cadena3)<<endl;
    cout<<endl;
    cout<<lencader(cadena3)<<endl;
    cout<<endl;
    inv(cadena3);
    cout<<cadena3<<endl;
    cout<<endl;
    invre(cadena3);
    cout<<cadena3<<endl;
    cout<<endl;
    cout<<pali(cadena3)<<endl;
    cout<<endl;
    cout<<palire(cadena3)<<endl;


}
