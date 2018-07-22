#include<iostream>
using namespace std;

int flag=1;
int check_row(int digit,int j,int i,int arr[9][9])
{
    for(int k=0;k<9;k++){
        //cout<<digit<<","<<arr[i][k]<<endl;
        if(j==k)
            continue;
        else
        {
            if(digit==arr[i][k])
                {
                    flag=0;
                    break;
                }
        }
    }
    return flag;
}

int check_col(int digit,int j,int i,int arr[9][9])
{
    for(int k=0;k<9;k++){
        //cout<<digit<<","<<arr[i][k]<<endl;
        if(j==k)
            continue;
        else
        {
            if(digit==arr[k][i])
                {
                    flag=0;
                    break;
                }

        }
    }
    return flag;
}

int check_block(int digit,int j,int i,int arr[9][9])
{
    if(i<3 && j<3)
    {
        for(int k=0;k<3;k++){
            for(int l=0;l<3;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if((j>=3 && j<6) && i<3)
    {
        for(int k=0;k<3;k++){
            for(int l=3;l<6;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if(j>=6 && i<3)
    {
        for(int k=0;k<3;k++){
            for(int l=6;l<9;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if((i>=3 &&i<6 ) && j<3)
    {
        for(int k=3;k<6;k++){
            for(int l=0;l<3;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if((i>=3 &&i<6 ) && (j>=3 && j<6))
    {
        for(int k=3;k<6;k++){
            for(int l=3;l<6;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if((i>=3 &&i<6 ) && j>=6)
    {
        for(int k=3;k<6;k++){
            for(int l=6;l<9;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if(i>=6 && j<3)
    {
        for(int k=6;k<9;k++){
            for(int l=0;l<3;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if((j>=3 && j<6) && i>=6)
    {
        for(int k=6;k<9;k++){
            for(int l=3;l<6;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    else if(j>=6 && i>=6)
    {
        for(int k=6;k<9;k++){
            for(int l=6;l<9;l++)
            {
                if(i==k && j==l)
                    continue;
                else
                {
                    if(digit==arr[k][l])
                        {
                            flag=0;
                            break;
                        }
                }
            }
        }
    }
    return flag;
}

int main()
{
    //int arr[9][9];
    int arr[9][9]={{2,7,1,9,5,4,6,8,3},
               {5,9,3,6,2,8,1,4,7},
               {4,6,8,1,3,7,2,5,9},
               {7,3,6,4,1,5,8,9,2},
               {1,5,9,8,6,2,3,7,4},
               {8,4,2,3,7,9,5,6,1},
               {9,8,5,2,4,1,7,3,6},
               {6,1,7,5,9,3,4,2,8},
               {3,2,4,7,8,6,9,1,5,} };
    /*cout<<"Enter the digits of complete sudoku :\n";
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
            cout<<"\tarr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j]

;        }
    }*/
    cout<<"Given sudoku is:\n";
    for(int i=0;i<9;i++)
    {
        cout<<"\t|";
        for(int j=0;j<9;j++)
        {
            cout<<arr[i][j]<<"|";
        }
        cout<<"\n";
    }

    cout<<"Checking out the solution:\n";
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
            int check_digit=arr[i][j];
            flag=check_row(check_digit,j,i,arr);
        }
    }
    //cout<<"flag after row check:"<<flag<<endl;
    if(flag==0){
        cout<<"doesn't a solution";
    }
    else
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++){
                int check_digit=arr[j][i];
                flag=check_col(check_digit,j,i,arr);
            }
        }
    }
    //cout<<"flag after col check: "<<flag<<endl;

    if(flag==0)
        cout<<"\ndoesn't a solution";
    else
        {
            for(int i=0;i<9;i++)
            {
                for(int j=0;j<9;j++){
                    int check_digit=arr[i][j];
                    flag=check_block(check_digit,j,i,arr);
                }
            }
        }
      //      cout<<"flag after  block_check: "<<flag<<endl;


        if(flag==0)
        cout<<"\ndoesn't a solution";
    else
        {
            cout<<"\ngiven sudoku is complete solution!!";
        }

}
