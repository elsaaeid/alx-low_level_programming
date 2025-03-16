void swap_int(int *a, int *b) {
    int temp = *a; // Store the value pointed to by a in a temporary variable
    *a = *b;       // Assign the value pointed to by b to the location pointed to by a
    *b = temp;     // Assign the value stored in temp to the location pointed to by b
}
