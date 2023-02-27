#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int main() {

  ifstream file("C:\\Users\\MaxRo\\CLionProjects\\untitled3\\Grafo.txt");
  int n;
  file >> n;
  map<int, vector<int>> adj;

  int a, b;
  for (int i = 0; i < n; i++) {
    file >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  // Imprimir el mapa de adyacencia
  for (auto const & [nodo, adyacentes] : adj) {
    cout << nodo << ": ";
    for (auto const & adyacente : adyacentes) {
      cout << adyacente << " ";
    }
    cout << endl;
  }


  return 0;
}






