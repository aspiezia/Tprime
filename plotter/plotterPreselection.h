void MakeHistos(char CUT[1000],const char *plot,int BIN,float MIN,float MAX,int JETSyst,
		TH1F* &data_func,TH1F* &background_func,TH1F* &DY_1_func,TH1F* &DY_2_func,TH1F* &DY_3_func,TH1F* &DY_4_func,TH1F* &DY_5_func,TH1F* &DY_6_func,TH1F* &DY_7_func,
		TH1F* &ST_1_func,TH1F* &ST_2_func,TH1F* &TT_1_func,TH1F* &TT_2_func,TH1F* &WW1di_func,TH1F* &WW2di_func,TH1F* &WZ1di_func,TH1F* &WZ2di_func,TH1F* &WZ3di_func,
		TH1F* &ZZ1di_func,TH1F* &ZZ2di_func,TH1F* &ZZ3di_func,TH1F* &ttZ_func,TH1F* &ttW_func,TH1F* &tZq_func,TH1F* &tptzm0700lh_func,TH1F* &tptzm1000lh_func,
		TH1F* &tptzm1400lh_func,TH1F* &tptzm1700lh_func);
void MakeHistoErrors(int m, TH1F* &histo_SR, TH1F* histo_M1, TH1F* histo_M2, TH1F* histo_E1, TH1F* histo_E2, TH1F* histo_R1, TH1F* histo_R2, TH1F* histo_R3, TH1F* histo_R4, TH1F* histo_P1, TH1F* histo_P2, TH1F* histo_B1, TH1F* histo_B2, TH1F* histo_F1, TH1F* histo_F2, TH1F* histo_T1, TH1F* histo_T2, TH1F* histo_W1, TH1F* histo_W2, TH1F* histo_J1, TH1F* histo_J2, TH1F* histo_J3, TH1F* histo_J4);

int SigSF = 100;
float LUMI = 39800.0;
float w0700 = SigSF*(0.5*0.5*5.820 *0.25*LUMI/388056);
float w1000 = SigSF*(0.5*0.5*1.950 *0.25*LUMI/400000);
float w1400 = SigSF*(0.5*0.5*0.540 *0.25*LUMI/400000);
float w1700 = SigSF*(0.5*0.5*0.230 *0.25*LUMI/400000);
float w01   = (213.400*LUMI/10031487);     	 //(164.4000*LUMI/10031487);
float w02   = (65.4200*LUMI/9917255);		 //(49.77000*LUMI/9917255);
float w03   = (7.31000*LUMI/(4771799+4259062));  //(6.805000*LUMI/(4771799+4259062));
float w04   = (1.49000*LUMI/8003554);		 //(1.778000*LUMI/6961344);
float w05   = (0.66100*LUMI/3065315);		 //(0.852600*LUMI/3065315);
float w06   = (0.11900*LUMI/596079);		 //(0.116000*LUMI/596079);
float w07   = (0.00280*LUMI/388323);               //(0.003652*LUMI/388323);                      
float w08   = (38.06*LUMI/5164799);                 //ST antitop
float w09   = (38.06*LUMI/4656358);                 //ST top
float w10   = (88.290*LUMI/69365656);               //TT 2L2Nu
float w11   = (365.34*LUMI/111102136);              //TT semileptonic
float w12   = (0.2432*LUMI/(7563490*(0.74-0.26)));  //ttZ
float w13   = (0.2001*LUMI/(4889942*(0.77-0.23)));  //ttW
float w14   = (0.0758*LUMI/(13220024*(0.63-0.37))); //tZq
float w15   = (1.204*LUMI/(10709784*(0.85-0.15)));  //ZZTo4L
float w16   = (3.222*LUMI/(15137964*(0.82-0.18)));  //ZZTo2L2Q
float w17   = (0.5644*LUMI/8842475);                //ZZTo2L2Nu
float w18   = (10.48*LUMI/1818828);                 //WWTo2L2Nu
float w19   = (43.53*LUMI/8516920);                 //WWToLNuQQ
float w20   = (10.73*LUMI/(24221923*(0.79-0.21)));  //WZTo1L1Nu2Q
float w21   = ( 5.606*LUMI/(26517272*(0.8-0.2)));   //WZTo2L2Q
float w22   = (4.43*LUMI/(10547587*(0.81-0.19)));   //WZTo3LNu

