//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 12 21:45:26 2019 by ROOT version 6.06/08
// from TChain TNT/
//////////////////////////////////////////////////////////

#ifndef SmallClass_h
#define SmallClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class SmallClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxrunNum = 1;
   const Int_t kMaxlumiBlockNum = 1;
   const Int_t kMaxevtNum = 1;

   // Declaration of leaf types
   Int_t           runNum_;
   Int_t           lumiBlockNum_;
   Int_t           evtNum_;
   Float_t         FixedGridRhoFastjetAll;
   Float_t         FixedGridRhoFastjetCentralNeutral;
   Float_t         puWeight;
   Float_t         genweight;
   Int_t           nVert;
   Int_t           nLHEweight;
   Int_t           nTrueInt;
   Int_t           HLT_Photon120;
   Int_t           HLT_Photon75;
   Int_t           HLT_IsoMu20;
   Int_t           HLT_CaloJet500_NoJetID;
   Int_t           HLT_Photon90;
   Int_t           HLT_Photon175;
   Int_t           HLT_Photon155;
   Int_t           HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL;
   Int_t           HLT_Mu17Photo22IdL;
   Int_t           HLT_Mu17Photo30IdL;
   Int_t           HLT_Mu17Photo35IdL;
   Int_t           HLT_IsoMu22;
   Int_t           HLT_IsoTkMu22;
   Int_t           HLT_Mu50;
   Int_t           HLT_MuTk50;
   Int_t           HLT_Mu45eta2p1;
   Int_t           HLT_IsoMu24;
   Int_t           HLT_IsoTkMu24;
   Int_t           HLT_Mu8;
   Int_t           HLT_Mu17;
   Int_t           HLT_Ele17_CaloIdM_TrackIdM_PFJet30;
   Int_t           HLT_Ele8_CaloIdM_TrackIdM_PFJet30;
   Int_t           HLT_Ele27_eta2p1_WPLoose_Gsf;
   Int_t           HLT_Ele27_eta2p1_WPTight_Gsf;
   Int_t           Flag_HBHENoiseIsoFilter;
   Int_t           Flag_EcalDeadCellTriggerPrimitiveFilter;
   Int_t           Flag_ecalLaserCorrFilter;
   Int_t           Flag_hcalLaserEventFilter;
   Int_t           Flag_trkPOG_logErrorTooManyClusters;
   Int_t           Flag_trkPOGFilters;
   Int_t           Flag_trackingFailureFilter;
   Int_t           Flag_CSCTightHaloFilter;
   Int_t           Flag_HBHENoiseFilter;
   Int_t           Flag_goodVertices;
   Int_t           Flag_METFilters;
   Int_t           Flag_eeBadScFilter;
   Int_t           Flag_globalTightHalo2016Filter;
   Int_t           Flag_globalSuperTightHalo2016Filter;
   Float_t         met_mass;
   Float_t         Met_type1PF_px;
   Float_t         Met_type1PF_py;
   Float_t         Met_type1PF_pz;
   Float_t         Met_type1PF_pt;
   Float_t         Met_type1PF_phi;
   Float_t         Met_type1PF_sumEt;
   Float_t         met_rawPt;
   Float_t         met_rawPhi;
   Float_t         met_rawSumEt;
   Float_t         met_genPt;
   Float_t         met_genPhi;
   Float_t         met_genEta;
   Int_t           njet;
   Int_t           ngenPartAll;
   Int_t           ngamma;
   Int_t           nsellepton;
   vector<int>     *Muon_mcMatchId;
   vector<double>  *Muon_pt;
   vector<double>  *Muon_eta;
   vector<double>  *Muon_phi;
   vector<double>  *Muon_p;
   vector<double>  *Muon_besttrack_dz;
   vector<double>  *Muon_charge;
   vector<bool>    *Muon_tight;
   vector<bool>    *Muon_medium;
   vector<bool>    *Muon_soft;
   vector<bool>    *Muon_pf;
   vector<double>  *Muon_isoCharged;
   vector<double>  *Muon_isoSum;
   vector<double>  *Muon_isoCharParPt;
   vector<double>  *Muon_isTrackerMuon;
   vector<double>  *Muon_validHits;
   vector<double>  *Muon_validHitsInner;
   vector<double>  *Muon_matchedStat;
   vector<double>  *Muon_dxy_pv;
   vector<double>  *Muon_dz_pv;
   vector<double>  *Muon_dxyError;
   vector<double>  *Muon_dzError;
   vector<double>  *Muon_ndof;
   vector<double>  *Muon_vtx;
   vector<double>  *Muon_vty;
   vector<double>  *Muon_vtz;
   vector<double>  *Muon_track_pt;
   vector<double>  *Muon_track_ptError;
   vector<bool>    *Muon_isGlobal;
   vector<double>  *Muon_TLayers;
   vector<double>  *Muon_isoNeutralHadron;
   vector<double>  *Muon_isoPhoton;
   vector<double>  *Muon_isoPU;
   vector<double>  *Muon_dB;
   vector<double>  *Muon_besttrack_pt;
   vector<double>  *Muon_besttrack_ptError;
   vector<double>  *Muon_chi2LocalPosition;
   vector<double>  *Muon_trkKink;
   vector<double>  *Muon_segmentCompatibility;
   vector<double>  *Muon_validFraction;
   vector<double>  *Muon_pixelLayersWithMeasurement;
   vector<double>  *Muon_chi2_inertrk;
   vector<double>  *Muon_chi2_globaltrk;
   vector<double>  *patElectron_pt;
   vector<double>  *patElectron_eta;
   vector<double>  *patElectron_phi;
   vector<double>  *patElectron_energy;
   vector<double>  *patElectron_charge;
   vector<double>  *patElectron_isoChargedHadrons;
   vector<double>  *patElectron_isoNeutralHadrons;
   vector<double>  *patElectron_isoPhotons;
   vector<double>  *patElectron_isoPU;
   vector<int>     *patElectron_expectedMissingInnerHits;
   vector<int>     *patElectron_passConversionVeto;
   vector<double>  *PatEle_dr03TkSumPt;
   vector<double>  *PatEle_dr03EcalTowerSumEt;
   vector<double>  *PatEle_dr03HcalTowerSumEt;
   vector<double>  *PatEle_dr03HcalDepth1TowerSumEt;
   vector<double>  *PatEle_dr03HcalDepth2TowerSumEt;
   vector<double>  *PatEle_dr04TkSumPt;
   vector<double>  *PatEle_dr04EcalTowerSumEt;
   vector<double>  *PatEle_dr04HcalTowerSumEt;
   vector<double>  *PatEle_dr04HcalDepth1TowerSumEt;
   vector<double>  *PatEle_dr04HcalDepth2TowerSumEt;
   vector<double>  *PatEle_e5x5;
   vector<double>  *PatEle_e1x5;
   vector<double>  *PatEle_e2x5Max;
   vector<double>  *PatEle_DeltaEtaSeedIn;
   vector<double>  *PatEle_full5x5SigmaIetaIeta;
   vector<double>  *PatEle_fulle5x5;
   vector<double>  *PatEle_fulle1x5;
   vector<double>  *PatEle_fulle2x5Max;
   vector<double>  *PatEle_ScEt;
   vector<double>  *PatEle_EtaSc;
   vector<double>  *PatEle_DeltaPhiIn;
   vector<double>  *PatEle_DeltaEtaIn;
   vector<double>  *PatEle_SigmaIetaIeta;
   vector<double>  *PatEle_EOverP;
   vector<double>  *PatEle_HOverE;
   vector<double>  *PatEle_relIso03;
   vector<double>  *PatEle_relIso04;
   vector<double>  *PatEle_miniRelIso;
   vector<double>  *PatEle_looseIdOnly;
   vector<double>  *PatEle_isoSum;
   vector<double>  *patElectron_gsfTrack_dxy_pv;
   vector<double>  *patElectron_dxyError;
   vector<double>  *patElectron_gsfTrack_dz_pv;
   vector<double>  *patElectron_dzError;
   vector<double>  *patElectron_gsfTrack_normChi2;
   vector<double>  *patElectron_gsfTrack_ndof;
   vector<double>  *patElectron_gsfTrack_vtx;
   vector<double>  *patElectron_gsfTrack_vty;
   vector<double>  *patElectron_gsfTrack_vtz;
   vector<bool>    *PatEle_trackerDrivenSeed;
   vector<bool>    *PatEle_ecalDrivenSeed;
   vector<int>     *patElectron_expectedMissingOuterHits;
   vector<double>  *PatEle_r9;
   vector<double>  *PatEle_full5x5_r9;
   vector<double>  *PatEle_full5x5SigmaIphiIphi;
   vector<double>  *PatEle_full5x5_hcalOverEcal;
   vector<double>  *PatEle_correctedEcalEnergy;
   vector<double>  *PatEle_ecalEnergy;
   vector<double>  *PatEle_superCluster_rawEnergy;
   vector<double>  *PatEle_superCluster_preshowerEnergy;
   vector<double>  *PatEle_superCluster_correctedEnergy;
   vector<double>  *PatEle_superCluster_energy;
   vector<double>  *PatEle_superCluster_clustersSize;
   vector<double>  *PatEle_superCluster_seed_energy;
   vector<int>     *PatEle_mcMatchId;
   vector<float>   *Photon_pt;
   vector<float>   *Photon_eta;
   vector<float>   *Photon_phi;
   vector<float>   *Photon_HoverE;
   vector<float>   *Photon_phoR9;
   vector<float>   *Photon_SigmaIEtaIEta;
   vector<float>   *Photon_SigmaIPhiIPhi;
   vector<float>   *Photon_PFChIso;
   vector<float>   *Photon_PFPhoIso;
   vector<float>   *Photon_PFNeuIso;
   vector<int>     *Photon_EleVeto;
   vector<int>     *Photon_hasPixelSeed;
   vector<int>     *Photon_mcMatchId;
   vector<double>  *Jet_pt;
   vector<double>  *Jet_rawpt;
   vector<double>  *Jet_eta;
   vector<double>  *Jet_phi;
   vector<double>  *Jet_energy;
   vector<double>  *Jet_bDiscriminator_pfCMVA;
   vector<double>  *Jet_bDiscriminator_pfCISVV2;
   vector<double>  *Jet_pileupId;
   vector<int>     *Jet_partonFlavour;
   vector<double>  *Jet_neutralHadEnergyFraction;
   vector<double>  *Jet_neutralEmEmEnergyFraction;
   vector<double>  *Jet_chargedHadronEnergyFraction;
   vector<double>  *Jet_chargedEmEnergyFraction;
   vector<double>  *Jet_muonEnergyFraction;
   vector<int>     *Jet_numberOfConstituents;
   vector<int>     *Jet_chargedMultiplicity;
   vector<int>     *Jet_neutralMultiplicity;
   vector<double>  *Jet_mass;
   vector<double>  *Jet_electronEnergy;
   vector<double>  *Jet_photonEnergy;
   vector<double>  *UncorrJet_pt;
   vector<double>  *Jet_neuMultiplicity;
   vector<int>     *Jet_mcMatchFlav;
   vector<int>     *Jet_mcMatchId;
   vector<double>  *Jet_area;
   vector<double>  *Jet_corr_JECUp;
   vector<double>  *Jet_corr_JECDown;
   vector<double>  *Jet_corr;
   vector<double>  *Jet_et;
   vector<int>     *Jet_HFHMult;
   vector<int>     *Jet_HFEMMult;
   vector<double>  *Jet_HFHEF;
   vector<double>  *Jet_HFEMEF;
   vector<double>  *Gen_pt;
   vector<double>  *Gen_eta;
   vector<double>  *Gen_phi;
   vector<double>  *Gen_status;
   vector<int>     *Gen_pdg_id;
   vector<int>     *Gen_motherpdg_id;
   vector<double>  *Gen_charge;
   vector<double>  *Gen_mass;
   vector<int>     *Gen_grandmotherId;
   vector<int>     *Gen_isPromptHard;
   vector<int>     *LHEweight_id;
   vector<float>   *LHEweight_wgt;

   // List of branches
   TBranch        *b_runNum_;   //!
   TBranch        *b_lumiBlockNum_;   //!
   TBranch        *b_evtNum_;   //!
   TBranch        *b_FixedGridRhoFastjetAll;   //!
   TBranch        *b_FixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_genweight;   //!
   TBranch        *b_nVert;   //!
   TBranch        *b_nLHEweight;   //!
   TBranch        *b_nTrueInt;   //!
   TBranch        *b_HLT_Photon120;   //!
   TBranch        *b_HLT_Photon75;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_CaloJet500_NoJetID;   //!
   TBranch        *b_HLT_Photon90;   //!
   TBranch        *b_HLT_Photon175;   //!
   TBranch        *b_HLT_Photon155;   //!
   TBranch        *b_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL;   //!
   TBranch        *b_HLT_Mu17Photo22IdL;   //!
   TBranch        *b_HLT_Mu17Photo30IdL;   //!
   TBranch        *b_HLT_Mu17Photo35IdL;   //!
   TBranch        *b_HLT_IsoMu22;   //!
   TBranch        *b_HLT_IsoTkMu22;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_MuTk50;   //!
   TBranch        *b_HLT_Mu45eta2p1;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoTkMu24;   //!
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_met_mass;   //!
   TBranch        *b_Met_type1PF_px;   //!
   TBranch        *b_Met_type1PF_py;   //!
   TBranch        *b_Met_type1PF_pz;   //!
   TBranch        *b_Met_type1PF_pt;   //!
   TBranch        *b_Met_type1PF_phi;   //!
   TBranch        *b_Met_type1PF_sumEt;   //!
   TBranch        *b_met_rawPt;   //!
   TBranch        *b_met_rawPhi;   //!
   TBranch        *b_met_rawSumEt;   //!
   TBranch        *b_met_genPt;   //!
   TBranch        *b_met_genPhi;   //!
   TBranch        *b_met_genEta;   //!
   TBranch        *b_njet;   //!
   TBranch        *b_ngenPartAll;   //!
   TBranch        *b_ngamma;   //!
   TBranch        *b_nsellepton;   //!
   TBranch        *b_Muon_mcMatchId;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_p;   //!
   TBranch        *b_Muon_besttrack_dz;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_tight;   //!
   TBranch        *b_Muon_medium;   //!
   TBranch        *b_Muon_soft;   //!
   TBranch        *b_Muon_pf;   //!
   TBranch        *b_Muon_isoCharged;   //!
   TBranch        *b_Muon_isoSum;   //!
   TBranch        *b_Muon_isoCharParPt;   //!
   TBranch        *b_Muon_isTrackerMuon;   //!
   TBranch        *b_Muon_validHits;   //!
   TBranch        *b_Muon_validHitsInner;   //!
   TBranch        *b_Muon_matchedStat;   //!
   TBranch        *b_Muon_dxy_pv;   //!
   TBranch        *b_Muon_dz_pv;   //!
   TBranch        *b_Muon_dxyError;   //!
   TBranch        *b_Muon_dzError;   //!
   TBranch        *b_Muon_ndof;   //!
   TBranch        *b_Muon_vtx;   //!
   TBranch        *b_Muon_vty;   //!
   TBranch        *b_Muon_vtz;   //!
   TBranch        *b_Muon_track_pt;   //!
   TBranch        *b_Muon_track_ptError;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_TLayers;   //!
   TBranch        *b_Muon_isoNeutralHadron;   //!
   TBranch        *b_Muon_isoPhoton;   //!
   TBranch        *b_Muon_isoPU;   //!
   TBranch        *b_Muon_dB;   //!
   TBranch        *b_Muon_besttrack_pt;   //!
   TBranch        *b_Muon_besttrack_ptError;   //!
   TBranch        *b_Muon_chi2LocalPosition;   //!
   TBranch        *b_Muon_trkKink;   //!
   TBranch        *b_Muon_segmentCompatibility;   //!
   TBranch        *b_Muon_validFraction;   //!
   TBranch        *b_Muon_pixelLayersWithMeasurement;   //!
   TBranch        *b_Muon_chi2_inertrk;   //!
   TBranch        *b_Muon_chi2_globaltrk;   //!
   TBranch        *b_patElectron_pt;   //!
   TBranch        *b_patElectron_eta;   //!
   TBranch        *b_patElectron_phi;   //!
   TBranch        *b_patElectron_energy;   //!
   TBranch        *b_patElectron_charge;   //!
   TBranch        *b_patElectron_isoChargedHadrons;   //!
   TBranch        *b_patElectron_isoNeutralHadrons;   //!
   TBranch        *b_patElectron_isoPhotons;   //!
   TBranch        *b_patElectron_isoPU;   //!
   TBranch        *b_patElectron_expectedMissingInnerHits;   //!
   TBranch        *b_patElectron_passConversionVeto;   //!
   TBranch        *b_PatEle_dr03TkSumPt;   //!
   TBranch        *b_PatEle_dr03EcalTowerSumEt;   //!
   TBranch        *b_PatEle_dr03HcalTowerSumEt;   //!
   TBranch        *b_PatEle_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_PatEle_dr03HcalDepth2TowerSumEt;   //!
   TBranch        *b_PatEle_dr04TkSumPt;   //!
   TBranch        *b_PatEle_dr04EcalTowerSumEt;   //!
   TBranch        *b_PatEle_dr04HcalTowerSumEt;   //!
   TBranch        *b_PatEle_dr04HcalDepth1TowerSumEt;   //!
   TBranch        *b_PatEle_dr04HcalDepth2TowerSumEt;   //!
   TBranch        *b_PatEle_e5x5;   //!
   TBranch        *b_PatEle_e1x5;   //!
   TBranch        *b_PatEle_e2x5Max;   //!
   TBranch        *b_PatEle_DeltaEtaSeedIn;   //!
   TBranch        *b_PatEle_full5x5SigmaIetaIeta;   //!
   TBranch        *b_PatEle_fulle5x5;   //!
   TBranch        *b_PatEle_fulle1x5;   //!
   TBranch        *b_PatEle_fulle2x5Max;   //!
   TBranch        *b_PatEle_ScEt;   //!
   TBranch        *b_PatEle_EtaSc;   //!
   TBranch        *b_PatEle_DeltaPhiIn;   //!
   TBranch        *b_PatEle_DeltaEtaIn;   //!
   TBranch        *b_PatEle_SigmaIetaIeta;   //!
   TBranch        *b_PatEle_EOverP;   //!
   TBranch        *b_PatEle_HOverE;   //!
   TBranch        *b_PatEle_relIso03;   //!
   TBranch        *b_PatEle_relIso04;   //!
   TBranch        *b_PatEle_miniRelIso;   //!
   TBranch        *b_PatEle_looseIdOnly;   //!
   TBranch        *b_PatEle_isoSum;   //!
   TBranch        *b_patElectron_gsfTrack_dxy_pv;   //!
   TBranch        *b_patElectron_dxyError;   //!
   TBranch        *b_patElectron_gsfTrack_dz_pv;   //!
   TBranch        *b_patElectron_dzError;   //!
   TBranch        *b_patElectron_gsfTrack_normChi2;   //!
   TBranch        *b_patElectron_gsfTrack_ndof;   //!
   TBranch        *b_patElectron_gsfTrack_vtx;   //!
   TBranch        *b_patElectron_gsfTrack_vty;   //!
   TBranch        *b_patElectron_gsfTrack_vtz;   //!
   TBranch        *b_PatEle_trackerDrivenSeed;   //!
   TBranch        *b_PatEle_ecalDrivenSeed;   //!
   TBranch        *b_patElectron_expectedMissingOuterHits;   //!
   TBranch        *b_PatEle_r9;   //!
   TBranch        *b_PatEle_full5x5_r9;   //!
   TBranch        *b_PatEle_full5x5SigmaIphiIphi;   //!
   TBranch        *b_PatEle_full5x5_hcalOverEcal;   //!
   TBranch        *b_PatEle_correctedEcalEnergy;   //!
   TBranch        *b_PatEle_ecalEnergy;   //!
   TBranch        *b_PatEle_superCluster_rawEnergy;   //!
   TBranch        *b_PatEle_superCluster_preshowerEnergy;   //!
   TBranch        *b_PatEle_superCluster_correctedEnergy;   //!
   TBranch        *b_PatEle_superCluster_energy;   //!
   TBranch        *b_PatEle_superCluster_clustersSize;   //!
   TBranch        *b_PatEle_superCluster_seed_energy;   //!
   TBranch        *b_PatEle_mcMatchId;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_HoverE;   //!
   TBranch        *b_Photon_phoR9;   //!
   TBranch        *b_Photon_SigmaIEtaIEta;   //!
   TBranch        *b_Photon_SigmaIPhiIPhi;   //!
   TBranch        *b_Photon_PFChIso;   //!
   TBranch        *b_Photon_PFPhoIso;   //!
   TBranch        *b_Photon_PFNeuIso;   //!
   TBranch        *b_Photon_EleVeto;   //!
   TBranch        *b_Photon_hasPixelSeed;   //!
   TBranch        *b_Photon_mcMatchId;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_rawpt;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_energy;   //!
   TBranch        *b_Jet_bDiscriminator_pfCMVA;   //!
   TBranch        *b_Jet_bDiscriminator_pfCISVV2;   //!
   TBranch        *b_Jet_pileupId;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Jet_neutralHadEnergyFraction;   //!
   TBranch        *b_Jet_neutralEmEmEnergyFraction;   //!
   TBranch        *b_Jet_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jet_chargedEmEnergyFraction;   //!
   TBranch        *b_Jet_muonEnergyFraction;   //!
   TBranch        *b_Jet_numberOfConstituents;   //!
   TBranch        *b_Jet_chargedMultiplicity;   //!
   TBranch        *b_Jet_neutralMultiplicity;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_electronEnergy;   //!
   TBranch        *b_Jet_photonEnergy;   //!
   TBranch        *b_UncorrJet_pt;   //!
   TBranch        *b_Jet_neuMultiplicity;   //!
   TBranch        *b_Jet_mcMatchFlav;   //!
   TBranch        *b_Jet_mcMatchId;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_corr_JECUp;   //!
   TBranch        *b_Jet_corr_JECDown;   //!
   TBranch        *b_Jet_corr;   //!
   TBranch        *b_Jet_et;   //!
   TBranch        *b_Jet_HFHMult;   //!
   TBranch        *b_Jet_HFEMMult;   //!
   TBranch        *b_Jet_HFHEF;   //!
   TBranch        *b_Jet_HFEMEF;   //!
   TBranch        *b_Gen_pt;   //!
   TBranch        *b_Gen_eta;   //!
   TBranch        *b_Gen_phi;   //!
   TBranch        *b_Gen_status;   //!
   TBranch        *b_Gen_pdg_id;   //!
   TBranch        *b_Gen_motherpdg_id;   //!
   TBranch        *b_Gen_charge;   //!
   TBranch        *b_Gen_mass;   //!
   TBranch        *b_Gen_grandmotherId;   //!
   TBranch        *b_Gen_isPromptHard;   //!
   TBranch        *b_LHEweight_id;   //!
   TBranch        *b_LHEweight_wgt;   //!

   SmallClass(TTree *tree=0);
   virtual ~SmallClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef SmallClass_cxx
