LACZNIK[ LACZNIK_W77_606 ]=
<
  NAZWA             = 'Розширювач доборний 30мм'
  OPIS              = 'Розширювач доборний 30мм'
  RYSUNEK           = 'W77_606.vct'
  KATEGORIA         = 'Соединитель рам'
  SZEROKOSC         = '30'
  KATOWY            = NIE
  PRZEKROJ_WIDOK    = 'LACZNIK_W77_606'

  MATERIAL=< KOD=E_ALP_W77_606                           ILOSC='1' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_ALP_C_818                             ILOSC='2' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_Sam3_5x9_5_DIN7981                    ILOSC='2*((FLOOR(PROFIL_DLG/280))+2)' >  
  
  OGRANICZENIA_A=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
>  

LACZNIK[ LACZNIK_W77_607 ]=
<
  NAZWA             = 'Розширювач доборний 44мм'
  OPIS              = 'Розширювач доборний 44мм'
  RYSUNEK           = 'W77_607.vct'
  KATEGORIA         = 'Соединитель рам'
  SZEROKOSC         = '44'
  KATOWY            = NIE
  PRZEKROJ_WIDOK    = 'LACZNIK_W77_607'

  MATERIAL=< KOD=E_ALP_W77_607                           ILOSC='1' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_ALP_C_818                             ILOSC='2' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_Sam3_5x9_5_DIN7981                    ILOSC='2*((FLOOR(PROFIL_DLG/280))+2)' >  
  
  OGRANICZENIA_A=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
>  

LACZNIK[ LACZNIK_W77_608 ]=
<
  NAZWA             = 'Розширювач доборний 58мм'
  OPIS              = 'Розширювач доборний 58мм'
  RYSUNEK           = 'W77_608.vct'
  KATEGORIA         = 'Соединитель рам'
  SZEROKOSC         = '58'
  KATOWY            = NIE
  PRZEKROJ_WIDOK    = 'LACZNIK_W77_608'

  MATERIAL=< KOD=E_ALP_W77_608                           ILOSC='1' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_ALP_C_818                             ILOSC='2' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_Sam3_5x9_5_DIN7981                    ILOSC='2*((FLOOR(PROFIL_DLG/280))+2)' >  
  
  OGRANICZENIA_A=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
>  

LACZNIK[ LACZNIK_W77_W77_313_P90 ]=
<
  NAZWA             = 'Поворот 90* (W77.313)'
  OPIS              = 'Положение угловое +90*'
  RYSUNEK           = 'W77_W77_313_P90.VCT'
  KATEGORIA         = 'Повороти'
  SZEROKOSC         = '76.9*2'
  KATOWY            = TAK
  OD_KATA           = 90
  DO_KATA           = 90
  PRZEKROJ_WIDOK    = 'LACZNIK_W77_313'

  MATERIAL=< KOD=E_ALP_W77_313     KOLOR=KOLOR_CALOSCI    ILOSC='1'        DLUGOSC='PROFIL_DLG' >
  MATERIAL=< KOD=E_RP_04           KOLOR=KOLOR_CALOSCI    ILOSC='4'        DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_Sam3_5x38_DIN7981                      ILOSC='2*((FLOOR(PROFIL_DLG/300))+2)' >
  MATERIAL=< KOD=E_Sam3_5x13_DIN7981                      ILOSC='2*((FLOOR(PROFIL_DLG/300))+2)' >  

  OGRANICZENIA_A=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
>


LACZNIK[ LACZNIK_W77_W77_313_M90 ]=
<
  NAZWA             = 'Поворот -90* (W77.313)'
  OPIS              = 'Положение угловое +90*'
  RYSUNEK           = 'W77_W77_313_M90.VCT'
  KATEGORIA         = 'Повороти'
  SZEROKOSC         = '0'
  KATOWY            = TAK
  OD_KATA           = -90
  DO_KATA           = -90
  PRZEKROJ_WIDOK    = 'LACZNIK_W77_313_M90'

  MATERIAL=< KOD=E_ALP_W77_313     KOLOR=KOLOR_CALOSCI    ILOSC='1'        DLUGOSC='PROFIL_DLG' >
  MATERIAL=< KOD=E_RP_04           KOLOR=KOLOR_CALOSCI    ILOSC='4'        DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_Sam3_5x38_DIN7981                      ILOSC='2*((FLOOR(PROFIL_DLG/300))+2)' >
  MATERIAL=< KOD=E_Sam3_5x13_DIN7981                      ILOSC='2*((FLOOR(PROFIL_DLG/300))+2)' >  

  OGRANICZENIA_A=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_W77_windows ,	
       TS_W77_RamaDZ  ,
       TS_W77_RamaDW  
      ]
  >
>

