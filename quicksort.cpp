
    int recursiyaleft (int left, int left1){
        if (left1 < left){
            left = left1;
            left1 = result1;
            return result1;
        }
    }



    int main () 

{
     int a;
   
    cout << " ";
    cin >> a; // Не нужно вводить, если договорились, что длина массива 20
   
    int* array = (int*)malloc(sizeof(int) * a);
     
    for (int i = 0; i < a; i++) {
        array[i] = rand() % 120;
        cout << array[i] << " ";
    }
    
    int pivot = array [9];
    cout << endl << "oporn element " << pivot;
    
    int left;  
    int right; 
    int left1;
    int right1;
    
    cout << endl << " left side: ";
    // Реализуй в одном цикле поиск элементов(подсказка: цикл while)    
    for (int i = 0; i < a; i++) { 

        if (pivot > array[i]) {  // Неправильное условие      
            left = array[i]; // Запоминай индекс, а не сам элемент, тебе же его потом свапать
            cout << " "<< left;
        }
    }     
    
    cout << endl << " right side: ";
    for (int i = 0; i < a; i++) {
        if (pivot < array[i]){ // Неправильное условие
            right = array[i];
            cout << " "<< right;
        }
    }
    
    int result1 = recursiyaleft (left,left1); // В этой функции вообще не вижу смысла
    
    cout <<" "<< "xoba "<< result1;
    
    
    return 0;
}
