#include<iostream>
#include<vector>
using namespace std;

class demo{
    public:
        int i = 0, count = 0, rcount = 0;
        char *buff1, *buff2;
        vector<string> str;
        string a;
        
        void get_data(char buff[]){

            buff1 = buff;
            buff2 = buff;

            while(buff[i] != '\0'){
                if(buff[i] == ' '){
                    str.push_back(a);
                    a = ' ';
                }
                else
                    a += buff[i];

                count++;
                i++;
            }
            rcount = count;
            str.push_back(a);
        }

        void revers(){
            char temp;
            i = 0;
            int n = count/2;
            while(buff1[i] != buff1[n]){
                count--;
                temp = buff1[i];
                buff1[i] = buff1[count];
                buff1[count] = temp;
                i++;
            }
            cout<<"reverse : "<<buff1<<endl;
        }


        void rever_middle(){
           
            for(int i = 0; i<str.size(); i++){
                if (i == 2){
                    cout<<str[i]<<endl;
                    string b = str[i];
                    char temp;
                    i=0;
                    int rvcount = 0;
                    while(b[i] != '\0'){
                        rvcount++;
                        i++;
                    }

                    i = 0;
                    rvcount--;
                    while(rvcount != 0){
                        i++;
                        rvcount--;
                        temp = b[i];
                        b[i] = b[rvcount];
                        b[rvcount] = temp;
                    }
                    cout<<b<<endl;
                }

            }
        }

        void show(){
            cout<<"Count : "<<count<<endl;
        }
};

int main(){
    char buff[50] = "India is my country";
    demo d1;
    d1.get_data(buff);
    d1.rever_middle();
    d1.show();
    d1.revers();
}