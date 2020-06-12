#include<bits/stdc++.h>

using namespace std;

int len(string s){
    int i = 0;
    int n = 0;
    while(s[i]!='\0'){
        n++;
        i++;
    }
    return n;
}

void strip(string s, int n, string &hasil){
    int j = 0;
    for (int i = 0; i<n; i++){
        if(isalnum(s[i])){
            hasil[j] = s[i];
            j++;
        }
    };
}

string toLower(string s, int n){
    string hasil;
    for (int i=0; i<n; i++){
        hasil[i] = tolower(s[i]);
    }
    return hasil;
}

bool isThere(char s, char x[]){
    bool cek = false;
    int n = len(x);
    for(int i=0; i<n; i++){
        if(x[i] == s){
            cek = true;
            break;
        }
    } 
    return cek;
}

string rmv_duplicate(string s, int n){
    char z[26] = "";
    int j=0;
    for (int i=0; i<n; i++){
        if(!isThere(s[i], z)){
            z[j] = s[i];
            j++;
        }
    }
    return z;
}
    
void sortString(string &str) 
{ 
   sort(str.begin(), str.end());
} 

int main()
{
    string s;
    getline(cin, s);
    int ns = len(s);
    string hasil;
    strip(s, ns, hasil);
    int nh = len(hasil);
    s = toLower(hasil, nh);
    hasil = rmv_duplicate(s, nh);
    int n = len(hasil);
    sortString(hasil);
    for (int i=0; i<n; i++){
        int c = 0;
        for (int j=0; j<ns; j++){
            if(hasil[i]==s[j])
                c++;
        }
        cout << hasil[i] << " " << c << endl;
    }
    return 0;
}
