#include <stdio.h>

int main() {
    // Write C code here
    int n,f=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[100],e;
    int end=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value which user wan to delete");
    scanf("%d",&e);
    for(int i=0;i<n;i++)
    {
         if(a[i]==e){
        for(int j=i;j<n;j++)
        {
            a[j]=a[j+1];
        }
        i--;
        end--;
         }
        
    }
    for(int i=0;i<end;i++)
    {
        printf("%4d",a[i]);
    }
    
    return 0;
}