TH1F *data_SR; TH1F *tptzm0700lh_SR; TH1F *tptzm1000lh_SR; TH1F *tptzm1400lh_SR; TH1F *tptzm1700lh_SR; TH1F *DY_1_SR; TH1F *DY_2_SR; TH1F *DY_3_SR; TH1F *DY_4_SR; TH1F *DY_5_SR; TH1F *DY_6_SR; TH1F *DY_7_SR; TH1F *ST_1_SR; TH1F *ST_2_SR; TH1F *TT_1_SR; TH1F *TT_2_SR; TH1F *ZZ1_SR; TH1F *ZZ2_SR; TH1F *ZZ3_SR; TH1F *WW1_SR; TH1F *WW2_SR; TH1F *WZ1_SR; TH1F *WZ2_SR; TH1F *WZ3_SR; TH1F *ttZ_SR; TH1F *ttW_SR; TH1F *tZq_SR; TH1F *background_SR;
TH1F *data_M1; TH1F *tptzm0700lh_M1; TH1F *tptzm1000lh_M1; TH1F *tptzm1400lh_M1; TH1F *tptzm1700lh_M1; TH1F *DY_1_M1; TH1F *DY_2_M1; TH1F *DY_3_M1; TH1F *DY_4_M1; TH1F *DY_5_M1; TH1F *DY_6_M1; TH1F *DY_7_M1; TH1F *ST_1_M1; TH1F *ST_2_M1; TH1F *TT_1_M1; TH1F *TT_2_M1; TH1F *ZZ1_M1; TH1F *ZZ2_M1; TH1F *ZZ3_M1; TH1F *WW1_M1; TH1F *WW2_M1; TH1F *WZ1_M1; TH1F *WZ2_M1; TH1F *WZ3_M1; TH1F *ttZ_M1; TH1F *ttW_M1; TH1F *tZq_M1; TH1F *background_M1;
TH1F *data_M2; TH1F *tptzm0700lh_M2; TH1F *tptzm1000lh_M2; TH1F *tptzm1400lh_M2; TH1F *tptzm1700lh_M2; TH1F *DY_1_M2; TH1F *DY_2_M2; TH1F *DY_3_M2; TH1F *DY_4_M2; TH1F *DY_5_M2; TH1F *DY_6_M2; TH1F *DY_7_M2; TH1F *ST_1_M2; TH1F *ST_2_M2; TH1F *TT_1_M2; TH1F *TT_2_M2; TH1F *ZZ1_M2; TH1F *ZZ2_M2; TH1F *ZZ3_M2; TH1F *WW1_M2; TH1F *WW2_M2; TH1F *WZ1_M2; TH1F *WZ2_M2; TH1F *WZ3_M2; TH1F *ttZ_M2; TH1F *ttW_M2; TH1F *tZq_M2; TH1F *background_M2;
TH1F *data_E1; TH1F *tptzm0700lh_E1; TH1F *tptzm1000lh_E1; TH1F *tptzm1400lh_E1; TH1F *tptzm1700lh_E1; TH1F *DY_1_E1; TH1F *DY_2_E1; TH1F *DY_3_E1; TH1F *DY_4_E1; TH1F *DY_5_E1; TH1F *DY_6_E1; TH1F *DY_7_E1; TH1F *ST_1_E1; TH1F *ST_2_E1; TH1F *TT_1_E1; TH1F *TT_2_E1; TH1F *ZZ1_E1; TH1F *ZZ2_E1; TH1F *ZZ3_E1; TH1F *WW1_E1; TH1F *WW2_E1; TH1F *WZ1_E1; TH1F *WZ2_E1; TH1F *WZ3_E1; TH1F *ttZ_E1; TH1F *ttW_E1; TH1F *tZq_E1; TH1F *background_E1;
TH1F *data_E2; TH1F *tptzm0700lh_E2; TH1F *tptzm1000lh_E2; TH1F *tptzm1400lh_E2; TH1F *tptzm1700lh_E2; TH1F *DY_1_E2; TH1F *DY_2_E2; TH1F *DY_3_E2; TH1F *DY_4_E2; TH1F *DY_5_E2; TH1F *DY_6_E2; TH1F *DY_7_E2; TH1F *ST_1_E2; TH1F *ST_2_E2; TH1F *TT_1_E2; TH1F *TT_2_E2; TH1F *ZZ1_E2; TH1F *ZZ2_E2; TH1F *ZZ3_E2; TH1F *WW1_E2; TH1F *WW2_E2; TH1F *WZ1_E2; TH1F *WZ2_E2; TH1F *WZ3_E2; TH1F *ttZ_E2; TH1F *ttW_E2; TH1F *tZq_E2; TH1F *background_E2;
TH1F *data_R1; TH1F *tptzm0700lh_R1; TH1F *tptzm1000lh_R1; TH1F *tptzm1400lh_R1; TH1F *tptzm1700lh_R1; TH1F *DY_1_R1; TH1F *DY_2_R1; TH1F *DY_3_R1; TH1F *DY_4_R1; TH1F *DY_5_R1; TH1F *DY_6_R1; TH1F *DY_7_R1; TH1F *ST_1_R1; TH1F *ST_2_R1; TH1F *TT_1_R1; TH1F *TT_2_R1; TH1F *ZZ1_R1; TH1F *ZZ2_R1; TH1F *ZZ3_R1; TH1F *WW1_R1; TH1F *WW2_R1; TH1F *WZ1_R1; TH1F *WZ2_R1; TH1F *WZ3_R1; TH1F *ttZ_R1; TH1F *ttW_R1; TH1F *tZq_R1; TH1F *background_R1;
TH1F *data_R2; TH1F *tptzm0700lh_R2; TH1F *tptzm1000lh_R2; TH1F *tptzm1400lh_R2; TH1F *tptzm1700lh_R2; TH1F *DY_1_R2; TH1F *DY_2_R2; TH1F *DY_3_R2; TH1F *DY_4_R2; TH1F *DY_5_R2; TH1F *DY_6_R2; TH1F *DY_7_R2; TH1F *ST_1_R2; TH1F *ST_2_R2; TH1F *TT_1_R2; TH1F *TT_2_R2; TH1F *ZZ1_R2; TH1F *ZZ2_R2; TH1F *ZZ3_R2; TH1F *WW1_R2; TH1F *WW2_R2; TH1F *WZ1_R2; TH1F *WZ2_R2; TH1F *WZ3_R2; TH1F *ttZ_R2; TH1F *ttW_R2; TH1F *tZq_R2; TH1F *background_R2;
TH1F *data_R3; TH1F *tptzm0700lh_R3; TH1F *tptzm1000lh_R3; TH1F *tptzm1400lh_R3; TH1F *tptzm1700lh_R3; TH1F *DY_1_R3; TH1F *DY_2_R3; TH1F *DY_3_R3; TH1F *DY_4_R3; TH1F *DY_5_R3; TH1F *DY_6_R3; TH1F *DY_7_R3; TH1F *ST_1_R3; TH1F *ST_2_R3; TH1F *TT_1_R3; TH1F *TT_2_R3; TH1F *ZZ1_R3; TH1F *ZZ2_R3; TH1F *ZZ3_R3; TH1F *WW1_R3; TH1F *WW2_R3; TH1F *WZ1_R3; TH1F *WZ2_R3; TH1F *WZ3_R3; TH1F *ttZ_R3; TH1F *ttW_R3; TH1F *tZq_R3; TH1F *background_R3;
TH1F *data_R4; TH1F *tptzm0700lh_R4; TH1F *tptzm1000lh_R4; TH1F *tptzm1400lh_R4; TH1F *tptzm1700lh_R4; TH1F *DY_1_R4; TH1F *DY_2_R4; TH1F *DY_3_R4; TH1F *DY_4_R4; TH1F *DY_5_R4; TH1F *DY_6_R4; TH1F *DY_7_R4; TH1F *ST_1_R4; TH1F *ST_2_R4; TH1F *TT_1_R4; TH1F *TT_2_R4; TH1F *ZZ1_R4; TH1F *ZZ2_R4; TH1F *ZZ3_R4; TH1F *WW1_R4; TH1F *WW2_R4; TH1F *WZ1_R4; TH1F *WZ2_R4; TH1F *WZ3_R4; TH1F *ttZ_R4; TH1F *ttW_R4; TH1F *tZq_R4; TH1F *background_R4;
TH1F *data_P1; TH1F *tptzm0700lh_P1; TH1F *tptzm1000lh_P1; TH1F *tptzm1400lh_P1; TH1F *tptzm1700lh_P1; TH1F *DY_1_P1; TH1F *DY_2_P1; TH1F *DY_3_P1; TH1F *DY_4_P1; TH1F *DY_5_P1; TH1F *DY_6_P1; TH1F *DY_7_P1; TH1F *ST_1_P1; TH1F *ST_2_P1; TH1F *TT_1_P1; TH1F *TT_2_P1; TH1F *ZZ1_P1; TH1F *ZZ2_P1; TH1F *ZZ3_P1; TH1F *WW1_P1; TH1F *WW2_P1; TH1F *WZ1_P1; TH1F *WZ2_P1; TH1F *WZ3_P1; TH1F *ttZ_P1; TH1F *ttW_P1; TH1F *tZq_P1; TH1F *background_P1;
TH1F *data_P2; TH1F *tptzm0700lh_P2; TH1F *tptzm1000lh_P2; TH1F *tptzm1400lh_P2; TH1F *tptzm1700lh_P2; TH1F *DY_1_P2; TH1F *DY_2_P2; TH1F *DY_3_P2; TH1F *DY_4_P2; TH1F *DY_5_P2; TH1F *DY_6_P2; TH1F *DY_7_P2; TH1F *ST_1_P2; TH1F *ST_2_P2; TH1F *TT_1_P2; TH1F *TT_2_P2; TH1F *ZZ1_P2; TH1F *ZZ2_P2; TH1F *ZZ3_P2; TH1F *WW1_P2; TH1F *WW2_P2; TH1F *WZ1_P2; TH1F *WZ2_P2; TH1F *WZ3_P2; TH1F *ttZ_P2; TH1F *ttW_P2; TH1F *tZq_P2; TH1F *background_P2;
TH1F *data_B1; TH1F *tptzm0700lh_B1; TH1F *tptzm1000lh_B1; TH1F *tptzm1400lh_B1; TH1F *tptzm1700lh_B1; TH1F *DY_1_B1; TH1F *DY_2_B1; TH1F *DY_3_B1; TH1F *DY_4_B1; TH1F *DY_5_B1; TH1F *DY_6_B1; TH1F *DY_7_B1; TH1F *ST_1_B1; TH1F *ST_2_B1; TH1F *TT_1_B1; TH1F *TT_2_B1; TH1F *ZZ1_B1; TH1F *ZZ2_B1; TH1F *ZZ3_B1; TH1F *WW1_B1; TH1F *WW2_B1; TH1F *WZ1_B1; TH1F *WZ2_B1; TH1F *WZ3_B1; TH1F *ttZ_B1; TH1F *ttW_B1; TH1F *tZq_B1; TH1F *background_B1;
TH1F *data_B2; TH1F *tptzm0700lh_B2; TH1F *tptzm1000lh_B2; TH1F *tptzm1400lh_B2; TH1F *tptzm1700lh_B2; TH1F *DY_1_B2; TH1F *DY_2_B2; TH1F *DY_3_B2; TH1F *DY_4_B2; TH1F *DY_5_B2; TH1F *DY_6_B2; TH1F *DY_7_B2; TH1F *ST_1_B2; TH1F *ST_2_B2; TH1F *TT_1_B2; TH1F *TT_2_B2; TH1F *ZZ1_B2; TH1F *ZZ2_B2; TH1F *ZZ3_B2; TH1F *WW1_B2; TH1F *WW2_B2; TH1F *WZ1_B2; TH1F *WZ2_B2; TH1F *WZ3_B2; TH1F *ttZ_B2; TH1F *ttW_B2; TH1F *tZq_B2; TH1F *background_B2;
TH1F *data_F1; TH1F *tptzm0700lh_F1; TH1F *tptzm1000lh_F1; TH1F *tptzm1400lh_F1; TH1F *tptzm1700lh_F1; TH1F *DY_1_F1; TH1F *DY_2_F1; TH1F *DY_3_F1; TH1F *DY_4_F1; TH1F *DY_5_F1; TH1F *DY_6_F1; TH1F *DY_7_F1; TH1F *ST_1_F1; TH1F *ST_2_F1; TH1F *TT_1_F1; TH1F *TT_2_F1; TH1F *ZZ1_F1; TH1F *ZZ2_F1; TH1F *ZZ3_F1; TH1F *WW1_F1; TH1F *WW2_F1; TH1F *WZ1_F1; TH1F *WZ2_F1; TH1F *WZ3_F1; TH1F *ttZ_F1; TH1F *ttW_F1; TH1F *tZq_F1; TH1F *background_F1;
TH1F *data_F2; TH1F *tptzm0700lh_F2; TH1F *tptzm1000lh_F2; TH1F *tptzm1400lh_F2; TH1F *tptzm1700lh_F2; TH1F *DY_1_F2; TH1F *DY_2_F2; TH1F *DY_3_F2; TH1F *DY_4_F2; TH1F *DY_5_F2; TH1F *DY_6_F2; TH1F *DY_7_F2; TH1F *ST_1_F2; TH1F *ST_2_F2; TH1F *TT_1_F2; TH1F *TT_2_F2; TH1F *ZZ1_F2; TH1F *ZZ2_F2; TH1F *ZZ3_F2; TH1F *WW1_F2; TH1F *WW2_F2; TH1F *WZ1_F2; TH1F *WZ2_F2; TH1F *WZ3_F2; TH1F *ttZ_F2; TH1F *ttW_F2; TH1F *tZq_F2; TH1F *background_F2;
TH1F *data_T1; TH1F *tptzm0700lh_T1; TH1F *tptzm1000lh_T1; TH1F *tptzm1400lh_T1; TH1F *tptzm1700lh_T1; TH1F *DY_1_T1; TH1F *DY_2_T1; TH1F *DY_3_T1; TH1F *DY_4_T1; TH1F *DY_5_T1; TH1F *DY_6_T1; TH1F *DY_7_T1; TH1F *ST_1_T1; TH1F *ST_2_T1; TH1F *TT_1_T1; TH1F *TT_2_T1; TH1F *ZZ1_T1; TH1F *ZZ2_T1; TH1F *ZZ3_T1; TH1F *WW1_T1; TH1F *WW2_T1; TH1F *WZ1_T1; TH1F *WZ2_T1; TH1F *WZ3_T1; TH1F *ttZ_T1; TH1F *ttW_T1; TH1F *tZq_T1; TH1F *background_T1;
TH1F *data_T2; TH1F *tptzm0700lh_T2; TH1F *tptzm1000lh_T2; TH1F *tptzm1400lh_T2; TH1F *tptzm1700lh_T2; TH1F *DY_1_T2; TH1F *DY_2_T2; TH1F *DY_3_T2; TH1F *DY_4_T2; TH1F *DY_5_T2; TH1F *DY_6_T2; TH1F *DY_7_T2; TH1F *ST_1_T2; TH1F *ST_2_T2; TH1F *TT_1_T2; TH1F *TT_2_T2; TH1F *ZZ1_T2; TH1F *ZZ2_T2; TH1F *ZZ3_T2; TH1F *WW1_T2; TH1F *WW2_T2; TH1F *WZ1_T2; TH1F *WZ2_T2; TH1F *WZ3_T2; TH1F *ttZ_T2; TH1F *ttW_T2; TH1F *tZq_T2; TH1F *background_T2;
TH1F *data_W1; TH1F *tptzm0700lh_W1; TH1F *tptzm1000lh_W1; TH1F *tptzm1400lh_W1; TH1F *tptzm1700lh_W1; TH1F *DY_1_W1; TH1F *DY_2_W1; TH1F *DY_3_W1; TH1F *DY_4_W1; TH1F *DY_5_W1; TH1F *DY_6_W1; TH1F *DY_7_W1; TH1F *ST_1_W1; TH1F *ST_2_W1; TH1F *TT_1_W1; TH1F *TT_2_W1; TH1F *ZZ1_W1; TH1F *ZZ2_W1; TH1F *ZZ3_W1; TH1F *WW1_W1; TH1F *WW2_W1; TH1F *WZ1_W1; TH1F *WZ2_W1; TH1F *WZ3_W1; TH1F *ttZ_W1; TH1F *ttW_W1; TH1F *tZq_W1; TH1F *background_W1;
TH1F *data_W2; TH1F *tptzm0700lh_W2; TH1F *tptzm1000lh_W2; TH1F *tptzm1400lh_W2; TH1F *tptzm1700lh_W2; TH1F *DY_1_W2; TH1F *DY_2_W2; TH1F *DY_3_W2; TH1F *DY_4_W2; TH1F *DY_5_W2; TH1F *DY_6_W2; TH1F *DY_7_W2; TH1F *ST_1_W2; TH1F *ST_2_W2; TH1F *TT_1_W2; TH1F *TT_2_W2; TH1F *ZZ1_W2; TH1F *ZZ2_W2; TH1F *ZZ3_W2; TH1F *WW1_W2; TH1F *WW2_W2; TH1F *WZ1_W2; TH1F *WZ2_W2; TH1F *WZ3_W2; TH1F *ttZ_W2; TH1F *ttW_W2; TH1F *tZq_W2; TH1F *background_W2;
TH1F *data_J1; TH1F *tptzm0700lh_J1; TH1F *tptzm1000lh_J1; TH1F *tptzm1400lh_J1; TH1F *tptzm1700lh_J1; TH1F *DY_1_J1; TH1F *DY_2_J1; TH1F *DY_3_J1; TH1F *DY_4_J1; TH1F *DY_5_J1; TH1F *DY_6_J1; TH1F *DY_7_J1; TH1F *ST_1_J1; TH1F *ST_2_J1; TH1F *TT_1_J1; TH1F *TT_2_J1; TH1F *ZZ1_J1; TH1F *ZZ2_J1; TH1F *ZZ3_J1; TH1F *WW1_J1; TH1F *WW2_J1; TH1F *WZ1_J1; TH1F *WZ2_J1; TH1F *WZ3_J1; TH1F *ttZ_J1; TH1F *ttW_J1; TH1F *tZq_J1; TH1F *background_J1;
TH1F *data_J2; TH1F *tptzm0700lh_J2; TH1F *tptzm1000lh_J2; TH1F *tptzm1400lh_J2; TH1F *tptzm1700lh_J2; TH1F *DY_1_J2; TH1F *DY_2_J2; TH1F *DY_3_J2; TH1F *DY_4_J2; TH1F *DY_5_J2; TH1F *DY_6_J2; TH1F *DY_7_J2; TH1F *ST_1_J2; TH1F *ST_2_J2; TH1F *TT_1_J2; TH1F *TT_2_J2; TH1F *ZZ1_J2; TH1F *ZZ2_J2; TH1F *ZZ3_J2; TH1F *WW1_J2; TH1F *WW2_J2; TH1F *WZ1_J2; TH1F *WZ2_J2; TH1F *WZ3_J2; TH1F *ttZ_J2; TH1F *ttW_J2; TH1F *tZq_J2; TH1F *background_J2;
TH1F *data_J3; TH1F *tptzm0700lh_J3; TH1F *tptzm1000lh_J3; TH1F *tptzm1400lh_J3; TH1F *tptzm1700lh_J3; TH1F *DY_1_J3; TH1F *DY_2_J3; TH1F *DY_3_J3; TH1F *DY_4_J3; TH1F *DY_5_J3; TH1F *DY_6_J3; TH1F *DY_7_J3; TH1F *ST_1_J3; TH1F *ST_2_J3; TH1F *TT_1_J3; TH1F *TT_2_J3; TH1F *ZZ1_J3; TH1F *ZZ2_J3; TH1F *ZZ3_J3; TH1F *WW1_J3; TH1F *WW2_J3; TH1F *WZ1_J3; TH1F *WZ2_J3; TH1F *WZ3_J3; TH1F *ttZ_J3; TH1F *ttW_J3; TH1F *tZq_J3; TH1F *background_J3;
TH1F *data_J4; TH1F *tptzm0700lh_J4; TH1F *tptzm1000lh_J4; TH1F *tptzm1400lh_J4; TH1F *tptzm1700lh_J4; TH1F *DY_1_J4; TH1F *DY_2_J4; TH1F *DY_3_J4; TH1F *DY_4_J4; TH1F *DY_5_J4; TH1F *DY_6_J4; TH1F *DY_7_J4; TH1F *ST_1_J4; TH1F *ST_2_J4; TH1F *TT_1_J4; TH1F *TT_2_J4; TH1F *ZZ1_J4; TH1F *ZZ2_J4; TH1F *ZZ3_J4; TH1F *WW1_J4; TH1F *WW2_J4; TH1F *WZ1_J4; TH1F *WZ2_J4; TH1F *WZ3_J4; TH1F *ttZ_J4; TH1F *ttW_J4; TH1F *tZq_J4; TH1F *background_J4;

