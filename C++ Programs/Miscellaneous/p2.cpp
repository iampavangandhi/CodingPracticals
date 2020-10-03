#include<iostream>
using namespace std;
int main()
{
cout<<"\t\tIntersection set\n\n";
char A[50],B[50],R[50];

int m,n,i,j,h;
int l=0;
char G='y';
while (G=='y')
{
        cout<<"Please enter 1 for Union set \n";
        cout<<"Please enter 2 for Intersection set \n";
        cout<<"Please enter 3 for Subtraction set \n";
        cout<<"Please enter 4 for Curtatian product \n";
        cout<<"Please enter 5 for Power set \n";

        cin>>h;
        if(h==1)
        {
            cout<<"Please enter number of elements of your first set: ";
            cin>>m;
            cout<<endl;

            cout<<"Please enter number of elements of your second set: ";
            cin>>n;
            cout<<endl;
            for(i=0;i<m;i++)
            {
                cout<<"Please enter element no "<<i+1<<" of your first set: ";
                cin>>A[i];
            }
            cout<<"Elements of your first set = { ";
            for(i=0;i<m;i++)
            {
                cout<<A[i];
                if(i<m-1)
                {
                    cout<<" , ";
                }
            }
            //loop printing second set elements.
            cout<<" }";
            cout<<"\n\n";
            for(i=0;i<n;i++)
            {
                cout<<"Please enter element no "<<i+1<<" of your second set: ";
                cin>>B[i];
            }
            cout<<"Elements of your second set = { ";
            for(i=0;i<n;i++)
            {
                cout<<B[i];
                if(i<n-1)
                {
                    cout<<" , ";
                }
            }
            //loop printing second set elements.
            cout<<" }";
            cout<<"\n\n";
            //compute union
            for(i=0; i<m; i++)
            {
                R[i] = A[i];
                l++;
            }
            int e = l;
            for(i=0; i<n; i++)
            {
                int found=0;
                for(int j=0; j<e; j++)
                {
                    if (B[i] == R[j])
                    {
                        found = 1;
                        break;
                    }
                }
                if (found==0)
                {
                    R[l] = B[i];
                    l++;
                }
            }
        cout<<"A Union B : \n\n\t\t { ";
        for(i = 0; i < l; i++)
        {
            cout<<R[i]<<" ";
        }
        cout<<"}"<<endl;
    }
    else if (h==2)
    {
        cout<<"Please enter number of elements of your first set: ";
        //Getting input for first sets element size.
        cin>>m;
        //Storing size in variable.
        cout<<endl;
        //getting new line
        cout<<"Please enter number of elements of your second set: ";
        //Getting input for second sets element size.
        cin>>n;
        //Storing size in variable.
        cout<<endl;
        //getting new line
        for(i=0;i<m;i++)
        //loop for get input elements for first set.
        {
            cout<<"Please enter element no "<<i+1<<" of your first set: ";
            cin>>A[i];
        }
        cout<<"Elements of your first set = { ";
        for(i=0;i<m;i++)
                                                            //loop for get input elements for first set.
        {
            cout<<A[i];
            if(i<m-1)
            {
                cout<<" , ";
            }
        }
        //loop printing second set elements.
        cout<<" }";
        cout<<"\n\n";
        for(i=0;i<n;i++)
        {
            cout<<"Please enter element no "<<i+1<<" of your second set: ";
            cin>>B[i];
        }
        cout<<"Elements of your second set = { ";
        for(i=0;i<n;i++)
        {
            cout<<B[i];
            if(i<n-1)
            {
                cout<<" , ";
            }
        }
        //loop printing second set elements.
        cout<<" }";
        cout<<"\n\n";
        //compute intersection
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if (A[i] == B[j])
                {
                    B[j]=0;
                    R[l] = A[i];
                    l++;
                }
            }
        }
        cout << "A Intersection B = { ";
        for(i=0; i<l; i++)
        {
            cout << R[i] << " ";
        }
        cout << "}" << endl;

    }
    else if(h==3)
    {
        cout<<"Please enter number of elements of your first set: ";
        //Getting input for first sets element size.
        cin>>m;
        //Storing size in variable.
        cout<<endl;
        //getting new line
        cout<<"Please enter number of elements of your second set: ";
        //Getting input for second sets element size.
        cin>>n;
        //Storing size in variable.
        cout<<endl;
        //getting new line
        for(i=0;i<m;i++)
        //loop for get input elements for first set.
        {
            cout<<"Please enter element no "<<i+1<<" of your first set: ";
            cin>>A[i];
        }
        cout<<"Elements of your first set = { ";
        for(i=0;i<m;i++)
        //loop for get input elements for first set.
        {
            cout<<A[i];
            if(i<m-1)
            {
                cout<<" , ";
            }
        }
        //loop printing second set elements.
        cout<<" }";
        cout<<"\n\n";
        for(i=0;i<n;i++)
        {
            cout<<"Please enter element no "<<i+1<<" of your second set: ";
            cin>>B[i];
        }
        cout<<"Elements of your second set = { ";
        for(i=0;i<n;i++)
        {
            cout<<B[i];
            if(i<n-1)
            {
                cout<<" , ";
            }
        }
        //loop printing second set elements.
        cout<<" }";
        cout<<"\n\n";
        for(i=0; i<m; i++)
        {
            int found=0;
            for(j=0; j<n; j++)
            {
                if (A[i] == B[j])
                    {
                        found=1;
                        break;
    
                    }
            }
            if(found==0)
            {
                R[l]=A[i];
                l++;
            }
        }

        for(i=0; i<n; i++)
        {
            int found=0;
            for(j=0; j<m; j++)
            {
                if (B[i] == A[j])
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                R[l]=B[i];
                l++;
            }
        }
        cout << "A Subtraction B = { ";
        for(i=0; i<l; i++)
        {
            cout << R[i] << " ";
        }
        cout << "}" << endl;
    }
    else if(h==4)
    {
        cout<<"Please enter number of elements of your first set: ";
        cin>>m;
        cout<<endl;
        cout<<"Please enter number of elements of your second set: ";
        cin>>n;
        cout<<endl;
        for(i=0;i<m;i++)
        {
            cout<<"Please enter element no "<<i+1<<" of your first set: ";
            cin>>A[i];
        }
        cout<<"Elements of your first set = { ";
        for(i=0;i<m;i++)
        {
            cout<<A[i];
            if(i<m-1)
            {
                cout<<" , ";
            }
        }
        cout<<" }";
        cout<<"\n\n";
        for(i=0;i<n;i++)
        {
            cout<<"Please enter character element no "<<i+1<<" of your second set: ";
            cin>>B[i];
        }
        cout<<"Elements of your second set = { ";
        for(i=0;i<n;i++)
        {
            cout<<B[i];
            if(i<n-1)
            {
                cout<<" , ";
            }
        }
        cout<<" }";
        cout<<"\n\n";
        cout<<"Cartesian product: \n\n\t\t{ ";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<" [ ";
                cout<<A[i]<<" "<<B[j]<<" ] ";
            }
        }
        cout<<"}";
    }
    else if(h==5)
    {
        cout<<"Please enter number of elements of your set: ";
        cin>>m;
        cout<<endl;
        for(i=0;i<m;i++)
        {
            cout<<"Please enter element no "<<i+1<<" of your set: ";
            cin>>A[i];
        }
        cout<<"Elements of your set = { ";
        for(i=0;i<m;i++)
        {
            cout<<A[i];
            if(i<m-1)
            {
                cout<<" , ";
            }
        }
        cout<<"}";
        cout<<"\n\n";
        cout<<"Power set: \n\n\t\t{ ";
        cout<<"[0], ";
        for(i=0;i<m;i++)
        {
            cout<<"[";
            cout<<A[i];
            cout<<"], ";
        }
        for(i=0;i<m-1;i++)
        {
            cout<<"[ ";
            cout<<A[i]<<" "<<A[i+1];
            cout<<"], ";
        }
        cout<<"[ ";
        for(i=0;i<m;i++)
        {
            cout<<A[i];
        }
        cout<<"]";
        cout<<" }";
    }
    else
    {
        cout<<"You entered wrong key\n";
    }
cout<<"\n\n\n\n\n";
cout<<"Please enter 'y' for check again or 'n' for stop: ";
cin>>G;

}
}
