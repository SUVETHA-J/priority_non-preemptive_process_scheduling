#include<stdio.h>

int main()
{
    int n;
    printf("Number of process:");
    scanf("%d",&n);
    int arr[n],bt[n],ct[n],i=0,j,p[n],tat[n],wt[n],pr[n];
    int s=0,end=0,tot1=0,tot2=0;
    float avg1,avg2;
    for(i=0;i<n;i++)
    {   p[i]=-1;
        printf("\n process:%d",i+1);
        printf("\n arrival time:");
        scanf("%d",&arr[i]);
        printf("\n burst time:");
        scanf("%d",&bt[i]);
        printf("\nPriority:");
        scanf("%d",&pr[i]);

    }int min;
            printf("process\t\tarrival time\t\t burst time\t\t CT\t\tTAT\t\tWT\n");

    while(s!=n)
    {
        min=0;
        while(p[min]==0)
        {
            min=min+1;
        }
        for(i=0;i<n;i++)
        {
            if(p[i]==-1)
            {
         if((pr[i]<pr[min])&&(arr[i]<=end))
        {
             min=i;
         }
         }

        }
        if(!(arr[min]<=end))
        {
            min=0;
            while(p[min]==0)
            {
                min=min+1;
            }
            for(i=0;i<n;i++)
        {
            if(p[i]==-1)
            {
         if(arr[i]<arr[min])
        {
             min=i;
         }
         }


        }}
        p[min]=0;
        end=end+bt[min];
        ct[min]=end;
        tat[min]=ct[min]-arr[min];
        wt[min]=tat[min]-bt[min];
        s++;
    printf("%d\t\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n",min+1,arr[min],bt[min],ct[min],tat[min],wt[min]);
    }
for(i=0;i<n;i++)
    {

        tot1=tot1+tat[i];
        tot2=tot2+wt[i];

    }
    avg1=(float)tot1/n;
    avg2=(float)tot2/n;

printf("%.2f\n",avg1);
printf("%.2f",avg2);
    }
