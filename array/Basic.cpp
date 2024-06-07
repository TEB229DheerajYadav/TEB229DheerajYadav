#include <iostream>
using namespace std;
int main()
{
    // (1) absolute value
    // cout<<"Enter the value of A"<<endl;
    //  cin>>A;
    //  if(A>=0){
    //   cout<<"the number "<< A <<" is absolute"<<endl;
    //     }
    //  else{
    //    int A;
    //    cout<< A*-1;
    //    }
    // (2) profit_lose program
    // int cost_price;
    // int seltestling_price;
    // cout<<"enter the cost price"<<endl;
    // cin>>cost_price;
    // cout<<"enter the selling price"<<endl;
    // cin>>selling_price;
    // if(cost_price>selling_price){
    //   cout<<"you have incurred loss"<<endl;
    // }
    // else if(cost_price<selling_price){
    //   cout<<"you have made profit"<<endl;
    // }
    // else{
    //   cout<<"you have neither incurred loss nor made a profit" <<endl;
    // }
    //(3)  take positive number integer input and tell if it is a three-digit number or not
    // int Num;
    // cout<<"enter the number"<<endl;
    // cin>>Num;
    // if(Num>99 && Num<1000){
    //   cout<<"the number is a three-digit number"<<endl;
    // }
    // else{
    //   cout<<"the number is not a three-digit number"<<endl;
    // }
    //(4)  Take a positive integer input and tell if it is divisible by 5 and 3
    // int num;
    // cout<<"enter the number"<<endl;
    // cin>>num;
    // if(num%5==0 && num%3==0){
    //   cout<<"the number is divisible by 5 and 3"<<endl;
    // }
    // else{
    //   cout<<"the number is not divisible by 5 and 3"<<endl;
    // }
    //(5) take three number inputs and tell if they can be the side of a triangle
    // int a,b,c;
    // cout<<"enter the first side of a triangle "<<endl;
    // cin>>a;
    // cout<<"enter the second side of a triangle "<<endl;
    // cin>>b;
    // cout<<"enter the third side of triangle "<<endl;
    // cin>>c;
    // if(a+b>c && b+c>a && a+c>b){
    //   cout<<"these three numbers can be the side of a triangle"<<endl;
    // }
    // else{
    //   cout<<"these three numbers cannot be the side of a triangle"<<endl;
    // }
    //(6) Take 3 positive integer inputs and print the greatest of them
    // int a,b,c;
    // cout<<"enter the first number"<<endl;
    // cin>>a;
    // cout<<"enter the second number"<<endl;
    // cin>>b;
    // cout<<"enter the third number"<<endl;
    // cin>>c;
    // if(a>b && a>c){
    //   cout<<"the first number is the greatest"<<endl;
    // }
    // else if (b>a && b>c){
    //   cout<<"the second number is the greatest"<<endl;
    // }
    // else {
    //   cout<<"the third number is the greatest"<<endl;
    // }
    //(7) take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
    // int num;
    // cout<<"enter the number"<<endl;
    // cin>>num;
    // if(num%5==0 || num%3==0){
    //   if(num%15!=0){
    //     cout<<"the number is divisible by 5 or 3 but not
    // divisible by 15"<<endl;
    //   }
    //   else{
    //     cout<<"this number is not the type of our question"<<endl;
    //   }

    // }
    //(8)  Print all the even numbers from 1 to 100
    // for(int i=1;i<=100;i++){
    //   if(i%2==0){
    //     cout<<i<<endl;
    //   }
    //   }
    // print table of n number
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=1;i<=10;i++){
    //   cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }
    //(9)  display the AP - 4,7,10,13,16,19,22,25,28,31,34,37,40
    // int n ;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=1; i<3*n+1;i+=3){
    //   cout<<i<<endl;
    // }
    //(10)  Display the GP - 1,2,4,8,16,32,64,128,256,512,1024,2048
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //   cout<<a<<endl;
    //   a= a * 2;
    // }
    // (11) Find the factors of a given number
    // int n ;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //   if(n%i==0){
    //     cout<<" "<<i;
    //   }
    // }
    //(12)   Find the highest factor of a given number
    // int n;
    // int h=1;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=1;i<n/2;i++){
    //   if(n%i==0)
    //     h=i;
    // }
    // cout<<"the highest factor of "<<n<<" is "<<h;
    // optimal solution
    // int n;
    // int h=1;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=n/2;i>=1;i--){
    //   if(n%i==0)
    //     h=i;
    //    break;
    // }
    // cout<<"the highest factor of "<<n<<" is "<<h;
    //(13)check whether the given number is composite
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=2;i<=n/2;i++){
    //   if(n%i==0){
    //     cout<<"composite number"<<endl;
    //     break;
    //   }
    // }
    //(14) Check whether the given number is composite or prime
    // int n;
    // cout<< "enter the number"<<endl;
    // cin>>n;
    // bool flag=true;//true means prime
    // for(int i=2;i<=n/2;i++){
    //   if(n%i==0){
    //     flag=false;
    //     break;
    //   }
    // }
    // if(n==1){
    //   cout<<"neither prime nor composite"<<endl;
    // }
    // else if(flag==true){
    //   cout<<"prime number"<<endl;
    // }
    // else{
    //   cout<<"composite number"<<endl;
    // }
    //(15) print the odd number from 1 to 100;
    // for(int i=1;i<=100;i++){
    //   if(i%2==0){
    //    continue;
    //   }
    //   cout<<i<<" ";
    // }
    //(16) WAP to count the number of digits in a given number
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // int count=0;
    // while(n!=0){
    //   n=n/10;
    //   count++;
    // }
    // cout<<"the number of digits in the given number is "
    //  <<count<<endl;
    //(17) WAP to print the sum of digits of a given number
    // int n;
    // int sum=0;
    // int ld;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    //  while(n!=0){
    //   ld=n%10;
    //    n=n/10;
    //   sum=sum+ld;
    // }
    // cout<<" the sum of digits of a given number "
    //  <<sum<<endl;
    // (18)WAP to print the product of the digit of a given number
    // int n;
    // int mul=1;
    // int ld;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    //  while(n!=0){
    //   ld=n%10;
    //    n=n/10;
    //   mul=mul*ld;
    // }
    // cout<<" the Product of digits of a given number "
    //  <<mul<<endl;
    //(19) WAP to print the reverse of a given number
    // int n;
    // int ld;
    // int r=0;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    //  while(n!=0){
    //   ld=n%10;
    //    r *=10;
    //    r +=ld;
    //    n /=10;
    // }
    // cout<<r;
    //(20) WAP to print the sum of the digits of a given number and its reverse
    // int n;
    // int ld;
    // int r=0;
    // int sum=0;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    //  while(n!=0){
    //     ld=n%10;
    //     r *=10;
    //     r +=ld;
    //     n /=10;
    //     sum=sum+ld;
    //   }
    // cout<<r<<endl;
    // cout<<sum;
    //(21) Print the factorial of the given number 'n'
    // int n;
    //  int factorial=1;
    // cout<< "enter the number"<<endl;
    // cin>>n;
    //  for(int i=1;i<=n;i++){
    //    factorial=factorial*i;
    //  }
    //  cout<<factorial;
    //(22) print the factorial of the first "n" numbers
    // int n;
    // int factorial=1;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //   factorial*=i;
    //   cout<<"factorial of the "<<i<<" number is " <<factorial<<endl;
    // }
    //(23) Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop;
    int i = 65;
    while (i <= 90)
    {
        cout << i << " " << char(i) << endl;
        i++;
    }

    return 0;
}
