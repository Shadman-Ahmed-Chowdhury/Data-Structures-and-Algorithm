#include <bits/stdc++.h>

using namespace std;

int prime[100];
bool status[100];
void sieve()
{
    int N=100;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2)
            status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
                        status[j]=1;
		}
	}
	status[1]=1;
	int k = 0;
	for(int i = 2; i <= N; i++)
      {
            if(status[i] == 0)
            {
                  printf("%d\n", i);
                  prime[k++]  = i;
            }
      }
}
int main()
{
      sieve(); //Prints all the prime number upto 100;
      return 0;
}
