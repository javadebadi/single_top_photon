#include "Photon_SFLow.h"

Double_t photon_SFLow(Double_t eta, Double_t pt){
	if( eta > -2.5 && eta <= -2.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.909922262309;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.932440125925;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.931555519017;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 90.0 && pt <= 150.0 ){
		return	0.956559134414;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 150.0 && pt <= 500.0 ){
		return	0.937175454901;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 20.0 && pt <= 35.0 ){
		return	0.93034211395;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 35.0 && pt <= 50.0 ){
		return	0.958601094773;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 50.0 && pt <= 90.0 ){
		return	0.954543725571;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 90.0 && pt <= 150.0 ){
		return	0.977277050862;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 150.0 && pt <= 500.0 ){
		return	0.975751286099;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 20.0 && pt <= 35.0 ){
		return	0.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 35.0 && pt <= 50.0 ){
		return	0.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 50.0 && pt <= 90.0 ){
		return	0.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 90.0 && pt <= 150.0 ){
		return	0.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 150.0 && pt <= 500.0 ){
		return	0.0;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 20.0 && pt <= 35.0 ){
		return	0.939632963159;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 35.0 && pt <= 50.0 ){
		return	0.96033327744;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 50.0 && pt <= 90.0 ){
		return	0.956664060608;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 90.0 && pt <= 150.0 ){
		return	1.00328632104;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 150.0 && pt <= 500.0 ){
		return	0.98071081225;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.957505857676;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.963927353788;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.952838738323;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 90.0 && pt <= 150.0 ){
		return	0.998578501673;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 150.0 && pt <= 500.0 ){
		return	0.981299398708;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 20.0 && pt <= 35.0 ){
		return	0.978267585963;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 35.0 && pt <= 50.0 ){
		return	0.987501288819;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 50.0 && pt <= 90.0 ){
		return	0.972741563679;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 90.0 && pt <= 150.0 ){
		return	1.00590522382;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 150.0 && pt <= 500.0 ){
		return	0.989951585187;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 20.0 && pt <= 35.0 ){
		return	0.944217871645;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 35.0 && pt <= 50.0 ){
		return	0.963012148595;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 50.0 && pt <= 90.0 ){
		return	0.962056671634;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 90.0 && pt <= 150.0 ){
		return	1.01314073472;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 150.0 && pt <= 500.0 ){
		return	0.965857527019;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 20.0 && pt <= 35.0 ){
		return	0.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 35.0 && pt <= 50.0 ){
		return	0.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 50.0 && pt <= 90.0 ){
		return	0.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 90.0 && pt <= 150.0 ){
		return	0.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 150.0 && pt <= 500.0 ){
		return	0.0;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.915010368802;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.955377317955;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.930190638622;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 90.0 && pt <= 150.0 ){
		return	0.970535336393;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 150.0 && pt <= 500.0 ){
		return	0.972595531217;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 20.0 && pt <= 35.0 ){
		return	0.903074225066;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 35.0 && pt <= 50.0 ){
		return	0.936393702013;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 50.0 && pt <= 90.0 ){
		return	0.943888316068;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 90.0 && pt <= 150.0 ){
		return	0.989085920325;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 150.0 && pt <= 500.0 ){
		return	0.990435494107;
	}
	if( eta <= -2.5){
		if( pt > 20.0 && pt <= 35.0){
			return	0.903074225066;
		}
		if( pt > 35.0 && pt <= 50.0){
			return	0.936393702013;
		}
		if( pt > 50.0 && pt <= 90.0){
			return	0.943888316068;
		}
		if( pt > 90.0 && pt <= 150.0){
			return	0.989085920325;
		}
		if( pt > 150.0 && pt <= 500.0){
			return	0.990435494107;
		}
	}
	if( eta > 2.5){
		if( eta > 20.0 && eta <= 35.0){
			return	0.903074225066;
		}
		if( eta > 35.0 && eta <= 50.0){
			return	0.936393702013;
		}
		if( eta > 50.0 && eta <= 90.0){
			return	0.943888316068;
		}
		if( eta > 90.0 && eta <= 150.0){
			return	0.989085920325;
		}
		if( eta > 150.0 && eta <= 500.0){
			return	0.990435494107;
		}
	}
	if( pt <= 20.0){
		if( eta > -2.5 && eta <= -2.0){
			return	0.909922262309;
		}
		if( eta > -2.0 && eta <= -1.566){
			return	0.93034211395;
		}
		if( eta > -1.566 && eta <= -1.444){
			return	0.0;
		}
		if( eta > -1.444 && eta <= -0.8){
			return	0.939632963159;
		}
		if( eta > -0.8 && eta <= 0.0){
			return	0.957505857676;
		}
		if( eta > 0.0 && eta <= 0.8){
			return	0.978267585963;
		}
		if( eta > 0.8 && eta <= 1.444){
			return	0.944217871645;
		}
		if( eta > 1.444 && eta <= 1.566){
			return	0.0;
		}
		if( eta > 1.566 && eta <= 2.0){
			return	0.915010368802;
		}
		if( eta > 2.0 && eta <= 2.5){
			return	0.903074225066;
		}
	}
	if( pt > 500.0){
		if( eta > -2.5 && eta <= -2.0){
			return	0.937175454901;
		}
		if( eta > -2.0 && eta <= -1.566){
			return	0.975751286099;
		}
		if( eta > -1.566 && eta <= -1.444){
			return	0.0;
		}
		if( eta > -1.444 && eta <= -0.8){
			return	0.98071081225;
		}
		if( eta > -0.8 && eta <= 0.0){
			return	0.981299398708;
		}
		if( eta > 0.0 && eta <= 0.8){
			return	0.989951585187;
		}
		if( eta > 0.8 && eta <= 1.444){
			return	0.965857527019;
		}
		if( eta > 1.444 && eta <= 1.566){
			return	0.0;
		}
		if( eta > 1.566 && eta <= 2.0){
			return	0.972595531217;
		}
		if( eta > 2.0 && eta <= 2.5){
			return	0.990435494107;
		}
	}

	if( eta <= -2.5 && pt <= 20.0){
		 return	0.909922262309;
	}
	if( eta > 2.5 && pt <= 20.0){
		 return	0.903074225066;
	}
	if( eta <= -2.5 && pt > 500.0){
		 return	0.937175454901;
	}
	if( eta > 2.5 && pt > 500.0){
		 return 0.990435494107;
	}
	else cout<<"ERROR: UNEXPEDTED behavior in photon_SF function"<<endl;

	return	1000000<<endl;
}