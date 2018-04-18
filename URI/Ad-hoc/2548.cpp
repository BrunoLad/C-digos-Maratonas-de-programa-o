#include <iostream>

//void ordenaBubD(int *, int);

int main(){
    
    while(std::cin){
        int M, N, *valores, preju=0;
        
        std::cin >> N >> M;
        
        valores = new int[N];
        
        for(int i = 0; i<N; i++){
            std::cin >> *(valores + i);
        }
        
        //ordenaBubD(valores, N);
        
        for(int i=N; i>N-M; i--){
           preju+= *(valores+(i-1)); 
        }
        
        std::cout << preju << std::endl;
        preju=0;
        
        delete valores;
    }
    
    
    return 0;
}

/*void ordenaBubD(int *v, int t){
    int aux;
    
    for(int i=0; i<t; i++){
        for(int j=0; j<t-i-1; j++){
            if(v[j] < v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}*/