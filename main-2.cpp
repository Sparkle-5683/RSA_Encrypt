#include <iostream> 

using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i=2; i<=num/2;i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
            }
        }
        return flag;
    }
int mod(int num1,int num2){
      int mod = num1*num2;
      return mod;
    }
    
int eulerTotient(int num1, int num2){
    int eT = (num1-1)*(num2-1);
    return eT;
    }
 int publicKey(){
     int pKey;
     cout << "Enter a two digit public key" << endl;
     cin>>pKey;
     
     return pKey;
     } 
int test(int num1, int num2){
    int test = num1*num2;
    return test;
    
    } 


    




int Crypt(){
    int p,q;
    int num;
    int modulus;
    int eT;
    int pubKey;
    int pubMod = pubKey;
    int eTMod = eT;
    int i = 2;
    
    int prime[11][3]={{137,139,149},
    {151,157,163},
    {167,173,179},
    {181,191,193},
    {197,199,211},
    {223,227,229},
    {233,237,239},
    {241,251,257},
    {263,269,271},
    {277,281,283},
    {293,307,311}};
    
    for(int i = 0; i<=11; i++)
        for(int j = 0;j<=3; j++){
            cout<<prime[i][j] << " ";
        
        }
        
    cout << endl;
    cout << "Enter a prime number from the chart above " <<endl;
    cin>> p>>q;
    
    
    bool flag = isPrime(p);
    if(flag==true)
        cout << p<< " is prime" << endl;
    else
        cout <<p << " is not prime" << endl;
        
    flag = isPrime(q);
    if(flag==true)
        cout << q<< " is prime" << endl;
    else
        cout <<q << " is not prime" << endl;
        
    
    modulus= mod(p,q);
    cout << "Modulus is " << modulus << endl;
    
    eT = eulerTotient(p,q);
    cout << "The Euler Totient is " <<eT << endl;
    
    pubKey = publicKey();
    int quotient = eT/pubKey;
    int remainder = eT%pubKey;
    int priKey =  2*(1-(-quotient));
    int test1 = test(priKey, pubKey);
    
    
    cout << "Your private key is: "<<priKey<< endl;
    
    cout << test1 << endl;
    
    cout << remainder <<endl;
    
    if ((pubMod % i== 0) && (eTMod % i == 0))
        cout<<"Choose another public key" <<endl;
    
    cout << "Enter your message to encrpyt" << endl;
    char m[14];
    for(int i = 0; i <=14; i++){
        cin >> m[i];
        }
    char m2[3];
    char m3[3];
    char m4[3];
    char m5[3];
    char m6[3];
    
    for(int i = 0;i<=2;i++)
        for(int j = 0; j<=2; j++)
            m2[j] = m[i];
    for(int i = 3;i<=5;i++)
        for(int j = 0; j<=2; j++)
            m3[j] = m[i];
    for(int i = 6;i<=8;i++)
        for(int j = 0; j<=2; j++)
            m4[j] = m[i];
    for(int i = 9;i<=11;i++)
        for(int j = 0; j<=2; j++)
            m5[j] = m[i];
    for(int i = 12;i<15;i++)
        for(int j = 0; j<=2; j++)
            m6[j] = m[i];
    
    char a = (m2[0]*26^2)+(m2[1]*26)+m2[2];
    cout << a;
    char b = (m3[0]*26^2)+(m3[1]*26)+m3[2];
    cout<<b ;
    char c = (m4[0]*26^2) + (m4[1]*26) +m4[2];
    cout<< c;
    char d = (m5[0]*26^2) + (m5[1]*26) +m5[2];
    cout << d;
    char e = (m6[0]*26^2) + (m6[1]*26) +m6[2];
    cout << e;
    cout<<endl;
    char fc1 = ((a/26^3)%26)+65;
    char fc2 = ((b/26^3)%26)+65;
    char fc3 = ((c/26^3)%26)+65;
    char fc4 = ((d/26^3)%26)+65;
    char fc5 = ((e/26^3)%26)+65;
    
    cout << fc1;
    cout << fc2;
    cout << fc3;
    cout << fc4;
    cout << fc5;
    cout <<endl;
    
    char sc1 = ((a/26^2)%26)+65;
    char sc2 = ((b/26^2)%26)+65;
    char sc3 = ((c/26^2)%26)+65;
    char sc4 = ((d/26^2)%26)+65;
    char sc5 = ((e/26^2)%26)+65;
    
    cout << sc1;
    cout << sc2;
    cout << sc3;
    cout << sc4;
    cout << sc5;
    cout <<endl;
    
    char tc1 = ((a/26)%26)+65;
    char tc2 = ((b/26)%26)+65;
    char tc3 = ((c/26)%26)+65;
    char tc4 = ((d/26)%26)+65;
    char tc5 = ((e/26)%26)+65;
    
    cout << tc1;
    cout << tc2;
    cout << tc3;
    cout << tc4;
    cout << tc5;
    cout <<endl;
    
    char ftc1 = (a%26)+65;
    char ftc2 = (b%26)+65;
    char ftc3 = (c%26)+65;
    char ftc4 = (d%26)+65;
    char ftc5 = (e%26)+65;
    
    cout << ftc1;
    cout << ftc2;
    cout << ftc3;
    cout << ftc4;
    cout << ftc5;
    cout <<endl;
   
    
   cout << "Enter two more prime numbers for Mary " <<endl;
    cin >> p >> q;
    
    flag = isPrime(p);
    if(flag==true)
        cout << p<< " is prime" << endl;
    else
        cout <<p << " is not prime" << endl;
        
    flag = isPrime(q);
    if(flag==true)
        cout << q<< " is prime" << endl;
    else
        cout <<q << " is not prime" << endl;
    
    int maryMod = mod(p,q);
    int maryET = eulerTotient(p,q);
    int maryPubKey = publicKey();
    
    cout << "Mary's modulus" << maryMod << endl;
    cout << "Mary's public Key" << maryPubKey<< endl;
    
    char d1[20] = {fc1,fc2,fc3,fc4,fc5,sc1,sc2,sc3,sc4,sc5,tc1,tc2,tc3,tc4,tc5,ftc1,ftc2,ftc3,ftc4,ftc5};
    
    char d2[4];
    char d3[4];
    char d4[4];
    char d5[4];
    char d6[4];
    
    for(int i = 0;i<=3;i++)
        for(int j = 0; j<=3; j++)
            d2[j] = d1[i];
    for(int i = 4;i<=7;i++)
        for(int j = 0; j<=3; j++)
            d3[j] = d1[i];
    for(int i = 8;i<=11;i++)
        for(int j = 0; j<=3; j++)
            d4[j] = d1[i];
    for(int i = 12;i<=15;i++)
        for(int j = 0; j<=3; j++)
            d5[j] = d1[i];
    for(int i = 16;i<19;i++)
        for(int j = 0; j<=3; j++)
            d6[j] = d1[i];
            
    a = (d2[0]*26^3)+(d2[1]*26^2)+(d2[2]*26)+d2[3];
    cout << a;
     b = (d3[0]*26^3)+(d3[1]*26^2)+(d3[2]*26)+d3[3];
    cout<<b ;
     c = (d4[0]*26^3) + (d4[1]*26^2) +(d4[2]*26)+d4[3];
    cout<< c;
     d = (d5[0]*26^3) + (d5[1]*26^2) +(d5[2]*26)+d5[3];
    cout << d;
     e = (d6[0]*26^3) + (d6[1]*26^2) +(d6[2]*26)+d6[3];
    cout << e;
    cout<<endl;
    
    
    
    exit;
    
    }
 




int main(int argc, char **argv)
{
    int p,q;
    int encrypt;
    int publicKey, privateKey;
    encrypt = Crypt();
    
    
    
    
    
    
   return 0;
}
