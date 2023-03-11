#include<bits/stdc++.h>

using namespace std;

void merge(int data[], int start, int mid, int end){
    // Build a temp array to avoid modifying the original contents
    int temp[end - start + 1];

    int i = start, j = mid + 1, k = 0;

    while( i <= mid && j <= end) {
        if(data[i] <= data[j]){
            temp[k++] = data[i++];
        }else{
            temp[k++] = data[j++];
        }
    }

    // Add the rest of the values from the left sub-array into the result
    while(i <= mid){
        temp[k] = data[i];
        k++; i++;
    }

    // Add the rest of the values from the right sub-array into the result
    while(j <= end){
        temp[k] = data[j];
        k++; j++;
    }

    for(int i = start; i <= end; i++) {
        data[i] = temp[i - start];
    }

}

void mergeSort(int data[], int start, int end){
    if(start < end){
        int mid = (start + end) / 2;
        mergeSort(data, start, mid);
        mergeSort(data, mid + 1, end);
        merge(data, start, mid, end);
    }
}

int main() {

    int data[] = {-5, 20, 10, 3, 2, 0};
    mergeSort(data, 0, end(data)-begin(data) - 1);
    cout << "Stop" << endl;

    for(auto i : data){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}