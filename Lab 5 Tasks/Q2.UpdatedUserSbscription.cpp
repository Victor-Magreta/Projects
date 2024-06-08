#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int i = time(0);
    srand(i);
    int daysUntilExpiration = 0 + rand() % 11;
    
    switch(daysUntilExpiration){
        case 10:
            cout<<"Your subuscription will expire soon. Renew now!";
            break;
        case 9:
            cout<<"Your subuscription will expire soon. Renew now!";
            break;
        case 8:
            cout<<"Your subuscription will expire soon. Renew now!";
            break;
        case 7:
            cout<<"Your subuscription will expire soon. Renew now!";
            break;
        case 6:
            cout<<"Your subuscription will expire soon. Renew now!";
            break;
        case 5:
            cout<<"Your subuscription will expire in "<< daysUntilExpiration<<" days!\n";
            cout<<"Renew now and save 10%";
            break;
        case 4:
            cout<<"Your subuscription will expire in "<< daysUntilExpiration<<" days!\n";
            cout<<"Renew now and save 10%";
            break;
        case 3:
            cout<<"Your subuscription will expire in "<< daysUntilExpiration<<" days!\n";
            cout<<"Renew now and save 10%";
            break;
        case 2:
            cout<<"Your subuscription will expire in "<< daysUntilExpiration<<" days!\n";
            cout<<"Renew now and save 10%";
            break;
            
        case 1:
            cout<<"Your subuscription expires within a day!\n";
            cout<<"Renew and save 20%!";
            break;
        case 0:
            cout<<"Your subuscription has expired.";
            break;
        default:
            cout<<"Your subuscription is active!";
    }
    return 0;
}