// Diego Costoso - 801199097
// Asignación grafos 
// CCOM3034 - Data Structures


#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4, 2);

  G.print();
  std::cout << "\nCantidad de Aristas: " << G.numEdges() << std::endl;
  std::cout << "In-degree del vertice: " << G.inDegree(9) << std::endl;
  std::cout << "u tiene el mayor In-degree? : " << G.isInfluencer(2) << std::endl;
}
