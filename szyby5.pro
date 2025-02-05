SZYBA[MOD_NP2_1]=
  <
    NAZWA            = 'Модуль утепления с сэндвич панелью'
    OPIS             = 'Модуль утепления с сэндвич панелью'
    GRUBOSC          =  28
    U0               =  0.28
    RYSUNEK=   'GLASS_MNPIZ.BMP'
  >

SZYBA[MOD_NP2_2]=
  <
    NAZWA            = 'Модуль утепления со стеклом'
    OPIS             = 'Модуль утепления с наружным слеклом'
    GRUBOSC          =  28
    U0               =  0.29
    RYSUNEK=   'GLASS_MNP1.BMP'
  >

SZYBA[MOD_NP0_1]=
  <
    NAZWA            = 'Модуль утепления дополнительный'
    OPIS             = 'Модуль утепления дополнительный'
    GRUBOSC          =  0
    U0               =  0.26
    RYSUNEK=   'GLASS_MNP0.BMP'
  >

SZYBA[
       MOD_NP2_1,
       MOD_NP2_2,
       MOD_NP0_1
     ]=
  <
    MASA             = 0
    KOLOR            = BRAK_KOLORU

    OPTYMALIZUJ      = NIE
    MIN_X            =       0.0
    MIN_Y            =       0.0
    MAX_X            =    2500.0
    MAX_Y            =    2500.0
    ZAMIEN           =       TAK
    MAX_POWIERZCHNIA = 4000000.0

    MOZLIWE_KOLORY   = CG_0
  >

SZYBA[
       MOD_NP2_1,
       MOD_NP2_2
     ]=
  <
    TYP              = RODZAJ_SZYBY_MODUL_NP0
  >

SZYBA[
       MOD_NP0_1
     ]=
  <
    TYP              = RODZAJ_SZYBY_MODUL_NP
  >

SZYBA[KASETA_1_5]=
  <
    NAZWA            = 'Касета 1.5 mm'
    OPIS             = 'Касета 1.5 mm'
    GRUBOSC          =  1.5
    RYSUNEK=   'Kaseta.BMP'
  >
SZYBA[KASETA_2]=
  <
    NAZWA            = 'Касета 2 mm'
    OPIS             = 'Касета 2 mm'
    GRUBOSC          =  2
    RYSUNEK=   'Kaseta.BMP'
  >
SZYBA[KASETA_3]=
  <
    NAZWA            = 'Касета 3 mm'
    OPIS             = 'Касета 3 mm'
    GRUBOSC          =  3
    RYSUNEK=   'Kaseta.BMP'
  >
SZYBA[KASETA_4]=
  <
    NAZWA            = 'Касета 4 mm'
    OPIS             = 'Касета 4 mm'
    GRUBOSC          =  4.0
    GRUBOSC_NETTO    =  4.0	
    RYSUNEK=   'Kaseta_4.vct'
  >
SZYBA[KASETA_5]=
  <
    NAZWA            = 'Касета 5 mm'
    OPIS             = 'Касета 5 mm'
    GRUBOSC          =  5
    RYSUNEK=   'Kaseta.BMP'
  >
SZYBA[KASETA_6]=
  <
    NAZWA            = 'Касета 6 mm'
    OPIS             = 'Касета 6 mm'
    GRUBOSC          =  6
    RYSUNEK=   'Kaseta.BMP'
  >
SZYBA[KASETA_7]=
  <
    NAZWA            = 'Касета 7 mm'
    OPIS             = 'Касета 7 mm'
    GRUBOSC          =  7
    RYSUNEK=   'Kaseta.BMP'
  >
SZYBA[KASETA_8]=
  <
    NAZWA            = 'Касета 8 mm'
    OPIS             = 'Касета 8 mm'
    GRUBOSC          =  8
    RYSUNEK=   'Kaseta.BMP'
  >

SZYBA[
     KASETA_1_5,
     KASETA_2,
     KASETA_3,
     KASETA_4,
     KASETA_5,
     KASETA_6,
     KASETA_7,
     KASETA_8
     ]=
  <
    KOLOR            = BRAK_KOLORU

    OPTYMALIZUJ      = NIE
    MIN_X            =       0.0
    MIN_Y            =       0.0
    MAX_X            =    4000.0
    MAX_Y            =    4000.0
    MAX_POWIERZCHNIA = 4000000.0
    ZAMIEN           = TAK
  
    TYP              = RODZAJ_SZYBY_KASETA
  >


