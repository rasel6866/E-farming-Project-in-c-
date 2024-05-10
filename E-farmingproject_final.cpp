#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

const int totalProduct=20;
int arry;

struct product{
    int pId;
    char pCategory[30];
    char pName[30];
    float pPrice;
};

product obj[totalProduct];

class managemnent{
    private:
        float price;
    public:
        void login();
        void admin();
        void customer();
        void addItem();
        void deleteItem();
        void editItem();
        void displayItem();
        void view();
};

void managemnent::login(){
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,3);
    cout<<"\t\t\t\t\t        ===================================================================\n";
    cout<<"\t\t\t\t\t        ===================================================================\n";
     cout<<endl;
    cout<<"\t\t\t\t\t        ===============         WELCOME TO OUR PROJECTS     ===============\n";
    cout<<endl;
    cout<<"\t\t\t\t\t        ===================================================================\n";
    cout<<"\t\t\t\t\t        ===================================================================\n\n";
    cout<<"\t\t\t\t\t                                                                            \n\n";
    cout<<"\t\t\t\t\t                                  ************************                     \n";
    cout<<"\t\t\t\t\t                                    PROJECT PRESENTED BY                       \n\n";
    cout<<"\t\t\t\t\t                                  ************************                     \n\n";
    cout<<"\t\t\t\t\t                                      1. S.M. RASEL                           \n\n";
    cout<<"\t\t\t\t\t                                      2. Jannatul Nisa                        \n\n";
    cout<<"\t\t\t\t\t                                      3. Showmik Ahmed                    \n\n";
    cout<<"                                                                                      \n\n";
    cout<<"\t\t\t\t\t         =======================================================================\n";
    cout<<"\t\t\t\t\t         ================             Enter to Continue     ====================\n";
    cout<<"\t\t\t\t\t         =======================================================================\n";

    if(cin.get()=='\n'){
        system("cls");
              int count;
        int choice;
        string email;
        string pass;
        int exit;
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,3);
        cout<<"\t\t\t\t\t    **************************************************************************\n";
        cout<<"\t\t\t\t\t    **************************************************************************\n\n";
        cout<<"\t\t\t\t\t    *****************            WELCOME TO OUR E-FARM   *********************\n\n";
        cout<<"\t\t\t\t\t    **************************************************************************\n\n";
        cout<<"\t\t\t\t\t    **************************************************************************\n\n\n";
        main:
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t    **************************************************************************\n\n";
        cout<<"\t\t\t\t\t                                    \t 1) Admin \t     \n";
        cout<<"\t\t\t\t\t                                    \t 2) Customer \t   \n";
        cout<<"\t\t\t\t\t                                    \t 3) Exit \t        \n\n\n";
        cout<<"\t\t\t\t\t    **************************************************************************\n\n";
        cout<<endl;
        cout<<"\t\t\t\t\t    ============================================================================\n\n";
        cout<<"\t\t\t\t\t                                        Please Select:                            \n";
        cout<<"\t\t\t\t\t    ============================================================================\n\n\n";
        cin>>choice                                                                                         ;
        system("cls");

        switch(choice){
            case 1:
                cout<<"\n\t\t\t\t        *****************************************************************************\n";
                cout<<"\n\t\t\t\t        ***************      ENTER YOUR EMAIL & PASSWORD TO ACCESS    ***************\n\n";
                cout<<"t\t\t\t\t         *****************************************************************************\n\n";
                login:
                cout<<"\t\t\t\t\t Email: ";
                cin>>email;
                cout<<"\t\t\t\t\t Password: ";
                count=getch();

                while(count!=13){
                    pass.push_back(count);
                    cout<<"*";
                    count=getch();
                }

                if(email=="55" && pass=="5"){
                    pass="";
                    system("cls");
                    admin();
                }
                else{
                    cout<<"\n\n\t\t\t\t     *********************************************";
                    cout<<"\n\t\t\t\t       ****** Email/Password Wrong. Try Again ******";
                    cout<<"\n\t\t\t\t       *********************************************\n\n";
                    pass="";
                    goto login;
                }
                break;


            case 2:
                cout<<"\n\t\t\t\t*************** Customer *****************\n";
                customer();

            case 3:
                cout<<"\n\t\t\t\t*************** THANK YOU ****************\n";
                //exit(0);

            default:
                cout<<"\n\t\t\t\t************** Wrong Input ****************\n\n";
                goto main;

        }
    }



}


