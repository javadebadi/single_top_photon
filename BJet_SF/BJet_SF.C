#include "BJet_SF.h"
Double_t bJet_SF(Double_t eta, Double_t pt, TString jetFlavorstring, TString OperatingPoint){
	Double_t &x = pt;
	Int_t op = 0;
	if(OperatingPoint == "tight") op=2;
	else if(OperatingPoint == "loose") op=0;
	else if(OperatingPoint == "medium") op=1;
	else {
    		cout<<"Error: the discriminator of BJet is not specified correctly: it should be one of (loose,tight,medium). The error is raised from one of BJet_SF functions"<<endl;
    		exit(1);
    	}

    
Int_t jetFlavor = 0;
	if(jetFlavorstring == "u" || jetFlavorstring == "s" || jetFlavorstring == "d") jetFlavor=2;
	else if(jetFlavorstring == "b" || jetFlavorstring == "c") jetFlavor=1;
	else if(jetFlavorstring == "non") jetFlavor=0;
	else {
    		cout<<"Error: the jetFlavor is not correct. It should be one of (u,c,s,d,b,non). The error is raised from one of BJet_SF functions"<<endl;
    		exit(1);
    	}

    
	if(pt > 20 && pt <= 10000 && jetFlavor == 1 && op == 0){
		return	0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x)));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 0 && op == 0){
		return	0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x)));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 1 && op == 1){
		return	0.561694*((1.+(0.31439*x))/(1.+(0.17756*x)));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 0 && op == 1){
		return	0.561694*((1.+(0.31439*x))/(1.+(0.17756*x)));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 1 && op == 2){
		return	0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x)));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 0 && op == 2){
		return	0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x)));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 0){
		return	1.13904+-0.000594946*x+1.97303e-06*x*x+-1.38194e-09*x*x*x;
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 1){
		return	1.0589+0.000382569*x+-2.4252e-07*x*x+2.20966e-10*x*x*x;
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 2){
		return	0.971945+163.215/(x*x)+0.000517836*x;
	}
	else	return	1;}

Double_t bJet_SFLow(Double_t eta, Double_t pt, TString jetFlavorstring, TString OperatingPoint){
	Double_t &x = pt;
	Int_t op = 0;
	if(OperatingPoint == "tight") op=2;
	else if(OperatingPoint == "loose") op=0;
	else if(OperatingPoint == "medium") op=1;
	else {
    		cout<<"Error: the discriminator of BJet is not specified correctly: it should be one of (loose,tight,medium). The error is raised from one of BJet_SF functions"<<endl;
    		exit(1);
    	}

    
Int_t jetFlavor = 0;
	if(jetFlavorstring == "u" || jetFlavorstring == "s" || jetFlavorstring == "d") jetFlavor=2;
	else if(jetFlavorstring == "b" || jetFlavorstring == "c") jetFlavor=1;
	else if(jetFlavorstring == "non") jetFlavor=0;
	else {
    		cout<<"Error: the jetFlavor is not correct. It should be one of (u,c,s,d,b,non). The error is raised from one of BJet_SF functions"<<endl;
    		exit(1);
    	}

    
	if(pt > 20 && pt <= 30 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.063454590737819672;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.031410016119480133;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.02891194075345993;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.028121808543801308;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.027028990909457207;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.027206243947148323;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.033642303198575974;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.04273652657866478;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.054665762931108475;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.025381835177540779;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.012564006261527538;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.011564776301383972;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.011248723603785038;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.010811596177518368;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.010882497765123844;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.013456921093165874;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.017094610258936882;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))-0.02186630479991436;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.12064050137996674;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.042138919234275818;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.03711806982755661;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.036822021007537842;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.034397732466459274;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.0362386554479599;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.044985830783843994;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.064243391156196594;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.097131341695785522;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.040213499218225479;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.014046305790543556;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.012372690252959728;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.012274007312953472;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.011465910822153091;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.012079551815986633;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.014995276927947998;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.021414462476968765;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.032377112656831741;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.11806446313858032;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.054699532687664032;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.047356218099594116;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.047634456306695938;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.04632849246263504;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.048323042690753937;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.068715795874595642;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.10824859887361526;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.18500012159347534;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.033732704818248749;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.01562843844294548;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.013530348427593708;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.013609844259917736;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.013236711733043194;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.013806583359837532;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.019633084535598755;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.030928170308470726;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))-0.052857179194688797;
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 0){
		return	(1.13904+-0.000594946*x+1.97303e-06*x*x+-1.38194e-09*x*x*x)*(1-(0.0996438+-8.33354e-05*x+4.74359e-08*x*x));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 1){
		return	(1.0589+0.000382569*x+-2.4252e-07*x*x+2.20966e-10*x*x*x)*(1-(0.100485+3.95509e-05*x+-4.90326e-08*x*x));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 2){
		return	(0.971945+163.215/(x*x)+0.000517836*x)*(1-(0.291298+-0.000222983*x+1.69699e-07*x*x));
	}
	else	return	1;}

