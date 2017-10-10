#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector < vector<int> > matrix (13);
for (int i = 0;i < 13 ; i++)
{
	matrix[i].resize(13);
}
for (int i = 0;i<13;i++)
{
	matrix [0][i] = i;
	

}
for (int i = 0;i<13;i++)
{
	matrix [i][0] = i;
}
for (int i = 1;i<13;i++)
{
	for (int j = 1;j<13;j++)
	{
	matrix[i][j] = i*j;	
	}
}
cout <<"    X" ;
for (int i = 0;i<13;i++)
{
	for(int j = 0;j<13;j++ )
	{

	
	if(i == 0)
	{
	if(j==0)
	{
	 continue;
	}
	if(j < 10)
	{

	cout << "  ";
	}

	else 
	{
	cout << " ";
	}
	}
	if(((j*i) < 10) && (i!=0) )
	{
	cout << "   ";
	}
	else if (((j*i) > 9 ) &&((j*i) < 100))
	{
	cout << "  ";
	}
	else 
	{
	cout << " ";

	}
	cout << matrix[i][j];
	
	}
	cout << endl;
	if(i < 9)
	{
	cout << " ";
	}

}

	return 0 ;

}
