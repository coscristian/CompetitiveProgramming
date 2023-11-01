#include<bits/stdc++.h>
#define ff first
#define ss second
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

void imprimir_arreglo(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){
    FIN;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif
    
    int n = 10;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        v[i] = i;
    
    // Funciones importantes
    //Aleaotorio
    cout << "Aleatorio: ";
    random_shuffle(v.begin(), v.end());
    imprimir_arreglo(v);
    cout << endl;

    // Ordenado
    cout << "Ordenado: ";
    sort(v.begin(), v.end());
    imprimir_arreglo(v);
    cout << endl;

    // rbegin() -> iterador al final, rend() -> iterador al inicio 
    // Ve la lista al reves
    cout << "Ordena de derecha a izquierda (Descendentemente): ";
    sort(v.rbegin(), v.rend());
    imprimir_arreglo(v);
    cout << endl;

    // Cambie el tamaño del arreglo
    v.resize(15);
    iota(v.begin(), v.end(), 24); // Ingresa elementos consecutivos desde el numero indicado
    imprimir_arreglo(v);
    cout << endl;

    // max_element(v.begin(), v.end()) -> Retorna un iterador a el mayor elemento de el arreglo
    // * -> Accede al valor del iterador
    cout << "Elemento mayor: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Elemento mayor entre el primer elemento y el tercero: " << *max_element(v.begin(), v.begin() + 3); 
    cout << endl;

    // min_element(v.begin(), v.end()) -> Retorna un iterador a el menor elemento de el arreglo
    // * -> Accede al valor del iterador
    cout << "Elemento menor: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Elemento menor entre el primer elemento y el cuarto: " << *min_element(v.begin(), v.begin() + 4); 
    cout << endl;

    // accumulate(v.begin(), v.end(), valorInicialSuma) -> Suma de los valores en los rangos especificados
    cout << "Acumulado entre el tercer y quinto elemento: " << accumulate(v.begin(), v.begin()+3, 0);
    cout << endl;

    // lower_bound() y upper_bound() necesitan el arreglo ordenado
    // Complejidad: log2(n)
    // lower_bound() -> Busca el primer elemento que es mayor o igual a x
    int x = 5;
    cout << "Lower bound: (Primer elemento mayor o igual a " << x << "): " << *lower_bound(v.begin(), v.end(), x);
    cout << endl; 

    // upper_bound() -> Busca el primer elemento que es mayor a y
    int y = 20;
    vector<int> v2 = {10, 20, 20, 20, 40, 50};
    imprimir_arreglo(v2); cout << endl;
    cout << "Lower bound: (Primer elemento mayor a " << y << "): " << *upper_bound(v2.begin(), v2.end(), y);
    cout << endl; 
    
    cout << "--------" << endl;

    // DEQUE: Permite agregar elementos al inicio y al final en O(1)
    cout << "DEQUE: (Double Ended Queue)" << endl;
    deque<int> q;
    q.push_back(5);
    q.push_back(7);
    q.push_front(1);
    q.push_front(7);
    for(int i = 0; i < q.size(); i++){
        cout << q[i] << " " ;
    }

    cout << "-----------" << endl;
    cout << "Conjuntos" << endl;

    // SET -> Mantiene los elementos ordenados
    set<int> s;
    s.insert(12); // O(log2(tamanio))
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(12);
    s.erase(7);

    set<int>::iterator it = s.begin();

    //for(set<int>::iterator it = s.begin(); it != s.end(); it++){
    //    cout << *it << " ";
    //}

    int num = 12;
    cout << "# de ocurrencias de " << num << ": " << s.count(num) << endl;

    if(s.find(10) != s.end()){ // Si es diferente a s.end(), lo encontró
        cout << "Si está" << endl;
    }

    auto it2 = s.find(12);
    it2 = next(it2); // Es igual a it++
    it2 = prev(it2); // Es igual a it--

    for(auto elemento: s){ // O(tamanio)
        cout << elemento << " ";
    }

    // Unordered set -> Igual al set solo que no los tiene ordenados
    unordered_set<int> us;
    for(int i = 0; i < 1e6; i++){
        s.insert(i);
    }
    cout << endl;

    // Map -> Diccionario (Mantiene ordenados por llave)
    map<string, int> m;
    m["xd"] = 1;
    m["pp"] = 2;
    m["zz"] = 3;

    for(auto elemento : m){
        cout << elemento.first << " " << elemento.second << endl;
    }

    // Multiset -> Guarda multiples ocurrencias
    multiset<int> ms;

    // Unordered map -> Es mas rapido pero no los mantiene ordenados
    unordered_map<string, int> umap;

    // Cola de prioridad (Mantiene los elementos ordenados), solo sirve para consultar el valor maximo
    // Es mas rapido que un set
    // Es un arbol binario en donde el mayor elemento está de raiz
    // SOlo permite eliminar el elemento mayor
    priority_queue<int> pq; 
    pq.push(5);
    pq.push(2);
    pq.push(7); // log2(tamanio)
    pq.push(5);

    

    cout << pq.top() << endl; // O(1)

    pq.pop(); // log2(tamanio)



    return 0;
}
