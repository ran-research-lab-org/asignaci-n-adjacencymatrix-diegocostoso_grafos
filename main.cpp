// Diego Costoso - 801199097
// Asignación grafos 
// CCOM3034 - Data Structures


#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0, 9);
  G.addEdge(4, 2);
  G.addEdge(4, 3);
  G.addEdge(1, 3);
  G.addEdge(2, 3);
  G.addEdge(3, 4);
  G.addEdge(7, 4);
  G.addEdge(6, 4);


  G.print();
  std::cout << std::boolalpha;
  std::cout << "\nCantidad de Aristas: " << G.numEdges() << std::endl;
  std::cout << "In-degree del vertice: " << G.inDegree(3) << std::endl;
  std::cout << "u tiene el mayor In-degree? : " << G.isInfluencer(4) << std::endl;
}
