#include "plotterPreselection.h"

void plotterPreselection(){ 
  gROOT->Reset();
  gStyle->SetCanvasColor(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetOptStat(0);
  gStyle->SetPalette(1,0);
  gStyle->SetTitleX(0.5); //title X location 
  gStyle->SetTitleY(0.96); //title Y location 
  gStyle->SetPaintTextFormat(".2f");
  gErrorIgnoreLevel = kError;
  using namespace std;

  vector<TString> name;                vector<int> bin;    vector<float> Min;   vector<float> Max;    vector<TString> axis;
  name.push_back("NVertices");         bin.push_back(90);  Min.push_back(-0.5); Max.push_back(89.5);  axis.push_back("N(vertices)");
  name.push_back("ZMass");             bin.push_back(20);  Min.push_back(70);   Max.push_back(110);   axis.push_back("Z Mass [GeV]");
  name.push_back("TprimeMass");        bin.push_back(40);  Min.push_back(0);    Max.push_back(2800);  axis.push_back("M(Z,top) [GeV]");
  name.push_back("TopPt");             bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top p_{T} [GeV]");
  name.push_back("ZPt");               bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Z p_{T} [GeV]");
  name.push_back("TprimePt");          bin.push_back(40);  Min.push_back(0);    Max.push_back(800);   axis.push_back("Tprime p_{T} [GeV]");
  name.push_back("TopMass");           bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top Mass [GeV]");
  name.push_back("Electron1Pt");       bin.push_back(40);  Min.push_back(0);    Max.push_back(800);   axis.push_back("Lead Electron p_{T} [GeV]");
  name.push_back("Electron2Pt");       bin.push_back(40);  Min.push_back(0);    Max.push_back(400);   axis.push_back("Sublead Electron p_{T} [GeV]");
  name.push_back("Muon1Pt");           bin.push_back(40);  Min.push_back(0);    Max.push_back(800);   axis.push_back("Lead Muon p_{T} [GeV]");
  name.push_back("Muon2Pt");           bin.push_back(40);  Min.push_back(0);    Max.push_back(400);   axis.push_back("Sublead Muon p_{T} [GeV]");
  name.push_back("Jet1ResolvedPt");    bin.push_back(40);  Min.push_back(0);    Max.push_back(900);   axis.push_back("jet1 (resolved) p_{T} [GeV]");
  name.push_back("Jet2ResolvedPt");    bin.push_back(40);  Min.push_back(0);    Max.push_back(500);   axis.push_back("jet2 (resolved) p_{T} [GeV]");
  name.push_back("Jet3ResolvedPt");    bin.push_back(40);  Min.push_back(0);    Max.push_back(300);   axis.push_back("jet3 (resolved) p_{T} [GeV]");
  name.push_back("TopEta");            bin.push_back(40);  Min.push_back(-3);   Max.push_back(3);     axis.push_back("Top #eta");
  name.push_back("ZEta");              bin.push_back(40);  Min.push_back(-5);   Max.push_back(5);     axis.push_back("Z #eta");
  name.push_back("Electron1Eta");      bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("Lead Electron #eta");
  name.push_back("Electron2Eta");      bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("Sublead Electron #eta");
  name.push_back("Muon1Eta");          bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("Lead Muon #eta");
  name.push_back("Muon2Eta");          bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("Sublead Muon #eta");
  name.push_back("Jet1ResolvedEta");   bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("jet1 (resolved) #eta");
  name.push_back("Jet2ResolvedEta");   bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("jet2 (resolved) #eta");
  name.push_back("Jet3ResolvedEta");   bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("jet3 (resolved) #eta");
  name.push_back("deltaRZTop");        bin.push_back(40);  Min.push_back(0);    Max.push_back(6);     axis.push_back("#DeltaR(Z,top)");
  name.push_back("deltaREle1Ele2");    bin.push_back(40);  Min.push_back(0);    Max.push_back(4);     axis.push_back("#DeltaR(ele1,ele2)");
  name.push_back("deltaRMuo1Muo2");    bin.push_back(40);  Min.push_back(0);    Max.push_back(4);     axis.push_back("#DeltaR(muo1,muo2)");
  name.push_back("NumSelJets");        bin.push_back(16);  Min.push_back(-0.5); Max.push_back(15.5);  axis.push_back("Number of jets");
  name.push_back("NumSelForwardJets"); bin.push_back(5);   Min.push_back(-0.5); Max.push_back(5.5);   axis.push_back("Number of forward jets");
  name.push_back("NumSelBJetsL");      bin.push_back(5);   Min.push_back(-0.5); Max.push_back(5.5);   axis.push_back("Number of loose b-jets");
  name.push_back("NumSelBJetsM");      bin.push_back(5);   Min.push_back(-0.5); Max.push_back(5.5);   axis.push_back("Number of medium b-jets");
  //name.push_back("NumSelBJetsT");      bin.push_back(5);   Min.push_back(-0.5); Max.push_back(5.5);   axis.push_back("Number of tight b-jets");
  name.push_back("NumSelWJets");       bin.push_back(5);   Min.push_back(-0.5); Max.push_back(5.5);   axis.push_back("Number of W-jets");
  name.push_back("NumSelTopJets");     bin.push_back(5);   Min.push_back(-0.5); Max.push_back(5.5);   axis.push_back("Number of top-jets");
  name.push_back("HT");                bin.push_back(40);  Min.push_back(0);    Max.push_back(2500);  axis.push_back("HT");
  name.push_back("WMassResolved3");    bin.push_back(50);  Min.push_back(0);    Max.push_back(500);   axis.push_back("W mass resolved [GeV]");
  name.push_back("ZPhi");               bin.push_back(40);  Min.push_back(-5);   Max.push_back(5);     axis.push_back("Z #phi");
  name.push_back("TopSoftMass");       bin.push_back(30);  Min.push_back(110);  Max.push_back(210);   axis.push_back("Top Softdrop Mass [GeV]");
  name.push_back("WMass");             bin.push_back(50);  Min.push_back(65);   Max.push_back(105);   axis.push_back("W Pruned Mass [GeV]");
  name.push_back("TopSubjet");         bin.push_back(50);  Min.push_back(0);    Max.push_back(1);     axis.push_back("Top #tau_{32}");
  name.push_back("WSubjet");           bin.push_back(50);  Min.push_back(0);    Max.push_back(1);     axis.push_back("W #tau_{21}");
  //name.push_back("TopMassMerged");      bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top (merged) Mass [GeV]");
  //name.push_back("TopMassPartial");     bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top (partial) Mass [GeV]");
  //name.push_back("TopMassResolved");    bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top (resolved) Mass [GeV]");
  //name.push_back("TopPtMerged");        bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top (merged) p_{T} [GeV]");
  //name.push_back("TopPtPartial");       bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top (partial) p_{T} [GeV]");
  //name.push_back("TopPtResolved");      bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("Top (resolved) p_{T} [GeV]");
  //name.push_back("TopEtaMerged");       bin.push_back(40);  Min.push_back(-3);   Max.push_back(3);     axis.push_back("Top (merged) #eta");
  //name.push_back("TopEtaPartial");      bin.push_back(40);  Min.push_back(-3);   Max.push_back(3);     axis.push_back("Top (partial) #eta");
  //name.push_back("TopEtaResolved");     bin.push_back(40);  Min.push_back(-3);   Max.push_back(3);     axis.push_back("Top (resolved) #eta");
  //name.push_back("TprimeResolvedMass"); bin.push_back(40);  Min.push_back(0);    Max.push_back(2800);  axis.push_back("M(Z,top) (merged) [GeV]");
  //name.push_back("TprimePartialMass");  bin.push_back(40);  Min.push_back(0);    Max.push_back(2800);  axis.push_back("M(Z,top) (partial) [GeV]");
  //name.push_back("TprimeMergedMass");   bin.push_back(40);  Min.push_back(0);    Max.push_back(2800);  axis.push_back("M(Z,top) (partial) [GeV]");
  //name.push_back("TprimeResolvedPt");   bin.push_back(40);  Min.push_back(0);    Max.push_back(800);   axis.push_back("Tprime (merged) p_{T} [GeV]");
  //name.push_back("TprimePartialPt");    bin.push_back(40);  Min.push_back(0);    Max.push_back(800);   axis.push_back("Tprime (partial) p_{T} [GeV]");
  //name.push_back("TprimeMergedPt");     bin.push_back(40);  Min.push_back(0);    Max.push_back(800);   axis.push_back("Tprime (partial) p_{T} [GeV]");
  name.push_back("Jet1ForwardPt");      bin.push_back(40);  Min.push_back(0);    Max.push_back(500);   axis.push_back("jet 1 forward p_{T} [GeV]");
  //name.push_back("Jet2ForwardPt");      bin.push_back(20);  Min.push_back(0);    Max.push_back(250);   axis.push_back("jet 2 forward p_{T} [GeV]");
  //name.push_back("Jet3ForwardPt");      bin.push_back(20);  Min.push_back(0);    Max.push_back(120);   axis.push_back("jet 3 forward p_{T} [GeV]");
  name.push_back("Jet1PartialPt");      bin.push_back(40);  Min.push_back(0);    Max.push_back(500);   axis.push_back("W-jet (partial) p_{T} [GeV]");
  name.push_back("Jet2PartialPt");      bin.push_back(40);  Min.push_back(0);    Max.push_back(500);   axis.push_back("jet (partial) p_{T} [GeV]");
  name.push_back("Jet1MergedPt");       bin.push_back(40);  Min.push_back(0);    Max.push_back(1000);  axis.push_back("top-jet (merged) p_{T} [GeV]");
  name.push_back("Jet1ForwardEta");     bin.push_back(40);  Min.push_back(-5.7); Max.push_back(5.7);   axis.push_back("jet 1 forward #eta");
  //name.push_back("Jet2ForwardEta");     bin.push_back(40);  Min.push_back(-5.7); Max.push_back(5.7);   axis.push_back("jet 2 forward #eta");
  //name.push_back("Jet3ForwardEta");     bin.push_back(40);  Min.push_back(-5.7); Max.push_back(5.7);   axis.push_back("jet 3 forward #eta");
  name.push_back("Jet1PartialEta");     bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("W-jet (partial) #eta");
  name.push_back("Jet2PartialEta");     bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("jet (partial) #eta");
  name.push_back("Jet1MergedEta");      bin.push_back(40);  Min.push_back(-2.7); Max.push_back(2.7);   axis.push_back("top-jet (merged) #eta");
  ////name.push_back("deltaRb1b2");         bin.push_back(40);  Min.push_back(0);    Max.push_back(6);     axis.push_back("#DeltaR(b,b)");
  ////name.push_back("deltaRb1Lep1");       bin.push_back(40);  Min.push_back(0);    Max.push_back(6);     axis.push_back("#DeltaR(b1,lep1)");
  ////name.push_back("deltaRb1Lep2");       bin.push_back(40);  Min.push_back(0);    Max.push_back(6);     axis.push_back("#DeltaR(b1,lep2)");
  ////name.push_back("deltaRb2Lep1");       bin.push_back(40);  Min.push_back(0);    Max.push_back(6);     axis.push_back("#DeltaR(b2,lep1)");
  ////name.push_back("deltaRb2Lep2");       bin.push_back(40);  Min.push_back(0);    Max.push_back(6);     axis.push_back("#DeltaR(b2,lep2)");
  
  for(int lep=0; lep<3; lep++){
    for(int i=0; i<name.size(); i++){
      const char *plot = name[i];
      char CUT[1000]; char CUTmuo1[1000]; char CUTmuo2[1000]; char CUTele1[1000]; char CUTele2[1000]; char CUTtri1[1000]; char CUTtri2[1000]; char CUTtri3[1000]; char CUTtri4[1000]; char CUTpup1[1000]; char CUTpup2[1000]; char CUTbta1[1000]; char CUTbta2[1000]; char CUTtop1[1000]; char CUTtop2[1000]; char CUTfor1[1000]; char CUTfor2[1000]; char CUTwje1[1000]; char CUTwje2[1000];
      sprintf(CUT,    "PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTpup1,"PUWeightUP  *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTpup2,"PUWeightDOWN*w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTbta1,"PUWeight    *w_BtagUp  *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTbta2,"PUWeight    *w_BtagDown*w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTfor1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTfor2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTtop1,"PUWeight    *w_Btag    *w_topJetDown*w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTtop2,"PUWeight    *w_Btag    *w_topJetUp  *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTwje1,"PUWeight    *w_Btag    *w_topJet    *w_WJetDown*w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTwje2,"PUWeight    *w_Btag    *w_topJet    *w_WJetUp  *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTtri1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuonUp  *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTtri2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuonDown*w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTtri3,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElecUp  *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTtri4,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElecDown*w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTmuo1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1Down*w_Muon2Down*w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTmuo2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1Up  *w_Muon2Up  *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTele1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1Down*w_Electron2Down*genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      sprintf(CUTele2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1Up  *w_Electron2Up  *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
      if(lep==1){
	sprintf(CUT,    "PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTpup1,"PUWeightUP  *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTpup2,"PUWeightDOWN*w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTbta1,"PUWeight    *w_BtagUp  *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTbta2,"PUWeight    *w_BtagDown*w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTfor1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTfor2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTtop1,"PUWeight    *w_Btag    *w_topJetDown*w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTtop2,"PUWeight    *w_Btag    *w_topJetUp  *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTwje1,"PUWeight    *w_Btag    *w_topJet    *w_WJetDown*w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTwje2,"PUWeight    *w_Btag    *w_topJet    *w_WJetUp  *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTtri1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuonUp  *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTtri2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuonDown*w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTtri3,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTtri4,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTmuo1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1Down*w_Muon2Down*genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTmuo2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1Up  *w_Muon2Up  *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTele1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	sprintf(CUTele2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
      } else if(lep==2){
	sprintf(CUT,    "PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTpup1,"PUWeightUP  *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTpup2,"PUWeightDOWN*w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTbta1,"PUWeight    *w_BtagUp  *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTbta2,"PUWeight    *w_BtagDown*w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTfor1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTfor2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTtop1,"PUWeight    *w_Btag    *w_topJetDown*w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTtop2,"PUWeight    *w_Btag    *w_topJetUp  *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTwje1,"PUWeight    *w_Btag    *w_topJet    *w_WJetDown*w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTwje2,"PUWeight    *w_Btag    *w_topJet    *w_WJetUp  *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTtri1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTtri2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTtri3,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElecUp  *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTtri4,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElecDown*w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTmuo1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTmuo2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTele1,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1Down*w_Electron2Down*genWeight*(category1==1||category3==1||category5==1)");
	sprintf(CUTele2,"PUWeight    *w_Btag    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1Up  *w_Electron2Up  *genWeight*(category1==1||category3==1||category5==1)");
      }
      if(name[i]=="NumSelBJetsL"){
	cout<<"NumSelBJetsL"<<endl;
	sprintf(CUT,    "PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTpup1,"PUWeightUP  *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTpup2,"PUWeightDOWN*w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTbta1,"PUWeight    *w_BtagLooseUp  *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTbta2,"PUWeight    *w_BtagLooseDown*w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTfor1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTfor2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTtop1,"PUWeight    *w_BtagLoose    *w_topJetDown*w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTtop2,"PUWeight    *w_BtagLoose    *w_topJetUp  *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTwje1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJetDown*w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTwje2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJetUp  *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTtri1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuonUp  *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTtri2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuonDown*w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTtri3,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElecUp  *w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTtri4,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElecDown*w_Muon1    *w_Muon2    *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTmuo1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1Down*w_Muon2Down*w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTmuo2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1Up  *w_Muon2Up  *w_Electron1    *w_Electron2    *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTele1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1Down*w_Electron2Down*genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	sprintf(CUTele2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_TrigElec    *w_Muon1    *w_Muon2    *w_Electron1Up  *w_Electron2Up  *genWeight*(category0==1||category1==1||category2==1||category3==1||category4==1||category5==1)");
	if(lep==1){
	  sprintf(CUT,    "PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTpup1,"PUWeightUP  *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTpup2,"PUWeightDOWN*w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTbta1,"PUWeight    *w_BtagLooseUp  *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTbta2,"PUWeight    *w_BtagLooseDown*w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTfor1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTfor2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTtop1,"PUWeight    *w_BtagLoose    *w_topJetDown*w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTtop2,"PUWeight    *w_BtagLoose    *w_topJetUp  *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTwje1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJetDown*w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTwje2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJetUp  *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTtri1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuonUp  *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTtri2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuonDown*w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTtri3,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTtri4,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTmuo1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1Down*w_Muon2Down*genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTmuo2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1Up  *w_Muon2Up  *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTele1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	  sprintf(CUTele2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigMuon    *w_Muon1    *w_Muon2    *genWeight*(category0==1||category2==1||category4==1)");
	} else if(lep==2){
	  sprintf(CUT,    "PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTpup1,"PUWeightUP  *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTpup2,"PUWeightDOWN*w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTbta1,"PUWeight    *w_BtagLooseUp  *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTbta2,"PUWeight    *w_BtagLooseDown*w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTfor1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTfor2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTtop1,"PUWeight    *w_BtagLoose    *w_topJetDown*w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTtop2,"PUWeight    *w_BtagLoose    *w_topJetUp  *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTwje1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJetDown*w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTwje2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJetUp  *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTtri1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTtri2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTtri3,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElecUp  *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTtri4,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElecDown*w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTmuo1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTmuo2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1    *w_Electron2    *genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTele1,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1Down*w_Electron2Down*genWeight*(category1==1||category3==1||category5==1)");
	  sprintf(CUTele2,"PUWeight    *w_BtagLoose    *w_topJet    *w_WJet    *w_TrigElec    *w_Electron1Up  *w_Electron2Up  *genWeight*(category1==1||category3==1||category5==1)");
	}
      }

      MakeHistos(CUT,plot,bin[i],Min[i],Max[i],0,data_SR,background_SR,DY_1_SR,DY_2_SR,DY_3_SR,DY_4_SR,DY_5_SR,DY_6_SR,DY_7_SR,ST_1_SR,ST_2_SR,TT_1_SR,TT_2_SR,WW1_SR,WW2_SR,WZ1_SR,WZ2_SR,WZ3_SR,ZZ1_SR,ZZ2_SR,ZZ3_SR,ttZ_SR,ttW_SR,tZq_SR,tptzm0700lh_SR,tptzm1000lh_SR,tptzm1400lh_SR,tptzm1700lh_SR);
      MakeHistos(CUTmuo1,plot,bin[i],Min[i],Max[i],0,data_M1,background_M1,DY_1_M1,DY_2_M1,DY_3_M1,DY_4_M1,DY_5_M1,DY_6_M1,DY_7_M1,ST_1_M1,ST_2_M1,TT_1_M1,TT_2_M1,WW1_M1,WW2_M1,WZ1_M1,WZ2_M1,WZ3_M1,ZZ1_M1,ZZ2_M1,ZZ3_M1,ttZ_M1,ttW_M1,tZq_M1,tptzm0700lh_M1,tptzm1000lh_M1,tptzm1400lh_M1,tptzm1700lh_M1);
      MakeHistos(CUTmuo2,plot,bin[i],Min[i],Max[i],0,data_M2,background_M2,DY_1_M2,DY_2_M2,DY_3_M2,DY_4_M2,DY_5_M2,DY_6_M2,DY_7_M2,ST_1_M2,ST_2_M2,TT_1_M2,TT_2_M2,WW1_M2,WW2_M2,WZ1_M2,WZ2_M2,WZ3_M2,ZZ1_M2,ZZ2_M2,ZZ3_M2,ttZ_M2,ttW_M2,tZq_M2,tptzm0700lh_M2,tptzm1000lh_M2,tptzm1400lh_M2,tptzm1700lh_M2);
      MakeHistos(CUTele1,plot,bin[i],Min[i],Max[i],0,data_E1,background_E1,DY_1_E1,DY_2_E1,DY_3_E1,DY_4_E1,DY_5_E1,DY_6_E1,DY_7_E1,ST_1_E1,ST_2_E1,TT_1_E1,TT_2_E1,WW1_E1,WW2_E1,WZ1_E1,WZ2_E1,WZ3_E1,ZZ1_E1,ZZ2_E1,ZZ3_E1,ttZ_E1,ttW_E1,tZq_E1,tptzm0700lh_E1,tptzm1000lh_E1,tptzm1400lh_E1,tptzm1700lh_E1);
      MakeHistos(CUTele2,plot,bin[i],Min[i],Max[i],0,data_E2,background_E2,DY_1_E2,DY_2_E2,DY_3_E2,DY_4_E2,DY_5_E2,DY_6_E2,DY_7_E2,ST_1_E2,ST_2_E2,TT_1_E2,TT_2_E2,WW1_E2,WW2_E2,WZ1_E2,WZ2_E2,WZ3_E2,ZZ1_E2,ZZ2_E2,ZZ3_E2,ttZ_E2,ttW_E2,tZq_E2,tptzm0700lh_E2,tptzm1000lh_E2,tptzm1400lh_E2,tptzm1700lh_E2);
      MakeHistos(CUTmuo1,plot,bin[i],Min[i],Max[i],0,data_R1,background_R1,DY_1_R1,DY_2_R1,DY_3_R1,DY_4_R1,DY_5_R1,DY_6_R1,DY_7_R1,ST_1_R1,ST_2_R1,TT_1_R1,TT_2_R1,WW1_R1,WW2_R1,WZ1_R1,WZ2_R1,WZ3_R1,ZZ1_R1,ZZ2_R1,ZZ3_R1,ttZ_R1,ttW_R1,tZq_R1,tptzm0700lh_R1,tptzm1000lh_R1,tptzm1400lh_R1,tptzm1700lh_R1);
      MakeHistos(CUTmuo2,plot,bin[i],Min[i],Max[i],0,data_R2,background_R2,DY_1_R2,DY_2_R2,DY_3_R2,DY_4_R2,DY_5_R2,DY_6_R2,DY_7_R2,ST_1_R2,ST_2_R2,TT_1_R2,TT_2_R2,WW1_R2,WW2_R2,WZ1_R2,WZ2_R2,WZ3_R2,ZZ1_R2,ZZ2_R2,ZZ3_R2,ttZ_R2,ttW_R2,tZq_R2,tptzm0700lh_R2,tptzm1000lh_R2,tptzm1400lh_R2,tptzm1700lh_R2);
      MakeHistos(CUTele1,plot,bin[i],Min[i],Max[i],0,data_R3,background_R3,DY_1_R3,DY_2_R3,DY_3_R3,DY_4_R3,DY_5_R3,DY_6_R3,DY_7_R3,ST_1_R3,ST_2_R3,TT_1_R3,TT_2_R3,WW1_R3,WW2_R3,WZ1_R3,WZ2_R3,WZ3_R3,ZZ1_R3,ZZ2_R3,ZZ3_R3,ttZ_R3,ttW_R3,tZq_R3,tptzm0700lh_R3,tptzm1000lh_R3,tptzm1400lh_R3,tptzm1700lh_R3);
      MakeHistos(CUTele2,plot,bin[i],Min[i],Max[i],0,data_R4,background_R4,DY_1_R4,DY_2_R4,DY_3_R4,DY_4_R4,DY_5_R4,DY_6_R4,DY_7_R4,ST_1_R4,ST_2_R4,TT_1_R4,TT_2_R4,WW1_R4,WW2_R4,WZ1_R4,WZ2_R4,WZ3_R4,ZZ1_R4,ZZ2_R4,ZZ3_R4,ttZ_R4,ttW_R4,tZq_R4,tptzm0700lh_R4,tptzm1000lh_R4,tptzm1400lh_R4,tptzm1700lh_R4);
      MakeHistos(CUTpup1,plot,bin[i],Min[i],Max[i],0,data_P1,background_P1,DY_1_P1,DY_2_P1,DY_3_P1,DY_4_P1,DY_5_P1,DY_6_P1,DY_7_P1,ST_1_P1,ST_2_P1,TT_1_P1,TT_2_P1,WW1_P1,WW2_P1,WZ1_P1,WZ2_P1,WZ3_P1,ZZ1_P1,ZZ2_P1,ZZ3_P1,ttZ_P1,ttW_P1,tZq_P1,tptzm0700lh_P1,tptzm1000lh_P1,tptzm1400lh_P1,tptzm1700lh_P1);
      MakeHistos(CUTpup2,plot,bin[i],Min[i],Max[i],0,data_P2,background_P2,DY_1_P2,DY_2_P2,DY_3_P2,DY_4_P2,DY_5_P2,DY_6_P2,DY_7_P2,ST_1_P2,ST_2_P2,TT_1_P2,TT_2_P2,WW1_P2,WW2_P2,WZ1_P2,WZ2_P2,WZ3_P2,ZZ1_P2,ZZ2_P2,ZZ3_P2,ttZ_P2,ttW_P2,tZq_P2,tptzm0700lh_P2,tptzm1000lh_P2,tptzm1400lh_P2,tptzm1700lh_P2);
      MakeHistos(CUTbta1,plot,bin[i],Min[i],Max[i],0,data_B1,background_B1,DY_1_B1,DY_2_B1,DY_3_B1,DY_4_B1,DY_5_B1,DY_6_B1,DY_7_B1,ST_1_B1,ST_2_B1,TT_1_B1,TT_2_B1,WW1_B1,WW2_B1,WZ1_B1,WZ2_B1,WZ3_B1,ZZ1_B1,ZZ2_B1,ZZ3_B1,ttZ_B1,ttW_B1,tZq_B1,tptzm0700lh_B1,tptzm1000lh_B1,tptzm1400lh_B1,tptzm1700lh_B1);
      MakeHistos(CUTbta2,plot,bin[i],Min[i],Max[i],0,data_B2,background_B2,DY_1_B2,DY_2_B2,DY_3_B2,DY_4_B2,DY_5_B2,DY_6_B2,DY_7_B2,ST_1_B2,ST_2_B2,TT_1_B2,TT_2_B2,WW1_B2,WW2_B2,WZ1_B2,WZ2_B2,WZ3_B2,ZZ1_B2,ZZ2_B2,ZZ3_B2,ttZ_B2,ttW_B2,tZq_B2,tptzm0700lh_B2,tptzm1000lh_B2,tptzm1400lh_B2,tptzm1700lh_B2);
      MakeHistos(CUTfor1,plot,bin[i],Min[i],Max[i],0,data_F1,background_F1,DY_1_F1,DY_2_F1,DY_3_F1,DY_4_F1,DY_5_F1,DY_6_F1,DY_7_F1,ST_1_F1,ST_2_F1,TT_1_F1,TT_2_F1,WW1_F1,WW2_F1,WZ1_F1,WZ2_F1,WZ3_F1,ZZ1_F1,ZZ2_F1,ZZ3_F1,ttZ_F1,ttW_F1,tZq_F1,tptzm0700lh_F1,tptzm1000lh_F1,tptzm1400lh_F1,tptzm1700lh_F1);
      MakeHistos(CUTfor2,plot,bin[i],Min[i],Max[i],0,data_F2,background_F2,DY_1_F2,DY_2_F2,DY_3_F2,DY_4_F2,DY_5_F2,DY_6_F2,DY_7_F2,ST_1_F2,ST_2_F2,TT_1_F2,TT_2_F2,WW1_F2,WW2_F2,WZ1_F2,WZ2_F2,WZ3_F2,ZZ1_F2,ZZ2_F2,ZZ3_F2,ttZ_F2,ttW_F2,tZq_F2,tptzm0700lh_F2,tptzm1000lh_F2,tptzm1400lh_F2,tptzm1700lh_F2);
      MakeHistos(CUTtop1,plot,bin[i],Min[i],Max[i],0,data_T1,background_T1,DY_1_T1,DY_2_T1,DY_3_T1,DY_4_T1,DY_5_T1,DY_6_T1,DY_7_T1,ST_1_T1,ST_2_T1,TT_1_T1,TT_2_T1,WW1_T1,WW2_T1,WZ1_T1,WZ2_T1,WZ3_T1,ZZ1_T1,ZZ2_T1,ZZ3_T1,ttZ_T1,ttW_T1,tZq_T1,tptzm0700lh_T1,tptzm1000lh_T1,tptzm1400lh_T1,tptzm1700lh_T1);
      MakeHistos(CUTtop2,plot,bin[i],Min[i],Max[i],0,data_T2,background_T2,DY_1_T2,DY_2_T2,DY_3_T2,DY_4_T2,DY_5_T2,DY_6_T2,DY_7_T2,ST_1_T2,ST_2_T2,TT_1_T2,TT_2_T2,WW1_T2,WW2_T2,WZ1_T2,WZ2_T2,WZ3_T2,ZZ1_T2,ZZ2_T2,ZZ3_T2,ttZ_T2,ttW_T2,tZq_T2,tptzm0700lh_T2,tptzm1000lh_T2,tptzm1400lh_T2,tptzm1700lh_T2);
      MakeHistos(CUTwje1,plot,bin[i],Min[i],Max[i],0,data_W1,background_W1,DY_1_W1,DY_2_W1,DY_3_W1,DY_4_W1,DY_5_W1,DY_6_W1,DY_7_W1,ST_1_W1,ST_2_W1,TT_1_W1,TT_2_W1,WW1_W1,WW2_W1,WZ1_W1,WZ2_W1,WZ3_W1,ZZ1_W1,ZZ2_W1,ZZ3_W1,ttZ_W1,ttW_W1,tZq_W1,tptzm0700lh_W1,tptzm1000lh_W1,tptzm1400lh_W1,tptzm1700lh_W1);
      MakeHistos(CUTwje2,plot,bin[i],Min[i],Max[i],0,data_W2,background_W2,DY_1_W2,DY_2_W2,DY_3_W2,DY_4_W2,DY_5_W2,DY_6_W2,DY_7_W2,ST_1_W2,ST_2_W2,TT_1_W2,TT_2_W2,WW1_W2,WW2_W2,WZ1_W2,WZ2_W2,WZ3_W2,ZZ1_W2,ZZ2_W2,ZZ3_W2,ttZ_W2,ttW_W2,tZq_W2,tptzm0700lh_W2,tptzm1000lh_W2,tptzm1400lh_W2,tptzm1700lh_W2);
      MakeHistos(CUT,plot,bin[i],Min[i],Max[i],1,data_J1,background_J1,DY_1_J1,DY_2_J1,DY_3_J1,DY_4_J1,DY_5_J1,DY_6_J1,DY_7_J1,ST_1_J1,ST_2_J1,TT_1_J1,TT_2_J1,WW1_J1,WW2_J1,WZ1_J1,WZ2_J1,WZ3_J1,ZZ1_J1,ZZ2_J1,ZZ3_J1,ttZ_J1,ttW_J1,tZq_J1,tptzm0700lh_J1,tptzm1000lh_J1,tptzm1400lh_J1,tptzm1700lh_J1);
      MakeHistos(CUT,plot,bin[i],Min[i],Max[i],2,data_J2,background_J2,DY_1_J2,DY_2_J2,DY_3_J2,DY_4_J2,DY_5_J2,DY_6_J2,DY_7_J2,ST_1_J2,ST_2_J2,TT_1_J2,TT_2_J2,WW1_J2,WW2_J2,WZ1_J2,WZ2_J2,WZ3_J2,ZZ1_J2,ZZ2_J2,ZZ3_J2,ttZ_J2,ttW_J2,tZq_J2,tptzm0700lh_J2,tptzm1000lh_J2,tptzm1400lh_J2,tptzm1700lh_J2);
      MakeHistos(CUT,plot,bin[i],Min[i],Max[i],3,data_J3,background_J3,DY_1_J3,DY_2_J3,DY_3_J3,DY_4_J3,DY_5_J3,DY_6_J3,DY_7_J3,ST_1_J3,ST_2_J3,TT_1_J3,TT_2_J3,WW1_J3,WW2_J3,WZ1_J3,WZ2_J3,WZ3_J3,ZZ1_J3,ZZ2_J3,ZZ3_J3,ttZ_J3,ttW_J3,tZq_J3,tptzm0700lh_J3,tptzm1000lh_J3,tptzm1400lh_J3,tptzm1700lh_J3);
      MakeHistos(CUT,plot,bin[i],Min[i],Max[i],4,data_J4,background_J4,DY_1_J4,DY_2_J4,DY_3_J4,DY_4_J4,DY_5_J4,DY_6_J4,DY_7_J4,ST_1_J4,ST_2_J4,TT_1_J4,TT_2_J4,WW1_J4,WW2_J4,WZ1_J4,WZ2_J4,WZ3_J4,ZZ1_J4,ZZ2_J4,ZZ3_J4,ttZ_J4,ttW_J4,tZq_J4,tptzm0700lh_J4,tptzm1000lh_J4,tptzm1400lh_J4,tptzm1700lh_J4);

      for(int m=1; m<background_SR->GetNbinsX()+1; m++){ 
	MakeHistoErrors(m, DY_1_SR, DY_1_M1, DY_1_M2, DY_1_E1, DY_1_E2, DY_1_R1, DY_1_R2, DY_1_R3, DY_1_R4, DY_1_P1, DY_1_P2, DY_1_B1, DY_1_B2, DY_1_F1, DY_1_F2, DY_1_T1, DY_1_T2, DY_1_W1, DY_1_W2, DY_1_J1, DY_1_J2, DY_1_J3, DY_1_J4);
	MakeHistoErrors(m, DY_2_SR, DY_2_M1, DY_2_M2, DY_2_E1, DY_2_E2, DY_2_R1, DY_2_R2, DY_2_R3, DY_2_R4, DY_2_P1, DY_2_P2, DY_2_B1, DY_2_B2, DY_2_F1, DY_2_F2, DY_2_T1, DY_2_T2, DY_2_W1, DY_2_W2, DY_2_J1, DY_2_J2, DY_2_J3, DY_2_J4);
	MakeHistoErrors(m, DY_3_SR, DY_3_M1, DY_3_M2, DY_3_E1, DY_3_E2, DY_3_R1, DY_3_R2, DY_3_R3, DY_3_R4, DY_3_P1, DY_3_P2, DY_3_B1, DY_3_B2, DY_3_F1, DY_3_F2, DY_3_T1, DY_3_T2, DY_3_W1, DY_3_W2, DY_3_J1, DY_3_J2, DY_3_J3, DY_3_J4);
	MakeHistoErrors(m, DY_4_SR, DY_4_M1, DY_4_M2, DY_4_E1, DY_4_E2, DY_4_R1, DY_4_R2, DY_4_R3, DY_4_R4, DY_4_P1, DY_4_P2, DY_4_B1, DY_4_B2, DY_4_F1, DY_4_F2, DY_4_T1, DY_4_T2, DY_4_W1, DY_4_W2, DY_4_J1, DY_4_J2, DY_4_J3, DY_4_J4);
	MakeHistoErrors(m, DY_5_SR, DY_5_M1, DY_5_M2, DY_5_E1, DY_5_E2, DY_5_R1, DY_5_R2, DY_5_R3, DY_5_R4, DY_5_P1, DY_5_P2, DY_5_B1, DY_5_B2, DY_5_F1, DY_5_F2, DY_5_T1, DY_5_T2, DY_5_W1, DY_5_W2, DY_5_J1, DY_5_J2, DY_5_J3, DY_5_J4);
	MakeHistoErrors(m, DY_6_SR, DY_6_M1, DY_6_M2, DY_6_E1, DY_6_E2, DY_6_R1, DY_6_R2, DY_6_R3, DY_6_R4, DY_6_P1, DY_6_P2, DY_6_B1, DY_6_B2, DY_6_F1, DY_6_F2, DY_6_T1, DY_6_T2, DY_6_W1, DY_6_W2, DY_6_J1, DY_6_J2, DY_6_J3, DY_6_J4);
	MakeHistoErrors(m, DY_7_SR, DY_7_M1, DY_7_M2, DY_7_E1, DY_7_E2, DY_7_R1, DY_7_R2, DY_7_R3, DY_7_R4, DY_7_P1, DY_7_P2, DY_7_B1, DY_7_B2, DY_7_F1, DY_7_F2, DY_7_T1, DY_7_T2, DY_7_W1, DY_7_W2, DY_7_J1, DY_7_J2, DY_7_J3, DY_7_J4);
	MakeHistoErrors(m, ST_1_SR, ST_1_M1, ST_1_M2, ST_1_E1, ST_1_E2, ST_1_R1, ST_1_R2, ST_1_R3, ST_1_R4, ST_1_P1, ST_1_P2, ST_1_B1, ST_1_B2, ST_1_F1, ST_1_F2, ST_1_T1, ST_1_T2, ST_1_W1, ST_1_W2, ST_1_J1, ST_1_J2, ST_1_J3, ST_1_J4);
	MakeHistoErrors(m, ST_2_SR, ST_2_M1, ST_2_M2, ST_2_E1, ST_2_E2, ST_2_R1, ST_2_R2, ST_2_R3, ST_2_R4, ST_2_P1, ST_2_P2, ST_2_B1, ST_2_B2, ST_2_F1, ST_2_F2, ST_2_T1, ST_2_T2, ST_2_W1, ST_2_W2, ST_2_J1, ST_2_J2, ST_2_J3, ST_2_J4);
	MakeHistoErrors(m, TT_1_SR, TT_1_M1, TT_1_M2, TT_1_E1, TT_1_E2, TT_1_R1, TT_1_R2, TT_1_R3, TT_1_R4, TT_1_P1, TT_1_P2, TT_1_B1, TT_1_B2, TT_1_F1, TT_1_F2, TT_1_T1, TT_1_T2, TT_1_W1, TT_1_W2, TT_1_J1, TT_1_J2, TT_1_J3, TT_1_J4);
	MakeHistoErrors(m, TT_2_SR, TT_2_M1, TT_2_M2, TT_2_E1, TT_2_E2, TT_2_R1, TT_2_R2, TT_2_R3, TT_2_R4, TT_2_P1, TT_2_P2, TT_2_B1, TT_2_B2, TT_2_F1, TT_2_F2, TT_2_T1, TT_2_T2, TT_2_W1, TT_2_W2, TT_2_J1, TT_2_J2, TT_2_J3, TT_2_J4);
	MakeHistoErrors(m,   WW1_SR,   WW1_M1,   WW1_M2,   WW1_E1,   WW1_E2,   WW1_R1,   WW1_R2,   WW1_R3,   WW1_R4,   WW1_P1,   WW1_P2,   WW1_B1,   WW1_B2,   WW1_F1,   WW1_F2,   WW1_T1,   WW1_T2,   WW1_W1,   WW1_W2,   WW1_J1,   WW1_J2,   WW1_J3,   WW1_J4);
	MakeHistoErrors(m,   WW2_SR,   WW2_M1,   WW2_M2,   WW2_E1,   WW2_E2,   WW2_R1,   WW2_R2,   WW2_R3,   WW2_R4,   WW2_P1,   WW2_P2,   WW2_B1,   WW2_B2,   WW2_F1,   WW2_F2,   WW2_T1,   WW2_T2,   WW2_W1,   WW2_W2,   WW2_J1,   WW2_J2,   WW2_J3,   WW2_J4);
	MakeHistoErrors(m,   WZ1_SR,   WZ1_M1,   WZ1_M2,   WZ1_E1,   WZ1_E2,   WZ1_R1,   WZ1_R2,   WZ1_R3,   WZ1_R4,   WZ1_P1,   WZ1_P2,   WZ1_B1,   WZ1_B2,   WZ1_F1,   WZ1_F2,   WZ1_T1,   WZ1_T2,   WZ1_W1,   WZ1_W2,   WZ1_J1,   WZ1_J2,   WZ1_J3,   WZ1_J4);
	MakeHistoErrors(m,   WZ2_SR,   WZ2_M1,   WZ2_M2,   WZ2_E1,   WZ2_E2,   WZ2_R1,   WZ2_R2,   WZ2_R3,   WZ2_R4,   WZ2_P1,   WZ2_P2,   WZ2_B1,   WZ2_B2,   WZ2_F1,   WZ2_F2,   WZ2_T1,   WZ2_T2,   WZ2_W1,   WZ2_W2,   WZ2_J1,   WZ2_J2,   WZ2_J3,   WZ2_J4);
	MakeHistoErrors(m,   WZ3_SR,   WZ3_M1,   WZ3_M2,   WZ3_E1,   WZ3_E2,   WZ3_R1,   WZ3_R2,   WZ3_R3,   WZ3_R4,   WZ3_P1,   WZ3_P2,   WZ3_B1,   WZ3_B2,   WZ3_F1,   WZ3_F2,   WZ3_T1,   WZ3_T2,   WZ3_W1,   WZ3_W2,   WZ3_J1,   WZ3_J2,   WZ3_J3,   WZ3_J4);
	MakeHistoErrors(m,   ZZ1_SR,   ZZ1_M1,   ZZ1_M2,   ZZ1_E1,   ZZ1_E2,   ZZ1_R1,   ZZ1_R2,   ZZ1_R3,   ZZ1_R4,   ZZ1_P1,   ZZ1_P2,   ZZ1_B1,   ZZ1_B2,   ZZ1_F1,   ZZ1_F2,   ZZ1_T1,   ZZ1_T2,   ZZ1_W1,   ZZ1_W2,   ZZ1_J1,   ZZ1_J2,   ZZ1_J3,   ZZ1_J4);
	MakeHistoErrors(m,   ZZ2_SR,   ZZ2_M1,   ZZ2_M2,   ZZ2_E1,   ZZ2_E2,   ZZ2_R1,   ZZ2_R2,   ZZ2_R3,   ZZ2_R4,   ZZ2_P1,   ZZ2_P2,   ZZ2_B1,   ZZ2_B2,   ZZ2_F1,   ZZ2_F2,   ZZ2_T1,   ZZ2_T2,   ZZ2_W1,   ZZ2_W2,   ZZ2_J1,   ZZ2_J2,   ZZ2_J3,   ZZ2_J4);
	MakeHistoErrors(m,   ZZ3_SR,   ZZ3_M1,   ZZ3_M2,   ZZ3_E1,   ZZ3_E2,   ZZ3_R1,   ZZ3_R2,   ZZ3_R3,   ZZ3_R4,   ZZ3_P1,   ZZ3_P2,   ZZ3_B1,   ZZ3_B2,   ZZ3_F1,   ZZ3_F2,   ZZ3_T1,   ZZ3_T2,   ZZ3_W1,   ZZ3_W2,   ZZ3_J1,   ZZ3_J2,   ZZ3_J3,   ZZ3_J4);
	MakeHistoErrors(m,  ttZ_SR,  ttZ_M1,  ttZ_M2,  ttZ_E1,  ttZ_E2,  ttZ_R1,  ttZ_R2,  ttZ_R3,  ttZ_R4,  ttZ_P1,  ttZ_P2,  ttZ_B1,  ttZ_B2,  ttZ_F1,  ttZ_F2,  ttZ_T1,  ttZ_T2,  ttZ_W1,  ttZ_W2,  ttZ_J1,  ttZ_J2,  ttZ_J3,  ttZ_J4);
	MakeHistoErrors(m,  ttW_SR,  ttW_M1,  ttW_M2,  ttW_E1,  ttW_E2,  ttW_R1,  ttW_R2,  ttW_R3,  ttW_R4,  ttW_P1,  ttW_P2,  ttW_B1,  ttW_B2,  ttW_F1,  ttW_F2,  ttW_T1,  ttW_T2,  ttW_W1,  ttW_W2,  ttW_J1,  ttW_J2,  ttW_J3,  ttW_J4);
	MakeHistoErrors(m,  tZq_SR,  tZq_M1,  tZq_M2,  tZq_E1,  tZq_E2,  tZq_R1,  tZq_R2,  tZq_R3,  tZq_R4,  tZq_P1,  tZq_P2,  tZq_B1,  tZq_B2,  tZq_F1,  tZq_F2,  tZq_T1,  tZq_T2,  tZq_W1,  tZq_W2,  tZq_J1,  tZq_J2,  tZq_J3,  tZq_J4);
	background_SR->SetBinError(m,sqrt(
					  DY_1_SR->GetBinError(m)*DY_1_SR->GetBinError(m)+
					  DY_2_SR->GetBinError(m)*DY_2_SR->GetBinError(m)+
					  DY_3_SR->GetBinError(m)*DY_3_SR->GetBinError(m)+
					  DY_4_SR->GetBinError(m)*DY_4_SR->GetBinError(m)+
					  DY_5_SR->GetBinError(m)*DY_5_SR->GetBinError(m)+
					  DY_6_SR->GetBinError(m)*DY_6_SR->GetBinError(m)+
					  DY_7_SR->GetBinError(m)*DY_7_SR->GetBinError(m)+
					  ST_1_SR->GetBinError(m)*ST_1_SR->GetBinError(m)+
					  ST_2_SR->GetBinError(m)*ST_2_SR->GetBinError(m)+
					  TT_1_SR->GetBinError(m)*TT_1_SR->GetBinError(m)+
					  TT_2_SR->GetBinError(m)*TT_2_SR->GetBinError(m)+
					  WW1_SR->GetBinError(m)*WW1_SR->GetBinError(m)+
					  WW2_SR->GetBinError(m)*WW2_SR->GetBinError(m)+
					  WZ1_SR->GetBinError(m)*WZ1_SR->GetBinError(m)+
					  WZ2_SR->GetBinError(m)*WZ2_SR->GetBinError(m)+
					  WZ3_SR->GetBinError(m)*WZ3_SR->GetBinError(m)+
					  ZZ1_SR->GetBinError(m)*ZZ1_SR->GetBinError(m)+
					  ZZ2_SR->GetBinError(m)*ZZ2_SR->GetBinError(m)+
					  ZZ3_SR->GetBinError(m)*ZZ3_SR->GetBinError(m)+
					  ttZ_SR->GetBinError(m)*ttZ_SR->GetBinError(m)+
					  ttW_SR->GetBinError(m)*ttW_SR->GetBinError(m)+
					  tZq_SR->GetBinError(m)*tZq_SR->GetBinError(m)
					  ));
      }
      
      tptzm0700lh_SR->SetLineWidth(2); tptzm1000lh_SR->SetLineWidth(2); tptzm1400lh_SR->SetLineWidth(2); tptzm1700lh_SR->SetLineWidth(2); DY_1_SR->SetLineWidth(2); DY_2_SR->SetLineWidth(2);DY_3_SR->SetLineWidth(2); DY_4_SR->SetLineWidth(2); DY_5_SR->SetLineWidth(2);DY_6_SR->SetLineWidth(2); DY_7_SR->SetLineWidth(2); ST_1_SR->SetLineWidth(2); ST_2_SR->SetLineWidth(2); TT_1_SR->SetLineWidth(2); TT_2_SR->SetLineWidth(2); ZZ1_SR->SetLineWidth(2); ZZ2_SR->SetLineWidth(2); ZZ3_SR->SetLineWidth(2); WZ1_SR->SetLineWidth(2); WZ2_SR->SetLineWidth(2); WZ3_SR->SetLineWidth(2); WW1_SR->SetLineWidth(2); WW2_SR->SetLineWidth(2); ttZ_SR->SetLineWidth(2); ttW_SR->SetLineWidth(2); tZq_SR->SetLineWidth(2); tptzm1700lh_SR->SetLineStyle(2); tptzm0700lh_SR->SetLineColor(2); tptzm1000lh_SR->SetLineColor(2); tptzm1400lh_SR->SetLineColor(2); tptzm1700lh_SR->SetLineColor(2); DY_1_SR->SetLineColor(kOrange); DY_2_SR->SetLineColor(kOrange); DY_3_SR->SetLineColor(kOrange); DY_4_SR->SetLineColor(kOrange); DY_5_SR->SetLineColor(kOrange); DY_6_SR->SetLineColor(kOrange); DY_7_SR->SetLineColor(kOrange); ST_1_SR->SetLineColor(kGreen+3); ST_2_SR->SetLineColor(kGreen+3); TT_1_SR->SetLineColor(kGreen+3); TT_2_SR->SetLineColor(kGreen+3); ZZ1_SR->SetLineColor(kCyan+2); ZZ2_SR->SetLineColor(kCyan+2); ZZ3_SR->SetLineColor(kCyan+2); WZ1_SR->SetLineColor(kCyan+2); WZ2_SR->SetLineColor(kCyan+2); WZ3_SR->SetLineColor(kCyan+2); WW1_SR->SetLineColor(kCyan+2); WW2_SR->SetLineColor(kCyan+2); ttZ_SR->SetLineColor(kCyan-4); ttW_SR->SetLineColor(kCyan-4); tZq_SR->SetLineColor(kCyan-4);DY_1_SR->SetFillColor(kOrange); DY_2_SR->SetFillColor(kOrange); DY_3_SR->SetFillColor(kOrange); DY_4_SR->SetFillColor(kOrange); DY_5_SR->SetFillColor(kOrange); DY_6_SR->SetFillColor(kOrange); DY_7_SR->SetFillColor(kOrange); ST_1_SR->SetFillColor(kGreen+3); ST_2_SR->SetFillColor(kGreen+3); TT_1_SR->SetFillColor(kGreen+3); TT_2_SR->SetFillColor(kGreen+3); ZZ1_SR->SetFillColor(kCyan+2); ZZ2_SR->SetFillColor(kCyan+2); ZZ3_SR->SetFillColor(kCyan+2); WZ1_SR->SetFillColor(kCyan+2); WZ2_SR->SetFillColor(kCyan+2); WZ3_SR->SetFillColor(kCyan+2); WW1_SR->SetFillColor(kCyan+2); WW2_SR->SetFillColor(kCyan+2); ttZ_SR->SetFillColor(kCyan-4); ttW_SR->SetFillColor(kCyan-4); tZq_SR->SetFillColor(kCyan-4);data_SR->SetLineWidth(2); data_SR->SetLineColor(1); data_SR->SetMarkerColor(1); data_SR->SetMarkerStyle(20); data_SR->SetMarkerSize(1.3);

      Double_t dataErr = 0; Float_t dataYield = data_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX()-1,dataErr,"");
      Double_t DY_1Err = 0; Float_t DY_1Yield = DY_1_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_1Err,"");
      Double_t DY_2Err = 0; Float_t DY_2Yield = DY_2_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_2Err,"");
      Double_t DY_3Err = 0; Float_t DY_3Yield = DY_3_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_3Err,"");
      Double_t DY_4Err = 0; Float_t DY_4Yield = DY_4_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_4Err,"");
      Double_t DY_5Err = 0; Float_t DY_5Yield = DY_5_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_5Err,"");
      Double_t DY_6Err = 0; Float_t DY_6Yield = DY_6_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_6Err,"");
      Double_t DY_7Err = 0; Float_t DY_7Yield = DY_7_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),DY_7Err,"");
      Double_t ST_1Err = 0; Float_t ST_1Yield = ST_1_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ST_1Err,"");
      Double_t ST_2Err = 0; Float_t ST_2Yield = ST_2_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ST_2Err,"");
      Double_t TT_1Err = 0; Float_t TT_1Yield = TT_1_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),TT_1Err,"");
      Double_t TT_2Err = 0; Float_t TT_2Yield = TT_2_SR->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),TT_2Err,"");
      Double_t ZZ1Err  = 0; Float_t ZZ1Yield  = ZZ1_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ZZ1Err, "");
      Double_t ZZ2Err  = 0; Float_t ZZ2Yield  = ZZ2_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ZZ2Err, "");
      Double_t ZZ3Err  = 0; Float_t ZZ3Yield  = ZZ3_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ZZ3Err, "");
      Double_t WZ1Err  = 0; Float_t WZ1Yield  = WZ1_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),WZ1Err, "");
      Double_t WZ2Err  = 0; Float_t WZ2Yield  = WZ2_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),WZ2Err, "");
      Double_t WZ3Err  = 0; Float_t WZ3Yield  = WZ3_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),WZ3Err, "");
      Double_t WW1Err  = 0; Float_t WW1Yield  = WW1_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),WW1Err, "");
      Double_t WW2Err  = 0; Float_t WW2Yield  = WW2_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),WW2Err, "");
      Double_t ttZErr  = 0; Float_t ttZYield  = ttZ_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ttZErr, "");
      Double_t ttWErr  = 0; Float_t ttWYield  = ttW_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),ttWErr, "");
      Double_t tZqErr  = 0; Float_t tZqYield  = tZq_SR ->IntegralAndError(1,tptzm0700lh_SR->GetNbinsX(),tZqErr, "");
      if(i==0){
	cout<<endl;
	//cout<<"Plotting "<<name[i]<<endl;
	cout<<"DATA      = "<<data_SR->Integral()<<" +/- "<<dataErr<<endl;
	cout<<"DY        = "<<DY_1_SR->Integral()+DY_2_SR->Integral()+DY_3_SR->Integral()+DY_4_SR->Integral()+DY_5_SR->Integral()+DY_6_SR->Integral()+DY_7_SR->Integral()<<" +/- "<<
	  sqrt(DY_1Err*DY_1Err+DY_2Err*DY_2Err+DY_3Err*DY_3Err+DY_4Err*DY_4Err+DY_5Err*DY_5Err+DY_6Err*DY_6Err+DY_7Err*DY_7Err)<<endl;
	cout<<"SingleTop = "<<ST_1_SR->Integral()+ST_2_SR->Integral()<<" +/- "<<sqrt(ST_1Err*ST_1Err+ST_2Err*ST_2Err)<<endl;
	cout<<"TT        = "<<TT_1_SR->Integral()+TT_2_SR->Integral()<<" +/- "<<sqrt(TT_1Err*TT_1Err+TT_2Err*TT_2Err)<<endl;
	cout<<"Diboson   = "<<ZZ1_SR->Integral()+ZZ2_SR->Integral()+ZZ3_SR->Integral()+WZ1_SR->Integral()+WZ2_SR->Integral()+WZ3_SR->Integral()+WW1_SR->Integral()+WW2_SR->Integral()<<" +/- "<<sqrt(ZZ1Err*ZZ1Err+ZZ2Err*ZZ2Err+ZZ3Err*ZZ3Err+WZ1Err*WZ1Err+WZ2Err*WZ2Err+WZ3Err*WZ3Err+WW1Err*WW1Err+WW2Err*WW2Err)<<endl;
	cout<<"ttV+tZq   = "<<ttZ_SR->Integral()+ttW_SR->Integral()+tZq_SR->Integral()<<" +/- "<<sqrt(ttZErr*ttZErr+ttWErr*ttWErr+tZqErr*tZqErr)<<endl;
	cout<<"Total BKG = "<<DY_1_SR->Integral()+DY_2_SR->Integral()+DY_3_SR->Integral()+DY_4_SR->Integral()+DY_5_SR->Integral()+DY_6_SR->Integral()+DY_7_SR->Integral()+ST_1_SR->Integral()+ST_2_SR->Integral()+TT_1_SR->Integral()+TT_2_SR->Integral()+ZZ1_SR->Integral()+ZZ2_SR->Integral()+ZZ3_SR->Integral()+WZ1_SR->Integral()+WZ2_SR->Integral()+WZ3_SR->Integral()+WW1_SR->Integral()+WW2_SR->Integral()+ttZ_SR->Integral()+ttW_SR->Integral()+tZq_SR->Integral()<<" +/- "<<sqrt(DY_1Err*DY_1Err+DY_2Err*DY_2Err+DY_3Err*DY_3Err+DY_4Err*DY_4Err+DY_5Err*DY_5Err+DY_6Err*DY_6Err+DY_7Err*DY_7Err+ST_1Err*ST_1Err+ST_2Err*ST_2Err+TT_1Err*TT_1Err+TT_2Err*TT_2Err+ZZ1Err*ZZ1Err+ZZ2Err*ZZ2Err+ZZ3Err*ZZ3Err+WZ1Err*WZ1Err+WZ2Err*WZ2Err+WZ3Err*WZ3Err+WW1Err*WW1Err+WW2Err*WW2Err+ttZErr*ttZErr+ttWErr*ttWErr+tZqErr*tZqErr)<<endl;
      }

      //Plots 
      TCanvas* c1 = new TCanvas("c1","c1",0,0,600,600);
      TPad *c1_1 = new TPad("c1_1", "newpad",0.01,0.01,0.99,0.32);
      c1_1->Draw();
      c1_1->cd();
      c1_1->SetTopMargin(0.045);
      c1_1->SetBottomMargin(0.3);
      c1_1->SetRightMargin(0.035);
      c1_1->SetLeftMargin(0.11);
    
      TGraphAsymmErrors *gDATA = new TGraphAsymmErrors(data_SR);	
      gDATA->SetLineWidth(2); 
      gDATA->SetLineColor(1);
      gDATA->SetMarkerColor(1); 
      gDATA->SetMarkerStyle(20); 
      gDATA->SetMarkerSize(1.3);
      for (int i = 0; i < gDATA->GetN(); ++i) {
	double alpha = 1 - 0.6827;
	int M = gDATA->GetY()[i];
	double L =  (M==0) ? 0  : (ROOT::Math::gamma_quantile(alpha/2,M,1.));
	double U =  ROOT::Math::gamma_quantile_c(alpha/2,M+1,1);
	//if(M!=0){
	gDATA->SetPointEYlow(i, M-L);
	gDATA->SetPointEYhigh(i, U-M);
	//}
      }
      TH1F *RATIO2 = (TH1F*)background_SR->Clone();
      Double_t x[bin[i]]; Double_t exl[bin[i]]; Double_t exh[bin[i]];
      Double_t y[bin[i]]; Double_t eyl[bin[i]]; Double_t eyh[bin[i]]; 
      for(int m=0; m<background_SR->GetNbinsX(); m++){ 
	x[m]=Min[i]+m*(Max[i]-Min[i])/bin[i]+(Max[i]-Min[i])/(2*bin[i]);
	exl[m]=(Max[i]-Min[i])/(2*bin[i]);
	exh[m]=(Max[i]-Min[i])/(2*bin[i]);
	RATIO2->SetBinContent(m+1,1);
	if(background_SR->GetBinContent(m+1)!=0) {
	  y[m]=data_SR->GetBinContent(m+1)/background_SR->GetBinContent(m+1);
	  eyl[m]=sqrt(gDATA->GetErrorYlow(m)*gDATA->GetErrorYlow(m))/background_SR->GetBinContent(m+1);
	  eyh[m]=sqrt(gDATA->GetErrorYhigh(m)*gDATA->GetErrorYhigh(m))/background_SR->GetBinContent(m+1);
	  RATIO2->SetBinError(m+1,background_SR->GetBinError(m+1)/background_SR->GetBinContent(m+1));
	} else {
	  y[m]=-1;
	  eyl[m]=0;
	  eyh[m]=0;
	}
      }

      TGraphAsymmErrors *RATIO = new TGraphAsymmErrors(bin[i],x,y,exl,exh,eyl,eyh);
      RATIO->Draw("AE0p");
      RATIO->SetMarkerColor(1); 
      RATIO->SetMarkerStyle(21); 
      RATIO->SetMarkerSize(1.0);
      RATIO->SetMaximum(1.7);
      RATIO->SetMinimum(0.3);
      RATIO->SetLineColor(1);
      RATIO->SetLineWidth(2);
      RATIO->GetXaxis()->SetTitleOffset(0.9);
      RATIO->GetYaxis()->SetTitleOffset(0.5);
      RATIO->SetTitle("");
      RATIO->GetYaxis()->SetTitle("observed/expected");
      RATIO->GetXaxis()->SetTitle(axis[i]);
      RATIO->GetXaxis()->SetLabelSize(0.13);
      RATIO->GetYaxis()->SetLabelSize(0.13);
      RATIO->GetXaxis()->SetTitleSize(0.15);
      RATIO->GetYaxis()->SetTitleSize(0.09);
      RATIO->GetYaxis()->SetNdivisions(505);
      RATIO->GetXaxis()->SetRangeUser(Min[i],Max[i]);
      RATIO2->SetFillStyle(3002);
      RATIO2->SetFillColor(12);
      RATIO2->SetLineColor(12);
      RATIO2->SetMarkerSize(0);
      RATIO2->Draw("E2same");
      RATIO->Draw("E0psame");

      TLine* line = new TLine(Min[i],1,Max[i],1);
      line->SetLineColor(2);
      line->SetLineWidth(2);
      line->Draw("same");	
      c1->cd();
    
      TPad *c1_2 = new TPad("c1_2", "newpad",0.01,0.32,0.99,1.0);
      c1_2->Draw();
      c1_2->cd();
      c1_2->SetTopMargin(0.08);
      c1_2->SetBottomMargin(0.02);
      c1_2->SetRightMargin(0.035);
      c1_2->SetLeftMargin(0.11);
    
      THStack *hs = new THStack("hs","hs");
      hs->Add(ST_1_SR);
      hs->Add(ST_2_SR);
      hs->Add(TT_1_SR);
      hs->Add(TT_2_SR);
      hs->Add(ttZ_SR);
      hs->Add(ttW_SR);
      hs->Add(tZq_SR);
      hs->Add(ZZ1_SR);
      hs->Add(ZZ2_SR);
      hs->Add(ZZ3_SR);
      hs->Add(WZ1_SR);
      hs->Add(WZ2_SR);
      hs->Add(WZ3_SR);
      hs->Add(WW1_SR);
      hs->Add(WW2_SR);
      hs->Add(DY_1_SR);
      hs->Add(DY_2_SR);
      hs->Add(DY_3_SR);
      hs->Add(DY_4_SR);
      hs->Add(DY_5_SR);
      hs->Add(DY_6_SR);
      hs->Add(DY_7_SR);
    
      hs->Draw("histo");
      hs->SetMinimum(0);
      hs->GetYaxis()->SetTitleSize(0.070);
      hs->GetXaxis()->SetTitleSize(0.070);
      hs->GetYaxis()->SetLabelSize(0.070);
      hs->GetXaxis()->SetLabelSize(0.0); 
      hs->SetTitle("");
      hs->GetYaxis()->SetTitle("Events");
      hs->GetXaxis()->SetTitle("");
      hs->GetYaxis()->SetTitleOffset(0.80);
      hs->GetXaxis()->SetTitleOffset(0.85);
      tptzm1000lh_SR->Draw("samehisto");
      tptzm1700lh_SR->Draw("samehisto");
      data_SR->Draw("E same"); 
    
      background_SR->SetFillStyle(3005);
      background_SR->SetFillColor(12);
      background_SR->SetLineColor(12);
      background_SR->Draw("E2same");
    
      float maxy=-10;
      float ADD=20;
      for(int ABC=0; ABC<data_SR->GetNbinsX(); ABC++){
	if(background_SR->GetBinContent(ABC+1)+ADD>=maxy) maxy=background_SR->GetBinContent(ABC+1)+ADD;
	if(data_SR      ->GetBinContent(ABC+1)+ADD>=maxy) maxy=data_SR      ->GetBinContent(ABC+1)+ADD;
      }
      hs->SetMaximum(maxy);
      hs->SetMaximum(1000000);
      hs->SetMinimum(3);
      c1_2->SetLogy();

      TPad *pad = new TPad("pad","pad",0.01,0.01,0.99,0.99);
      gPad->RedrawAxis();
      TString channelText = "";
      float channelTextFont   = 42;
      float channelTextSize   = 0.06;
      TString cmsText     = "CMS";
      float cmsTextFont   = 61;  // default is helvetic-bold
      bool writeExtraText = true;
      TString extraText   = "Preliminary";
      //TString extraText   = "";
      float extraTextFont = 52;  // default is helvetica-italics
      // text sizes and text offsets with respect to the top frame in unit of the top margin size
      float lumiTextSize     = 0.6;
      float lumiTextOffset   = 0.2;
      float cmsTextSize      = 0.75;
      float cmsTextOffset    = 0.1;  // only used in outOfFrame version
      float relPosX    = 0.045;
      float relPosY    = 0.035;
      float relExtraDY = 1.2;
      // ratio of "CMS" and extra text size
      float extraOverCmsTextSize  = 0.76;
      TString lumi_13TeV = "39.8 fb^{-1}";
      TString lumi_8TeV  = "19.7 fb^{-1}";
      TString lumi_7TeV  = "5.1 fb^{-1}";
      TString lumiText;
      lumiText += lumi_13TeV;
      lumiText += " (2017, 13 TeV)";
      float t = pad->GetTopMargin();
      float b = pad->GetBottomMargin();
      float r = pad->GetRightMargin();
      float l = pad->GetLeftMargin();
      TLatex latex;
      latex.SetNDC();
      latex.SetTextAngle(0);
      latex.SetTextColor(kBlack);    
      float extraTextSize = extraOverCmsTextSize*cmsTextSize;
      latex.SetTextFont(42);
      latex.SetTextAlign(31); 
      latex.SetTextSize(lumiTextSize*t);    
      latex.DrawLatex(1-r+0.06,0.94,lumiText);
      latex.SetTextFont(cmsTextFont);
      latex.SetTextAlign(11); 
      latex.SetTextSize(cmsTextSize*t);    
      latex.DrawLatex(l+0.01, 0.94,cmsText);
      latex.SetTextFont(extraTextFont);
      latex.SetTextSize(extraTextSize*t);
      latex.DrawLatex(l+0.12, 0.94, extraText); 
      latex.SetTextFont(channelTextFont);
      latex.SetTextSize(channelTextSize);
    
      TLegend *pl2 = new TLegend(0.55,0.60,0.95,0.91);
      pl2->SetTextSize(0.045); 
      pl2->SetFillColor(0);
      TLegendEntry *ple2 = pl2->AddEntry(data_SR, "data",  "L"); 
      ple2 = pl2->AddEntry(DY_1_SR, "Z/#gamma+jets",  "F");
      ple2 = pl2->AddEntry(TT_1_SR, "t#bar{t} and single-top",  "F");
      ple2 = pl2->AddEntry(ZZ1_SR, "VV (V = Z or W)",  "F");
      ple2 = pl2->AddEntry(ttZ_SR, "ttV and tZq (V = Z or W)",  "F");
      ple2 = pl2->AddEntry(tptzm1000lh_SR, "T, M=1.0TeV, #sigma#times100",  "L"); 
      ple2 = pl2->AddEntry(tptzm1700lh_SR, "T, M=1.7TeV, #sigma#times100",  "L"); 
      pl2->Draw();
    
      TString NAME = name[i];
      cout<<"Finished "<<NAME<<endl;
      if(lep==0) c1->SaveAs(NAME+".png");
      if(lep==0) c1->SaveAs(NAME+".pdf");
      if(lep==1) c1->SaveAs(NAME+"_muo.png");
      if(lep==1) c1->SaveAs(NAME+"_muo.pdf");
      if(lep==2) c1->SaveAs(NAME+"_ele.png");
      if(lep==2) c1->SaveAs(NAME+"_ele.pdf");
    }
  }
}

