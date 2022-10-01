//C++ Program to implement Round Robin 
//Scheduling CPU Algorithm
//Ariful Islam Batch E-64 Roll: 34

#include <iostream>

/*
at 
bt 
time_quantum
tat
wt
*/

using namespace std;

int main(){
	int i,n,time,remain,temps=0,time_quantum;

	int wt=0,tat=0;

	cout<<"Enter the total number of process="<<endl;
	cin>>n;

	remain=n;
	// assigning the number of process to remain variable

	int at[n];
	int bt[n];
	int rt[n];


	

	cout<<"Enter the value of time QUANTUM:"<<endl;
	cin>>time_quantum;

	cout<<"\n\nProcess\t:Turnaround Time:Waiting Time\n\n";
	for(time=0,i=0;remain!=0;)
	{
		if(rt[i]<=time_quantum && rt[i]>0)
		{
			time += rt[i];
		
			rt[i]=0;
			temps=1;
		}

		else if(rt[i]>0)
		{
			rt[i] -= time_quantum;
		
			time += time_quantum;
		
		}

		if(rt[i]==0 && temps==1)
		{
			remain--;
			//Desplaying the result of wating, turn around time:
			printf("Process{%f}\t:\t%d\t:\t%d\n",i+1,time-at[i],time-at[j]-bt[p]);
			cout<<endl;

			wt += time-at[i]-bt[i];
			tat += time-at[i];
			temps=0;
		}

		
	}

	cout<<"AWT "<<wt*1.0/n<<endl;
	cout<<"ATG "<<tat*1.0/n<<endl;;

	return 0;
}
