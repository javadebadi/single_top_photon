#include "ElectronID.h"

Double_t eGamma2016_ID::calculate_EA(const Double_t &eta){
	Double_t x = TMath::Abs(eta);
	if      ( x < 1.0000){
		return 0.1703;
	}
	else if ( x < 1.4790){
		return 0.1715;
	}
	else if ( x < 2.0000){
		return 0.1213;
	}
	else if ( x < 2.2000){
		return 0.1230;
	}
	else if ( x < 2.3000){
		return 0.1635;
	}
	else if ( x < 2.4000){
		return 0.1937;
	}
	else if ( x < 5.0000){
		return 0.2393;
	}
	else{
		cout<<"ERROR: OUT OF RANGE Eta. Look at calculate_EA() function in ElectronID.h -> eGamma2016_ID"<<endl;
		return 0;
	}
}