TFile *file01 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/data.root");
TFile *file02 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/Tprime_0700.root");
TFile *file03 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/Tprime_1000.root");
TFile *file04 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/Tprime_1400.root");
TFile *file05 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/Tprime_1700.root");
TFile *file06 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT100to200.root");
TFile *file07 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT200to400.root");
TFile *file08 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT400to600.root");
TFile *file09 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT600to800.root");
TFile *file10 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT800to1200.root");
TFile *file11 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT1200to2500.root");
TFile *file12 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/DYJetsToLL_HT2500toInf.root");
TFile *file13 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ST_tW_antitop.root");
TFile *file14 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ST_tW_top.root");
TFile *file15 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/TTTo2L2Nu.root");
TFile *file16 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/TTToSemiLeptonic.root");
TFile *file17 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ttZ.root");
TFile *file18 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ttW.root");
TFile *file19 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/tZq.root");
TFile *file20 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ZZTo4L.root");
TFile *file21 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ZZTo2L2Q.root");
TFile *file22 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/ZZTo2L2Nu.root");
TFile *file23 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/WWTo2L2Nu.root");
TFile *file24 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/WWToLNuQQ.root");
TFile *file25 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/WZTo1L1Nu2Q.root");
TFile *file26 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/WZTo2L2Q.root");
TFile *file27 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/both/WZTo3LNu.root");
TTree *Tree01 = (TTree*)file01->Get("tree");
TTree *Tree02 = (TTree*)file02->Get("tree");
TTree *Tree03 = (TTree*)file03->Get("tree");
TTree *Tree04 = (TTree*)file04->Get("tree");
TTree *Tree05 = (TTree*)file05->Get("tree");
TTree *Tree06 = (TTree*)file06->Get("tree");
TTree *Tree07 = (TTree*)file07->Get("tree");
TTree *Tree08 = (TTree*)file08->Get("tree");
TTree *Tree09 = (TTree*)file09->Get("tree");
TTree *Tree10 = (TTree*)file10->Get("tree");
TTree *Tree11 = (TTree*)file11->Get("tree");
TTree *Tree12 = (TTree*)file12->Get("tree");
TTree *Tree13 = (TTree*)file13->Get("tree");
TTree *Tree14 = (TTree*)file14->Get("tree");
TTree *Tree15 = (TTree*)file15->Get("tree");
TTree *Tree16 = (TTree*)file16->Get("tree");
TTree *Tree17 = (TTree*)file17->Get("tree");
TTree *Tree18 = (TTree*)file18->Get("tree");
TTree *Tree19 = (TTree*)file19->Get("tree");
TTree *Tree20 = (TTree*)file20->Get("tree");
TTree *Tree21 = (TTree*)file21->Get("tree");
TTree *Tree22 = (TTree*)file22->Get("tree");
TTree *Tree23 = (TTree*)file23->Get("tree");
TTree *Tree24 = (TTree*)file24->Get("tree");
TTree *Tree25 = (TTree*)file25->Get("tree");
TTree *Tree26 = (TTree*)file26->Get("tree");
TTree *Tree27 = (TTree*)file27->Get("tree");

