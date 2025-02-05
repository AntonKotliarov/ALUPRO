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