LACZNIK[ LACZNIK_C50_313_P90 ]=
<
  NAZWA             = 'Поворот 90* (C50.313)'
  OPIS              = 'Положение угловое +90*'
  RYSUNEK           = 'C50_313_P90.VCT'
  KATEGORIA         = 'Повороти'
  SZEROKOSC         = '50*2'
  KATOWY            = TAK
  OD_KATA           = 90
  DO_KATA           = 90
  PRZEKROJ_WIDOK    = 'LACZNIK_C50_313_P90'

  MATERIAL=< KOD=E_ALP_C50_313     KOLOR=KOLOR_CALOSCI    ILOSC='1'        DLUGOSC='PROFIL_DLG' >
  MATERIAL=< KOD=E_Sam3_5x13_DIN7981                      ILOSC='4*((FLOOR(PROFIL_DLG/300))+2)' >  

  OGRANICZENIA_A=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD  
      ]
  >
>


LACZNIK[ LACZNIK_C50_313_M90 ]=
<
  NAZWA             = 'Поворот -90* (C50.313)'
  OPIS              = 'Положение угловое +90*'
  RYSUNEK           = 'C50_313_P90.VCT'
  KATEGORIA         = 'Повороти'
  SZEROKOSC         = '0'
  KATOWY            = TAK
  OD_KATA           = -90
  DO_KATA           = -90
  PRZEKROJ_WIDOK    = 'LACZNIK_C50_313_M90'

  MATERIAL=< KOD=E_ALP_C50_313     KOLOR=KOLOR_CALOSCI    ILOSC='1'        DLUGOSC='PROFIL_DLG' >
  MATERIAL=< KOD=E_Sam3_5x13_DIN7981                      ILOSC='4*((FLOOR(PROFIL_DLG/300))+2)' >  

  OGRANICZENIA_A=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD  
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD  
      ]
  >
>

LACZNIK[LACZNIK_C50_315_D50]=
<
  NAZWA             = 'Поворот 20*-90* (C50.315)'
  OPIS              = 'Поворот'
  RYSUNEK           = 'C50_315_D50.VCT'
  KATEGORIA         = 'Повороти'
  SZEROKOSC='2*(27.3+25/(TAN_S((180-ANGLE*(180/3.14))/2)))'  
  KATOWY            = TAK
  OD_KATA           = 0
  DO_KATA           = 90  
  PRZEKROJ_WIDOK    = 'LACZNIK_C50_315_D50'

  MATERIAL=< KOD=E_ALP_C50_314         KOLOR=KOLOR_CALOSCI    ILOSC='1'        DLUGOSC='PROFIL_DLG' > 
  MATERIAL=< KOD=E_ALP_C50_315         KOLOR=KOLOR_CALOSCI    ILOSC='2'        DLUGOSC='PROFIL_DLG' > 
  MATERIAL=< KOD=E_Sam3_5x19_DIN7981                          ILOSC='6*((FLOOR(PROFIL_DLG/300))+4)' >
  MATERIAL=< KOD=E_RP_04                                      ILOSC='2'        DLUGOSC='PROFIL_DLG' >   

  OGRANICZENIA_A=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD   
      ]	 		  
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = NIE
    SCIANA_DOL      = NIE
    SCIANA_PION     = TAK
    INNY_LACZNIK    = TAK
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD      
      ]	 		  
  >
>

LACZNIK[ LACZNIK_C50_C818 ]=
<
  NAZWA             = 'З"эднувачі C.818'
  OPIS              = 'З"эднувачі C.818'
  RYSUNEK           = 'C50_C818.vct'
  KATEGORIA         = 'З"эднувачі рами'
  SZEROKOSC         = '0'
  KATOWY            = NIE
  PRZEKROJ_WIDOK    = 'LACZNIK_C50_C818'

  MATERIAL=< KOD=E_ALP_C_818                             ILOSC='2' DLUGOSC='PROFIL_DLG' >    
  MATERIAL=< KOD=E_Sam3_5x9_5_DIN7981                    ILOSC='2*((FLOOR(PROFIL_DLG/280))+2)' >  
  MATERIAL=< KOD=E_Sam3_5x19_DIN7981                     ILOSC='1*((FLOOR(PROFIL_DLG/280))+2)' >  
  
  OGRANICZENIA_A=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD    
      ]
  >
  OGRANICZENIA_B=
  <
    SCIANA_GORA     = TAK
    SCIANA_DOL      = TAK
    SCIANA_PION     = TAK
    INNY_LACZNIK    = NIE
    DLA_KONSTRUKCJI = [
       TS_C50_windows    ,	
       TS_C50_RamaDZ     ,
       TS_C50_RamaDW_CD  ,
       TS_C50_RamaDW_CD    
      ]
  >
>  