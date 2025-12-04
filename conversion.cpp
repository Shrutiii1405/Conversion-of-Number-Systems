#include<iostream>
#include<string>
using namespace std;
class decimal{
    int dec_v;
        string result="";
    public:
    decimal(){
        cout<<"Enter the decimal number with base(10): ";
        cin>>dec_v;
    }
    void convertd_b(){
        int rem=0,num=dec_v;
        while(dec_v!=0){
            rem=dec_v%2;
            if(rem==0){
                result=("0"+result);
            }
            else{
                result=("1"+result);
            }
            dec_v=dec_v/2;
        }
        cout<<endl<<num<<" -> "<<result<<endl<<endl;
        cout<<dec;
    }

    void convertd_o(){
        cout<<endl<<dec_v<<" -> "<<oct<<dec_v<<endl<<endl;
        cout<<dec;
    }

    void convertd_h(){
        cout<<endl<<dec_v<<" -> "<<hex<<dec_v<<endl<<endl;
        cout<<dec;
    }

};

class binary{
    string bin_v;
    public:
    binary(){
        cout<<"Enter the binary number with base(2): ";
        cin>>bin_v;
    }

    bool check_binary(){
        int n=bin_v.length();
        int i=0;
        while(i<n){
            if(bin_v[i]!='0' && bin_v[i]!='1'){
            return false;
            }
            i++;  
        }
            return true;
        }

        int check_decimal(){
            return stoi(bin_v,nullptr,2);
        }

        void convertb_d(){
            if(check_binary()){
                int decimalbd=check_decimal();
                cout<<endl<<bin_v<<" -> "<<decimalbd<<endl<<endl;
            }
            else{
                cout<<"Invalid input, please try again later"<<endl<<endl;
            }
        }

        void convertb_o(){
            if(check_binary()){
                int decimalbo=check_decimal();
                cout<<bin_v<<" -> "<<oct<<decimalbo<<endl<<endl;
                cout<<dec;
            }
            else{
                cout<<"Invalid input, please try again"<<endl;
            }
        }

        void convertb_h(){
            if(check_binary()){
                int decimal_bh=check_decimal();
                cout<<bin_v<<" -> "<<hex<<decimal_bh<<endl<<endl;
                cout<<dec;
            }
            else{
                cout<<"Invalid input, please try again"<<endl;
            }

        }
    };

class octal{
    string oct_v;
    public:
    octal(){
        cout<<"Enter the octal number with base(8): ";
        cin>>oct_v;
    }
    bool check_oct(){
        
        int n=oct_v.length();
        int i=0;
        while(i<n){
            if(oct_v[i]<'0' || oct_v[i]>'7') {
            return false;
            }
            i++;  
        }
            return true;
    }

    int con_dec(){
        return stoi(oct_v,nullptr,8);
    }

    void converto_d()
    {
        if(check_oct()){
            int decimal_od=con_dec();
            cout<<endl<<oct_v<<" -> "<<decimal_od<<endl<<endl;
        }
        else{
            cout<<"Invalid input, please try again";
        }
    }

    void converto_b(){
        if(check_oct()){
             int decimalob=con_dec();
              int rem=0;
             string result;
        while(decimalob!=0){
            rem=decimalob%2;
            if(rem==0){
                result=("0"+result);
            }
            else{
                result=("1"+result);
            }
            decimalob=decimalob/2;
        }
        cout<<endl<<oct_v<<" -> "<<result<<endl<<endl;
        }
        else{
             cout<<"Invalid input, please try again";
        }
    }

    int converto_h(){
        if(check_oct()){
            int decimaloh=con_dec();
            cout<<endl<<oct_v<<" -> "<<hex<<decimaloh<<endl<<endl;
            cout<<dec;
        }
         else{
             cout<<"Invalid input, please try again";
        }
    }
};

class hexadecimal{
  string hex_v;
    public:
    hexadecimal(){
        cout<<"Enter the hexadecimal number with base(16): ";
        cin>>hex_v;
    }

    bool check_hex(){
        int n=hex_v.length();
        int i=0;
        while(i<n){
            if((hex_v[i]<'0' || hex_v[i]>'9')  && (hex_v[i]<'a' || hex_v[i]>'f')) {
            return false;
            }
            i++;  
        }
            return true;
    }

    int con_dec(){
        return stoi(hex_v,nullptr,16);
    }

