#include "Photon_SF.h"

Double_t photon_SF(Double_t eta, Double_t pt){
	if( eta > -2.5 && eta <= -2.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.938741743565;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.944117665291;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.944992959499;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 90.0 && pt <= 150.0 ){
		return	0.984743416309;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 150.0 && pt <= 500.0 ){
		return	0.995934963226;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 20.0 && pt <= 35.0 ){
		return	0.961730420589;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 35.0 && pt <= 50.0 ){
		return	0.966076672077;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 50.0 && pt <= 90.0 ){
		return	0.97413790226;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 90.0 && pt <= 150.0 ){
		return	0.997159063816;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 150.0 && pt <= 500.0 ){
		return	1.0190615654;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 20.0 && pt <= 35.0 ){
		return	1.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 35.0 && pt <= 50.0 ){
		return	1.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 50.0 && pt <= 90.0 ){
		return	1.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 90.0 && pt <= 150.0 ){
		return	1.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 150.0 && pt <= 500.0 ){
		return	1.0;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 20.0 && pt <= 35.0 ){
		return	0.973856210709;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 35.0 && pt <= 50.0 ){
		return	0.972895860672;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 50.0 && pt <= 90.0 ){
		return	0.965277791023;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 90.0 && pt <= 150.0 ){
		return	1.01542782784;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 150.0 && pt <= 500.0 ){
		return	1.00831019878;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.986206889153;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.971935033798;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.964132010937;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 90.0 && pt <= 150.0 ){
		return	1.0087082386;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 150.0 && pt <= 500.0 ){
		return	1.00570619106;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 20.0 && pt <= 35.0 ){
		return	1.00696861744;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 35.0 && pt <= 50.0 ){
		return	0.99550896883;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 50.0 && pt <= 90.0 ){
		return	0.984034836292;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 90.0 && pt <= 150.0 ){
		return	1.01603496075;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 150.0 && pt <= 500.0 ){
		return	1.01447176933;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 20.0 && pt <= 35.0 ){
		return	0.978441119194;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 35.0 && pt <= 50.0 ){
		return	0.975574731827;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 50.0 && pt <= 90.0 ){
		return	0.97067040205;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 90.0 && pt <= 150.0 ){
		return	1.02545964718;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 150.0 && pt <= 500.0 ){
		return	0.993206501007;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 20.0 && pt <= 35.0 ){
		return	1.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 35.0 && pt <= 50.0 ){
		return	1.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 50.0 && pt <= 90.0 ){
		return	1.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 90.0 && pt <= 150.0 ){
		return	1.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 150.0 && pt <= 500.0 ){
		return	1.0;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.946398675442;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.96285289526;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.949784815311;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 90.0 && pt <= 150.0 ){
		return	0.990099012852;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 150.0 && pt <= 500.0 ){
		return	1.01605844498;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 20.0 && pt <= 35.0 ){
		return	0.931893706322;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 35.0 && pt <= 50.0 ){
		return	0.948071241379;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 50.0 && pt <= 90.0 ){
		return	0.95732575655;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 90.0 && pt <= 150.0 ){
		return	1.01711845398;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 150.0 && pt <= 500.0 ){
		return	1.04922640324;
	}
	if( eta <= -2.5){
		if( pt > 20.0 && pt <= 35.0){
			return	0.938741743565;
		}
		if( pt > 35.0 && pt <= 50.0){
			return	0.944117665291;
		}
		if( pt > 50.0 && pt <= 90.0){
			return	0.944992959499;
		}
		if( pt > 90.0 && pt <= 150.0){
			return	0.984743416309;
		}
		if( pt > 150.0 && pt <= 500.0){
			return	0.995934963226;
		}
	}
	if( eta > 2.5){
		if( eta > 20.0 && eta <= 35.0){
			return	0.931893706322;
		}
		if( eta > 35.0 && eta <= 50.0){
			return	0.948071241379;
		}
		if( eta > 50.0 && eta <= 90.0){
			return	0.95732575655;
		}
		if( eta > 90.0 && eta <= 150.0){
			return	1.01711845398;
		}
		if( eta > 150.0 && eta <= 500.0){
			return	1.04922640324;
		}
	}
	if( pt <= 20.0){
		if( eta > -2.5 && eta <= -2.0){
			return	0.938741743565;
		}
		if( eta > -2.0 && eta <= -1.566){
			return	0.961730420589;
		}
		if( eta > -1.566 && eta <= -1.444){
			return	1.0;
		}
		if( eta > -1.444 && eta <= -0.8){
			return	0.973856210709;
		}
		if( eta > -0.8 && eta <= 0.0){
			return	0.986206889153;
		}
		if( eta > 0.0 && eta <= 0.8){
			return	1.00696861744;
		}
		if( eta > 0.8 && eta <= 1.444){
			return	0.978441119194;
		}
		if( eta > 1.444 && eta <= 1.566){
			return	1.0;
		}
		if( eta > 1.566 && eta <= 2.0){
			return	0.946398675442;
		}
		if( eta > 2.0 && eta <= 2.5){
			return	0.931893706322;
		}
	}
	if( pt > 500.0){
		if( eta > -2.5 && eta <= -2.0){
			return	0.995934963226;
		}
		if( eta > -2.0 && eta <= -1.566){
			return	1.0190615654;
		}
		if( eta > -1.566 && eta <= -1.444){
			return	1.0;
		}
		if( eta > -1.444 && eta <= -0.8){
			return	1.00831019878;
		}
		if( eta > -0.8 && eta <= 0.0){
			return	1.00570619106;
		}
		if( eta > 0.0 && eta <= 0.8){
			return	1.01447176933;
		}
		if( eta > 0.8 && eta <= 1.444){
			return	0.993206501007;
		}
		if( eta > 1.444 && eta <= 1.566){
			return	1.0;
		}
		if( eta > 1.566 && eta <= 2.0){
			return	1.01605844498;
		}
		if( eta > 2.0 && eta <= 2.5){
			return	1.04922640324;
		}
	}

	if( eta <= -2.5 && pt <= 20.0){
		 return	0.938741743565;
	}
	if( eta > 2.5 && pt <= 20.0){
		 return	0.931893706322;
	}
	if( eta <= -2.5 && pt > 500.0){
		 return	0.995934963226;
	}
	if( eta > 2.5 && pt > 500.0){
		 return 1.04922640324;
	}
	else cout<<"ERROR: UNEXPEDTED behavior in photon_SF function"<<endl;

	return	1000000<<endl;
}