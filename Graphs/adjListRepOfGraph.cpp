#include <iostream>
#include <vector>

using namespace std;
const int NUM_NODES = 7;
struct edge{
    int start;
    int end;
};

class Graph{
    public:
        vector<vector<int> > adjList;

    Graph(const vector<edge> & edges){
        adjList.resize(NUM_NODES);
        for(auto & edge: edges){
            cout << edge.start << "  " << edge.end << endl;
            adjList[edge.start].push_back(edge.end);
        }

    }
    void print(){
        for(int i=0; i< NUM_NODES; ++i){
     ////////////////////////////       
        }
    }
};


int main(){

    vector<edge> edges = {{ 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
		                { 3, 2 }, { 4, 5 }, { 5, 4 }};


    // cout << *arr << endl;
    // cout << vec[0].size() << endl;
    // Graph graph(edges);
    // graph.size();
    return 0;
}