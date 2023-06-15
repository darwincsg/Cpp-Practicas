
#include<iostream>
#include<cstdlib>

using namespace std;

class Solution {
public:

    int convertor(char c){
        switch (c)
            {
            case 'I': 
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                break;
            }
        return 0;
    }

    int romanToInt(string s) {
        int tamano = s.length();
        int resultado = 0;
        
        for(int i = 0; i < tamano ; i++){
            
            if ((i+1) != tamano && convertor(s[i]) < convertor(s[i+1]))
            {
                resultado += convertor(s[i+1]) - convertor(s[i]);
                i++;
            }
            else
            {
                resultado += convertor(s[i]);
            }

        }
        cout<<resultado<<endl;
        return resultado;

    }
};


int main(){

    string o("MCMXCIV");

    Solution objeto1;

    objeto1.romanToInt(o);

    return 0;


}
