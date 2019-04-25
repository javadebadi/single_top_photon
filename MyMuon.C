#include "MyMuon.h"

void MyMuon::build(){
	Irel = (isoCharged + TMath::Max(0.0,isoNeutralHadron + isoPhoton-0.5*isoPU) )/Pt();
}


Int_t MyMuon::is_tight(){
	// https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideMuonIdRun2#Tight_Muon
	if ( isGlobal                     == false ) return -1;
	if ( isPF                         == false ) return -1;
	if ( globalTrackNormalizedChi2    >= 10    ) return -1;
	if ( globalTrackHitPatternNumberOfValidMuonHits <= 0 ) return -1;
	if ( numberOfMatchedStations       <= 1    ) return -1;
	if ( dB                            >=0.2   ) return -1;
	if ( muonBestTrackdz               >= 0.5   ) return -1;
	if ( innerTrackHitPatternNumberOfValidPixelHits <= 0) return -1;
	if ( innerTrackHitPatternTrackerLayersWithMeasurement <= 5 ) return -1;

	else return 1;
}

Int_t MyMuon::is_passed(){

	if ( Pt() < 26                ) return -1;
	if ( TMath::Abs(Eta()) > 2.4  ) return -1;
	if ( is_tight() < 0           ) return -1;
	if ( isTrackerMuon == false   ) return -1;
	if ( Irel >= 0.15             ) return -1;
	return 1;
}

Int_t MyMuon::is_further_passed(){

	if ( Pt() < 15                ) return -1;
	if ( TMath::Abs(Eta()) > 2.4  ) return -1;
	if ( isGlobal == false        ) return -1;
	if ( Irel >= 0.25             ) return -1;
	return 1;

}

void MyMuon::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"isPF                             = "<<isPF<<endl;
	cout<<"globalTrackNormalizedChi2        = "<<globalTrackNormalizedChi2<<endl;
	cout<<"globalTrackHitPatternNumberOfValidMuonHits = "<<globalTrackHitPatternNumberOfValidMuonHits<<endl;
	cout<<"numberOfMatchedStations          = "<<numberOfMatchedStations<<endl;
	cout<<"dB                               = "<<dB<<endl;
	cout<<"muonBestTrackdz                  = "<<muonBestTrackdz<<endl;
	cout<<"innerTrackHitPatternNumberOfValidPixelHits = "<<innerTrackHitPatternNumberOfValidPixelHits<<endl;
	cout<<"innerTrackHitPatternTrackerLayersWithMeasurement = "<<innerTrackHitPatternTrackerLayersWithMeasurement<<endl;
	cout<<"isTrackerMuon                    = "<<isTrackerMuon<<endl;
	cout<<"isoCharged                       = "<<isoCharged<<endl;
	cout<<"isoNeutralHadron                 = "<<isoNeutralHadron<<endl;
	cout<<"isoPhoton                        = "<<isoPhoton<<endl;
	cout<<"isoPU                            = "<<isoPU<<endl;
	cout<<"Irel                             = "<<Irel<<endl;
	cout<<"is_tight()                       = "<<is_tight()<<endl;
	cout<<"isGlobal                         = "<<isGlobal<<endl;
	cout<<"is_passed()                      = "<<is_passed()<<endl;
	cout<<"is_further_passed()              = "<<is_further_passed()<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyMuon::print_all(vector<MyMuon> &MyMuons){
	cout<<"============== vector of muons ============="<<endl;
	for(auto &m: MyMuons){
		m.print();
	}
}
