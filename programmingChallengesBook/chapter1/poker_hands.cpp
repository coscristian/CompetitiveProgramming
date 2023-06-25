#include<bits/stdc++.h>

#define CARDSBYHAND 5
#define NUMBER_VALUES 13
#define NUMBER_OF_PLAYS 9
#define BLACK_WINS cout << "Black wins.\n";
#define WHITE_WINS cout << "White wins.\n";
#define TIE cout << "Tie.\n";
#define FLUSH 4

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
            return i+1;
}

int get_high_card(string hand[]){
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
    return max_rank;
}

int check_pair(string hand[], vector<int>* cards_not_forming_pair){

    int cont = 0;
    char pair_card_value;
    frecuency.clear();
    fill_frecuency(hand);

    for(it = frecuency.begin(); it != frecuency.end(); it++){
        if(it->second == 2){
            cont++;
            pair_card_value = it->first;
        }else{
            char card_value = it->first;
            int ranked_card_value = ranked_card_value(card_value);
            (*cards_not_forming_pair).push_back(ranked_card_value);
        }
        if (cont >= 2) return 0;
    }

    // Has only one pair
    return rank_card_value(pair_card_value); // Return the rankend value of the pair
}


char two_pairs(string hand[], bool ranking_first_pair, bool ranking_remaining_card){
    int pair_values[2], i = 0;
    char remaining_card_value;

    map<int, char> pairs; // key: (int) card value ranked, value: card value

    frecuency.clear();
    fill_frecuency(hand);
    if(frecuency.size() != 3) return 0;

    for(it = frecuency.begin(); it != frecuency.end(); it++){
        if(it->second == 2){
            char card_value = it->first;
            int value_ranked = rank_card_value(it->first);
            pairs[value_ranked] = card_value ;
        }else{
            remaining_card_value = it->first;
        }
    }

    map<int, char>::iterator it;

    if(ranking_first_pair){
        it = prev(pairs.end()); // Get last pair
        return it->first; // Get highest ranked pair value
    }

    bool ranking_second_pair = !ranking_first_pair && !ranking_remaining_card;
    if(ranking_second_pair){
        it = pairs.begin();
        return it->first;
    }

    return rank_card_value(remaining_card_value);
}

char three_kind(string hand[]){
    frecuency.clear();
    fill_frecuency(hand);
    for(it = frecuency.begin(); it != frecuency.end(); it++)
        if(it->second == 3){
            char card_value = it->first;
            return rank_card_value(card_value);
        }
    return 0;
}

char straight(string hand[]){
    // Duda con respecto a la consecutividad del A
    // ¿A puede ser consecutiva con la primera carta de valor 2?
    int value = rank_card_value(hand[0][0]);
    for(int i = 0; i < CARDSBYHAND; i++){
        int new_value = rank_card_value(hand[i][0]);
        if(value != new_value - 1)
            return 0;
    }
    return get_high_card(hand);
}

char flush(string hand[]){
    frecuency.clear();
    fill_frecuency(hand);
    if(frecuency.size() != 1)
        return 0;
    return get_high_card(hand);
}

char full_house(string hand[]){
    frecuency.clear();
    fill_frecuency(hand);
    bool three_sames_values = false;
    int rank_value = 0;

    for(it = frequencies.begin(); it != frequencies.end(); it++)
        if(it->second == 3){
            three_sames_values = true;
            char card_value = it->first;
            rank_value = rank_card_value(card_value);
        }

    if(three_sames_values){
        for(it = frequencies.begin(); it != frequencies.end(); it++)
            if(it->second == 2) return rank_value; // Return value of the three same cards
    }
    return 0;
}

char four_kind(string hand[]){
    frecuency.clear();
    int rank_value = 0;
    for(int i = 0; i < CARDSBYHAND; i++) frequencies[hand[i][0]]++;

    for(it = frequencies.begin(); it != frequencies.end(); it++)
        if(it->second == 4){
            char card_value = it->first;
            return rank_card_value(card_value); // Return value of the four cards
        }
    return rank_value; // There aren't at least four same values
}

