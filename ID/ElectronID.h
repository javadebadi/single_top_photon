#ifndef ELECTRONID_H_INCLUDED
#define ELECTRONID_H_INCLUDED

namespace ElectronID_Summer17_v2_ID{

	//Barrel 
	class BarrelTight{
	public:
		Double_t Pt                                 = 0;
		const Double_t HoverE                       = 0.356;
		const Double_t SigmaIEtaIEta                = 0.0115;
		const Double_t DeltaEtaInSeed               = 0.00749;
		const Double_t DeltaPhiInSeed               = 0.228;
		const Double_t RelCombPFIsoWithEACorrection = 0.175;
		const Double_t OneOverEMinusOneOverP        = 0.299;
		const Int_t    ExpectedMissingInnerHits     = 2;
		const Int_t    PassConversionVeto           = 1;

		// method
		BarrelTight(){Pt=0;};
		void reset_with_pt(Double_t);

	};

	//Endcap
};
#endif
