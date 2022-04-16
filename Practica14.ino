int ordenar[] = {9,6,7,8,3,5,4,1,2};
int n = sizeof(ordenar)/sizeof(ordenar[0]);

void ordena(int lista[], int izq, int drch){
    int i, j, x, tmp;
    i=izq;
    j=drch;
    x=lista[(izq+drch)/2];

    while(i<=j){
        while(lista[i] < x && i < right){
            i++;
        }
        while(lista[j] > x && j > left){
            j--;
        }
        if( i <= j ){
            tmp = lista[i];
            lista[i] = lista[j];
            lista[j] = tmp;
            i++;
            j--;
        }
    }
    if( j > izq ){
        ordena(lista, izq, j);
    }
    if( i < drch ){
        ordena(lista,i,drch);
    }
}

void setup(){
    Serial.begin(9600);
    delay(10);
}

void loop(){
    Serial.print("Lista sin ordenar: ");
    for(int a = 0; a < n; a++){
        Serial.print(ordenar[a]);
    }
    Serial.println();
    ordena(ordenar,0,n-1);
    Serial.print("Lista ordenada: ");
    for(int b = 0;)
}
