#include <stdio.h> 
int cond1(   int search, int index[], int n); 
int cond2(   int search, int index[], int n); 
int cond3(   int search, int index[], int n); 
int cond4(   int search, int index[], int n); 
int cond5(   int search, int index[], int n); 
int cond6(   int search, int index[], int n); 
int cond7(   int search, int index[], int n); 
int cond8(   int search, int index[], int n); 
int cond9(   int search, int index[], int n); 
int cond10(   int search, int index[], int n); 
int main() 
{
    int search; int check; 
    int n; int index[10] = {0}; 
    printf("\t\t\tTRANSACTION CLEARER \n\n"); 
    printf("Please enter the number of the index less or equal to 10. \n"); 
    scanf("%d", &n); 
    printf("Please input the value of the index ( separate each value with entering key ):\n"); 
    for ( int i = 0; i < n ; i++)
    scanf("%d", &index[i]);
    printf("Please input the value you want to search: "); 
    scanf("%d", &search); 
    printf("\nStart searching...\n"); 
    check = cond1(search, index, n); 
    if ( check == 0 )  check = cond2(search, index, n); 
    if ( check == 0 )  check = cond3(search, index, n);
    if ( check == 0 )  check = cond3(search, index, n);
    if ( check == 0 )  check = cond4(search, index, n);
    if ( check == 0 )  check = cond5(search, index, n);
    if ( check == 0 )  check = cond6(search, index, n);
    if ( check == 0 )  check = cond7(search, index, n);
    if ( check == 0 )  check = cond8(search, index, n);
    if ( check == 0 )  check = cond9(search, index, n);
    if ( check == 0 )  check = cond10(search, index, n);
    if ( check == 0 ) printf("Nothing was found.\n");
    return 0; 
}


int cond1(int search, int index[], int n)
{
    int sum = 0; int check = 0; 
    for (int i = 0 ; i < n ; i++ )
    {
        sum += index[i]; 
    }
    if ( sum == search ) 
    {
        printf("All the deta is corresponding sum and the data have such as: "); 
        for ( int i = 0; i < n ; i++ )
        printf(" %d, ", index[i]); 
        check = 1; 
        sum = 0; 
    }
    for ( int i = 0; i < n-1; i++)
        for (int j = i + 1 ; j < n ; j++ )
        {
            if ( ( index[i] + index[j] ) == search )
            {
                printf("\nThe data is in index %d and %d which has the value : %d , %d.\n", i, j , index[i], index[j]); 
                check = 1; 
            }
        }
  return check;
}

int cond2(  int search, int index[], int n)
{
    int check = 0; 
    for ( int i = 0; i < n-2; i++)
        for (int j = i + 1 ; j < n-1 ; j++ )
            for (int k = j + 1 ; k < n ; k++)
        {
            if ( ( index[i] + index[j] + index[k] ) == search )
            {
                printf("The data is in index %d , %d and %d which has the value : %d , %d , %d.\n", i, j , k , index[i], index[j], index[k] ); 
                check = 1; 
            }
        }
  return check;
}

int cond3(  int search, int index[], int n)
{
    int check = 0; 
    for ( int i = 0; i < n-3; i++)
        for (int j = i + 1 ; j < n-2 ; j++ )
            for (int k = j + 1 ; k < n-1 ; k++)
                for ( int l = k + 1 ; l < n ; l++)
        {
            if ( ( index[i] + index[j] + index[k] + index[l] ) == search )
            {
                printf("The data is in index %d , %d , %d and %d which has the value : %d , %d , %d , %d.\n", i, j , k , l, index[i], index[j], index[k] , index[l]); 
                check = 1; 
            }
        }
  return check;
}

int cond4(  int search, int index[], int n) 
{
    int check = 0; 
    for ( int i = 0; i < n-4; i++)
        for (int j = i + 1 ; j < n-3 ; j++ )
            for (int k = j + 1 ; k < n-2 ; k++)
                for ( int l = k + 1 ; l < n-1 ; l++)
                    for ( int m = l + 1 ; m < n ; m++ )
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d and %d which has the value : %d , %d , %d , %d, %d.\n", i, j , k , l, m, index[i], index[j], index[k] , index[l], index[m]); 
                check = 1; 
            }
        }
  return check;
}

int cond5(   int search, int index[], int n) 
{
     int check = 0; 
    for ( int i = 0; i < n-5; i++)
        for (int j = i + 1 ; j < n-4 ; j++ )
            for (int k = j + 1 ; k < n-3 ; k++)
                for ( int l = k + 1 ; l < n-2 ; l++)
                    for ( int m = l + 1 ; m < n-1 ; m++ )
                        for ( int o = m + 1; o < n ; o++)
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d , %d and %d which has the value : %d , %d , %d , %d, %d, %d.\n", i, j , k , l, m, o, index[i], index[j], index[k] , index[l], index[m], index[o]); 
                check = 1; 
            }
        }
  return check;
}

