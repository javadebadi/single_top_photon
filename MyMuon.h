#ifndef MYMUON_H_INCLUDED
#define MYMUON_H_INCLUDED

#include "TLorentzVector.h"
#include "Standards.h"
#include <vector>


class MyMuon: public TLorentzVector{
private:
	bool tight  = 0;
	bool isGlobal = 0;
	Int_t globalTrackNormalizedChi2 = 0;
	bool isPF = 0;
	Int_t globalTrackHitPatternNumberOfValidMuonHits = 0;
	Int_t numberOfMatchedStations = 0;
	Double_t dB = 0;
	Double_t muonBestTrackdz = 0;
	Int_t innerTrackHitPatternNumberOfValidPixelHits = 0;
	Int_t innerTrackHitPatternTrackerLayersWithMeasurement = 0;
	bool isTrackerMuon = 0;
	Double_t isoCharged = 0;
	Double_t isoNeutralHadron = 0;
	Double_t isoPhoton = 0;
	Double_t isoPU     = 0;
	Double_t Irel      = 0;
public:
	void set_tight(const bool &x){tight = x;}
	bool get_tight(){return tight;}
	void set_isGlobal(const bool &x){isGlobal = x;}
	bool get_isGlobal(){return isGlobal;}
	void set_globalTrackNormalizedChi2(const Int_t &x){globalTrackNormalizedChi2 = x;}
	Int_t get_globalTrackNormalizedChi2(){return globalTrackNormalizedChi2;}
	void set_isPF(const bool &x){isPF = x;}
	bool get_isPF(){return isPF;}
	void set_globalTrackHitPatternNumberOfValidMuonHits(const Int_t &x){globalTrackHitPatternNumberOfValidMuonHits = x;}
	Int_t get_globalTrackHitPatternNumberOfValidMuonHits(){return globalTrackHitPatternNumberOfValidMuonHits;}
	void set_numberOfMatchedStations(const Int_t &x){numberOfMatchedStations = x;}
	Int_t get_numberOfMatchedStations(){return numberOfMatchedStations;}
	void set_dB(const Double_t &x){dB = x;}
	Double_t get_dB(){return dB;}
	void set_muonBestTrackdz(const Double_t &x){muonBestTrackdz = x;}
	Double_t get_muonBestTrackdz(){return muonBestTrackdz;}
	void set_innerTrackHitPatternNumberOfValidPixelHits(const Int_t &x){innerTrackHitPatternNumberOfValidPixelHits = x;}
	Int_t get_innerTrackHitPatternNumberOfValidPixelHits(){return innerTrackHitPatternNumberOfValidPixelHits;}
	void set_innerTrackHitPatternTrackerLayersWithMeasurement(const Int_t &x){innerTrackHitPatternTrackerLayersWithMeasurement = x;}
	Int_t get_innerTrackHitPatternTrackerLayersWithMeasurement(){return innerTrackHitPatternTrackerLayersWithMeasurement;}
	void set_isTrackerMuon(const bool &x){isTrackerMuon = x;}
	bool get_isTrackerMuon(){return isTrackerMuon;}
	void set_isoCharged(const Double_t &x){isoCharged = x;}
	Double_t get_isoCharged(){return isoCharged;}
	void set_isoNeutralHadron(const Double_t &x){isoNeutralHadron = x;}
	Double_t get_isoNeutralHadron(){return isoNeutralHadron;}
	void set_isoPhoton(const Double_t &x){isoPhoton = x;}
	Double_t get_isoPhoton(){return isoPhoton;}
	void set_isoPU(const Double_t &x){isoPU = x;}
	Double_t get_isoPU(){return isoPU;}
	void set_Irel(const Double_t &x){Irel = x;}
	Double_t get_Irel(){return Irel;}

	
	void build();
	Int_t is_tight();
	Int_t is_passed();
	void print();
	void print_all(vector<MyMuon>&);
	
};

#endif
