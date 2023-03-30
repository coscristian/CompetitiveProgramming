#include<bits/stdc++.h>
using namespace std;

#define NCARDS 52
#define NSUITS 4
#define MAXSTEPS 100000

char values[] = "23456789TJQKA";
char suits[] = "cdhs";

int rank_card(char value, char suit){
    int i, j;
    for(i=0; i < (NCARDS/NSUITS); i++)
        if(values[i] == value)
            for(j=0; j < NSUITS; j++)
                if(suits[j] == suit)
                    return (i*NSUITS+j);
}

char suit(int card){
    return (suits[card % NSUITS]);
}

char value(int card){
    return values[card/NSUITS];
}

void clear_queue(queue<int>* a, queue<int>* b){
    while(!(*a).empty()){
        (*b).push((*a).front());
        (*a).pop();
    }
}

void war(queue<int>* a, queue<int>* b) {
    int steps = 0;
    int x, y;
    queue<int> c;
    bool inwar = false;

    while(!((*a).empty()) && (!((*b).empty()) && (steps < MAXSTEPS))){
        steps++;
        x = (*a).front(); (*a).pop();
        y = (*b).front(); (*b).pop();
        c.push(x); c.push(y);
        if(inwar){
            inwar = false;
        }else{
            if(value(x) > value(y))
                clear_queue(&c, a);
            else if(value(x) < value(y))
                clear_queue(&c, b);
            else if(value(y) == value(x))
                inwar = true;
        }
    }

    if(!(*a).empty() && (*b).empty())
        printf("a wins in %d steps \n", steps);
    else if((*a).empty() && !(*b).empty())
        printf("b wins in %d steps \n", steps);
    else if(!(*a).empty() && !(*b).empty())
        printf("game tied after %d steps \n", steps);
    else
        printf("a and b tie in %d steps \n", steps);
}

int main(){
    queue<int> decks[2];
    char value, suit, c;
    int i;

    while(true){
        for(i = 0; i <= 1; i++){
            while((c = getchar()) != '\n'){
                if(c==EOF) return 0;
                if(c != ' '){
                    value = c;
                    suit = getchar();
                    decks[i].push(rank_card(value, suit));
                }
            }
        }
        war(&decks[0], &decks[1]);
    }

    return 0;

}
