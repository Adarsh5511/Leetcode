class Solution {
public:
    
    int binaryToDecimal(vector<int>& binary) {
    int decimal = 0;
    int size = binary.size();
    
    for (int i = 0; i < size; i++) {
        decimal += binary[i] * pow(2, size - i - 1);
    }
    
    return decimal;
}

    
    int findComplement(int num) {
        if(num==1){
            return 0;
        }
        if(num==0){
            return 1;
        }
        vector<int> binary;


    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }
        reverse(binary.begin(), binary.end());
         for (int i = 0; i < binary.size(); i++) {
        binary[i] = 1 - binary[i]; 
    }

    int complementedDecimal = binaryToDecimal(binary);
        
        return complementedDecimal;
    }
};