    void converth_d()
    {
        if(check_hex()){
            int decimal_hd=con_dec();
            cout<<endl<<hex_v<<" -> "<<decimal_hd<<endl<<endl;
        }
        else{
            cout<<"Invalid input, please try again";
        }
    }

    void converth_b(){
        if(check_hex()){
             int decimalhb=con_dec();
              int rem=0;
             string result;
        while(decimalhb!=0){
            rem=decimalhb%2;
            if(rem==0){
                result=("0"+result);
            }
            else{
                result=("1"+result);
            }
            decimalhb=decimalhb/2;
        }
        cout<<endl<<hex_v<<" -> "<<result<<endl<<endl;
        }
        else{
             cout<<"Invalid input, please try again";
        }
    }

    int converth_o(){
        if(check_hex()){
            int decimalho=con_dec();
            cout<<endl<<hex_v<<" -> "<<oct<<decimalho<<endl<<endl;
            cout<<dec;
        }
         else{
             cout<<"Invalid input, please try again";
        }
    }  
};

int main(){
    int n,de,bi,oc,he; 
    while(1){
    cout<<endl<<"Enter 1 to convert 'DECIMAL' -> other conversions"<<endl;
    cout<<"Enter 2 to convert 'BINARY' -> other conversions"<<endl;
    cout<<"Enter 3 to convert 'OCTAL' -> other conversions"<<endl;
    cout<<"Enter 4 to convert 'HEXADECIMAL' -> other conversions"<<endl;
    cout<<"Enter 5 to exit: "<<endl;
    cin>>n;
    switch (n)
    {
    case 1:{ decimal d;
        cout<<endl<<"Enter 1 to convert 'DECIMAL' -> 'BINARY'"<<endl;
        cout<<"Enter 2 to convert 'DECIMAL' -> 'OCTAL'"<<endl;
        cout<<"Enter 3 to convert 'DECIMAL' -> 'HEXADECIMAL': "<<endl;
        cin>>de;
        switch (de)
        {
        case 1:{ 
            d.convertd_b();
            break;
            }
        case 2:{
            d.convertd_o();
            break;
        }
        case 3:{
            d.convertd_h();
            break;
        }
        default: {
            cout<<"Invalid input, please try again. "<<endl;
        }
        }
        break;
    }
    case 2:{ 
        binary b;
        cout<<endl<<"Enter 1 to convert 'BINARY' -> 'DECIMAL'"<<endl;
        cout<<"Enter 2 to convert 'BINARY' -> 'OCTAL'"<<endl;
        cout<<"Enter 3 to convert 'BINARY' -> 'HEXADECIMAL'"<<endl;
        cin>>bi;
        switch (bi)
        {
        case 1:{
            b.convertb_d();
            break;
        }
        case 2:{
            b.convertb_o();
            break;
        }    
        case 3:{
            b.convertb_h();
            break;
        }
        default:{
            cout<<"Invalid input, please try again. "<<endl;
        }
          
        }
        break;
    }
    case 3:{ octal o;
        cout<<endl<<"Enter 1 to convert 'OCTAL' -> 'DECIMAL'"<<endl;
        cout<<"Enter 2 to convert 'OCTAL' -> 'BINARY'"<<endl;
        cout<<"Enter 3 to convert 'OCTAL' -> 'HEXADECIMAL'"<<endl;
        cin>>oc;
        switch(oc){
            case 1:{
                o.converto_d();
                break;
            }
            case 2:{
                o.converto_b();
                break;
            }
            case 3:{
                o.converto_h();
                break;
            }
            default:{
            cout<<"Invalid input, please try again. "<<endl;
            }
        }
         break;
    }
     case 4:{ hexadecimal h;
        cout<<endl<<"Enter 1 to convert 'HEXADECIMAL' -> 'DECIMAL'"<<endl;
        cout<<"Enter 2 to convert 'HEXADECIMAL' -> 'BINARY'"<<endl;
        cout<<"Enter 3 to convert 'HEXADECIMAL' -> 'OCTAL'"<<endl;
        cin>>he;
        switch(he){
            case 1:{
                h.converth_d();
                break;
            }
            case 2:{
                h.converth_b();
                break;
            }
            case 3:{
                h.converth_o();
                break;
            }
            default:{
            cout<<"Invalid input, please try again. "<<endl;
        }
        }
        break;
    }
    case 5:{
        return 1;
    }  
    default:{
        cout<<"Try again."<<endl;
    }
    }
    }
    return 0;
}