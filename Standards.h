#ifndef STANDARDS_H_INCLUDED
#define STANDARDS_H_INCLUDED

#include "./ID/ID.h"

// an object containing photon barrel information
PhotonID_Summer17_v2_ID::BarrelTight photon_barrel_tight;
Double_t photon_calculate_EACh(const Double_t& eta){
		return PhotonID_Summer17_v2_ID::calculate_EACh(eta);
}
Double_t photon_calculate_EAPho(const Double_t& eta){
		return PhotonID_Summer17_v2_ID::calculate_EAPho(eta);
}
Double_t photon_calculate_EANeu(const Double_t& eta){
		return PhotonID_Summer17_v2_ID::calculate_EANeu(eta);
}
#endif
