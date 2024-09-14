class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> uniqueNumbers;  // Set to store unique numbers as strings
        string currentNum = "";               // To store the current number as we traverse

        for (auto ch : word) {
            if (isdigit(ch)) {                // If the character is a digit
                if (currentNum == "0") {
                    currentNum = "";          // Clear if it's just leading zero
                }
                currentNum += ch;             // Append the digit to the current number
            } else {
                if (!currentNum.empty()) {    // If we have a valid number stored
                    uniqueNumbers.insert(currentNum);  // Insert into set (which ensures uniqueness)
                    currentNum = "";                  // Reset current number for next potential number
                }
            }
        }

        // Handle the case where the last part of the string is a number
        if (!currentNum.empty()) {
            uniqueNumbers.insert(currentNum);
        }

        return uniqueNumbers.size();          // The size of the set gives the number of unique numbers
    }
};