int cond6(   int search, int index[], int n)
{
     int check = 0; 
    for ( int i = 0; i < n-6; i++)
        for (int j = i + 1 ; j < n-5 ; j++ )
            for (int k = j + 1 ; k < n-4 ; k++)
                for ( int l = k + 1 ; l < n-3 ; l++)
                    for ( int m = l + 1 ; m < n-2 ; m++ )
                        for ( int o = m + 1; o < n-1 ; o++)
                            for ( int p = o +1 ; p < n ; p++ )
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d , %d , %d and %d which has the value : %d , %d , %d , %d , %d, %d, %d.\n", i, j , k , l, m, o, p, index[i], index[j], index[k] , index[l], index[m], index[o], index[p]); 
                check = 1; 
            }
        }
  return check;
}

int cond7(   int search, int index[], int n)
{
    int check = 0; 
    for ( int i = 0; i < n-7; i++)
        for (int j = i + 1 ; j < n-6 ; j++ )
            for (int k = j + 1 ; k < n-5 ; k++)
                for ( int l = k + 1 ; l < n-4 ; l++)
                    for ( int m = l + 1 ; m < n-3 ; m++ )
                        for ( int o = m + 1; o < n-2 ; o++)
                            for ( int p = o + 1 ; p < n-1 ; p++ )
                                for ( int q = p + 1; q < n ; q++ )
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d , %d , %d , %d and %d which has the value : %d , %d , %d , %d , %d , %d, %d, %d.\n", i, j , k , l, m, o, p, q, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q]); 
                check = 1; 
            }
        }
  return check;
}

int cond8 (   int search, int index[], int n)
{
    int check = 0; 
    for ( int i = 0; i < n-8; i++)
        for (int j = i + 1 ; j < n-7 ; j++ )
            for (int k = j + 1 ; k < n-6 ; k++)
                for ( int l = k + 1 ; l < n-5 ; l++)
                    for ( int m = l + 1 ; m < n-4 ; m++ )
                        for ( int o = m + 1; o < n-3 ; o++)
                            for ( int p = o + 1 ; p < n-2 ; p++ )
                                for ( int q = p + 1; q < n-1 ; q++ )
                                    for ( int r = q + 1; r < n ; r++ )
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index [r] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d and %d which has the value : %d , %d , %d , %d , %d , %d, %d, %d, %d.\n", i, j , k , l, m, o, p, q, r, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r]); 
                check = 1; 
            }
        }
  return check;
}

int cond9 (   int search, int index[], int n)
{
    int check = 0; 
    for ( int i = 0; i < n-9; i++)
        for (int j = i + 1 ; j < n-8 ; j++ )
            for (int k = j + 1 ; k < n-7 ; k++)
                for ( int l = k + 1 ; l < n-6 ; l++)
                    for ( int m = l + 1 ; m < n-5 ; m++ )
                        for ( int o = m + 1; o < n-4 ; o++)
                            for ( int p = o + 1 ; p < n-3 ; p++ )
                                for ( int q = p + 1; q < n-2 ; q++ )
                                    for ( int r = q + 1; r < n-1 ; r++ )
                                        for ( int s = r + 1 ; s < n ; s++ )
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d , %d and %d which has the value : %d , %d , %d , %d , %d , %d, %d, %d, %d , %d.\n", i, j , k , l, m, o, p, q, r, s, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s]); 
                check = 1; 
            }
        }
  return check;
}

  int cond10 (   int search, int index[], int n)
{
      int check = 0; 
    for ( int i = 0; i < n-9; i++)
        for (int j = i + 1 ; j < n-8 ; j++ )
            for (int k = j + 1 ; k < n-7 ; k++)
                for ( int l = k + 1 ; l < n-6 ; l++)
                    for ( int m = l + 1 ; m < n-5 ; m++ )
                        for ( int o = m + 1; o < n-4 ; o++)
                            for ( int p = o + 1 ; p < n-3 ; p++ )
                                for ( int q = p + 1; q < n-2 ; q++ )
                                    for ( int r = q + 1; r < n-1 ; r++ )
                                        for ( int s = r + 1 ; s < n ; s++ )
                                            for ( int t = s + 1 ; t < n ; t++ )
        {
            if ( ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] ) == search )
            {
                printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d , %d , %d and %d which has the value : %d , %d , %d , %d , %d , %d, %d, %d, %d , %d, %d.\n", i, j , k , l, m, o, p, q, r, s,t, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t]); 
                check = 1; 
            }
        }
  return check;
}