TFile *file01_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/data.root");
TFile *file02_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/Tprime_0700.root");
TFile *file03_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/Tprime_1000.root");
TFile *file04_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/Tprime_1400.root");
TFile *file05_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/Tprime_1700.root");
TFile *file06_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT100to200.root");
TFile *file07_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT200to400.root");
TFile *file08_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT400to600.root");
TFile *file09_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT600to800.root");
TFile *file10_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT800to1200.root");
TFile *file11_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT1200to2500.root");
TFile *file12_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/DYJetsToLL_HT2500toInf.root");
TFile *file13_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ST_tW_antitop.root");
TFile *file14_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ST_tW_top.root");
TFile *file15_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/TTTo2L2Nu.root");
TFile *file16_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/TTToSemiLeptonic.root");
TFile *file17_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ttZ.root");
TFile *file18_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ttW.root");
TFile *file19_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/tZq.root");
TFile *file20_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ZZTo4L.root");
TFile *file21_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ZZTo2L2Q.root");
TFile *file22_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/ZZTo2L2Nu.root");
TFile *file23_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/WWTo2L2Nu.root");
TFile *file24_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/WWToLNuQQ.root");
TFile *file25_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/WZTo1L1Nu2Q.root");
TFile *file26_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/WZTo2L2Q.root");
TFile *file27_J1 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESdo/both/WZTo3LNu.root");
TTree *Tree01_J1 = (TTree*)file01_J1->Get("tree");
TTree *Tree02_J1 = (TTree*)file02_J1->Get("tree");
TTree *Tree03_J1 = (TTree*)file03_J1->Get("tree");
TTree *Tree04_J1 = (TTree*)file04_J1->Get("tree");
TTree *Tree05_J1 = (TTree*)file05_J1->Get("tree");
TTree *Tree06_J1 = (TTree*)file06_J1->Get("tree");
TTree *Tree07_J1 = (TTree*)file07_J1->Get("tree");
TTree *Tree08_J1 = (TTree*)file08_J1->Get("tree");
TTree *Tree09_J1 = (TTree*)file09_J1->Get("tree");
TTree *Tree10_J1 = (TTree*)file10_J1->Get("tree");
TTree *Tree11_J1 = (TTree*)file11_J1->Get("tree");
TTree *Tree12_J1 = (TTree*)file12_J1->Get("tree");
TTree *Tree13_J1 = (TTree*)file13_J1->Get("tree");
TTree *Tree14_J1 = (TTree*)file14_J1->Get("tree");
TTree *Tree15_J1 = (TTree*)file15_J1->Get("tree");
TTree *Tree16_J1 = (TTree*)file16_J1->Get("tree");
TTree *Tree17_J1 = (TTree*)file17_J1->Get("tree");
TTree *Tree18_J1 = (TTree*)file18_J1->Get("tree");
TTree *Tree19_J1 = (TTree*)file19_J1->Get("tree");
TTree *Tree20_J1 = (TTree*)file20_J1->Get("tree");
TTree *Tree21_J1 = (TTree*)file21_J1->Get("tree");
TTree *Tree22_J1 = (TTree*)file22_J1->Get("tree");
TTree *Tree23_J1 = (TTree*)file23_J1->Get("tree");
TTree *Tree24_J1 = (TTree*)file24_J1->Get("tree");
TTree *Tree25_J1 = (TTree*)file25_J1->Get("tree");
TTree *Tree26_J1 = (TTree*)file26_J1->Get("tree");
TTree *Tree27_J1 = (TTree*)file27_J1->Get("tree");

