#include<bits/stdc++.h>
using namespace std;

# define N 3

int forwardElim(double mat[N][N+1]); //funcn to reduce mmatrix i.e. indicates whether matrix is singular or not

void backSub(double mat[N][N+1]); //funcn to calculate values of unknowns

//funcn to get matrix content
void gaussianElimination(double mat[N][N+1])
{
    int singular_flag= forwardElim(mat);
    if(singular_flag != -1)
    {
        cout<<"Singular matrix"<<endl;

        //if the RHS of equation corresponding to zero row  is 0, system has infinitely many solutions, else inconsistent
        if(mat[singular_flag][N])
         cout<<"Inconsistent System";
        else
         cout<<"Infinitely Many Soln";
        return;
    }
    backSub(mat);
}

void swapRow(double mat[N][N+1], int i, int j)
{
    for(int k=0; k<=N; k++)
    {
        double temp= mat[i][k];
        mat[i][k]= mat[j][k];
        mat[j][k]= temp;
    }
}

void print(double mat[N][N+1])
{
    for(int i=0; i<N; i++, printf("\n"))
     for(int j=0; j<=N; j++)
      cout<<mat[i][j];
    cout<<endl;
}

int forwardElim(double mat[N][N+1])
{
    for(int k=0; k<N; k++)
    {
        // Initialize maximum value and index for pivot
        int i_max = k;
        int v_max = mat[i_max][k];

        // find greater amplitude for pivot if any
        for (int i = k+1; i < N; i++)
            if (abs(mat[i][k]) > v_max)
                v_max = mat[i][k], i_max = i;

        //if a principal diagonal element  is zero, it denotes that matrix is singular, and will lead to a division-by-zero later
        if(!mat[k][i_max])
         return k; //matrix is singular

        //Swapping greatest value row with current row
        if (i_max != k)
            swapRow(mat, k, i_max);

        for(int i=k+1; i<N; i++)
        {
            double f= mat[i][k]/mat[k][k]; //factor f to set current row kth element to 0, and subsequently remaining kth column to 0

            //subtract fth multiple of corresponding kth row ele
            for(int j=k+1; j<=N; j++)
             mat[i][j]-= mat[k][j]*f;

            mat[i][k]= 0; //filling lower triangular matrix with zeros
        }
    }
    return -1;
}

void backSub(double mat[N][N+1])
{
    double x[N]; //array to store soln

    for(int i=N-1; i>=0; i--)
    {
        x[i]= mat[i][N];
        for(int j=i+1; j<N; j++)
         x[i]-= mat[i][j]*x[j];
        x[i]= x[i]/mat[i][i];
    }
    cout<<"Soln for the system: "<<endl;
    for(int i=0; i<N; i++)
     cout<<x[i]<<endl;
}

int main()
{
    double mat[N][N+1]= {{3.0, 2.0, -4.0, 3.0},
                         {2.0, 3.0, 3.0, 15.0},
                         {5.0, -3, 1.0, 14.0}};
    gaussianElimination(mat);
    return 0;
}
