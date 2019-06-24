#include <ctime>
#include "./MyUtils/VectorDouble_t.h"
#include "./MyUtils/VectorDouble_t.C"
#include "./MyUtils/VectorVectorDouble_t.h"
#include "./MyUtils/VectorVectorDouble_t.C"
#include "SmallClassExtra.h"
#include "SmallClass.C"
#include "SmallClassExtra.C"
#include "CutFlowTable.h"
#include "CutFlowTable.C"
#include "MyPhoton.C"
#include "MyMuon.C"
#include "MyElectron.C"
#include "MyJet.C"
#include "MyMET.C"
#include "MyGenParticle.C"
#include "./ID/ID.C"
#include "./Photon_SF/Photon_SF.C"
#include "./Photon_SF/Photon_SFLow.C"
#include "./Photon_SF/Photon_SFUp.C"
#include "./PileUp_SF/PileUp_SF.C"
#include "./PileUp_SF/PileUp_SFLow.C"
#include "./PileUp_SF/PileUp_SFUp.C"
#include "./BJet_SF/BJet_SF.C"

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

void print_time(time_t tic, time_t toc){
        cout<<" ================ Time ================ "<<endl;
        cout<<" It took "<<int(difftime(toc,tic)/60)<<" minutes and "<<difftime(toc,tic)-60*int(difftime(toc,tic)/60)<<" seconds"<<endl;
        cout<<" ====================================== "<<endl;
}
