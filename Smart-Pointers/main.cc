#include <iostream>
#include <memory>
#include <vector>

using namespace std;

enum WEEK{
    WENSDAY,
    TUESDAY,
    THIRSDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

class String{
    private:
        char* str;
        int size;
    public:
        String(){
            cout<<"create string..."<<endl;
            size = rand()%10;
            str = new char[size+1];
            //for(int i=0;i<size;i++) str[i] = 'a'+(rand()%26);
            for(int i=0;i<size;i++) str[i] = 'a';//+(rand()%26);
            str[size] = '\0';
        }

        ~String(){
            cout<<"free string..."<<endl;
            //delete[] str;
        }


        friend std::ostream& operator<<(std::ostream &pstream, const String& str){
            pstream<<str.str;
            return pstream;
        }
};

class Collector{
    private:
        vector<String> list;
        int size;

    public:
        Collector(){
            cout<<"create collector..."<<endl;
            size = 10;
            list = vector<String>(size);
            //for(int i=0;i<size;i++) list[i] = String();
            //list = vector<String>(size, String());
            //for(int i=0;i<size;i++) list[i] = String();
            //list = vector<String>(size, new String());
            //list = new vector<String*>(size);
            //list = new vector<String>(size, new String());
            //list = std::make_unique<vector<String*>>(
              //      new vector<String>(size, new String()));
            //for(int i=0;i<size;i++) list->push_back(new String()); 
        }

        ~Collector(){
            cout<<"free collector..."<<endl;
        }

        friend ostream& operator<<(ostream &pstream, const Collector &c){
            for(auto str:c.list) cout<<"--"<<str<<endl;
            return pstream;
        }
};

void test00_Collector(){
    std::unique_ptr<Collector> c(new Collector());
    cout<<*c;
    return;
    //Collector *c = new Collector();
    //delete c;
    //std::unique_ptr<Collector> collector(new Collector());
}

void test01_WEEK(){

    vector<WEEK> days = {
        WEEK::WENSDAY, WEEK::TUESDAY, WEEK::THIRSDAY,
        WEEK::THURSDAY, WEEK::FRIDAY,
        WEEK::SATURDAY, WEEK::SUNDAY
    };

    for(auto day:days){
        switch(day){
            case WEEK::WENSDAY:
                cout<<"WEEK.WENSDAY"<<endl;
                break;
            case WEEK::TUESDAY:
                cout<<"WEEK.TUESDAY"<<endl;
                break;
            case WEEK::THIRSDAY:
                cout<<"WEEK.THIRSDAY"<<endl;
                break;
            case WEEK::THURSDAY:
                cout<<"WEEK.THURSDAY"<<endl;
                break;
            case WEEK::FRIDAY:
                cout<<"WEEK.FRIDAY"<<endl;
                break;
            case WEEK::SATURDAY:
                cout<<"WEEK.SATURDAY"<<endl;
                break;
            case WEEK::SUNDAY:
                cout<<"WEEK.SUNDAY"<<endl;
                break;
        }
    }
}

int main(){
    test00_Collector();
    return 0;

    test01_WEEK();
    return 0;

    //test00_Collector();
    Collector();
    return 0;


    std::shared_ptr<String> str;// = std::make_shared<String>();

    for(int i=0;i<2;i++){
        str = shared_ptr<String>(new String());
        cout<<*str<<endl;
    }
    return 0;
}
