/*
    An implementation of Dijkstra’s shortest path algorithm.

    Problem statement: Given a graph and a source vertex find the shortest
                       distance between that source vertex and all other vertices.
*/


#include <iostream>
#include <utility>

using namespace std;

static const int SIZE = 9;

void computeMinDistance(){
    for(int i = 0; i < SIZE; ++i){

    }
}


void dijkstrasAlgo(int graph[SIZE][SIZE]){

}


int main(){
    // Graph Structure taken from (https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)

    int src_vertex  = 0;
    int dest_vertex = 0;

    cout << "Enter source vertex: " << endl;
    cin >> src_vertex;

    cout << "Enter destination vertex: " << endl;
    cin >> dest_vertex;



    int dist[8] = {0};

    int graph[SIZE][SIZE] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                              { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                              { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                              { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                              { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                              { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                              { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                              { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                              { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 



    return 0;
}

