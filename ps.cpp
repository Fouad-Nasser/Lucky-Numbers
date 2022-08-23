#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    bool flag = false;

    for (int i = num1; i <= num2; i++)
    {
        int r=i,d;
        bool flag1 = true;

        while (r!=0)
        {
            d=r%10;
            r = r/10;

            if (d != 4 && d != 7)
            {
                flag1 = false;
                break;
            }
        }
        if (flag1)
        {
            flag = true;
            cout<<i<<' ';        
        }
    }
        if (!flag)
        {
            cout<<-1;        
        }
        cout<<endl;        
    

    return 0;
}