TFile *file01_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/data.root");
TFile *file02_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/Tprime_0700.root");
TFile *file03_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/Tprime_1000.root");
TFile *file04_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/Tprime_1400.root");
TFile *file05_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/Tprime_1700.root");
TFile *file06_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT100to200.root");
TFile *file07_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT200to400.root");
TFile *file08_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT400to600.root");
TFile *file09_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT600to800.root");
TFile *file10_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT800to1200.root");
TFile *file11_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT1200to2500.root");
TFile *file12_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/DYJetsToLL_HT2500toInf.root");
TFile *file13_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ST_tW_antitop.root");
TFile *file14_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ST_tW_top.root");
TFile *file15_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/TTTo2L2Nu.root");
TFile *file16_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/TTToSemiLeptonic.root");
TFile *file17_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ttZ.root");
TFile *file18_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ttW.root");
TFile *file19_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/tZq.root");
TFile *file20_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ZZTo4L.root");
TFile *file21_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ZZTo2L2Q.root");
TFile *file22_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/ZZTo2L2Nu.root");
TFile *file23_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/WWTo2L2Nu.root");
TFile *file24_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/WWToLNuQQ.root");
TFile *file25_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/WZTo1L1Nu2Q.root");
TFile *file26_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/WZTo2L2Q.root");
TFile *file27_J2 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JESup/both/WZTo3LNu.root");
TTree *Tree01_J2 = (TTree*)file01_J2->Get("tree");
TTree *Tree02_J2 = (TTree*)file02_J2->Get("tree");
TTree *Tree03_J2 = (TTree*)file03_J2->Get("tree");
TTree *Tree04_J2 = (TTree*)file04_J2->Get("tree");
TTree *Tree05_J2 = (TTree*)file05_J2->Get("tree");
TTree *Tree06_J2 = (TTree*)file06_J2->Get("tree");
TTree *Tree07_J2 = (TTree*)file07_J2->Get("tree");
TTree *Tree08_J2 = (TTree*)file08_J2->Get("tree");
TTree *Tree09_J2 = (TTree*)file09_J2->Get("tree");
TTree *Tree10_J2 = (TTree*)file10_J2->Get("tree");
TTree *Tree11_J2 = (TTree*)file11_J2->Get("tree");
TTree *Tree12_J2 = (TTree*)file12_J2->Get("tree");
TTree *Tree13_J2 = (TTree*)file13_J2->Get("tree");
TTree *Tree14_J2 = (TTree*)file14_J2->Get("tree");
TTree *Tree15_J2 = (TTree*)file15_J2->Get("tree");
TTree *Tree16_J2 = (TTree*)file16_J2->Get("tree");
TTree *Tree17_J2 = (TTree*)file17_J2->Get("tree");
TTree *Tree18_J2 = (TTree*)file18_J2->Get("tree");
TTree *Tree19_J2 = (TTree*)file19_J2->Get("tree");
TTree *Tree20_J2 = (TTree*)file20_J2->Get("tree");
TTree *Tree21_J2 = (TTree*)file21_J2->Get("tree");
TTree *Tree22_J2 = (TTree*)file22_J2->Get("tree");
TTree *Tree23_J2 = (TTree*)file23_J2->Get("tree");
TTree *Tree24_J2 = (TTree*)file24_J2->Get("tree");
TTree *Tree25_J2 = (TTree*)file25_J2->Get("tree");
TTree *Tree26_J2 = (TTree*)file26_J2->Get("tree");
TTree *Tree27_J2 = (TTree*)file27_J2->Get("tree");

