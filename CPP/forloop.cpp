#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int i;
    for (i=a;i<=b;i++)
    {
        if (i<=9)
        {
            switch(i)
            {
                case 1: if(i==1)
                        cout<<"one"<<endl;
                        break;
                
                case 2: if(i==2)
                        cout<<"two"<<endl;
                        break;
                
                case 3: if(i==3)
                        cout<<"three"<<endl;
                        break;
                
                case 4: if(i==4)
                        cout<<"four"<<endl;
                        break;
                
                case 5: if(i==5)
                        cout<<"five"<<endl;
                        break;
                
                case 6: if(i==6)
                        cout<<"six"<<endl;
                        break;
                
                case 7: if(i==7)
                        cout<<"seven"<<endl;
                        break;
                case 8: if(i==8)
                        cout<<"eight"<<endl;
                        break;
                case 9: if(i==9)
                        cout<<"nine"<<endl;
                        break;
            }
        }
        else if (i>9)
        {
            if(i%2 ==0)
            {
                cout<<"even"<<endl;
            }
            else cout<<"odd"<<endl;
        }
    }
    // Complete the code.
    return 0;
}

