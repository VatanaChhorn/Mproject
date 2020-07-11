        //code updated you can probably use floating point now
        //Add up to 20 slots
        #include <stdio.h> 
        int cond1(   float search, float index[], int n); 
        int cond2(   float search, float index[], int n); 
        int cond3(   float search, float index[], int n); 
        int cond4(   float search, float index[], int n); 
        int cond5(   float search, float index[], int n); 
        int cond6(   float search, float index[], int n); 
        int cond7(   float search, float index[], int n); 
        int cond8(   float search, float index[], int n); 
        int cond9(   float search, float index[], int n); 
        int cond10(   float search, float index[], int n); 
          int cond11(   float search, float index[], int n); 
            int cond12(   float search, float index[], int n); 
              int cond13(   float search, float index[], int n); 
                int cond14(   float search, float index[], int n); 
                  int cond15(   float search, float index[], int n);
                  // from con15 upward 
                     int cond16(   float search, float index[], int n); 
                          int cond17(   float search, float index[], int n); 
                             int cond18(   float search, float index[], int n); 
                                 int cond19(   float search, float index[], int n); 
                                     int cond20(   float search, float index[], int n); 


        int main() 
        {
            float search; int check; 
            int n; float index[20] = {0}; 
            printf("\t\t\tTRANSACTION CLEARER \n\n"); 
            printf("Please enter the number of the index less or equal to 20 transactions. \n"); 
            scanf("%d", &n); 
            printf("Please input the value of the index ( separate each value with entering key ): \n"); 
            for ( int i = 0; i < n ; i++)
            scanf("%f", &index[i]);
            printf("Please input the value you want to search: \n"); 
            scanf("%f", &search); 
            printf("\nStart searching... \n\nThe result of searching:\n\n"); 
            check = cond1(search, index, n); 
            check = cond2(search, index, n); 
            check = cond3(search, index, n);
            check = cond3(search, index, n);
            check = cond4(search, index, n);
            check = cond5(search, index, n);
            check = cond6(search, index, n);
            check = cond7(search, index, n);
            check = cond8(search, index, n);
            check = cond9(search, index, n);
            check = cond10(search, index, n);
            //From 10 upward
            check = cond11(search, index, n);
            check = cond12(search, index, n);
            check = cond13(search, index, n);
            check = cond14(search, index, n);
            check = cond15(search, index, n);
            // from cond15 upward
            check = cond16(search, index, n);
            check = cond17(search, index, n);
            check = cond18(search, index, n);
            check = cond19(search, index, n);
            check = cond20(search, index, n);
            if ( check == 0 ) printf("\nNothing is found. \nThere is no transaction to be clear.\n\nNote: If the result has found more than one, you should at least use the calculator to calculate the result one by one just to clarify that the result is 100%% accuracy.\n\n"); 
			      if ( check == 1 ) printf("\nNote: If the result has found more than one, you should at least use the calculator to calculate the result one by one just to clarify that the result is 100%% accuracy."); 
        }


        int cond1(float search, float index[], int n)
        {
            float sum = 0; int check = 0; 
            for (int i = 0 ; i < n ; i++ )
            {
                sum += index[i]; 
            }
            printf("The total amount is: %.3f\n\n", sum);
            if ( ( int ) search == ( int ) sum ) 
            {
                printf("All the deta is corresponding sum and the data have such as : "); 
                for ( int i = 0; i < n ; i++ )
                printf(" %.3f, ", index[i]); 
                check = 1; 
				printf("\n\n"); 
            }
            for ( int i = 0; i < n-1; i++)
                for (int j = i + 1 ; j < n ; j++ )
                { 
                    if ( (int) ( index[i] + index[j] ) == (int) search )
                    {
                        printf("The data is in index %d and %d which has the value : %.3f , %.3f.\n\n", i, j , index[i], index[j]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond2(  float search, float index[], int n)
        {
            int check = 0; 
            for ( int i = 0; i < n-2; i++)
                for (int j = i + 1 ; j < n-1 ; j++ )
                    for (int k = j + 1 ; k < n ; k++)
                {
                    if ( (int ) ( index[i] + index[j] + index[k] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d and %d which has the value : %.3f , %.3f , %.3f.\n\n", i, j , k , index[i], index[j], index[k] ); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond3(  float search, float index[], int n)
        {
            int check = 0; 
            for ( int i = 0; i < n-3; i++)
                for (int j = i + 1 ; j < n-2 ; j++ )
                    for (int k = j + 1 ; k < n-1 ; k++)
                        for ( int l = k + 1 ; l < n ; l++)
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d and %d which has the value : %.3f , %.3f , %.3f , %.3f.\n\n", i, j , k , l, index[i], index[j], index[k] , index[l]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond4(  float search, float index[], int n) 
        {
            int check = 0; 
            for ( int i = 0; i < n-4; i++)
                for (int j = i + 1 ; j < n-3 ; j++ )
                    for (int k = j + 1 ; k < n-2 ; k++)
                        for ( int l = k + 1 ; l < n-1 ; l++)
                            for ( int m = l + 1 ; m < n ; m++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d and %d which has the value : %.3f , %.3f , %.3f , %.3f, %.3f.\n\n", i, j , k , l, m, index[i], index[j], index[k] , index[l], index[m]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond5(   float search, float index[], int n) 
        {
            int check = 0; 
            for ( int i = 0; i < n-5; i++)
                for (int j = i + 1 ; j < n-4 ; j++ )
                    for (int k = j + 1 ; k < n-3 ; k++)
                        for ( int l = k + 1 ; l < n-2 ; l++)
                            for ( int m = l + 1 ; m < n-1 ; m++ )
                                for ( int o = m + 1; o < n ; o++)
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] ) ==( int )  search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d and %d which has the value : %.3f , %.3f , %.3f , %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, index[i], index[j], index[k] , index[l], index[m], index[o]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond6(   float search, float index[], int n )
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
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d , %d and %d which has the value : %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, index[i], index[j], index[k] , index[l], index[m], index[o], index[p]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond7(    float search, float index[], int n)
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
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d , %d , %d and %d which has the value : %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond8 (    float search, float index[], int n)
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
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index [r] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d and %d which has the value : %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond9 (    float search, float index[], int n)
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
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d , %d and %d which has the value : %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s]); 
                        check = 1; 
                    }
                }
        return check;
        }

        int cond10 (    float search, float index[], int n)
        {
            int check = 0; 
            for ( int i = 0; i < n-10; i++)
                for (int j = i + 1 ; j < n-9 ; j++ )
                    for (int k = j + 1 ; k < n-8 ; k++)
                        for ( int l = k + 1 ; l < n-7 ; l++)
                            for ( int m = l + 1 ; m < n-6 ; m++ )
                                for ( int o = m + 1; o < n-5 ; o++)
                                    for ( int p = o + 1 ; p < n-4 ; p++ )
                                        for ( int q = p + 1; q < n-3 ; q++ )
                                            for ( int r = q + 1; r < n-2 ; r++ )
                                                for ( int s = r + 1 ; s < n-1 ; s++ )
                                                    for ( int t = s + 1 ; t < n ; t++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] ) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d , %d , %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t]); 
                        check = 1; 
                    }
                }
        return check;
        }

        //From 10 upward 
            int cond11 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-11; i++)
                for (int j = i + 1 ; j < n-10 ; j++ )
                    for (int k = j + 1 ; k < n-9 ; k++)
                        for ( int l = k + 1 ; l < n-8 ; l++)
                            for ( int m = l + 1 ; m < n-7 ; m++ )
                                for ( int o = m + 1; o < n-6 ; o++)
                                    for ( int p = o + 1 ; p < n-5 ; p++ )
                                        for ( int q = p + 1; q < n-4 ; q++ )
                                            for ( int r = q + 1; r < n-3 ; r++ )
                                                for ( int s = r + 1 ; s < n-2 ; s++ )
                                                    for ( int t = s + 1 ; t < n-1 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n; u++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u]) == ( int ) search )
                    {
                        printf("The data is in index %d , %d , %d, %d , %d , %d , %d , %d , %d , %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u]); 
                        check = 1; 
                    }
                }
        return check;
        }

         int cond12 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-12; i++)
                for (int j = i + 1 ; j < n-11 ; j++ )
                    for (int k = j + 1 ; k < n-10 ; k++)
                        for ( int l = k + 1 ; l < n-9 ; l++)
                            for ( int m = l + 1 ; m < n-8 ; m++ )
                                for ( int o = m + 1; o < n-7 ; o++)
                                    for ( int p = o + 1 ; p < n-6 ; p++ )
                                        for ( int q = p + 1; q < n-5 ; q++ )
                                            for ( int r = q + 1; r < n-4 ; r++ )
                                                for ( int s = r + 1 ; s < n-3 ; s++ )
                                                    for ( int t = s + 1 ; t < n-2 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-1; u++ )
                                                            for ( int v = u+1; v < n; v++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v]) == ( int ) search )
                    {
                           printf("The data is in index %d , %d , %d, %d , %d , %d , %d, %d , %d , %d , %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f , %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v]); 
                        check = 1; 
                    }
                }
        return check;
        }

         int cond13 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-13; i++)
                for (int j = i + 1 ; j < n-12 ; j++ )
                    for (int k = j + 1 ; k < n-11 ; k++)
                        for ( int l = k + 1 ; l < n-10 ; l++)
                            for ( int m = l + 1 ; m < n-9 ; m++ )
                                for ( int o = m + 1; o < n-8 ; o++)
                                    for ( int p = o + 1 ; p < n-7 ; p++ )
                                        for ( int q = p + 1; q < n-6 ; q++ )
                                            for ( int r = q + 1; r < n-5 ; r++ )
                                                for ( int s = r + 1 ; s < n-4 ; s++ )
                                                    for ( int t = s + 1 ; t < n-3 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-2; u++ )
                                                            for ( int v = u + 1; v < n-1; v++ )
                                                                for (int w = v + 1; w < n; w++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] ) == ( int ) search )
                    {
                            printf("The data is in index %d ,%d, %d , %d, %d , %d , %d , %d, %d , %d , %d , %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w]); 
                        check = 1; 
                    }
                }
        return check;
        }

          int cond14 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-14; i++)
                for (int j = i + 1 ; j < n-13 ; j++ )
                    for (int k = j + 1 ; k < n-12 ; k++)
                        for ( int l = k + 1 ; l < n-11 ; l++)
                            for ( int m = l + 1 ; m < n-10 ; m++ )
                                for ( int o = m + 1; o < n-9 ; o++)
                                    for ( int p = o + 1 ; p < n-8 ; p++ )
                                        for ( int q = p + 1; q < n-7 ; q++ )
                                            for ( int r = q + 1; r < n-6 ; r++ )
                                                for ( int s = r + 1 ; s < n-5 ; s++ )
                                                    for ( int t = s + 1 ; t < n-4 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-3; u++ )
                                                            for ( int v = u + 1; v < n-2; v++ )
                                                                for (int w = v + 1; w < n-1; w++ )
                                                                    for ( int x = w + 1; x < n; x++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x] ) == ( int ) search )
                    {
                         printf("The data is in index %d ,%d, %d , %d, %d ,  %d ,%d , %d , %d, %d , %d , %d , %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x]); 
                        check = 1; 
                    }
                }
        return check;
        }

            int cond15 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-15; i++)
                for (int j = i + 1 ; j < n-14 ; j++ )
                    for (int k = j + 1 ; k < n-13 ; k++)
                        for ( int l = k + 1 ; l < n-12 ; l++)
                            for ( int m = l + 1 ; m < n-11 ; m++ )
                                for ( int o = m + 1; o < n-10 ; o++)
                                    for ( int p = o + 1 ; p < n-9 ; p++ )
                                        for ( int q = p + 1; q < n-8 ; q++ )
                                            for ( int r = q + 1; r < n-7 ; r++ )
                                                for ( int s = r + 1 ; s < n-6 ; s++ )
                                                    for ( int t = s + 1 ; t < n-5 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-4; u++ )
                                                            for ( int v = u + 1; v < n-3; v++ )
                                                                for (int w = v + 1; w < n-2; w++ )
                                                                    for ( int x = w + 1; x < n-1; x++ )
                                                                        for ( int y = x + 1 ; y < n ; y++ )
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x]+ index[y] ) == ( int ) search )
                    {
                        printf("The data is in index %d ,%d, %d , %d, %d , %d,  %d ,%d , %d , %d, %d , %d , %d , %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x,y, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x], index[y]);
                        check = 1; 
                    }
                }
        return check;
        }
        
                   int cond16 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-16; i++)
                for (int j = i + 1 ; j < n-15 ; j++ )
                    for (int k = j + 1 ; k < n-14 ; k++)
                        for ( int l = k + 1 ; l < n-13 ; l++)
                            for ( int m = l + 1 ; m < n-12 ; m++ )
                                for ( int o = m + 1; o < n-11 ; o++)
                                    for ( int p = o + 1 ; p < n-10 ; p++ )
                                        for ( int q = p + 1; q < n-9 ; q++ )
                                            for ( int r = q + 1; r < n-8 ; r++ )
                                                for ( int s = r + 1 ; s < n-7 ; s++ )
                                                    for ( int t = s + 1 ; t < n-6 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-5; u++ )
                                                            for ( int v = u + 1; v < n-4; v++ )
                                                                for (int w = v + 1; w < n-3; w++ )
                                                                    for ( int x = w + 1; x < n-2; x++ )
                                                                        for ( int y = x + 1 ; y < n-1 ; y++ )
                                                                            for ( int a = y + 1 ; a < n ; a++)
                {
                    if ( ( int ) ( index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x]+ index[y] + index[a] ) == ( int ) search )
                    {
                        printf("The data is in index %d ,%d, %d , %d, %d , %d,  %d ,%d , %d , %d, %d , %d , %d , %d, %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x,y,a, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x], index[y], index[a]);
                        check = 1; 
                    }
                }
        return check;
        }

               
                   int cond17 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-17; i++)
                for (int j = i + 1 ; j < n-16 ; j++ )
                    for (int k = j + 1 ; k < n-15 ; k++)
                        for ( int l = k + 1 ; l < n-14 ; l++)
                            for ( int m = l + 1 ; m < n-13 ; m++ )
                                for ( int o = m + 1; o < n-12 ; o++)
                                    for ( int p = o + 1 ; p < n-11 ; p++ )
                                        for ( int q = p + 1; q < n-10 ; q++ )
                                            for ( int r = q + 1; r < n-9 ; r++ )
                                                for ( int s = r + 1 ; s < n-8 ; s++ )
                                                    for ( int t = s + 1 ; t < n-7 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-6; u++ )
                                                            for ( int v = u + 1; v < n-5; v++ )
                                                                for (int w = v + 1; w < n-4; w++ )
                                                                    for ( int x = w + 1; x < n-3; x++ )
                                                                        for ( int y = x + 1 ; y < n-2 ; y++ )
                                                                            for ( int a = y + 1 ; a < n-1 ; a++)
                                                                                for ( int b = a + 1; b < n; b++ )
                {
                    if ( ( int ) ( index[b] + index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x]+ index[y] + index[a] ) == ( int ) search )
                    {
                        printf("The data is in index %d, %d ,%d, %d , %d, %d , %d,  %d ,%d , %d , %d, %d , %d , %d , %d, %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f, %.3f,  %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x,y,a,b, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x], index[y], index[a], index[b]);
                        check = 1; 
                    }
                }
        return check;
        }

         int cond18 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-18; i++)
                for (int j = i + 1 ; j < n-17 ; j++ )
                    for (int k = j + 1 ; k < n-16 ; k++)
                        for ( int l = k + 1 ; l < n-15 ; l++)
                            for ( int m = l + 1 ; m < n-14 ; m++ )
                                for ( int o = m + 1; o < n-13 ; o++)
                                    for ( int p = o + 1 ; p < n-12 ; p++ )
                                        for ( int q = p + 1; q < n-11 ; q++ )
                                            for ( int r = q + 1; r < n-10 ; r++ )
                                                for ( int s = r + 1 ; s < n-9 ; s++ )
                                                    for ( int t = s + 1 ; t < n-8 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-7; u++ )
                                                            for ( int v = u + 1; v < n-6; v++ )
                                                                for (int w = v + 1; w < n-5; w++ )
                                                                    for ( int x = w + 1; x < n-4; x++ )
                                                                        for ( int y = x + 1 ; y < n-3 ; y++ )
                                                                            for ( int a = y + 1 ; a < n-2 ; a++)
                                                                                for ( int b = a + 1; b < n-1; b++ )
                                                                                    for ( int c = b + 1; c < n; c++)
                {
                    if ( ( int ) ( index[c] + index[b] + index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x]+ index[y] + index[a] ) == ( int ) search )
                    {
                        printf("The data is in index %d, %d, %d ,%d, %d , %d, %d , %d,  %d ,%d , %d , %d, %d , %d , %d , %d, %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f, %.3f,  %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x,y,a,b,c, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x], index[y], index[a], index[b], index[c]);
                        check = 1; 
                    }
                }
        return check;
        }

            int cond19 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-19; i++)
                for (int j = i + 1 ; j < n-18 ; j++ )
                    for (int k = j + 1 ; k < n-17 ; k++)
                        for ( int l = k + 1 ; l < n-16 ; l++)
                            for ( int m = l + 1 ; m < n-15 ; m++ )
                                for ( int o = m + 1; o < n-14 ; o++)
                                    for ( int p = o + 1 ; p < n-13 ; p++ )
                                        for ( int q = p + 1; q < n-12 ; q++ )
                                            for ( int r = q + 1; r < n-11 ; r++ )
                                                for ( int s = r + 1 ; s < n-10 ; s++ )
                                                    for ( int t = s + 1 ; t < n-9 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-8; u++ )
                                                            for ( int v = u + 1; v < n-7; v++ )
                                                                for (int w = v + 1; w < n-6; w++ )
                                                                    for ( int x = w + 1; x < n-5; x++ )
                                                                        for ( int y = x + 1 ; y < n-4 ; y++ )
                                                                            for ( int a = y + 1 ; a < n-3 ; a++)
                                                                                for ( int b = a + 1; b < n-2; b++ )
                                                                                    for ( int c = b + 1; c < n-1; c++)
                                                                                        for ( int d = c + 1 ; d < n ; d++ )
                {
                    if ( ( int ) ( index[d] + index[c] + index[b] + index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x]+ index[y] + index[a] ) == ( int ) search )
                    {
                        printf("The data is in index %d, %d, %d, %d ,%d, %d , %d, %d , %d,  %d ,%d , %d , %d, %d , %d , %d , %d, %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f, %.3f,  %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x,y,a,b,c,d, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x], index[y], index[a], index[b] ,index[c], index[d]);
                        check = 1; 
                    }
                }
        return check;
        }

          int cond20 (    float search, float index[], int n)
        {
          int check = 0; 
            for ( int i = 0; i < n-20; i++)
                for (int j = i + 1 ; j < n-19 ; j++ )
                    for (int k = j + 1 ; k < n-18 ; k++)
                        for ( int l = k + 1 ; l < n-17 ; l++)
                            for ( int m = l + 1 ; m < n-16 ; m++ )
                                for ( int o = m + 1; o < n-15 ; o++)
                                    for ( int p = o + 1 ; p < n-14 ; p++ )
                                        for ( int q = p + 1; q < n-13 ; q++ )
                                            for ( int r = q + 1; r < n-12 ; r++ )
                                                for ( int s = r + 1 ; s < n-11 ; s++ )
                                                    for ( int t = s + 1 ; t < n-10 ; t++ )                                                  
                                                        for ( int u = t + 1 ; u < n-9; u++ )
                                                            for ( int v = u + 1; v < n-8; v++ )
                                                                for (int w = v + 1; w < n-7; w++ )
                                                                    for ( int x = w + 1; x < n-6; x++ )
                                                                        for ( int y = x + 1 ; y < n-5 ; y++ )
                                                                            for ( int a = y + 1 ; a < n-4 ; a++)
                                                                                for ( int b = a + 1; b < n-3; b++ )
                                                                                    for ( int c = b + 1; c < n-2; c++)
                                                                                        for ( int d = c + 1 ; d < n-1 ; d++ )
                                                                                            for ( int e = d + 1; e < n ; e++ )
                {
                    if ( ( int ) ( index[e] + index[d] + index[c] + index[b] + index[i] + index[j] + index[k] + index[l] + index[m] + index[o] + index[p] + index[q] + index[r] + index[s] + index[t] + index[u] + index[v] + index[w] + index[x]+ index[y] + index[a] ) == ( int ) search )
                    {
                        printf("The data is in index %d, %d, %d, %d, %d ,%d, %d , %d, %d , %d,  %d ,%d , %d , %d, %d , %d , %d , %d, %d, %d and %d which has the value :  %.3f , %.3f , %.3f , %.3f ,%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %3.f, %.3f, %.3f, %.3f,  %.3f, %.3f, %.3f, %.3f.\n\n", i, j , k , l, m, o, p, q, r, s,t,u,v,w, x,y,a,b,c,d,e, index[i], index[j], index[k] , index[l], index[m], index[o], index[p], index[q], index[r], index[s], index[t], index[u], index[v], index[w], index[x], index[y], index[a], index[b], index[c] ,index[d], index[e]);
                        check = 1; 
                    }
                }
        return check;
        }