TFile *file01_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/data.root");
TFile *file02_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/Tprime_0700.root");
TFile *file03_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/Tprime_1000.root");
TFile *file04_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/Tprime_1400.root");
TFile *file05_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/Tprime_1700.root");
TFile *file06_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT100to200.root");
TFile *file07_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT200to400.root");
TFile *file08_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT400to600.root");
TFile *file09_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT600to800.root");
TFile *file10_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT800to1200.root");
TFile *file11_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT1200to2500.root");
TFile *file12_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/DYJetsToLL_HT2500toInf.root");
TFile *file13_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ST_tW_antitop.root");
TFile *file14_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ST_tW_top.root");
TFile *file15_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/TTTo2L2Nu.root");
TFile *file16_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/TTToSemiLeptonic.root");
TFile *file17_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ttZ.root");
TFile *file18_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ttW.root");
TFile *file19_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/tZq.root");
TFile *file20_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ZZTo4L.root");
TFile *file21_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ZZTo2L2Q.root");
TFile *file22_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/ZZTo2L2Nu.root");
TFile *file23_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/WWTo2L2Nu.root");
TFile *file24_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/WWToLNuQQ.root");
TFile *file25_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/WZTo1L1Nu2Q.root");
TFile *file26_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/WZTo2L2Q.root");
TFile *file27_J3 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERdo/both/WZTo3LNu.root");
TTree *Tree01_J3 = (TTree*)file01_J3->Get("tree");
TTree *Tree02_J3 = (TTree*)file02_J3->Get("tree");
TTree *Tree03_J3 = (TTree*)file03_J3->Get("tree");
TTree *Tree04_J3 = (TTree*)file04_J3->Get("tree");
TTree *Tree05_J3 = (TTree*)file05_J3->Get("tree");
TTree *Tree06_J3 = (TTree*)file06_J3->Get("tree");
TTree *Tree07_J3 = (TTree*)file07_J3->Get("tree");
TTree *Tree08_J3 = (TTree*)file08_J3->Get("tree");
TTree *Tree09_J3 = (TTree*)file09_J3->Get("tree");
TTree *Tree10_J3 = (TTree*)file10_J3->Get("tree");
TTree *Tree11_J3 = (TTree*)file11_J3->Get("tree");
TTree *Tree12_J3 = (TTree*)file12_J3->Get("tree");
TTree *Tree13_J3 = (TTree*)file13_J3->Get("tree");
TTree *Tree14_J3 = (TTree*)file14_J3->Get("tree");
TTree *Tree15_J3 = (TTree*)file15_J3->Get("tree");
TTree *Tree16_J3 = (TTree*)file16_J3->Get("tree");
TTree *Tree17_J3 = (TTree*)file17_J3->Get("tree");
TTree *Tree18_J3 = (TTree*)file18_J3->Get("tree");
TTree *Tree19_J3 = (TTree*)file19_J3->Get("tree");
TTree *Tree20_J3 = (TTree*)file20_J3->Get("tree");
TTree *Tree21_J3 = (TTree*)file21_J3->Get("tree");
TTree *Tree22_J3 = (TTree*)file22_J3->Get("tree");
TTree *Tree23_J3 = (TTree*)file23_J3->Get("tree");
TTree *Tree24_J3 = (TTree*)file24_J3->Get("tree");
TTree *Tree25_J3 = (TTree*)file25_J3->Get("tree");
TTree *Tree26_J3 = (TTree*)file26_J3->Get("tree");
TTree *Tree27_J3 = (TTree*)file27_J3->Get("tree");

