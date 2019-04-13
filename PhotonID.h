#ifndef PhotonID_H_INCLUDED
#define PhotonID_H_INCLUDED

namespace PhotonID_Summer17_v2_ID{

        // https://twiki.cern.ch/twiki/bin/viewauth/CMS/CutBasedPhotonIdentificationRun2#Working_points_for_94X_and_later
        Double_t calculate_EACh(const Double_t &eta);
	Double_t calculate_EAPho(const Double_t &eta);
	Double_t calculate_EANeu(const Double_t &eta);

};
#endif
