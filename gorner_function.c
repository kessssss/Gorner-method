
double gorner_func(int N, double *mass, double x)
{
    double y = 0;
    for (int i = 0; i < N; i++)
    {
        y = x * y + mass[i];
    }
    return y;
}