void managemnent::admin(){
    int choice;
    cout<<"\n\t\t\t\t   ===========================================================================\n";
    cout<<"\n\t\t\t\t   ===========================================================================\n";
    cout<<"\n\t\t\t\t   --------------         WELCOME TO ADMIN PANEL      -------------------------";
    cout<<"\n\t\t\t\t   --------------                                     -------------------------";
    cout<<"\n\t\t\t\t   ============================================================================\n";
    cout<<"\n\t\t\t\t   ============================================================================\n";
    adminPanel:
        cout<<endl;
        cout<<endl;
        cout<<endl;
    cout<<"\t\t\t\t                          1) Add Product                                         \n";
    cout<<"\t\t\t\t                          2) Edit Product                                         \n";
    cout<<"\t\t\t\t                          3) Delete Product                                        \n";
    cout<<"\t\t\t\t                          4) Display Product                                       \n";
    cout<<"\t\t\t\t                          5) Log out                                               \n\n";
    cout<<"\t\t\t\t Please Select: ";
    cin>>choice;
    system("cls");

    switch(choice){
        case 1:
            addItem();
            break;
        case 2:
            //editItem();
        case 3:
            //deleteItem();
        case 4:
            displayItem();
        case 5:
            cout<<"\n\t\t\t\t*********************************************";
            cout<<"\n\t\t\t\t ********** LOG OUT SUCCESSFULLY ***********";
            cout<<"\n\t\t\t\t*********************************************\n\n";
            login();
        default:
            cout<<"\n\t\t\t\t*************** Wrong Input ***************\n\n";
            goto adminPanel;
    }
}

void managemnent::customer(){
    int choice;
    cout<<"\n\t\t\t\t***********************************************************************************";
    cout<<"\n\t\t\t\t*****************            WELCOME TO OUR FARM           ************************";
    cout<<"\n\t\t\t\t************************************************************************************\n\n";
    customerPanel:
    cout<<"\t\t\t\t        ***** 1) view Product     ******\n";
    cout<<"\t\t\t\t        ***** 2) Buy Product    ******\n";
    cout<<"\t\t\t\t        ***** 3) Log out         ******\n\n";
    cout<<"\t\t\t\t Please Select: ";
    cin>>choice;
    system("cls");

    switch(choice){
        case 1:
            view();
        case 2:

        case 3:
            cout<<"\n\t\t\t\t*********************************************";
            cout<<"\n\t\t\t\t ********** LOG OUT SUCCESSFULLY ***********";
            cout<<"\n\t\t\t\t*********************************************\n\n";
            login();
        default:
            cout<<"\n\t\t\t\t*************** Wrong Input ***************\n\n";
            goto customerPanel;
    }
}

void managemnent::addItem(){
    if(arry < totalProduct){
        cout<<"\n\t\t\t\t  ==================================================================";
        cout<<"\n\t\t\t\t  ==================================================================\n";
        cout<<"\n\t\t\t\t  ===================    ADD A PRODUCT     ==========================\n";
        cout<<"\n\t\t\t\t  ===================================================================";
        cout<<"\n\t\t\t\t  ===================================================================\n";
        cout<<endl;
        cout<<"\t\t\t\t Enter Product Id: ";
        cin>>obj[arry].pId;
        cout<<"\t\t\t\t Enter Product Category: ";
        cin>>obj[arry].pCategory;
        cout<<"\t\t\t\t Enter Product Name: ";
        cin>>obj[arry].pName;
        cout<<"\t\t\t\t Enter Product Price: ";
        cin>>obj[arry].pPrice;
        arry++;
        system("cls");
        admin();
    }
    else{
        cout<<"\n\t\t\t\t*********************************************";
        cout<<"\n\t\t\t\t************** STORAGE FULL. ****************";
        cout<<"\n\t\t\t\t*********************************************\n\n";
        admin();
    }
}

void managemnent::displayItem(){
    cout<<"\n\t\t\t\t       *******************************************************************";
    cout<<"\n\t\t\t\t       **************             Product List            ****************";
    cout<<"\n\t\t\t\t       *******************************************************************\n\n";

    if(arry==0){
        cout<<"\n\t\t\t\t************* No Product Found **************\n\n";
    }
    else{
        for(int i=0; i<arry; i++){
            cout<<"\n\t\t\t\t                ************************** "<<i+1<<" ******************\n";
            cout<<endl;
            cout<<"\t\t\t\t                             Product Id: "<<obj[i].pId<<endl;
            cout<<"\t\t\t\t                             Product Category: "<<obj[i].pCategory<<endl;
            cout<<"\t\t\t\t                             Product Name: "<<obj[i].pName<<endl;
            cout<<"\t\t\t\t                             Product Price: "<<obj[i].pPrice<<endl<<endl;
        }
    }
    admin();
}

void managemnent::view(){
    cout<<"\n\t\t\t\t  ***********************************************************************************";
    cout<<"\n\t\t\t\t  **************          Product List                   *****************************";
    cout<<"\n\t\t\t\t  ************************************************************************************\n\n";

    if(arry==0){
        cout<<"\n\t\t\t\t************* No Product Found **************\n\n";
    }
    else{
        for(int i=0; i<arry; i++){
            cout<<"\n\t\t\t\t  ************************************************** "<<i+1<<" ****************\n";
            cout<<"\t\t\t\t                          Product Id: "<<obj[i].pId<<endl;
            cout<<"\t\t\t\t                          Product Category: "<<obj[i].pCategory<<endl;
            cout<<"\t\t\t\t                          Product Name: "<<obj[i].pName<<endl;
            cout<<"\t\t\t\t                          Product Price: "<<obj[i].pPrice<<endl<<endl;
        }
    }
    customer();
}


int main(){
    managemnent obj;
    obj.login();
}
