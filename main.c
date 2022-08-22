#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  EastEuro, WestEuro, Mediterranean, NeoAfrican, WestAsian, SouthAsian, NorthEastAsian, SouthEastAsian, EastAfrican, SouthWestAsian, NorthWestAfro,paleoAfro;
    printf("Copy and paste your Dodecad V3 result. Change the '-' into '0' \n");
    printf("\n Enter your east European score: ");
    scanf("%lf", &EastEuro);
    printf("\n Enter your west European score: ");
    scanf("%lf", &WestEuro);
    printf("\n Enter your Mediterranean score: ");
    scanf("%lf", &Mediterranean);
    printf("\n Enter your Neo_African score: ");
    scanf("%lf", &NeoAfrican);
    printf("\n Enter your West Asian score: ");
    scanf("%lf", &WestAsian);
    printf("\n Enter your South Asian score: ");
    scanf("%lf", &SouthAsian);
    printf("\n Enter your NorthEast Asian score: ");
    scanf("%lf", &NorthEastAsian);
    printf("\n Enter your SouthEast Asian score: ");
    scanf("%lf", &SouthEastAsian);
    printf("\n Enter your East African score: ");
    scanf("%lf", &EastAfrican);
    printf("\n Enter your South West Asian score: ");
    scanf("%lf", &SouthWestAsian);
    printf("\n Enter your North West African score: ");
    scanf("%lf", &NorthWestAfro);
    printf("\n Enter your paleo African score:");
    scanf("%lf", &paleoAfro);

  double  WestAsian2 [25]= {1.0284e-01,1.0686e-01,-9.2247e-02,-6.8423e-02,-6.9615e-02,-1.5565e-02,9.4975e-03,-1.2495e-02,-8.1946e-02,-2.6009e-02,-1.0437e-03,1.4706e-02,-3.7202e-02,2.3881e-03,5.2003e-03,-2.0363e-02,2.4180e-02,-7.8792e-03,-1.9269e-02,2.9897e-02,1.1022e-02,1.0908e-03,2.5096e-03,-1.3921e-02,-6.4840e-03};
  double EastEuro2[25] = {1.2849e-01,1.0117e-01,9.2796e-02,1.2102e-01,2.7645e-02,4.5897e-02,1.6372e-02,1.6462e-02,-1.6049e-02,-6.9994e-02,2.6452e-03,-2.5482e-02,5.4027e-02,6.0315e-02,-4.0332e-02,-1.2886e-02,5.7620e-03,-3.1527e-03,4.5413e-03,-4.3729e-03,-1.2020e-02,-1.2373e-02,1.7270e-02,-3.5362e-02,8.0037e-04};
  double WestEuro2[25] = {1.2884e-01,1.1338e-01,9.2873e-02,8.9807e-02,4.4668e-02,2.5927e-02,-2.9619e-03,-1.1107e-03,2.0034e-02,-4.4450e-03,6.7652e-05,2.3651e-03,-6.5246e-03,-2.9312e-02,2.8563e-02,1.6806e-02,-8.0318e-03,5.6289e-03,3.0734e-03,1.0225e-02,1.2309e-02,1.0312e-02,-2.3845e-03,2.2550e-05,-2.0555e-03};
  double Mediterranean2 [25] = {1.1630e-01,1.8160e-01,7.6289e-03,-9.6804e-02,6.5007e-02,-3.9979e-02,-5.9527e-03,1.7730e-03,5.2581e-02,1.0629e-01,2.4103e-03,1.9628e-02,-3.2264e-02,-6.3771e-03,-3.4799e-02,-1.0034e-02,2.1643e-02,-4.2935e-03,6.2126e-04,-2.0495e-02,-7.2499e-03,-5.1461e-03,-1.3380e-02,-4.1664e-02,4.5114e-04};
  double PaleoAfro2 [25] = {-0.647426,0.0591038,0.0254932,0.0374034,-0.001108,0.0066378,0.3663348,-0.293434,0.0177118,0.02985,-0.0089316,0.2198242,0.1264506,0.0010182,0.010342,-0.0014052,0.0009386,-0.0518664,0.014229,0.003727,0.0061144,-0.0018548,-0.0043878,0.0025304,-0.0006944};
  double NeoAfro2 [25] = {-5.9039e-01,6.5906e-02,1.5173e-02,-7.5160e-04,1.5729e-04,1.0082e-02,-2.1122e-01,1.8085e-01,-5.1596e-02,2.4146e-02,1.1084e-02,-9.5959e-02,-2.6337e-02,-1.8561e-03,1.9190e-02,-1.6719e-02,1.5192e-02,2.1846e-02,-8.8716e-03,-4.7437e-03,-5.1853e-03,-7.2718e-03,2.7316e-03,-2.5190e-03,2.4359e-03};
  double EastAfrican2 [25] = {-1.6932e-01,9.6654e-02,-5.8901e-02,-1.1702e-01,-1.1308e-02,-5.9166e-02,-1.3279e-01,9.4897e-02,2.7027e-01,-2.6544e-01,-4.3734e-02,-7.8334e-02,-1.3915e-01,-2.3391e-03,7.5401e-03,-3.1819e-02,4.5189e-02,8.4210e-03,4.2097e-02,-4.9027e-02,-3.6216e-03,6.5362e-03,-1.2161e-02,-8.3673e-03,1.1155e-02};
  double SWAsian2 [25] = {-2.4863e-02,8.9477e-02,-6.1864e-02,-1.7659e-02,-5.2438e-02,-3.1557e-03,-1.3155e-02,3.2527e-03,2.4360e-02,-8.5801e-02,5.7868e-03,-5.0591e-02,1.0226e-01,5.7272e-03,2.1348e-02,4.5700e-02,-5.7270e-02,1.0212e-02,2.4879e-02,-8.3363e-03,8.3791e-04,4.4849e-03,3.6902e-03,5.3360e-02,6.0515e-03};
  double NorthWestAfro2 [25] = {-0.0649782,0.135551,-0.0032793,-0.0717622,0.0260249,-0.0328364,-0.0260656,0.0108257,0.0617306,0.0303463,0.0065097,-0.006366,0.021795,-0.0165685,0.0163159,-0.016176,-0.0027097,-0.0219282,-0.0435571,0.0082757,-0.0146263,-0.0367947,0.0246817,-0.0042277,0.0056594};
  double SouthAsian2 [25] = {0.0159352,-0.1477594,-0.1851285,0.1288618,-0.0545947,0.0568936,-0.0039832,0.0151839,0.0761954,0.0502424,-0.0002923,0.0008092,-0.0002825,0.0092206,-0.0176842,-0.017608,0.0104634,-0.0007285,-0.0013576,0.0204411,0.0058832,0.0070916,-0.0054475,0.0042114,-0.0066879};
  double NorthEastAsian2 [25] = {0.0466674,-0.3787924,0.1196982,0.0266798,-0.1218074,-0.0532122,-0.061432,-0.0685818,0.0081402,-0.0060866,0.0373494,-0.0015886,0.0049654,-0.022625,-0.0333058,-0.0185626,-0.000287,0.0162666,0.035975,0.0198846,0.0364606,-0.0546792,0.0123,0.0227262,0.0347994};
  double SEA2 [25] = {1.1951e-02,-4.7044e-01,-4.8121e-02,-9.1538e-02,1.3855e-01,6.2736e-02,1.7943e-02,1.4780e-02,-2.0391e-02,-5.7410e-04,-7.3156e-02,-5.5224e-03,5.9689e-03,-6.0757e-03,1.3029e-03,2.7179e-03,2.8747e-03,-2.0711e-03,-1.1477e-02,-2.1979e-02,1.2472e-02,1.9636e-02,1.7754e-02,-8.6155e-04,-1.7082e-02};

  printf("SimulatedG25_scaled");
  for(int i = 0; i<25; i++){
    double sr = (WestAsian2[i]*WestAsian + EastEuro2[i]*EastEuro + WestEuro2[i]*WestEuro
    + Mediterranean2[i]*Mediterranean + PaleoAfro2[i]*paleoAfro + NeoAfro2[i]*NeoAfrican
    + EastAfrican2[i]*EastAfrican + SWAsian2[i]*SouthWestAsian + NorthWestAfro2[i]*NorthWestAfro
    + SouthAsian2[i]*SouthAsian + NorthEastAsian2[i]*NorthEastAsian + SEA2[i]*SouthEastAsian)/100;

    printf(",%lf", sr);
  }


    return 0;
}
