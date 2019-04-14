#ifndef PhotonID_H_INCLUDED
#define PhotonID_H_INCLUDED

namespace PhotonID_Summer17_v2_ID{

        // https://twiki.cern.ch/twiki/bin/viewauth/CMS/CutBasedPhotonIdentificationRun2#Working_points_for_94X_and_later
        Double_t calculate_EACh(const Double_t &eta);
	Double_t calculate_EAPho(const Double_t &eta);
	Double_t calculate_EANeu(const Double_t &eta);

	//Barrel 
	class BarrelTight{
	public:
		Double_t Pt                       = 0;
		const Double_t HoverE             = 0.02148;
		const Double_t SigmaIEtaIEta      = 0.00996;
		const Double_t PFChIso_corrected  = 0.65;
		Double_t PFNeuIso_corrected       = 0.317;
		Double_t PFPhoIso_corrected       = 2.044;

		// method
		BarrelTight(){Pt=0;};
		void reset_with_pt(Double_t pho_pt);

	};
};
#endif