void GetHisto(char CUT[1000], TTree *Tree, TH1F* & histo, const char *plot, int BIN, float MIN, float MAX){
  char input[50]; sprintf(input,"%s>>h(%i,%f,%f)",plot,BIN,MIN,MAX);
  TH1F *temp = new TH1F("", "", BIN,MIN,MAX);
  if(Tree->Draw(input,CUT)){ Tree->Draw(input,CUT); TH1F* h=(TH1F*)gDirectory->Get("h"); histo = (TH1F*)h->Clone(); delete h; } else { histo = (TH1F*)temp->Clone(); }
  histo->SetDirectory(0);
  histo->SetName("histo");
  delete temp;
}

void MakeHistos(char CUT[1000],const char *plot,int BIN,float MIN,float MAX,int JETSyst,
		TH1F* &data_func,TH1F* &background_func,TH1F* &DY_1_func,TH1F* &DY_2_func,TH1F* &DY_3_func,TH1F* &DY_4_func,TH1F* &DY_5_func,TH1F* &DY_6_func,TH1F* &DY_7_func,
		TH1F* &ST_1_func,TH1F* &ST_2_func,TH1F* &TT_1_func,TH1F* &TT_2_func,TH1F* &WW1di_func,TH1F* &WW2di_func,TH1F* &WZ1di_func,TH1F* &WZ2di_func,TH1F* &WZ3di_func,
		TH1F* &ZZ1di_func,TH1F* &ZZ2di_func,TH1F* &ZZ3di_func,TH1F* &ttZ_func,TH1F* &ttW_func,TH1F* &tZq_func,TH1F* &tptzm0700lh_func,TH1F* &tptzm1000lh_func,
		TH1F* &tptzm1400lh_func,TH1F* &tptzm1700lh_func){
  TH1F *data; TH1F *tptzm0700lh; TH1F *tptzm1000lh; TH1F *tptzm1400lh; TH1F *tptzm1700lh; TH1F *DY_1; TH1F *DY_2; TH1F *DY_3; TH1F *DY_4; TH1F *DY_5; TH1F *DY_6; TH1F *DY_7; TH1F *ST_1; 
  TH1F *ST_2; TH1F *TT_1; TH1F *TT_2; TH1F *ZZ1di; TH1F *ZZ2di; TH1F *ZZ3di; TH1F *WZ1di; TH1F *WZ2di; TH1F *WZ3di; TH1F *WW1di; TH1F *WW2di; TH1F *ttZ; TH1F *ttW; TH1F *tZq;
  if(JETSyst==0){
    GetHisto(CUT, Tree01, data        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree02, tptzm0700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree03, tptzm1000lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree04, tptzm1400lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree05, tptzm1700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree06, DY_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree07, DY_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree08, DY_3        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree09, DY_4        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree10, DY_5        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree11, DY_6        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree12, DY_7        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree13, ST_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree14, ST_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree15, TT_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree16, TT_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree17, ttZ         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree18, ttW         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree19, tZq         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree20, ZZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree21, ZZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree22, ZZ3di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree23, WW1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree24, WW2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree25, WZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree26, WZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree27, WZ3di       ,plot,BIN,MIN,MAX);
  } else if(JETSyst==1){
    GetHisto(CUT, Tree01_J1, data        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree02_J1, tptzm0700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree03_J1, tptzm1000lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree04_J1, tptzm1400lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree05_J1, tptzm1700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree06_J1, DY_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree07_J1, DY_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree08_J1, DY_3        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree09_J1, DY_4        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree10_J1, DY_5        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree11_J1, DY_6        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree12_J1, DY_7        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree13_J1, ST_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree14_J1, ST_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree15_J1, TT_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree16_J1, TT_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree17_J1, ttZ         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree18_J1, ttW         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree19_J1, tZq         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree20_J1, ZZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree21_J1, ZZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree22_J1, ZZ3di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree23_J1, WW1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree24_J1, WW2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree25_J1, WZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree26_J1, WZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree27_J1, WZ3di       ,plot,BIN,MIN,MAX);
  } else if(JETSyst==2){
    GetHisto(CUT, Tree01_J2, data        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree02_J2, tptzm0700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree03_J2, tptzm1000lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree04_J2, tptzm1400lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree05_J2, tptzm1700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree06_J2, DY_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree07_J2, DY_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree08_J2, DY_3        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree09_J2, DY_4        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree10_J2, DY_5        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree11_J2, DY_6        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree12_J2, DY_7        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree13_J2, ST_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree14_J2, ST_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree15_J2, TT_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree16_J2, TT_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree17_J2, ttZ         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree18_J2, ttW         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree19_J2, tZq         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree20_J2, ZZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree21_J2, ZZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree22_J2, ZZ3di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree23_J2, WW1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree24_J2, WW2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree25_J2, WZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree26_J2, WZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree27_J2, WZ3di       ,plot,BIN,MIN,MAX);
  } else if(JETSyst==3){
    GetHisto(CUT, Tree01_J3, data        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree02_J3, tptzm0700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree03_J3, tptzm1000lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree04_J3, tptzm1400lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree05_J3, tptzm1700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree06_J3, DY_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree07_J3, DY_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree08_J3, DY_3        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree09_J3, DY_4        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree10_J3, DY_5        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree11_J3, DY_6        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree12_J3, DY_7        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree13_J3, ST_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree14_J3, ST_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree15_J3, TT_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree16_J3, TT_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree17_J3, ttZ         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree18_J3, ttW         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree19_J3, tZq         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree20_J3, ZZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree21_J3, ZZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree22_J3, ZZ3di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree23_J3, WW1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree24_J3, WW2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree25_J3, WZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree26_J3, WZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree27_J3, WZ3di       ,plot,BIN,MIN,MAX);
  } else if(JETSyst==4){
    GetHisto(CUT, Tree01_J4, data        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree02_J4, tptzm0700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree03_J4, tptzm1000lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree04_J4, tptzm1400lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree05_J4, tptzm1700lh ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree06_J4, DY_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree07_J4, DY_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree08_J4, DY_3        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree09_J4, DY_4        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree10_J4, DY_5        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree11_J4, DY_6        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree12_J4, DY_7        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree13_J4, ST_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree14_J4, ST_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree15_J4, TT_1        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree16_J4, TT_2        ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree17_J4, ttZ         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree18_J4, ttW         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree19_J4, tZq         ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree20_J4, ZZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree21_J4, ZZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree22_J4, ZZ3di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree23_J4, WW1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree24_J4, WW2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree25_J4, WZ1di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree26_J4, WZ2di       ,plot,BIN,MIN,MAX);
    GetHisto(CUT, Tree27_J4, WZ3di       ,plot,BIN,MIN,MAX);
  }
  
  TH1F *background = new TH1F("","",data->GetNbinsX(),data->GetXaxis()->GetXmin(),data->GetXaxis()->GetXmax());
  for(int j=1; j<data->GetNbinsX()+1; j++){
    if(tptzm0700lh->GetBinContent(j)>0){tptzm0700lh->SetBinError(j,sqrt(w0700*w0700*tptzm0700lh->GetBinContent(j)));}else{tptzm0700lh->SetBinError(j,0);}
    if(tptzm1000lh->GetBinContent(j)>0){tptzm1000lh->SetBinError(j,sqrt(w1000*w1000*tptzm1000lh->GetBinContent(j)));}else{tptzm1000lh->SetBinError(j,0);}
    if(tptzm1400lh->GetBinContent(j)>0){tptzm1400lh->SetBinError(j,sqrt(w1400*w1400*tptzm1400lh->GetBinContent(j)));}else{tptzm1400lh->SetBinError(j,0);}
    if(tptzm1700lh->GetBinContent(j)>0){tptzm1700lh->SetBinError(j,sqrt(w1700*w1700*tptzm1700lh->GetBinContent(j)));}else{tptzm1700lh->SetBinError(j,0);}
    if(DY_1 ->GetBinContent(j)>0){DY_1 ->SetBinError(j,sqrt(w01*w01*DY_1 ->GetBinContent(j)));}else{DY_1 ->SetBinError(j,w01);}
    if(DY_2 ->GetBinContent(j)>0){DY_2 ->SetBinError(j,sqrt(w02*w02*DY_2 ->GetBinContent(j)));}else{DY_2 ->SetBinError(j,w02);}
    if(DY_3 ->GetBinContent(j)>0){DY_3 ->SetBinError(j,sqrt(w03*w03*DY_3 ->GetBinContent(j)));}else{DY_3 ->SetBinError(j,w03);}
    if(DY_4 ->GetBinContent(j)>0){DY_4 ->SetBinError(j,sqrt(w04*w04*DY_4 ->GetBinContent(j)));}else{DY_4 ->SetBinError(j,w04);}
    if(DY_5 ->GetBinContent(j)>0){DY_5 ->SetBinError(j,sqrt(w05*w05*DY_5 ->GetBinContent(j)));}else{DY_5 ->SetBinError(j,w05);}
    if(DY_6 ->GetBinContent(j)>0){DY_6 ->SetBinError(j,sqrt(w06*w06*DY_6 ->GetBinContent(j)));}else{DY_6 ->SetBinError(j,w06);}
    if(DY_7 ->GetBinContent(j)>0){DY_7 ->SetBinError(j,sqrt(w07*w07*DY_7 ->GetBinContent(j)));}else{DY_7 ->SetBinError(j,w07);}
    if(ST_1 ->GetBinContent(j)>0){ST_1 ->SetBinError(j,sqrt(w08*w08*ST_1 ->GetBinContent(j)));}else{ST_1 ->SetBinError(j,w08);}
    if(ST_2 ->GetBinContent(j)>0){ST_2 ->SetBinError(j,sqrt(w09*w09*ST_2 ->GetBinContent(j)));}else{ST_2 ->SetBinError(j,w09);}
    if(TT_1 ->GetBinContent(j)>0){TT_1 ->SetBinError(j,sqrt(w10*w10*TT_1 ->GetBinContent(j)));}else{TT_1 ->SetBinError(j,w10);}
    if(TT_2 ->GetBinContent(j)>0){TT_2 ->SetBinError(j,sqrt(w11*w11*TT_2 ->GetBinContent(j)));}else{TT_2 ->SetBinError(j,w11);}
    if(ttZ  ->GetBinContent(j)>0){ttZ  ->SetBinError(j,sqrt(w12*w12*ttZ  ->GetBinContent(j)));}else{ttZ  ->SetBinError(j,w12);}
    if(ttW  ->GetBinContent(j)>0){ttW  ->SetBinError(j,sqrt(w13*w13*ttW  ->GetBinContent(j)));}else{ttW  ->SetBinError(j,w13);}
    if(tZq  ->GetBinContent(j)>0){tZq  ->SetBinError(j,sqrt(w14*w14*tZq  ->GetBinContent(j)));}else{tZq  ->SetBinError(j,w14);}
    if(ZZ1di->GetBinContent(j)>0){ZZ1di->SetBinError(j,sqrt(w15*w15*ZZ1di->GetBinContent(j)));}else{ZZ1di->SetBinError(j,w15);}
    if(ZZ2di->GetBinContent(j)>0){ZZ2di->SetBinError(j,sqrt(w16*w16*ZZ2di->GetBinContent(j)));}else{ZZ2di->SetBinError(j,w16);}
    if(ZZ3di->GetBinContent(j)>0){ZZ3di->SetBinError(j,sqrt(w17*w17*ZZ3di->GetBinContent(j)));}else{ZZ3di->SetBinError(j,w17);}
    if(WW1di->GetBinContent(j)>0){WW1di->SetBinError(j,sqrt(w18*w18*WW1di->GetBinContent(j)));}else{WW1di->SetBinError(j,w18);}
    if(WW2di->GetBinContent(j)>0){WW2di->SetBinError(j,sqrt(w19*w19*WW2di->GetBinContent(j)));}else{WW2di->SetBinError(j,w19);}
    if(WZ1di->GetBinContent(j)>0){WZ1di->SetBinError(j,sqrt(w20*w20*WZ1di->GetBinContent(j)));}else{WZ1di->SetBinError(j,w20);}
    if(WZ2di->GetBinContent(j)>0){WZ2di->SetBinError(j,sqrt(w21*w21*WZ2di->GetBinContent(j)));}else{WZ2di->SetBinError(j,w21);}
    if(WZ3di->GetBinContent(j)>0){WZ3di->SetBinError(j,sqrt(w22*w22*WZ3di->GetBinContent(j)));}else{WZ3di->SetBinError(j,w22);}
    float err00 = data->GetBinError(j)*data->GetBinError(j);
    float err01 = DY_1->GetBinError(j)*DY_1->GetBinError(j) + DY_2->GetBinError(j)*DY_2->GetBinError(j) + DY_3->GetBinError(j)*DY_3->GetBinError(j);
    float err02 = DY_4->GetBinError(j)*DY_4->GetBinError(j) + DY_5->GetBinError(j)*DY_5->GetBinError(j) + DY_6->GetBinError(j)*DY_6->GetBinError(j) + 
      DY_7->GetBinError(j)*DY_7->GetBinError(j) + ST_1->GetBinError(j)*ST_1->GetBinError(j) + ST_2->GetBinError(j)*ST_2->GetBinError(j);
    float err03 = TT_1->GetBinError(j)*TT_1->GetBinError(j) + TT_2->GetBinError(j)*TT_2->GetBinError(j);
    float err04 = WW1di->GetBinError(j)*WW1di->GetBinError(j) + WW2di->GetBinError(j)*WW2di->GetBinError(j) + WZ1di->GetBinError(j)*WZ1di->GetBinError(j) + 
      WZ2di->GetBinError(j)*WZ2di->GetBinError(j) + WZ3di->GetBinError(j)*WZ3di->GetBinError(j) + ZZ1di->GetBinError(j)*ZZ1di->GetBinError(j) + 
      ZZ2di->GetBinError(j)*ZZ2di->GetBinError(j) + ZZ3di->GetBinError(j)*ZZ3di->GetBinError(j);
    float err05 = tZq ->GetBinError(j)*tZq ->GetBinError(j) + ttW ->GetBinError(j)*ttW ->GetBinError(j) + tZq ->GetBinError(j)*tZq ->GetBinError(j);
    background->SetBinError(j,sqrt(err01+err02+err03+err04+err05));
    tptzm0700lh->SetBinContent(j,w0700*tptzm0700lh->GetBinContent(j));
    tptzm1000lh->SetBinContent(j,w1000*tptzm1000lh->GetBinContent(j));
    tptzm1400lh->SetBinContent(j,w1400*tptzm1400lh->GetBinContent(j));
    tptzm1700lh->SetBinContent(j,w1700*tptzm1700lh->GetBinContent(j));
    DY_1 ->SetBinContent(j,w01*DY_1->GetBinContent(j));
    DY_2 ->SetBinContent(j,w02*DY_2->GetBinContent(j));
    DY_3 ->SetBinContent(j,w03*DY_3->GetBinContent(j));
    DY_4 ->SetBinContent(j,w04*DY_4->GetBinContent(j));
    DY_5 ->SetBinContent(j,w05*DY_5->GetBinContent(j));
    DY_6 ->SetBinContent(j,w06*DY_6->GetBinContent(j));
    DY_7 ->SetBinContent(j,w07*DY_7->GetBinContent(j));
    ST_1 ->SetBinContent(j,w08*ST_1->GetBinContent(j));
    ST_2 ->SetBinContent(j,w09*ST_2->GetBinContent(j));
    TT_1 ->SetBinContent(j,w10*TT_1->GetBinContent(j));
    TT_2 ->SetBinContent(j,w11*TT_2->GetBinContent(j));
    ttZ  ->SetBinContent(j,w12*ttZ ->GetBinContent(j));
    ttW  ->SetBinContent(j,w13*ttW ->GetBinContent(j));
    tZq  ->SetBinContent(j,w14*tZq ->GetBinContent(j));
    ZZ1di->SetBinContent(j,w15*ZZ1di->GetBinContent(j));
    ZZ2di->SetBinContent(j,w16*ZZ2di->GetBinContent(j));
    ZZ3di->SetBinContent(j,w17*ZZ3di->GetBinContent(j));
    WW1di->SetBinContent(j,w18*WW1di->GetBinContent(j));
    WW2di->SetBinContent(j,w19*WW2di->GetBinContent(j));
    WZ1di->SetBinContent(j,w20*WZ1di->GetBinContent(j));
    WZ2di->SetBinContent(j,w21*WZ2di->GetBinContent(j));
    WZ3di->SetBinContent(j,w22*WZ3di->GetBinContent(j));
    float DATA = data->GetBinContent(j);
    float bkg0 = DY_1->GetBinContent(j)+DY_2->GetBinContent(j)+DY_3->GetBinContent(j)+DY_4->GetBinContent(j)+DY_5->GetBinContent(j)+DY_6->GetBinContent(j)+DY_7->GetBinContent(j);
    float bkg1 = ST_1->GetBinContent(j) + ST_2->GetBinContent(j) + TT_1->GetBinContent(j) + TT_2->GetBinContent(j);
    float bkg2 = WW1di->GetBinContent(j) + WW2di->GetBinContent(j) + WZ1di->GetBinContent(j) + WZ2di->GetBinContent(j) + WZ3di->GetBinContent(j) + ZZ1di->GetBinContent(j) + 
      ZZ2di->GetBinContent(j) + ZZ3di->GetBinContent(j);
    float bkg3 = ttZ ->GetBinContent(j) + ttW ->GetBinContent(j) + tZq ->GetBinContent(j);
    background->SetBinContent(j,bkg0+bkg1+bkg2+bkg3);
  }

  background_func  = (TH1F*)background ->Clone(); 
  data_func        = (TH1F*)data       ->Clone(); 
  tptzm0700lh_func = (TH1F*)tptzm0700lh->Clone(); 
  tptzm1000lh_func = (TH1F*)tptzm1000lh->Clone(); 
  tptzm1400lh_func = (TH1F*)tptzm1400lh->Clone(); 
  tptzm1700lh_func = (TH1F*)tptzm1700lh->Clone(); 
  DY_1_func        = (TH1F*)DY_1       ->Clone(); 
  DY_2_func        = (TH1F*)DY_2       ->Clone(); 
  DY_3_func        = (TH1F*)DY_3       ->Clone(); 
  DY_4_func        = (TH1F*)DY_4       ->Clone(); 
  DY_5_func        = (TH1F*)DY_5       ->Clone(); 
  DY_6_func        = (TH1F*)DY_6       ->Clone(); 
  DY_7_func        = (TH1F*)DY_7       ->Clone(); 
  ST_1_func        = (TH1F*)ST_1       ->Clone();    
  ST_2_func        = (TH1F*)ST_2       ->Clone();
  TT_1_func        = (TH1F*)TT_1       ->Clone();    
  TT_2_func        = (TH1F*)TT_2       ->Clone();     
  WW1di_func       = (TH1F*)WW1di      ->Clone();  
  WW2di_func       = (TH1F*)WW2di      ->Clone();    
  WZ1di_func       = (TH1F*)WZ1di      ->Clone();    
  WZ2di_func       = (TH1F*)WZ2di      ->Clone();    
  WZ3di_func       = (TH1F*)WZ3di      ->Clone();    
  ZZ1di_func       = (TH1F*)ZZ1di      ->Clone();    
  ZZ2di_func       = (TH1F*)ZZ2di      ->Clone();    
  ZZ3di_func       = (TH1F*)ZZ3di      ->Clone();    
  ttZ_func         = (TH1F*)ttZ        ->Clone();    
  ttW_func         = (TH1F*)ttW        ->Clone();    
  tZq_func         = (TH1F*)tZq        ->Clone(); 
  delete data; delete background; delete DY_1; delete DY_2; delete DY_3; delete DY_4; delete DY_5; delete DY_6; delete DY_7; delete ST_1; delete ST_2; delete TT_1; delete TT_2; delete WW1di; delete WW2di; delete WZ1di; delete WZ2di; delete WZ3di; delete ZZ1di; delete ZZ2di;  delete ZZ3di; delete ttZ; delete ttW; delete tZq;
}

