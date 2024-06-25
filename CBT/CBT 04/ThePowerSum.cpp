int SolveUsingRecursion(int sum,int s,int n)
{
    int power= pow(s,n);
    if(power == sum) return 1;
    if(power > sum) return 0;
    
    return SolveUsingRecursion(sum-power,s+1,n) + SolveUsingRecursion(sum,s+1,n);
}
int powerSum(int X, int N) {
    int sum = X;
    int s = 1;
    int n = N;
    return SolveUsingRecursion(sum,s,n);
}