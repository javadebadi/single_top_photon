#include "Photon_SFUp.h"

Double_t photon_SFUp(Double_t eta, Double_t pt){
	if( eta > -2.5 && eta <= -2.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.96756122482;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.955795204656;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.958430399982;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 90.0 && pt <= 150.0 ){
		return	1.0129276982;
	}
	if( eta > -2.5 && eta <= -2.0 && pt > 150.0 && pt <= 500.0 ){
		return	1.05469447155;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 20.0 && pt <= 35.0 ){
		return	0.993118727229;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 35.0 && pt <= 50.0 ){
		return	0.973552249382;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 50.0 && pt <= 90.0 ){
		return	0.993732078949;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 90.0 && pt <= 150.0 ){
		return	1.01704107677;
	}
	if( eta > -2.0 && eta <= -1.566 && pt > 150.0 && pt <= 500.0 ){
		return	1.0623718447;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 20.0 && pt <= 35.0 ){
		return	2.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 35.0 && pt <= 50.0 ){
		return	2.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 50.0 && pt <= 90.0 ){
		return	2.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 90.0 && pt <= 150.0 ){
		return	2.0;
	}
	if( eta > -1.566 && eta <= -1.444 && pt > 150.0 && pt <= 500.0 ){
		return	2.0;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 20.0 && pt <= 35.0 ){
		return	1.00807945826;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 35.0 && pt <= 50.0 ){
		return	0.985458443904;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 50.0 && pt <= 90.0 ){
		return	0.973891521439;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 90.0 && pt <= 150.0 ){
		return	1.02756933463;
	}
	if( eta > -1.444 && eta <= -0.8 && pt > 150.0 && pt <= 500.0 ){
		return	1.03590958532;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 20.0 && pt <= 35.0 ){
		return	1.01490792063;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.979942713809;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.97542528355;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 90.0 && pt <= 150.0 ){
		return	1.01883797553;
	}
	if( eta > -0.8 && eta <= 0.0 && pt > 150.0 && pt <= 500.0 ){
		return	1.03011298342;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 20.0 && pt <= 35.0 ){
		return	1.03566964892;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 35.0 && pt <= 50.0 ){
		return	1.00351664884;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 50.0 && pt <= 90.0 ){
		return	0.995328108906;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 90.0 && pt <= 150.0 ){
		return	1.02616469768;
	}
	if( eta > 0.0 && eta <= 0.8 && pt > 150.0 && pt <= 500.0 ){
		return	1.03899195348;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 20.0 && pt <= 35.0 ){
		return	1.01266436674;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 35.0 && pt <= 50.0 ){
		return	0.988137315059;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 50.0 && pt <= 90.0 ){
		return	0.979284132466;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 90.0 && pt <= 150.0 ){
		return	1.03777855963;
	}
	if( eta > 0.8 && eta <= 1.444 && pt > 150.0 && pt <= 500.0 ){
		return	1.020555475;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 20.0 && pt <= 35.0 ){
		return	2.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 35.0 && pt <= 50.0 ){
		return	2.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 50.0 && pt <= 90.0 ){
		return	2.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 90.0 && pt <= 150.0 ){
		return	2.0;
	}
	if( eta > 1.444 && eta <= 1.566 && pt > 150.0 && pt <= 500.0 ){
		return	2.0;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 20.0 && pt <= 35.0 ){
		return	0.977786982081;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 35.0 && pt <= 50.0 ){
		return	0.970328472564;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 50.0 && pt <= 90.0 ){
		return	0.969378992001;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 90.0 && pt <= 150.0 ){
		return	1.00966268931;
	}
	if( eta > 1.566 && eta <= 2.0 && pt > 150.0 && pt <= 500.0 ){
		return	1.05952135874;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 20.0 && pt <= 35.0 ){
		return	0.960713187577;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 35.0 && pt <= 50.0 ){
		return	0.959748780744;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 50.0 && pt <= 90.0 ){
		return	0.970763197032;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 90.0 && pt <= 150.0 ){
		return	1.04515098763;
	}
	if( eta > 2.0 && eta <= 2.5 && pt > 150.0 && pt <= 500.0 ){
		return	1.10801731237;
	}
	if( eta <= -2.5){
		if( pt > 20.0 && pt <= 35.0){
			return	0.960713187577;
		}
		if( pt > 35.0 && pt <= 50.0){
			return	0.959748780744;
		}
		if( pt > 50.0 && pt <= 90.0){
			return	0.970763197032;
		}
		if( pt > 90.0 && pt <= 150.0){
			return	1.04515098763;
		}
		if( pt > 150.0 && pt <= 500.0){
			return	1.10801731237;
		}
	}
	if( eta > 2.5){
		if( eta > 20.0 && eta <= 35.0){
			return	0.960713187577;
		}
		if( eta > 35.0 && eta <= 50.0){
			return	0.959748780744;
		}
		if( eta > 50.0 && eta <= 90.0){
			return	0.970763197032;
		}
		if( eta > 90.0 && eta <= 150.0){
			return	1.04515098763;
		}
		if( eta > 150.0 && eta <= 500.0){
			return	1.10801731237;
		}
	}
	if( pt <= 20.0){
		if( eta > -2.5 && eta <= -2.0){
			return	0.96756122482;
		}
		if( eta > -2.0 && eta <= -1.566){
			return	0.993118727229;
		}
		if( eta > -1.566 && eta <= -1.444){
			return	2.0;
		}
		if( eta > -1.444 && eta <= -0.8){
			return	1.00807945826;
		}
		if( eta > -0.8 && eta <= 0.0){
			return	1.01490792063;
		}
		if( eta > 0.0 && eta <= 0.8){
			return	1.03566964892;
		}
		if( eta > 0.8 && eta <= 1.444){
			return	1.01266436674;
		}
		if( eta > 1.444 && eta <= 1.566){
			return	2.0;
		}
		if( eta > 1.566 && eta <= 2.0){
			return	0.977786982081;
		}
		if( eta > 2.0 && eta <= 2.5){
			return	0.960713187577;
		}
	}
	if( pt > 500.0){
		if( eta > -2.5 && eta <= -2.0){
			return	1.05469447155;
		}
		if( eta > -2.0 && eta <= -1.566){
			return	1.0623718447;
		}
		if( eta > -1.566 && eta <= -1.444){
			return	2.0;
		}
		if( eta > -1.444 && eta <= -0.8){
			return	1.03590958532;
		}
		if( eta > -0.8 && eta <= 0.0){
			return	1.03011298342;
		}
		if( eta > 0.0 && eta <= 0.8){
			return	1.03899195348;
		}
		if( eta > 0.8 && eta <= 1.444){
			return	1.020555475;
		}
		if( eta > 1.444 && eta <= 1.566){
			return	2.0;
		}
		if( eta > 1.566 && eta <= 2.0){
			return	1.05952135874;
		}
		if( eta > 2.0 && eta <= 2.5){
			return	1.10801731237;
		}
	}

	if( eta <= -2.5 && pt <= 20.0){
		 return	0.96756122482;
	}
	if( eta > 2.5 && pt <= 20.0){
		 return	0.960713187577;
	}
	if( eta <= -2.5 && pt > 500.0){
		 return	1.05469447155;
	}
	if( eta > 2.5 && pt > 500.0){
		 return 1.10801731237;
	}
	else cout<<"ERROR: UNEXPEDTED behavior in photon_SF function"<<endl;

	return	1000000;
}