SmallClass::SmallClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("TNT",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("TNT","");
      chain->Add("/cmsdata1/jebadi/DATA/TGJets_TuneCUETP8M1_13TeV_amcatnlo_madspin_pythia8_Summer16_tqaReducedss/TGJets_TuneCUETP8M1_13TeV_amcatnlo_madspin_pythia8_Summer16_tqaReducedss.root/TNT");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

SmallClass::~SmallClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t SmallClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t SmallClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void SmallClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Muon_mcMatchId = 0;
   Muon_pt = 0;
   Muon_eta = 0;
   Muon_phi = 0;
   Muon_p = 0;
   Muon_besttrack_dz = 0;
   Muon_charge = 0;
   Muon_tight = 0;
   Muon_medium = 0;
   Muon_soft = 0;
   Muon_pf = 0;
   Muon_isoCharged = 0;
   Muon_isoSum = 0;
   Muon_isoCharParPt = 0;
   Muon_isTrackerMuon = 0;
   Muon_validHits = 0;
   Muon_validHitsInner = 0;
   Muon_matchedStat = 0;
   Muon_dxy_pv = 0;
   Muon_dz_pv = 0;
   Muon_dxyError = 0;
   Muon_dzError = 0;
   Muon_ndof = 0;
   Muon_vtx = 0;
   Muon_vty = 0;
   Muon_vtz = 0;
   Muon_track_pt = 0;
   Muon_track_ptError = 0;
   Muon_isGlobal = 0;
   Muon_TLayers = 0;
   Muon_isoNeutralHadron = 0;
   Muon_isoPhoton = 0;
   Muon_isoPU = 0;
   Muon_dB = 0;
   Muon_besttrack_pt = 0;
   Muon_besttrack_ptError = 0;
   Muon_chi2LocalPosition = 0;
   Muon_trkKink = 0;
   Muon_segmentCompatibility = 0;
   Muon_validFraction = 0;
   Muon_pixelLayersWithMeasurement = 0;
   Muon_chi2_inertrk = 0;
   Muon_chi2_globaltrk = 0;
   patElectron_pt = 0;
   patElectron_eta = 0;
   patElectron_phi = 0;
   patElectron_energy = 0;
   patElectron_charge = 0;
   patElectron_isoChargedHadrons = 0;
   patElectron_isoNeutralHadrons = 0;
   patElectron_isoPhotons = 0;
   patElectron_isoPU = 0;
   patElectron_expectedMissingInnerHits = 0;
   patElectron_passConversionVeto = 0;
   PatEle_dr03TkSumPt = 0;
   PatEle_dr03EcalTowerSumEt = 0;
   PatEle_dr03HcalTowerSumEt = 0;
   PatEle_dr03HcalDepth1TowerSumEt = 0;
   PatEle_dr03HcalDepth2TowerSumEt = 0;
   PatEle_dr04TkSumPt = 0;
   PatEle_dr04EcalTowerSumEt = 0;
   PatEle_dr04HcalTowerSumEt = 0;
   PatEle_dr04HcalDepth1TowerSumEt = 0;
   PatEle_dr04HcalDepth2TowerSumEt = 0;
   PatEle_e5x5 = 0;
   PatEle_e1x5 = 0;
   PatEle_e2x5Max = 0;
   PatEle_DeltaEtaSeedIn = 0;
   PatEle_full5x5SigmaIetaIeta = 0;
   PatEle_fulle5x5 = 0;
   PatEle_fulle1x5 = 0;
   PatEle_fulle2x5Max = 0;
   PatEle_ScEt = 0;
   PatEle_EtaSc = 0;
   PatEle_DeltaPhiIn = 0;
   PatEle_DeltaEtaIn = 0;
   PatEle_SigmaIetaIeta = 0;
   PatEle_EOverP = 0;
   PatEle_HOverE = 0;
   PatEle_relIso03 = 0;
   PatEle_relIso04 = 0;
   PatEle_miniRelIso = 0;
   PatEle_looseIdOnly = 0;
   PatEle_isoSum = 0;
   patElectron_gsfTrack_dxy_pv = 0;
   patElectron_dxyError = 0;
   patElectron_gsfTrack_dz_pv = 0;
   patElectron_dzError = 0;
   patElectron_gsfTrack_normChi2 = 0;
   patElectron_gsfTrack_ndof = 0;
   patElectron_gsfTrack_vtx = 0;
   patElectron_gsfTrack_vty = 0;
   patElectron_gsfTrack_vtz = 0;
   PatEle_trackerDrivenSeed = 0;
   PatEle_ecalDrivenSeed = 0;
   patElectron_expectedMissingOuterHits = 0;
   PatEle_r9 = 0;
   PatEle_full5x5_r9 = 0;
   PatEle_full5x5SigmaIphiIphi = 0;
   PatEle_full5x5_hcalOverEcal = 0;
   PatEle_correctedEcalEnergy = 0;
   PatEle_ecalEnergy = 0;
   PatEle_superCluster_rawEnergy = 0;
   PatEle_superCluster_preshowerEnergy = 0;
   PatEle_superCluster_correctedEnergy = 0;
   PatEle_superCluster_energy = 0;
   PatEle_superCluster_clustersSize = 0;
   PatEle_superCluster_seed_energy = 0;
   PatEle_mcMatchId = 0;
   Photon_pt = 0;
   Photon_eta = 0;
   Photon_phi = 0;
   Photon_HoverE = 0;
   Photon_phoR9 = 0;
   Photon_SigmaIEtaIEta = 0;
   Photon_SigmaIPhiIPhi = 0;
   Photon_PFChIso = 0;
   Photon_PFPhoIso = 0;
   Photon_PFNeuIso = 0;
   Photon_EleVeto = 0;
   Photon_hasPixelSeed = 0;
   Photon_mcMatchId = 0;
   Jet_pt = 0;
   Jet_rawpt = 0;
   Jet_eta = 0;
   Jet_phi = 0;
   Jet_energy = 0;
   Jet_bDiscriminator_pfCMVA = 0;
   Jet_bDiscriminator_pfCISVV2 = 0;
   Jet_pileupId = 0;
   Jet_partonFlavour = 0;
   Jet_neutralHadEnergyFraction = 0;
   Jet_neutralEmEmEnergyFraction = 0;
   Jet_chargedHadronEnergyFraction = 0;
   Jet_chargedEmEnergyFraction = 0;
   Jet_muonEnergyFraction = 0;
   Jet_numberOfConstituents = 0;
   Jet_chargedMultiplicity = 0;
   Jet_neutralMultiplicity = 0;
   Jet_mass = 0;
   Jet_electronEnergy = 0;
   Jet_photonEnergy = 0;
   UncorrJet_pt = 0;
   Jet_neuMultiplicity = 0;
   Jet_mcMatchFlav = 0;
   Jet_mcMatchId = 0;
   Jet_area = 0;
   Jet_corr_JECUp = 0;
   Jet_corr_JECDown = 0;
   Jet_corr = 0;
   Jet_et = 0;
   Jet_HFHMult = 0;
   Jet_HFEMMult = 0;
   Jet_HFHEF = 0;
   Jet_HFEMEF = 0;
   Gen_pt = 0;
   Gen_eta = 0;
   Gen_phi = 0;
   Gen_status = 0;
   Gen_pdg_id = 0;
   Gen_motherpdg_id = 0;
   Gen_charge = 0;
   Gen_mass = 0;
   Gen_grandmotherId = 0;
   Gen_isPromptHard = 0;
   LHEweight_id = 0;
   LHEweight_wgt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNum_", &runNum_, &b_runNum_);
   fChain->SetBranchAddress("lumiBlockNum_", &lumiBlockNum_, &b_lumiBlockNum_);
   fChain->SetBranchAddress("evtNum_", &evtNum_, &b_evtNum_);
   fChain->SetBranchAddress("FixedGridRhoFastjetAll", &FixedGridRhoFastjetAll, &b_FixedGridRhoFastjetAll);
   fChain->SetBranchAddress("FixedGridRhoFastjetCentralNeutral", &FixedGridRhoFastjetCentralNeutral, &b_FixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("genweight", &genweight, &b_genweight);
   fChain->SetBranchAddress("nVert", &nVert, &b_nVert);
   fChain->SetBranchAddress("nLHEweight", &nLHEweight, &b_nLHEweight);
   fChain->SetBranchAddress("nTrueInt", &nTrueInt, &b_nTrueInt);
   fChain->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
   fChain->SetBranchAddress("HLT_Photon75", &HLT_Photon75, &b_HLT_Photon75);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_CaloJet500_NoJetID", &HLT_CaloJet500_NoJetID, &b_HLT_CaloJet500_NoJetID);
   fChain->SetBranchAddress("HLT_Photon90", &HLT_Photon90, &b_HLT_Photon90);
   fChain->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   fChain->SetBranchAddress("HLT_Photon155", &HLT_Photon155, &b_HLT_Photon155);
   fChain->SetBranchAddress("HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL", &HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL, &b_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL);
   fChain->SetBranchAddress("HLT_Mu17Photo22IdL", &HLT_Mu17Photo22IdL, &b_HLT_Mu17Photo22IdL);
   fChain->SetBranchAddress("HLT_Mu17Photo30IdL", &HLT_Mu17Photo30IdL, &b_HLT_Mu17Photo30IdL);
   fChain->SetBranchAddress("HLT_Mu17Photo35IdL", &HLT_Mu17Photo35IdL, &b_HLT_Mu17Photo35IdL);
   fChain->SetBranchAddress("HLT_IsoMu22", &HLT_IsoMu22, &b_HLT_IsoMu22);
   fChain->SetBranchAddress("HLT_IsoTkMu22", &HLT_IsoTkMu22, &b_HLT_IsoTkMu22);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_MuTk50", &HLT_MuTk50, &b_HLT_MuTk50);
   fChain->SetBranchAddress("HLT_Mu45eta2p1", &HLT_Mu45eta2p1, &b_HLT_Mu45eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoTkMu24", &HLT_IsoTkMu24, &b_HLT_IsoTkMu24);
   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
   fChain->SetBranchAddress("HLT_Ele17_CaloIdM_TrackIdM_PFJet30", &HLT_Ele17_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele8_CaloIdM_TrackIdM_PFJet30", &HLT_Ele8_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf", &HLT_Ele27_eta2p1_WPLoose_Gsf, &b_HLT_Ele27_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPTight_Gsf", &HLT_Ele27_eta2p1_WPTight_Gsf, &b_HLT_Ele27_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_trackingFailureFilter", &Flag_trackingFailureFilter, &b_Flag_trackingFailureFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("met_mass", &met_mass, &b_met_mass);
   fChain->SetBranchAddress("Met_type1PF_px", &Met_type1PF_px, &b_Met_type1PF_px);
   fChain->SetBranchAddress("Met_type1PF_py", &Met_type1PF_py, &b_Met_type1PF_py);
   fChain->SetBranchAddress("Met_type1PF_pz", &Met_type1PF_pz, &b_Met_type1PF_pz);
   fChain->SetBranchAddress("Met_type1PF_pt", &Met_type1PF_pt, &b_Met_type1PF_pt);
   fChain->SetBranchAddress("Met_type1PF_phi", &Met_type1PF_phi, &b_Met_type1PF_phi);
   fChain->SetBranchAddress("Met_type1PF_sumEt", &Met_type1PF_sumEt, &b_Met_type1PF_sumEt);
   fChain->SetBranchAddress("met_rawPt", &met_rawPt, &b_met_rawPt);
   fChain->SetBranchAddress("met_rawPhi", &met_rawPhi, &b_met_rawPhi);
   fChain->SetBranchAddress("met_rawSumEt", &met_rawSumEt, &b_met_rawSumEt);
   fChain->SetBranchAddress("met_genPt", &met_genPt, &b_met_genPt);
   fChain->SetBranchAddress("met_genPhi", &met_genPhi, &b_met_genPhi);
   fChain->SetBranchAddress("met_genEta", &met_genEta, &b_met_genEta);
   fChain->SetBranchAddress("njet", &njet, &b_njet);
   fChain->SetBranchAddress("ngenPartAll", &ngenPartAll, &b_ngenPartAll);
   fChain->SetBranchAddress("ngamma", &ngamma, &b_ngamma);
   fChain->SetBranchAddress("nsellepton", &nsellepton, &b_nsellepton);
   fChain->SetBranchAddress("Muon_mcMatchId", &Muon_mcMatchId, &b_Muon_mcMatchId);
   fChain->SetBranchAddress("Muon_pt", &Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_eta", &Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_phi", &Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_p", &Muon_p, &b_Muon_p);
   fChain->SetBranchAddress("Muon_besttrack_dz", &Muon_besttrack_dz, &b_Muon_besttrack_dz);
   fChain->SetBranchAddress("Muon_charge", &Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_tight", &Muon_tight, &b_Muon_tight);
   fChain->SetBranchAddress("Muon_medium", &Muon_medium, &b_Muon_medium);
   fChain->SetBranchAddress("Muon_soft", &Muon_soft, &b_Muon_soft);
   fChain->SetBranchAddress("Muon_pf", &Muon_pf, &b_Muon_pf);
   fChain->SetBranchAddress("Muon_isoCharged", &Muon_isoCharged, &b_Muon_isoCharged);
   fChain->SetBranchAddress("Muon_isoSum", &Muon_isoSum, &b_Muon_isoSum);
   fChain->SetBranchAddress("Muon_isoCharParPt", &Muon_isoCharParPt, &b_Muon_isoCharParPt);
   fChain->SetBranchAddress("Muon_isTrackerMuon", &Muon_isTrackerMuon, &b_Muon_isTrackerMuon);
   fChain->SetBranchAddress("Muon_validHits", &Muon_validHits, &b_Muon_validHits);
   fChain->SetBranchAddress("Muon_validHitsInner", &Muon_validHitsInner, &b_Muon_validHitsInner);
   fChain->SetBranchAddress("Muon_matchedStat", &Muon_matchedStat, &b_Muon_matchedStat);
   fChain->SetBranchAddress("Muon_dxy_pv", &Muon_dxy_pv, &b_Muon_dxy_pv);
   fChain->SetBranchAddress("Muon_dz_pv", &Muon_dz_pv, &b_Muon_dz_pv);
   fChain->SetBranchAddress("Muon_dxyError", &Muon_dxyError, &b_Muon_dxyError);
   fChain->SetBranchAddress("Muon_dzError", &Muon_dzError, &b_Muon_dzError);
   fChain->SetBranchAddress("Muon_ndof", &Muon_ndof, &b_Muon_ndof);
   fChain->SetBranchAddress("Muon_vtx", &Muon_vtx, &b_Muon_vtx);
   fChain->SetBranchAddress("Muon_vty", &Muon_vty, &b_Muon_vty);
   fChain->SetBranchAddress("Muon_vtz", &Muon_vtz, &b_Muon_vtz);
   fChain->SetBranchAddress("Muon_track_pt", &Muon_track_pt, &b_Muon_track_pt);
   fChain->SetBranchAddress("Muon_track_ptError", &Muon_track_ptError, &b_Muon_track_ptError);
   fChain->SetBranchAddress("Muon_isGlobal", &Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_TLayers", &Muon_TLayers, &b_Muon_TLayers);
   fChain->SetBranchAddress("Muon_isoNeutralHadron", &Muon_isoNeutralHadron, &b_Muon_isoNeutralHadron);
   fChain->SetBranchAddress("Muon_isoPhoton", &Muon_isoPhoton, &b_Muon_isoPhoton);
   fChain->SetBranchAddress("Muon_isoPU", &Muon_isoPU, &b_Muon_isoPU);
   fChain->SetBranchAddress("Muon_dB", &Muon_dB, &b_Muon_dB);
   fChain->SetBranchAddress("Muon_besttrack_pt", &Muon_besttrack_pt, &b_Muon_besttrack_pt);
   fChain->SetBranchAddress("Muon_besttrack_ptError", &Muon_besttrack_ptError, &b_Muon_besttrack_ptError);
   fChain->SetBranchAddress("Muon_chi2LocalPosition", &Muon_chi2LocalPosition, &b_Muon_chi2LocalPosition);
   fChain->SetBranchAddress("Muon_trkKink", &Muon_trkKink, &b_Muon_trkKink);
   fChain->SetBranchAddress("Muon_segmentCompatibility", &Muon_segmentCompatibility, &b_Muon_segmentCompatibility);
   fChain->SetBranchAddress("Muon_validFraction", &Muon_validFraction, &b_Muon_validFraction);
   fChain->SetBranchAddress("Muon_pixelLayersWithMeasurement", &Muon_pixelLayersWithMeasurement, &b_Muon_pixelLayersWithMeasurement);
   fChain->SetBranchAddress("Muon_chi2_inertrk", &Muon_chi2_inertrk, &b_Muon_chi2_inertrk);
   fChain->SetBranchAddress("Muon_chi2_globaltrk", &Muon_chi2_globaltrk, &b_Muon_chi2_globaltrk);
   fChain->SetBranchAddress("patElectron_pt", &patElectron_pt, &b_patElectron_pt);
   fChain->SetBranchAddress("patElectron_eta", &patElectron_eta, &b_patElectron_eta);
   fChain->SetBranchAddress("patElectron_phi", &patElectron_phi, &b_patElectron_phi);
   fChain->SetBranchAddress("patElectron_energy", &patElectron_energy, &b_patElectron_energy);
   fChain->SetBranchAddress("patElectron_charge", &patElectron_charge, &b_patElectron_charge);
   fChain->SetBranchAddress("patElectron_isoChargedHadrons", &patElectron_isoChargedHadrons, &b_patElectron_isoChargedHadrons);
   fChain->SetBranchAddress("patElectron_isoNeutralHadrons", &patElectron_isoNeutralHadrons, &b_patElectron_isoNeutralHadrons);
   fChain->SetBranchAddress("patElectron_isoPhotons", &patElectron_isoPhotons, &b_patElectron_isoPhotons);
   fChain->SetBranchAddress("patElectron_isoPU", &patElectron_isoPU, &b_patElectron_isoPU);
   fChain->SetBranchAddress("patElectron_expectedMissingInnerHits", &patElectron_expectedMissingInnerHits, &b_patElectron_expectedMissingInnerHits);
   fChain->SetBranchAddress("patElectron_passConversionVeto", &patElectron_passConversionVeto, &b_patElectron_passConversionVeto);
   fChain->SetBranchAddress("PatEle_dr03TkSumPt", &PatEle_dr03TkSumPt, &b_PatEle_dr03TkSumPt);
   fChain->SetBranchAddress("PatEle_dr03EcalTowerSumEt", &PatEle_dr03EcalTowerSumEt, &b_PatEle_dr03EcalTowerSumEt);
   fChain->SetBranchAddress("PatEle_dr03HcalTowerSumEt", &PatEle_dr03HcalTowerSumEt, &b_PatEle_dr03HcalTowerSumEt);
   fChain->SetBranchAddress("PatEle_dr03HcalDepth1TowerSumEt", &PatEle_dr03HcalDepth1TowerSumEt, &b_PatEle_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("PatEle_dr03HcalDepth2TowerSumEt", &PatEle_dr03HcalDepth2TowerSumEt, &b_PatEle_dr03HcalDepth2TowerSumEt);
   fChain->SetBranchAddress("PatEle_dr04TkSumPt", &PatEle_dr04TkSumPt, &b_PatEle_dr04TkSumPt);
   fChain->SetBranchAddress("PatEle_dr04EcalTowerSumEt", &PatEle_dr04EcalTowerSumEt, &b_PatEle_dr04EcalTowerSumEt);
   fChain->SetBranchAddress("PatEle_dr04HcalTowerSumEt", &PatEle_dr04HcalTowerSumEt, &b_PatEle_dr04HcalTowerSumEt);
   fChain->SetBranchAddress("PatEle_dr04HcalDepth1TowerSumEt", &PatEle_dr04HcalDepth1TowerSumEt, &b_PatEle_dr04HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("PatEle_dr04HcalDepth2TowerSumEt", &PatEle_dr04HcalDepth2TowerSumEt, &b_PatEle_dr04HcalDepth2TowerSumEt);
   fChain->SetBranchAddress("PatEle_e5x5", &PatEle_e5x5, &b_PatEle_e5x5);
   fChain->SetBranchAddress("PatEle_e1x5", &PatEle_e1x5, &b_PatEle_e1x5);
   fChain->SetBranchAddress("PatEle_e2x5Max", &PatEle_e2x5Max, &b_PatEle_e2x5Max);
   fChain->SetBranchAddress("PatEle_DeltaEtaSeedIn", &PatEle_DeltaEtaSeedIn, &b_PatEle_DeltaEtaSeedIn);
   fChain->SetBranchAddress("PatEle_full5x5SigmaIetaIeta", &PatEle_full5x5SigmaIetaIeta, &b_PatEle_full5x5SigmaIetaIeta);
   fChain->SetBranchAddress("PatEle_fulle5x5", &PatEle_fulle5x5, &b_PatEle_fulle5x5);
   fChain->SetBranchAddress("PatEle_fulle1x5", &PatEle_fulle1x5, &b_PatEle_fulle1x5);
   fChain->SetBranchAddress("PatEle_fulle2x5Max", &PatEle_fulle2x5Max, &b_PatEle_fulle2x5Max);
   fChain->SetBranchAddress("PatEle_ScEt", &PatEle_ScEt, &b_PatEle_ScEt);
   fChain->SetBranchAddress("PatEle_EtaSc", &PatEle_EtaSc, &b_PatEle_EtaSc);
   fChain->SetBranchAddress("PatEle_DeltaPhiIn", &PatEle_DeltaPhiIn, &b_PatEle_DeltaPhiIn);
   fChain->SetBranchAddress("PatEle_DeltaEtaIn", &PatEle_DeltaEtaIn, &b_PatEle_DeltaEtaIn);
   fChain->SetBranchAddress("PatEle_SigmaIetaIeta", &PatEle_SigmaIetaIeta, &b_PatEle_SigmaIetaIeta);
   fChain->SetBranchAddress("PatEle_EOverP", &PatEle_EOverP, &b_PatEle_EOverP);
   fChain->SetBranchAddress("PatEle_HOverE", &PatEle_HOverE, &b_PatEle_HOverE);
   fChain->SetBranchAddress("PatEle_relIso03", &PatEle_relIso03, &b_PatEle_relIso03);
   fChain->SetBranchAddress("PatEle_relIso04", &PatEle_relIso04, &b_PatEle_relIso04);
   fChain->SetBranchAddress("PatEle_miniRelIso", &PatEle_miniRelIso, &b_PatEle_miniRelIso);
   fChain->SetBranchAddress("PatEle_looseIdOnly", &PatEle_looseIdOnly, &b_PatEle_looseIdOnly);
   fChain->SetBranchAddress("PatEle_isoSum", &PatEle_isoSum, &b_PatEle_isoSum);
   fChain->SetBranchAddress("patElectron_gsfTrack_dxy_pv", &patElectron_gsfTrack_dxy_pv, &b_patElectron_gsfTrack_dxy_pv);
   fChain->SetBranchAddress("patElectron_dxyError", &patElectron_dxyError, &b_patElectron_dxyError);
   fChain->SetBranchAddress("patElectron_gsfTrack_dz_pv", &patElectron_gsfTrack_dz_pv, &b_patElectron_gsfTrack_dz_pv);
   fChain->SetBranchAddress("patElectron_dzError", &patElectron_dzError, &b_patElectron_dzError);
   fChain->SetBranchAddress("patElectron_gsfTrack_normChi2", &patElectron_gsfTrack_normChi2, &b_patElectron_gsfTrack_normChi2);
   fChain->SetBranchAddress("patElectron_gsfTrack_ndof", &patElectron_gsfTrack_ndof, &b_patElectron_gsfTrack_ndof);
   fChain->SetBranchAddress("patElectron_gsfTrack_vtx", &patElectron_gsfTrack_vtx, &b_patElectron_gsfTrack_vtx);
   fChain->SetBranchAddress("patElectron_gsfTrack_vty", &patElectron_gsfTrack_vty, &b_patElectron_gsfTrack_vty);
   fChain->SetBranchAddress("patElectron_gsfTrack_vtz", &patElectron_gsfTrack_vtz, &b_patElectron_gsfTrack_vtz);
   fChain->SetBranchAddress("PatEle_trackerDrivenSeed", &PatEle_trackerDrivenSeed, &b_PatEle_trackerDrivenSeed);
   fChain->SetBranchAddress("PatEle_ecalDrivenSeed", &PatEle_ecalDrivenSeed, &b_PatEle_ecalDrivenSeed);
   fChain->SetBranchAddress("patElectron_expectedMissingOuterHits", &patElectron_expectedMissingOuterHits, &b_patElectron_expectedMissingOuterHits);
   fChain->SetBranchAddress("PatEle_r9", &PatEle_r9, &b_PatEle_r9);
   fChain->SetBranchAddress("PatEle_full5x5_r9", &PatEle_full5x5_r9, &b_PatEle_full5x5_r9);
   fChain->SetBranchAddress("PatEle_full5x5SigmaIphiIphi", &PatEle_full5x5SigmaIphiIphi, &b_PatEle_full5x5SigmaIphiIphi);
   fChain->SetBranchAddress("PatEle_full5x5_hcalOverEcal", &PatEle_full5x5_hcalOverEcal, &b_PatEle_full5x5_hcalOverEcal);
   fChain->SetBranchAddress("PatEle_correctedEcalEnergy", &PatEle_correctedEcalEnergy, &b_PatEle_correctedEcalEnergy);
   fChain->SetBranchAddress("PatEle_ecalEnergy", &PatEle_ecalEnergy, &b_PatEle_ecalEnergy);
   fChain->SetBranchAddress("PatEle_superCluster_rawEnergy", &PatEle_superCluster_rawEnergy, &b_PatEle_superCluster_rawEnergy);
   fChain->SetBranchAddress("PatEle_superCluster_preshowerEnergy", &PatEle_superCluster_preshowerEnergy, &b_PatEle_superCluster_preshowerEnergy);
   fChain->SetBranchAddress("PatEle_superCluster_correctedEnergy", &PatEle_superCluster_correctedEnergy, &b_PatEle_superCluster_correctedEnergy);
   fChain->SetBranchAddress("PatEle_superCluster_energy", &PatEle_superCluster_energy, &b_PatEle_superCluster_energy);
   fChain->SetBranchAddress("PatEle_superCluster_clustersSize", &PatEle_superCluster_clustersSize, &b_PatEle_superCluster_clustersSize);
   fChain->SetBranchAddress("PatEle_superCluster_seed_energy", &PatEle_superCluster_seed_energy, &b_PatEle_superCluster_seed_energy);
   fChain->SetBranchAddress("PatEle_mcMatchId", &PatEle_mcMatchId, &b_PatEle_mcMatchId);
   fChain->SetBranchAddress("Photon_pt", &Photon_pt, &b_Photon_pt);
   fChain->SetBranchAddress("Photon_eta", &Photon_eta, &b_Photon_eta);
   fChain->SetBranchAddress("Photon_phi", &Photon_phi, &b_Photon_phi);
   fChain->SetBranchAddress("Photon_HoverE", &Photon_HoverE, &b_Photon_HoverE);
   fChain->SetBranchAddress("Photon_phoR9", &Photon_phoR9, &b_Photon_phoR9);
   fChain->SetBranchAddress("Photon_SigmaIEtaIEta", &Photon_SigmaIEtaIEta, &b_Photon_SigmaIEtaIEta);
   fChain->SetBranchAddress("Photon_SigmaIPhiIPhi", &Photon_SigmaIPhiIPhi, &b_Photon_SigmaIPhiIPhi);
   fChain->SetBranchAddress("Photon_PFChIso", &Photon_PFChIso, &b_Photon_PFChIso);
   fChain->SetBranchAddress("Photon_PFPhoIso", &Photon_PFPhoIso, &b_Photon_PFPhoIso);
   fChain->SetBranchAddress("Photon_PFNeuIso", &Photon_PFNeuIso, &b_Photon_PFNeuIso);
   fChain->SetBranchAddress("Photon_EleVeto", &Photon_EleVeto, &b_Photon_EleVeto);
   fChain->SetBranchAddress("Photon_hasPixelSeed", &Photon_hasPixelSeed, &b_Photon_hasPixelSeed);
   fChain->SetBranchAddress("Photon_mcMatchId", &Photon_mcMatchId, &b_Photon_mcMatchId);
   fChain->SetBranchAddress("Jet_pt", &Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_rawpt", &Jet_rawpt, &b_Jet_rawpt);
   fChain->SetBranchAddress("Jet_eta", &Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", &Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_energy", &Jet_energy, &b_Jet_energy);
   fChain->SetBranchAddress("Jet_bDiscriminator_pfCMVA", &Jet_bDiscriminator_pfCMVA, &b_Jet_bDiscriminator_pfCMVA);
   fChain->SetBranchAddress("Jet_bDiscriminator_pfCISVV2", &Jet_bDiscriminator_pfCISVV2, &b_Jet_bDiscriminator_pfCISVV2);
   fChain->SetBranchAddress("Jet_pileupId", &Jet_pileupId, &b_Jet_pileupId);
   fChain->SetBranchAddress("Jet_partonFlavour", &Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("Jet_neutralHadEnergyFraction", &Jet_neutralHadEnergyFraction, &b_Jet_neutralHadEnergyFraction);
   fChain->SetBranchAddress("Jet_neutralEmEmEnergyFraction", &Jet_neutralEmEmEnergyFraction, &b_Jet_neutralEmEmEnergyFraction);
   fChain->SetBranchAddress("Jet_chargedHadronEnergyFraction", &Jet_chargedHadronEnergyFraction, &b_Jet_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jet_chargedEmEnergyFraction", &Jet_chargedEmEnergyFraction, &b_Jet_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jet_muonEnergyFraction", &Jet_muonEnergyFraction, &b_Jet_muonEnergyFraction);
   fChain->SetBranchAddress("Jet_numberOfConstituents", &Jet_numberOfConstituents, &b_Jet_numberOfConstituents);
   fChain->SetBranchAddress("Jet_chargedMultiplicity", &Jet_chargedMultiplicity, &b_Jet_chargedMultiplicity);
   fChain->SetBranchAddress("Jet_neutralMultiplicity", &Jet_neutralMultiplicity, &b_Jet_neutralMultiplicity);
   fChain->SetBranchAddress("Jet_mass", &Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_electronEnergy", &Jet_electronEnergy, &b_Jet_electronEnergy);
   fChain->SetBranchAddress("Jet_photonEnergy", &Jet_photonEnergy, &b_Jet_photonEnergy);
   fChain->SetBranchAddress("UncorrJet_pt", &UncorrJet_pt, &b_UncorrJet_pt);
   fChain->SetBranchAddress("Jet_neuMultiplicity", &Jet_neuMultiplicity, &b_Jet_neuMultiplicity);
   fChain->SetBranchAddress("Jet_mcMatchFlav", &Jet_mcMatchFlav, &b_Jet_mcMatchFlav);
   fChain->SetBranchAddress("Jet_mcMatchId", &Jet_mcMatchId, &b_Jet_mcMatchId);
   fChain->SetBranchAddress("Jet_area", &Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_corr_JECUp", &Jet_corr_JECUp, &b_Jet_corr_JECUp);
   fChain->SetBranchAddress("Jet_corr_JECDown", &Jet_corr_JECDown, &b_Jet_corr_JECDown);
   fChain->SetBranchAddress("Jet_corr", &Jet_corr, &b_Jet_corr);
   fChain->SetBranchAddress("Jet_et", &Jet_et, &b_Jet_et);
   fChain->SetBranchAddress("Jet_HFHMult", &Jet_HFHMult, &b_Jet_HFHMult);
   fChain->SetBranchAddress("Jet_HFEMMult", &Jet_HFEMMult, &b_Jet_HFEMMult);
   fChain->SetBranchAddress("Jet_HFHEF", &Jet_HFHEF, &b_Jet_HFHEF);
   fChain->SetBranchAddress("Jet_HFEMEF", &Jet_HFEMEF, &b_Jet_HFEMEF);
   fChain->SetBranchAddress("Gen_pt", &Gen_pt, &b_Gen_pt);
   fChain->SetBranchAddress("Gen_eta", &Gen_eta, &b_Gen_eta);
   fChain->SetBranchAddress("Gen_phi", &Gen_phi, &b_Gen_phi);
   fChain->SetBranchAddress("Gen_status", &Gen_status, &b_Gen_status);
   fChain->SetBranchAddress("Gen_pdg_id", &Gen_pdg_id, &b_Gen_pdg_id);
   fChain->SetBranchAddress("Gen_motherpdg_id", &Gen_motherpdg_id, &b_Gen_motherpdg_id);
   fChain->SetBranchAddress("Gen_charge", &Gen_charge, &b_Gen_charge);
   fChain->SetBranchAddress("Gen_mass", &Gen_mass, &b_Gen_mass);
   fChain->SetBranchAddress("Gen_grandmotherId", &Gen_grandmotherId, &b_Gen_grandmotherId);
   fChain->SetBranchAddress("Gen_isPromptHard", &Gen_isPromptHard, &b_Gen_isPromptHard);
   fChain->SetBranchAddress("LHEweight_id", &LHEweight_id, &b_LHEweight_id);
   fChain->SetBranchAddress("LHEweight_wgt", &LHEweight_wgt, &b_LHEweight_wgt);
   Notify();
}

Bool_t SmallClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void SmallClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t SmallClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef SmallClass_cxx
