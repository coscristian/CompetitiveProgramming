#include<bits/stdc++.h>

#define CARDSBYHAND 5
#define NUMBER_VALUES 13

char values[] = "23456789TJQKA";
map<char, int> frecuency;
map<char, int>:: iterator it;
vector<pair<int, int>> plays; // Stores the highest cards of both players for each play

using namespace std;

void fill_frecuency(string hand[]){
    for(int i = 0; i < CARDSBYHAND; i++) frecuency[hand[i][0]]++;
}

int rank_card_value(char value){
    for(int i = 0; i < NUMBER_VALUES; i++)
        if(value == values[i])
            return i;
}

char get_high_card(string hand[]){
    char highest_value, highest_suit, value = hand[0][0], suit = hand[0][1];
    int max_rank = rank_card_value(hand[0][0]), new_rank;

    for(int i = 1; i < CARDSBYHAND; i++){
        new_rank = rank_card_value(hand[i][0]);
        if (new_rank > max_rank){
            max_rank = new_rank;
            value = hand[i][0];
            suit = hand[i][1];
        }
    }
    return value;
}

char two_pairs(string hand[], bool ranking_first_pair){
    frecuency.clear();
    fill_frecuency(hand);


}

char three_kind(string hand[]){
    frecuency.clear();
    fill_frecuency(hand);
    for(it = frecuency.begin(); it != frecuency.end(); it++)
        if(it->second == 3)
            return it->first;
    return '';
}

char straight(string hand[]){
    // Duda con respecto a la consecutividad del A
    // ¿A puede ser consecutiva con la primera carta de valor 2?
    int value = rank_card_value(hand[0][0]);
    for(int i = 0; i < CARDSBYHAND; i++){
        int new_value = rank_card_value(hand[i][0]);
        if(value != new_value - 1)
            return '';
    }
    return get_high_card(hand);
}

char flush(string hand[]){
    // Insert suits into set
    // if set size is == 1 then check the highest card and return its value
    // else return 0
    frecuency.clear();
    fill_frecuency(hand);
    if(frecuency.size() != 1)
        return '';
    return get_high_card(hand);
}

char full_house(string hand[]){
    frecuency.clear();
    fill_frecuency(hand);
    bool three_sames_values = false;
    char rank_value = '';

    for(it = frequencies.begin(); it != frequencies.end(); it++)
        if(it->second == 3){
            three_sames_values = true;
            rank_value = it->first;
        }

    if(three_sames_values){
        for(it = frequencies.begin(); it != frequencies.end(); it++)
            if(it->second == 2) return rank_value; // Value of the three same cards
    }
    return '';
}

char four_kind(string hand[]){
    frecuency.clear();
    for(int i = 0; i < CARDSBYHAND; i++) frequencies[hand[i][0]]++;

    for(it = frequencies.begin(); it != frequencies.end(); it++)
        if(it->second == 4) return it->first; // Return value of the four cards
    return ''; // There aren't at least four same values
}

char straight_flush(string hand[]){
    // Select first card
    int value = hand[0][0];
    char suit = hand[0][1], rank_value = '';
    sort(hand, hand + CARDSBYHAND);

    for(int i = 1; i < 5; ++i){
        int value_next_card = hand[i][0];
        char suit_next_card = hand[i][1];
        if (value != value_next_card - 1 || suit != suit_next_card)
            return rank_value;
        value = value_next_card;
    }
    rank_value = hand[CARDSBYHAND - 1][0]; // Best value in hand
    return rank_value;
}

void rank_hand(string hand_to_rank[],int rank_hand[]){

    if(straight_flush(hand_to_rank))
        rank_hand[9] = 1;
    else if(four_kind(hand_to_rank))
        rank_hand[8] = 1;
    /*
    if straight_flush(cards_in_game)
        rank_hand[9] = 1;
    else if four_kind(hand_to_rank)
        rank_hand[8] = 1;
    else if full_house(hand_to_rank)
        rank_hand[7] = 1;
    else if
    */
}

void select_hands_to_rank(string cards_in_game[]){
    string hand_to_rank[5];
    int rank_first_hand[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int rank_second_hand[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < CARDSBYHAND; i++){
        hand_to_rank[i] = cards_in_game[initial + 5];
    }
    rank_hand(hand_to_rank, rank_first_hand);

    //hand_to_rank = {0, 0, 0, 0, 0};
    for(int i = 0; i < CARDSBYHAND; i++){
        hand_to_rank[i] = cards_in_game[initial + CARDSBYHAND];
    }
    rank_hand(hand_to_rank, rank_second_hand);
}


int main(){
    string card;
    char c;
    int cont = 0, bool first;

    while(true){
        string cards_in_game[10];
        while((c = getchar()) != '\n'){
            if(c == EOF) return 0;
            if(c != ' '){
                cont++;
                cards_in_game[cont] = c + getchar(); // Stores the card 2H
            }
        }
        select_hands_to_rank(cards_in_game);
    }

    while(cin >> card){

    }

    return 0;
}
