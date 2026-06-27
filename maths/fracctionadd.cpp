class Solution {
private:
    int gcd(int a,int b){
        if(b==0)return a;
        return gcd(b,a%b);
    }

        
public:
    string addFractions(string frac1, string frac2) {
        int pos=frac1.find("/");
        int a=stoi(frac1.substr(0,pos));
        int b=stoi(frac1.substr(pos+1));
        
        int pos1=frac2.find("/");

        int c=stoi(frac2.substr(0,pos1));
        int d=stoi(frac2.substr(pos1+1));
        
        int num=a*d+c*b;
        int den=d*b;

        int g=gcd(num,den);
        num/=g;
        den/=g;

        
        return to_string(num)+"/"+to_string(den);
    }
};