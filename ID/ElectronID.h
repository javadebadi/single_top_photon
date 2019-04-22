#ifndef ELECTRONID_H_INCLUDED
#define ELECTRONID_H_INCLUDED

namespace eGamma2016_ID{

	const Double_t SCEta = 1.479; 
	Double_t calculate_EA(const Double_t &eta);

	//Barrel
	//SC in the begining indicates that veto cuts of electron are
	//based on eta in supre cluster 
	namespace SCBarrelVeto{
		const Double_t Pt                           = 20;
		const Double_t HoverE                       = 0.356;
		const Double_t SigmaIEtaIEta                = 0.0115;
		const Double_t DeltaEtaInSeed               = 0.00749;
		const Double_t DeltaPhiInSeed               = 0.228;
		const Double_t RelCombPFIsoWithEACorrection = 0.175;
		const Double_t OneOverEMinusOneOverP        = 0.299;
		const Int_t    ExpectedMissingInnerHits     = 2;
		const Int_t    PassConversionVeto           = 1;
	};


	//Endcap
	//SC in the begining indicates that veto cuts of electron are
	//based on eta in supre cluster 
	namespace SCEndcapVeto{
		const Double_t Pt                                 = 20;
		const Double_t HoverE                       = 0.211;
		const Double_t SigmaIEtaIEta                = 0.037;
		const Double_t DeltaEtaInSeed               = 0.00895;
		const Double_t DeltaPhiInSeed               = 0.213;
		const Double_t RelCombPFIsoWithEACorrection = 0.159;
		const Double_t OneOverEMinusOneOverP        = 0.15;
		const Int_t    ExpectedMissingInnerHits     = 3;
		const Int_t    PassConversionVeto           = 1;
	};

};
#endif
