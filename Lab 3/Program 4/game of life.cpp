#include <iostream>
using namespace std;

class Item{

    public: 

    int x;
    int y;
    Item *next;

    Item(int x, int y){
        this -> x = x;
        this -> y = y;
        next = NULL;        
    }
    
};

class CoordList{
    public:
    Item *head, *tail;


    CoordList(){
        head = NULL;
        tail = NULL;
    }
    

    void add(int x, int y){
        Item *newitem = new Item(x,y);
        if(head == NULL){
            head = newitem;
            tail = newitem;

        }
        else{
            
            tail -> next = newitem;
            tail = newitem;
        }
        // cout<<"add():head "<<head<<endl;
        // cout<<"add():tail "<<tail<<endl;
    }

    void rm_front(){
        if(head == tail){
            delete head;
            delete tail;
        }
        Item *temp = head;
        head = head -> next;
        delete temp;
    }
    

    void print(){
        Item *temp = head;
        while(temp != NULL){
            cout << temp -> x << temp -> y << endl;
            temp = temp -> next;
        }
    }
};


class LifeGrid{

    public:
    int rows, cols;
    int **Grid;
    
    LifeGrid(int rows, int cols){
        this -> rows = rows;
        this -> cols = cols;
        Grid = new int*[rows];
        for(int i=0; i<rows; i++){
            Grid[i] = new int[cols];
        }
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                Grid[i][j] = 0;
            }
        }
    }

    void clearCell(int x, int y){
        if(x < rows && y < cols)
            Grid[x][y] =0;
    }
    void setCell(int x, int y){
        if(x < rows && y < cols)
            Grid[x][y] =1;
    }

    bool isLiveCell(int x, int y){
        return x < rows && y < cols && Grid[x][y] == 1;
    }
    int numLiveNeighbours(int x, int y){
        int sum = 0;
        if(x < rows && y < cols){
          
            if(y-1 >= 0){
                if(isLiveCell(x,y-1)) //left
                    sum++;
            }
            if(y+1 < cols){
                if(isLiveCell(x,y+1)) //right
                    sum++;            
            }
            if(x+1 < rows){
                if(isLiveCell(x+1,y)) //bottom
                    sum++;
            }
            if(x-1 >= 0){
                if(isLiveCell(x-1,y)) //upper
                    sum++;
            }
            if(x-1 >= 0 && y-1 >= 0){
                if(isLiveCell(x-1,y-1)) //top-left
                    sum++;
            }
            if(x+1 < rows && y-1 >=0){
                if(isLiveCell(x+1,y-1)) //bottom-left
                    sum++;
            }
            if(x+1 < rows && y+1 < cols){
                if(isLiveCell(x+1,y+1)) //bottom-right
                    sum++;
            }
            if(x-1 >= 0 && y+1 < cols){
                if(isLiveCell(x-1,y+1)) //top right
                    sum++;
            }
            
        }
        return sum;
    }
    int numRows(){
        return rows;
    }
    int numCols(){
        return cols;
    }

    

    void configure(CoordList list){
        Item *temp = list.head;
        // cout<<"conf: head "<<temp<<endl;
        // cout<<"conf: tail "<<list.tail<<endl;
        
        while(temp!=NULL){
            // cout<<"temp "<< temp<<endl;
            // cout<<temp->x<<endl;
            Grid[temp -> x][temp -> y] = 1;
            // cout<<"aaaa"<<endl;
            temp = temp -> next;
            // cout<<"temp "<< temp<<endl;
        }
    }
    

    void print(){
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cout << Grid[i][j];
            }
            cout << endl;
        }
    }
    
    void reset(){
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                Grid[i][j] = 0;
            }
            // cout << endl;
        }
    }
   

    void play(CoordList filled){
        bool waschanged = true;
        while(waschanged){
            waschanged = false;
            //for filled cells
            Item *popCell = filled.head, *prev = NULL, *listHead = filled.head, *coordtail = filled.tail;
            CoordList list2,list3, newlist;
            
            while(popCell != NULL){
                
                int neighbour = numLiveNeighbours(popCell -> x, popCell -> y);
                // cout << popCell->x<<" "<<popCell->y<<" "<<neighbour<<endl;
                

                if(neighbour == 2 || neighbour == 3){
                    newlist.add(popCell->x, popCell -> y);
                }
                popCell = popCell -> next;
            }
            
            //for empty cells

            for(int i=0; i<rows; i++){
                for(int j=0; j<cols; j++){
                    if(!isLiveCell(i,j)){
                        int neighbour = numLiveNeighbours(i,j);
                        if(neighbour == 3){
                            newlist.add(i,j);
                            waschanged = true;


                        }
                        
                    }
                }
            }
            
            reset();
            filled = newlist;

            configure(filled);
            
            cout << endl << endl << endl;
           
            print();
        }
    }
};

int main(){
    
    LifeGrid test(20,20);
    
    CoordList coordlist;

    cout << "Enter the coordinates for coordlist(Enter -1 as the corrdinates to terminate)";
    int x, y;
    while(true){
        cin >> x >> y;
        if(x == -1 || y == -1){
            break;
        }
        coordlist.add(x,y);
    }
    // coordlist.print();
    test.configure(coordlist);
    
    test.print();
    cout<<endl<<endl;
    
    

    test.play(coordlist);
    // test.print();
    
    return 0;
}