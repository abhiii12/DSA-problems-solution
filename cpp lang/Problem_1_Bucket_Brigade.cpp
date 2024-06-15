#include<bits/stdc++.h>
using namespace std ;
int main(){
    int bi=0,bj=0,ri=0,rj=0,li=0,lj=0;
    for (int i = 0; i < 10; i++)
    {
        string row;
        cin>>row;
    for (int j = 0; j < 10; j++)
      {
        if(row [j]=='B')
        {
            bi=i;
            bj=j;
        }
       else if(row[j]='R')
        {
            ri=i;
            rj=j;
        }
       else if(row[j]=='L')
        {
            li=i;
            lj=j;
        }
      }
    } 
    int cows = abs(li-bi)+abs(lj-bj)-1;
    if(bi==li && ri==bi && 
        ((lj<rj && rj<bj)||(bj<rj && rj < lj)))
        {
        cows += 2;
        }
    else if (bj==lj && rj==bj
         &&((li<ri && ri<bi)||(bi<ri && ri<li)))
         {
            cows += 2;
         }
         cout<<cows<<endl;
         return 0;
}
/*#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	
	int barn_i = 0, barn_j = 0, rock_i = 0, rock_j = 0, lake_i = 0, lake_j = 0;
	for (int i = 0; i < 10; i++)
	{
		string row;
		cin >> row;
		for (int j = 0; j < 10; j++)
		{
			if (row[j] == 'B')
			{
				barn_i = i;
				barn_j = j;
			}
			else if (row[j] == 'R')
			{
				rock_i = i;
				rock_j = j;
			}
			else if (row[j] == 'L')
			{
				lake_i = i;
				lake_j = j;
			}
		}
	}

	// initial distance
	int cows = abs(barn_i - lake_i) + abs(barn_j - lake_j) - 1;

	// if the barn, lake and rock are in the same column
	// and the rock is betwen the barn and the lake
	if (barn_i == lake_i && rock_i == barn_i
			&& ((lake_j < rock_j && rock_j < barn_j)
				|| (barn_j < rock_j && rock_j < lake_j)))
	{
		cows += 2;
	}
	// if the barn, lake and rock are in the same row
	// and the rock is between the barn and the lake
	else if (barn_j == lake_j && rock_j == barn_j
				&& ((lake_i < rock_i && rock_i < barn_i)
					|| (barn_i < rock_i && rock_i < lake_i)))
	{
		cows += 2;
	}
	cout << cows << endl;
}*/



