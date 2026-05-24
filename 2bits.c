
// Function to shift input data by two bits to the left
int shift_left_by_two_bits(int data) {
    // Perform left shift by 2 bits
    return data << 2;
}

int main() {
    int user_input;
    
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &user_input);
    
    // Shift the input data by two bits to the left
    int result = shift_left_by_two_bits(user_input);
    
    // Output the result
    printf("The value after shifting %d by two bits to the left is: %d\n", user_input, result);
    
    return 0;
}

