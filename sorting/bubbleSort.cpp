/*
 * Bubble sort algorithm
 * Time complexity O(n^2)
 */

#include <iostream> 
#include <vector> 

std::vector<int> bubbleSort(std::vector<int> arr){  
    int n = arr.size();

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }

    return arr;
}

int main(){
    int arr_size; 
    std::vector<int> user_arr;

    // Storing user input into an array. 
    std::cout << "Enter array size: " << std::endl;
    std::cin >> arr_size; 
    
    std::cout << "Enter values: " << std::endl;
    for (arr_size; arr_size > 0; arr_size--){
        int num; 
        std::cin >> num; 
        user_arr.push_back(num);
    }

    // Prints out sorted array.  
    std::vector<int> sorted_array = bubbleSort(user_arr); 
    std::cout << "Your array is now sorted..." << std::endl;
    for (int i = 0; i < sorted_array.size(); i++){
        std::cout << sorted_array[i] << "\n";
    }

    return 0; 
}