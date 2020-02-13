/*
    An implementation of Dijkstra’s shortest path algorithm.

    Problem statement: Given a graph and a source vertex find the shortest
                       distance between that source vertex and all other vertices.
*/


#include <iostream>
#include <utility>
#include <limits.h> 
#include <stdio.h> 

using namespace std;

// Graph contains 9 points
static const int SIZE = 9;

void computeMinDistance(int distArray[], bool sptSet[]){
    for(int i = 0; i < SIZE; ++i){

    }
}


void shortestDistanceAlgorithm(int graph[SIZE][SIZE], int src){

    int dist[SIZE] = {INT_MAX};
    int shortedPathSet[SIZE] = {false};

    dist[src] = 0;

    
}


int main(){
    // Graph Structure taken from (https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)

    int src_vertex  = 0;
    // int dest_vertex = 0;
    // cout << "Enter destination vertex: " << endl;
    // cin >> dest_vertex;

    cout << "Enter source vertex, " << "index must be between 0-"<< SIZE-1 << "." << endl;
    cin >> src_vertex;
    if (!(src_vertex >= 0 && src_vertex < SIZE)){
        cout << "\nSource vertex value is not within range!!. Try again.\n" << endl;
        return 0;
    }
    cout << "\nComputing the shortest distance between source vertex and all other vertices in graph!!\n" << endl;

    
    int graph[SIZE][SIZE] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                              { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                              { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                              { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                              { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                              { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                              { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                              { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                              { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 


    shortestDistanceAlgorithm(graph,0);
    return 0;
}


  

