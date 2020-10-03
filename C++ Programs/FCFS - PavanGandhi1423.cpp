#include <iostream>
using namespace std;
class fcfs
{
    public:
    int arrivalTime;
	int burstTime;
	int waitingTime;
	int turnAroundTime;
    int completionTime;
	fcfs()
	{
		arrivalTime=burstTime=waitingTime=turnAroundTime=completionTime=0;
	}
};

int main()
{
    float avgWaitingTime=0,avgTurnAroundTime=0;int n;
    cout<<"\nEnter No. of Processes = ";
    cin>>n;
    fcfs *p=new fcfs[n];
	for(int i=1;i<=n;i++)
	{
        cout<<"\nEnter the Arrival Time for Process No. "<< i <<" = ";
        cin>>p[i-1].arrivalTime;
		cout<<"\nEnter the Burst Time for Process No. "<< i <<" = ";
        cin>>p[i-1].burstTime;
    }

	p[0].completionTime = p[0].arrivalTime + p[0].burstTime;
	for(int i=1; i<n; i++)
	{
		p[i].completionTime = p[i-1].completionTime + p[i].burstTime;
	}
	
	for(int i=0; i<n; i++)
	{
		p[i].turnAroundTime = p[i].completionTime - p[i].arrivalTime;
		p[i].waitingTime = p[i].turnAroundTime - p[i].burstTime;
	}
	
	
	

	for(int i=0; i < n; i++)
	{
        avgWaitingTime+=p[i].waitingTime;
        avgTurnAroundTime+=p[i].turnAroundTime;
        cout<<"\nThe Waiting Time for Process No. "<< i+1<<" = "<< p[i].waitingTime;
        cout<<"\nThe Turnaround Time for Process No. "<< i+1<<" = "<< p[i].turnAroundTime;
        cout<<"\n The Competion Time for Process No. "<<i+1<<" = "<<p[i].completionTime;
        cout<<endl;
    }
	cout<<"\nAverage Waiting Time is = "<< avgWaitingTime/(float)n;
	cout<<"\nAverage Turnaround Time is = "<< avgTurnAroundTime/(float)n;
	return 0;
}