int straight_flush(string hand[]){
    // Select first card
    int value = hand[0][0], rank_value = 0;
    char suit = hand[0][1];

    sort(hand, hand + CARDSBYHAND);

    for(int i = 1; i < 5; ++i){
        int value_next_card = hand[i][0];
        char suit_next_card = hand[i][1];
        if (value != value_next_card - 1 || suit != suit_next_card)
            return rank_value;
        value = value_next_card;
    }
    char card_value = hand[CARDSBYHAND - 1][0];
    return rank_card_value(card_value); // Best value in hand
}

void rank_hand(string hand_to_rank[],int hand_plays[], int best_value[]){
    int value, best_value[9]; // Guarda el mejor valor por jugada

    value = straight_flush(hand_to_rank);
    if(value){
        hand_plays[8]++;
        best_value[8] = value;
    }else{
        value = four_kind(hand_to_rank);
        if(value){
            hand_plays[7]++;
            best_value[7] = value;
        }else{
            value = full_house(hand_to_rank);
            if(value){
                hand_plays[6]++;
                best_value[6] = value;
            }else{
                value = flush(hand_to_rank);
                if(value){
                    hand_plays[5]++;
                    best_value[5] = value;
                }else{
                    value = straight(hand_to_rank);
                    if(value){
                        hand_plays[4]++;
                        best_value[4] = value;
                    }else{
                        value = three_kind(hand_to_rank);
                        if(value){
                            hand_plays[3]++;
                            best_value[3] = value;
                        }else{
                            value = two_pairs(hand_to_rank);
                            if(value){
                                hand_plays[2]++;
                                best_value[2] = value;
                            }else{
                                value = check_pair(hand_to_rank);
                                if(value){
                                    hand_plays[1]++;
                                    best_value[1] = value;
                                }else{
                                    value = get_high_card(hand_to_rank);
                                    if(value){
                                        hand_plays[0]++;
                                        best_value[0] = value;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void apply_high_card_rule(vector<string> first_hand, vector<string> second_hand){
    sort(first_hand.begin(), first_hand.end());
    sort(second_hand.begin(), second_hand.end());

    while(true){
        int first_hand_high_value = get_high_card()
    }
}



void play_game(vector<string> first_hand, int first_hand_plays[], int best_value_first_hand[], vector<string> second_hand, int second_hand_plays[], int best_value_second_hand[]){

    for(int i = NUMBER_OF_PLAYS - 1; i >= 0; i--){
        // Tie
        if(first_hand_plays[i] && second_hand_plays[i]){

            switch(i){
                case FLUSH:
                    apply_high_card_rule(first_hand, second_hand);
                    break;
            }

            if(best_value_first_hand[i] > best_value_second_hand[i]){
                BLACK_WINS;
            }else if(best_value_second_hand[i] > best_value_first_hand[i]){
                WHITE_WINS;
            }else{
                TIE;
            }
        }else if()
    }

}

void select_hands_to_rank(string cards_in_game[]){
    vector<string> first_hand(5), second_hand(5);
    int first_hand_plays[] = {0, 0, 0, 0, 0, 0, 0, 0, 0},
        best_value_first_hand[] = {0, 0, 0, 0, 0, 0, 0, 0, 0},
        second_hand_plays[] = {0, 0, 0, 0, 0, 0, 0, 0, 0},
        best_value_second_hand[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < CARDSBYHAND; i++)
        first_hand[i] = cards_in_game[i];

    rank_hand(first_hand, first_hand_plays, best_value_first_hand);

    /* --------------------- */

    for(int i = 0; i < CARDSBYHAND; i++)
        second_hand[i] = cards_in_game[i + CARDSBYHAND];

    rank_hand(second_hand, second_hand_plays, best_value_second_hand);

    play_game(first_hand, first_hand_plays, best_value_first_hand,second_hand, second_hand_plays, best_value_second_hand);

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