TFile *file01_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/data.root");
TFile *file02_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/Tprime_0700.root");
TFile *file03_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/Tprime_1000.root");
TFile *file04_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/Tprime_1400.root");
TFile *file05_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/Tprime_1700.root");
TFile *file06_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT100to200.root");
TFile *file07_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT200to400.root");
TFile *file08_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT400to600.root");
TFile *file09_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT600to800.root");
TFile *file10_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT800to1200.root");
TFile *file11_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT1200to2500.root");
TFile *file12_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/DYJetsToLL_HT2500toInf.root");
TFile *file13_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ST_tW_antitop.root");
TFile *file14_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ST_tW_top.root");
TFile *file15_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/TTTo2L2Nu.root");
TFile *file16_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/TTToSemiLeptonic.root");
TFile *file17_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ttZ.root");
TFile *file18_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ttW.root");
TFile *file19_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/tZq.root");
TFile *file20_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ZZTo4L.root");
TFile *file21_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ZZTo2L2Q.root");
TFile *file22_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/ZZTo2L2Nu.root");
TFile *file23_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/WWTo2L2Nu.root");
TFile *file24_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/WWToLNuQQ.root");
TFile *file25_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/WZTo1L1Nu2Q.root");
TFile *file26_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/WZTo2L2Q.root");
TFile *file27_J4 = TFile::Open("/afs/cern.ch/work/a/aspiezia/Tprime/2017/Analysis/Analyzer/2017_v03_2/PreSelection/JERup/both/WZTo3LNu.root");
TTree *Tree01_J4 = (TTree*)file01_J4->Get("tree");
TTree *Tree02_J4 = (TTree*)file02_J4->Get("tree");
TTree *Tree03_J4 = (TTree*)file03_J4->Get("tree");
TTree *Tree04_J4 = (TTree*)file04_J4->Get("tree");
TTree *Tree05_J4 = (TTree*)file05_J4->Get("tree");
TTree *Tree06_J4 = (TTree*)file06_J4->Get("tree");
TTree *Tree07_J4 = (TTree*)file07_J4->Get("tree");
TTree *Tree08_J4 = (TTree*)file08_J4->Get("tree");
TTree *Tree09_J4 = (TTree*)file09_J4->Get("tree");
TTree *Tree10_J4 = (TTree*)file10_J4->Get("tree");
TTree *Tree11_J4 = (TTree*)file11_J4->Get("tree");
TTree *Tree12_J4 = (TTree*)file12_J4->Get("tree");
TTree *Tree13_J4 = (TTree*)file13_J4->Get("tree");
TTree *Tree14_J4 = (TTree*)file14_J4->Get("tree");
TTree *Tree15_J4 = (TTree*)file15_J4->Get("tree");
TTree *Tree16_J4 = (TTree*)file16_J4->Get("tree");
TTree *Tree17_J4 = (TTree*)file17_J4->Get("tree");
TTree *Tree18_J4 = (TTree*)file18_J4->Get("tree");
TTree *Tree19_J4 = (TTree*)file19_J4->Get("tree");
TTree *Tree20_J4 = (TTree*)file20_J4->Get("tree");
TTree *Tree21_J4 = (TTree*)file21_J4->Get("tree");
TTree *Tree22_J4 = (TTree*)file22_J4->Get("tree");
TTree *Tree23_J4 = (TTree*)file23_J4->Get("tree");
TTree *Tree24_J4 = (TTree*)file24_J4->Get("tree");
TTree *Tree25_J4 = (TTree*)file25_J4->Get("tree");
TTree *Tree26_J4 = (TTree*)file26_J4->Get("tree");
TTree *Tree27_J4 = (TTree*)file27_J4->Get("tree");