SZYBA[TAFLA_2]=
  <
    NAZWA            = 'Плита  2 mm'
    OPIS             = 'Плита 2 mm'
    GRUBOSC          =  2
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_3]=
  <
    NAZWA            = 'Плита  3 mm'
    OPIS             = 'Плита 3 mm'
    GRUBOSC          =  3
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_4]=
  <
    NAZWA            = 'Плита  4 mm'
    OPIS             = 'Плита 4 mm'
    GRUBOSC          =  4
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_5]=
  <
    NAZWA            = 'Плита  5 mm'
    OPIS             = 'Плита 5 mm'
    GRUBOSC          =  5
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_6]=
  <
    NAZWA            = 'Плита  6 mm'
    OPIS             = 'Плита 6 mm'
    GRUBOSC          =  6
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_7]=
  <
    NAZWA            = 'Плита  7 mm'
    OPIS             = 'Плита 7 mm'
    GRUBOSC          =  7
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_8]=
  <
    NAZWA            = 'Плита  8 mm'
    OPIS             = 'Плита 8 mm'
    GRUBOSC          =  8
    RYSUNEK=   'Tafla.BMP'
  >
SZYBA[TAFLA_9]=
  <
    NAZWA            = 'Плита  9 mm'
    OPIS             = 'Плита 9 mm'
    GRUBOSC          =  9
    RYSUNEK=   'Tafla.BMP'
  >  
SZYBA[TAFLA_10]=
  <
    NAZWA            = 'Плита 10 mm'
    OPIS             = 'Плита 10 mm'
    GRUBOSC          =  10
    RYSUNEK          =  'Plita.bmp'
  >  
SZYBA[TAFLA_11]=
  <
    NAZWA            = 'Плита 11 mm'
    OPIS             = 'Плита 11 mm'
    GRUBOSC          =  11
    GRUBOSC_NETTO    =  11		
    RYSUNEK=   'Tafla.BMP'
  >    
SZYBA[TAFLA_12]=
  <
    NAZWA            = 'Плита 12 mm'
    OPIS             = 'Плита 12 mm'
    GRUBOSC          =  12
    GRUBOSC_NETTO    =  12		
    RYSUNEK=   'Tafla.BMP'
  >  
SZYBA[TAFLA_14]=
  <
    NAZWA            = 'Плита 14 mm'
    OPIS             = 'Плита 14 mm'
    GRUBOSC          =  14
    GRUBOSC_NETTO    =  14		
    RYSUNEK=   'Tafla.BMP'
  >   
SZYBA[TAFLA_16]=
  <
    NAZWA            = 'Плита 16 mm'
    OPIS             = 'Плита 16 mm'
    GRUBOSC          =  16
    GRUBOSC_NETTO    =  16		
    RYSUNEK=   'Tafla.BMP'
  >   
SZYBA[TAFLA_18]=
  <
    NAZWA            = 'Плита 18 mm'
    OPIS             = 'Плита 18 mm'
    GRUBOSC          =  18
    GRUBOSC_NETTO    =  18		
    RYSUNEK=   'Tafla.BMP'
  >   
SZYBA[TAFLA_20]=
  <
    NAZWA            = 'Плита 20 mm'
    OPIS             = 'Плита 20 mm'
    GRUBOSC          =  20
    GRUBOSC_NETTO    =  20		
    RYSUNEK=   'Tafla.BMP'
  >  
SZYBA[TAFLA_22]=
  <
    NAZWA            = 'Плита 22 mm'
    OPIS             = 'Плита 22 mm'
    GRUBOSC          =        22
    GRUBOSC_NETTO    =        22		
    RYSUNEK=   'Tafla.BMP'
  >     
SZYBA[TAFLA_24]=
  <
    NAZWA            = 'Плита 24 mm'
    OPIS             = 'Плита 24 mm'
    GRUBOSC          =        24
    GRUBOSC_NETTO    =        24		
    RYSUNEK=   'Tafla.BMP'
  >   
SZYBA[TAFLA_26]=
  <
    NAZWA            = 'Плита 26 mm'
    OPIS             = 'Плита 26 mm'
    GRUBOSC          =        26
    GRUBOSC_NETTO    =        26		
    RYSUNEK=   'Tafla.BMP'
  >    
SZYBA[TAFLA_28]=
  <
    NAZWA            = 'Плита 28 mm'
    OPIS             = 'Плита 28 mm'
    GRUBOSC          =        28
    GRUBOSC_NETTO    =        28		
    RYSUNEK=   'Tafla.BMP'
  >  
SZYBA[TAFLA_30]=
  <
    NAZWA            = 'Плита 30 mm'
    OPIS             = 'Плита 30 mm'
    GRUBOSC          =        30
    GRUBOSC_NETTO    =        30		
    RYSUNEK=   'Tafla.BMP'
  >     
  
SZYBA[
     TAFLA_2,
     TAFLA_3,
     TAFLA_4,
     TAFLA_5,
     TAFLA_6,
     TAFLA_7,
     TAFLA_8,
     TAFLA_9,
     TAFLA_10,
     TAFLA_11,	 
     TAFLA_12,	 
     TAFLA_14,	 
     TAFLA_16,	 
     TAFLA_18,	 
     TAFLA_20,	 
     TAFLA_22,	 
     TAFLA_24,	 
     TAFLA_26,	 
     TAFLA_28,	 
     TAFLA_30		 
     ]=
  <
 TYP              = RODZAJ_PLITA
// TYP              = RODZAJ_SZYBY_TAFLA
  >
