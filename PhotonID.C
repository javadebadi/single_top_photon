#include "PhotonID.h"


        // https://twiki.cern.ch/twiki/bin/viewauth/CMS/CutBasedPhotonIdentificationRun2#Working_points_for_94X_and_later
Double_t PhotonID_Summer17_v2_ID::calculate_EACh(const Double_t &eta){
                Double_t x = TMath::Abs(eta); // make sure use of absolute of eta
                Double_t EACh = 0;
                if( x < 1 ){ 
                        EACh = 0.0112;
                }
                else if ( x < 1.479 ){
                        EACh = 0.0108;
                }
                else if ( x < 2.0 ){
                        EACh = 0.0106;
                }
                else if ( x < 2.2 ){
                        EACh = 0.01002;
                }
                else if ( x < 2.3 ){
                        EACh = 0.0098;
                }
                else if ( x < 2.4 ){
                        EACh = 0.0089;
                }
                else{
                        EACh = 0.0087;
                }
                return EACh;
}


Double_t PhotonID_Summer17_v2_ID::calculate_EAPho(const Double_t &eta){
                Double_t x = TMath::Abs(eta); // make sure use of absolute of eta
                Double_t EAPho = 0;
                if( x < 1 ){ 
                        EAPho = 0.1113;
                }
                else if ( x < 1.479 ){
                        EAPho = 0.0953;
                }
                else if ( x < 2.0 ){
                        EAPho = 0.0619;
                }
                else if ( x < 2.2 ){
                        EAPho = 0.0837;
                }
                else if ( x < 2.3 ){
                        EAPho = 0.1070;
                }
                else if ( x < 2.4 ){
                        EAPho = 0.1212;
                }
                else{
                        EAPho = 0.1466;
                }
                return EAPho;
}


Double_t PhotonID_Summer17_v2_ID::calculate_EANeu(const Double_t &eta){
                Double_t x = TMath::Abs(eta); // make sure use of absolute of eta
                Double_t EANeu = 0;
                if( x < 1 ){ 
                        EANeu = 0.0668;
                }
                else if ( x < 1.479 ){
                        EANeu = 0.1054;
                }
                else if ( x < 2.0 ){
                        EANeu = 0.0786;
                }
                else if ( x < 2.2 ){
                        EANeu = 0.0233;
                }
                else if ( x < 2.3 ){
                        EANeu = 0.0078;
                }
                else if ( x < 2.4 ){
                        EANeu = 0.0028;
                }
                else{
                        EANeu = 0.0137;
                }
                return EANeu;
}