void MakeHistoErrors(int m, TH1F* &histo_SR, TH1F* histo_M1, TH1F* histo_M2, TH1F* histo_E1, TH1F* histo_E2, TH1F* histo_R1, TH1F* histo_R2, TH1F* histo_R3, TH1F* histo_R4, TH1F* histo_P1, TH1F* histo_P2, TH1F* histo_B1, TH1F* histo_B2, TH1F* histo_T1, TH1F* histo_T2, TH1F* histo_F1, TH1F* histo_F2, TH1F* histo_W1, TH1F* histo_W2, TH1F* histo_J1, TH1F* histo_J2, TH1F* histo_J3, TH1F* histo_J4){
  float ErrMc = histo_SR->GetBinError(m); 
  float ErrLU = 0.026*histo_SR->GetBinContent(m);
  float ErrMU = max(fabs(histo_SR->GetBinContent(m)-histo_M1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_M2->GetBinContent(m)));
  float ErrEL = max(fabs(histo_SR->GetBinContent(m)-histo_E1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_E2->GetBinContent(m)));
  float ErrTM = max(fabs(histo_SR->GetBinContent(m)-histo_R1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_R2->GetBinContent(m)));
  float ErrTE = max(fabs(histo_SR->GetBinContent(m)-histo_R3->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_R4->GetBinContent(m)));
  float ErrPU = max(fabs(histo_SR->GetBinContent(m)-histo_P1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_P2->GetBinContent(m)));
  float ErrBT = max(fabs(histo_SR->GetBinContent(m)-histo_B1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_B2->GetBinContent(m))); 
  float ErrFO = max(fabs(histo_SR->GetBinContent(m)-histo_F1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_F2->GetBinContent(m))); 
  float ErrTO = max(fabs(histo_SR->GetBinContent(m)-histo_T1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_T2->GetBinContent(m))); 
  float ErrWJ = max(fabs(histo_SR->GetBinContent(m)-histo_W1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_W2->GetBinContent(m))); 
  float ErrJS = max(fabs(histo_SR->GetBinContent(m)-histo_J1->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_J2->GetBinContent(m))); 
  float ErrJR = max(fabs(histo_SR->GetBinContent(m)-histo_J3->GetBinContent(m)),fabs(histo_SR->GetBinContent(m)-histo_J4->GetBinContent(m))); 
  float TOTAL = sqrt(ErrMc*ErrMc + ErrLU*ErrLU + ErrMU*ErrMU + ErrEL*ErrEL + ErrTM*ErrTM + ErrTE*ErrTE + ErrPU*ErrPU + ErrBT*ErrBT + ErrFO*ErrFO + ErrTO*ErrTO + ErrWJ*ErrJS + ErrTO*ErrJS + ErrJR*ErrJR);
  histo_SR ->SetBinError(m,TOTAL);
}