Double_t bJet_SFUp(Double_t eta, Double_t pt, TString jetFlavorstring, TString OperatingPoint){
	Double_t &x = pt;
	Int_t op = 0;
	if(OperatingPoint == "tight") op=2;
	else if(OperatingPoint == "loose") op=0;
	else if(OperatingPoint == "medium") op=1;
	else {
    		cout<<"Error: the discriminator of BJet is not specified correctly: it should be one of (loose,tight,medium). The error is raised from one of BJet_SF functions"<<endl;
    		exit(1);
    	}

    
Int_t jetFlavor = 0;
	if(jetFlavorstring == "u" || jetFlavorstring == "s" || jetFlavorstring == "d") jetFlavor=2;
	else if(jetFlavorstring == "b" || jetFlavorstring == "c") jetFlavor=1;
	else if(jetFlavorstring == "non") jetFlavor=0;
	else {
    		cout<<"Error: the jetFlavor is not correct. It should be one of (u,c,s,d,b,non). The error is raised from one of BJet_SF functions"<<endl;
    		exit(1);
    	}

    
	if(pt > 20 && pt <= 30 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.063454590737819672;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.031410016119480133;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.02891194075345993;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.028121808543801308;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.027028990909457207;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.027206243947148323;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.033642303198575974;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.04273652657866478;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 1 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.054665762931108475;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.025381835177540779;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.012564006261527538;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.011564776301383972;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.011248723603785038;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.010811596177518368;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.010882497765123844;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.013456921093165874;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.017094610258936882;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 0 && op == 0){
		return	(0.887973*((1.+(0.0523821*x))/(1.+(0.0460876*x))))+0.02186630479991436;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.12064050137996674;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.042138919234275818;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.03711806982755661;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.036822021007537842;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.034397732466459274;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.0362386554479599;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.044985830783843994;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.064243391156196594;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 1 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.097131341695785522;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.040213499218225479;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.014046305790543556;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.012372690252959728;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.012274007312953472;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.011465910822153091;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.012079551815986633;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.014995276927947998;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.021414462476968765;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 0 && op == 1){
		return	(0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.032377112656831741;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.11806446313858032;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.054699532687664032;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.047356218099594116;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.047634456306695938;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.04632849246263504;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.048323042690753937;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.068715795874595642;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.10824859887361526;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 1 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.18500012159347534;
	}
	if(pt > 20 && pt <= 30 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.033732704818248749;
	}
	if(pt > 30 && pt <= 50 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.01562843844294548;
	}
	if(pt > 50 && pt <= 70 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.013530348427593708;
	}
	if(pt > 70 && pt <= 100 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.013609844259917736;
	}
	if(pt > 100 && pt <= 140 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.013236711733043194;
	}
	if(pt > 140 && pt <= 200 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.013806583359837532;
	}
	if(pt > 200 && pt <= 300 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.019633084535598755;
	}
	if(pt > 300 && pt <= 600 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.030928170308470726;
	}
	if(pt > 600 && pt <= 10000 && jetFlavor == 0 && op == 2){
		return	(0.817647*((1.+(0.038703*x))/(1.+(0.0312388*x))))+0.052857179194688797;
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 0){
		return	(1.13904+-0.000594946*x+1.97303e-06*x*x+-1.38194e-09*x*x*x)*(1+(0.0996438+-8.33354e-05*x+4.74359e-08*x*x));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 1){
		return	(1.0589+0.000382569*x+-2.4252e-07*x*x+2.20966e-10*x*x*x)*(1+(0.100485+3.95509e-05*x+-4.90326e-08*x*x));
	}
	if(pt > 20 && pt <= 10000 && jetFlavor == 2 && op == 2){
		return	(0.971945+163.215/(x*x)+0.000517836*x)*(1+(0.291298+-0.000222983*x+1.69699e-07*x*x));
	}
	else	return	1;}

