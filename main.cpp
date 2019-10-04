#include <iostream>

using namespace std;



    void imprimirp (int arr[],int tam){
    while(tam--){
        cout<<*arr<<'\t';
        arr++;
        }
        cout<<endl;
    }

    int sumapunt(int *arr,int tam){
        int sum=0;
        while(tam--){
           sum+=*arr;
           arr++;
        }

        return sum;

    }

    int sumarecursiva(int *arr,int tam){
            if (tam==1)
                return *arr;
        return *arr + sumarecursiva(arr+1,tam-1);
            }


    int invertir (int *arr,int tam){
     int m = tam/2;
     int ulti= tam-1;
     int *ptr=arr+ulti;
        for (int i = 0;i<m; i++){
            int aux = *arr;
            *arr = *ptr;
            *ptr = aux;
            arr++;
            ptr--;
        }

    }

    int invertire(int *arr, int tam,int i = 0) {
        int *ptr = arr + tam - 1-2*i;
        if (i == tam / 2) {
            return 0 ;
        }
        int  aux = *arr;
            *arr = *ptr;
            *ptr = aux;
             arr++;

        invertire(arr, tam,++i);
    }

 void bub(int arr[],int tam){
    for (int i=1;i<tam;i++){
          for (int h=0;h<tam-i;h++){
            if(arr[h]>arr[h+1]){
                int c = arr[h];
                arr[h]= arr[h+1];
                arr[h+1]=c;
        }
    }
    }

}



 void ins(int arr[],int tam){
    for(int i=1;i<tam;i++){
        int c = arr[i];
        int h = i-1;
        while ((arr[h]>c)&&(h>=0)){
            arr[h+1] = arr[h];
            h--;
            arr[h+1]=c;
    }
}
}





 int main(){
    int holi[5]={1,2,3,4,5};
    int *ptr1 = &holi[0];
    int *ptr2 = &holi[4];
    cout << "Hello world!" << endl;
    cout<<endl;
    cout<< sumapunt(holi,5)<<endl;
    cout<<endl;
    imprimirp(holi,5);
    cout<<endl;
    cout<<sumarecursiva(holi,5);
    cout<<endl;
    cout<<endl;
    invertir(holi,5);
    cout<<endl;
    imprimirp(holi,5);
    cout<<endl;
    cout<<endl;
    invertire(holi,5);
    cout<<endl;
    cout<<endl;
    imprimirp(holi,5);
    return 0;



}

