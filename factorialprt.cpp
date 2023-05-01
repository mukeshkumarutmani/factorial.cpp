// #include <iostream>
// using namespace std;
// int fac(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }

//     return n * fac(n - 1);
// }
// int main()
// {
//     int a;
//     cout << " chose your number for factorial " << endl;
//     cin >> a;
//     cout << "the factorial of " << a << " is :  " << fac(a) << endl;

//     return 0;
// }


# include <iostream>
using namespace std;
int main()
{  int a,i,sum=0;
   cout<<" chose your number "<<endl;
   cin>>a;
   for(i=0; i<=a; i++)
   {   sum+=i*a;
     cout<<sum;
   }
    

    return 0;

}