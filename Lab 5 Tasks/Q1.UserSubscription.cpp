#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int i = time(0);
    srand(i);
    int daysUntilExpiration = 0 + rand() % 11;
    
    if (daysUntilExpiration<=0){
    cout<<"Your subscription has expired."<<endl;
    } else if (daysUntilExpiration==1){
        cout<<"Your subscription expires within a day!"<<"\n";
        cout<<"Renew and save 20%!";
        cout<<endl;
    } else if (daysUntilExpiration<=5){
        cout<<"Your subscription will expire in "<< daysUntilExpiration<<" days!"<<"\n";
        cout<<"Renew and save 10%!";
        cout<<endl;
    } else if (daysUntilExpiration<=10){
        cout<<"Your subscription will expire soon. Renew now!"<<"\n";
        cout<<endl;
    } else {
        cout<<"You have active subscription."<<endl;
    }
    return 0;
}