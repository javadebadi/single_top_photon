#include "SmallClassExtra.h"
#include "SmallClass.C"
#include "SmallClassExtra.C"
#include "CutFlowTable.h"
#include "CutFlowTable.C"
#include "MyPhoton.C"
#include "MyMuon.C"
#include "MyElectron.C"
#include "MyJet.C"
#include "./ID/ID.C"

#include <string>
void print(int n, int N, int d=10000){

        static const string col1 = "\033[1;36;40m";
        static const string col2  = "\033[1;32;40m";
        static const string coldef  = "\033[0;0;0m";
        if (n%d ==0 || n==N){
                cout<<col1<<n<<" of "<<N<<col2<<flush
                        <<"      "<<(100*(n))/N<<"%"<<coldef
                        <<flush<<"\r";
        }


};

