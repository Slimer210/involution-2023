int main() {
    int count = 100, sum;
    // standard for loop method
    // for (int i = 1; i<=count; ++i) {
    //     sum+=i*i;
    // }
    
    // summation method
    printf("%d", count*(count+1)*((2*count)+1)/6);
    return 0;
}
