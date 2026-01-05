TYPY_SKRZYDEL=
  <

    TYP_SKRZYDLA[TS_Sciana]=
      <
        NAZWA='Њciana'
        OPIS='Њciana'
        KATEGORIA='Inne'
        TYP=SK_ZEWNETRZNE
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]=[TP_Sciana]
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
      >

    TYP_SKRZYDLA[TS_Szyba]=
      <
        NAZWA=' Стекло'
        OPIS='Стекло'
        KATEGORIA='Стекло'
        RYSUNEK='el_glss1.bmp'
        TYP=SK_WEWNETRZNE
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]=[TP_Szyba]
        DOZWOLONE_SKRZYDLA=[]
      >

    TYP_SKRZYDLA[TS_Otwor]=
      <
        NAZWA='Pusty otwуr, Proszк wstawiж "brak szyby" aby nie doliczaж zbкdnej szyby'
        OPIS='Pusty otwуr, Proszк wstawiж "brak szyby" aby nie doliczaж zbкdnej szyby'
        KATEGORIA='Inne'
        RYSUNEK='el_glss1.bmp'
        TYP=SK_SKRZYDLO
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]=[TP_Otwor]
        DOZWOLONE_SKRZYDLA=[TS_Szyba]
      >

    TYP_SKRZYDLA[TS_Proem]=
      <
        NAZWA='Проем под окно'
        OPIS='Проем под окно'
        KATEGORIA='Другое'
        RYSUNEK='el_glss1.bmp'
        TYP=SK_SKRZYDLO
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]=[TP_Otwor]
        DOZWOLONE_SKRZYDLA=[TS_Szyba]
      >
	  
    TYP_SKRZYDLA[TS_Fasada_OknoPolaciowe]=
      <
        NAZWA='O) Okno poіaciowe'
        OPIS='Okno poіaciowe do њciany sіupowo-ryglowej'
        KATEGORIA='Окна'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Fasada_OknoPolaciowe
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Fasada_OknoPolaciowe
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Fasada_Strips]=
      <
        NAZWA='Szyba pojedyсcza + pіyta wiatroszczelna'
        OPIS='Szyba pojedyсcza + pіyta wiatroszczelna'
        KATEGORIA='Стекло '
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Fasada_Strips
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Fasada_Strips
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Fasada_RamaStruktury]=
      <
        NAZWA='S) Рама структурная'
        OPIS='Рама структурная для стоечно-ригельной системы'
        KATEGORIA='Остекление структурное'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Fasada_RamaStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Fasada_RamaStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Fasada_Struktura
                           ]
      >

    TYP_SKRZYDLA[TS_Fasada_Struktura]=
      <
        NAZWA='S) Рама структурная'
        OPIS='Рама структурная для стоечно-ригельной системы'
        KATEGORIA='Остеклегие структурное'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Fasada_SkrzydloStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Fasada_SkrzydloStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Fasada_RamaPolStruktury]=
      <
        NAZWA='S) Рама полуструктурная'
        OPIS='Рама полуструктурная для стоечно-ригельной системы'
        KATEGORIA='Остеклегие полуструктурное'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Fasada_RamaPolStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Fasada_RamaPolStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Fasada_PolStruktura
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_PolStruktura]=
      <
        NAZWA='P) Skrzydіo pуіstrukturalne'
        OPIS='Skrzydіo pуіstrukturalne do њciany sіupowo-ryglowej P50'
        KATEGORIA='Skrzydіa pуіstrukturalne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Fasada_SkrzydloPolStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                      TP_Fasada_SkrzydloPolStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Fasada_RamaStala]=
      <
        NAZWA='ФО) ФОМ - окно в фасад'
        OPIS='ФОМ - окно в фасад'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='okno_FOM.jpg'
        RYSUNEK='okno_FOM_TF50K.jpg'		
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_ZG
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaStala_RamaDoFasady_FOM
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaStala_RamaDoFasady_FOM
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaStala_TOB4]=
      <
        NAZWA='ФО) ТОВ4 - окно в фасад'
        OPIS='ТОВ4 - окно в фасад'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='okno_FOM.jpg'
        RYSUNEK='okno_TOB4.jpg'		
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_ZG
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaStala_RamaDoFasady_TOB4
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaStala_RamaDoFasady_TOB4
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_RamaTon2]=
      <
        NAZWA='ФО) ТОН2 - окно "невидимое" в фасад'
        OPIS='ТОН2 - окно "невидимое" в фасад'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
        RYSUNEK='okno_TON2.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_ZG
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaStala_RamaDoFasady_TON2
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaStala_RamaDoFasady_TON2
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaTon4]=
      <
        NAZWA='ФО) ТОН4 - окно "невидимое" в фасад'
        OPIS='ТОН4 - окно "невидимое" в фасад'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='okno_TON4.jpg'
        RYSUNEK='okno_TON4_TF50K.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_ZG
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaStala_TON4_RamaDoFasady_T50
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaStala_TON4_RamaDoFasady_T50
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >
	  
    TYP_SKRZYDLA[TS_Fasada_RamaTOT]=
      <
        NAZWA_HTML='ФО) ТОT - окно в фасад параллельного телескопического открывания <b><font face="verdana" color="clred">NEW</font></b>'
        OPIS='ТОT - окно в фасад параллельного телескопического открывания'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
        RYSUNEK='okno_TON4_TF50K.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_WYSUWNE
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaStala_TON4_RamaDoFasady_T50
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaStala_TON4_RamaDoFasady_T50
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >
	  
//    TYP_SKRZYDLA[TS_Fasada_RamaTMC]=
//      <
//        NAZWA_HTML='МО) ТМС - окно мансардное в фасад'
//        OPIS='ТМС - окно мансардное в фасад'
//        KATEGORIA='2) Фасадные окна'
//        TYP=SK_PRZEJSCIE
//        RYSUNEK='TMC.bmp'
//        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
//        PROFILE[POL_LEWO,
//                POL_PRAWO,
//                POL_GORA,
//                POL_DOL,
//                POL_INNE ]= [
//                              TP_RamaStala_TON4_RamaDoFasady_T50
//                            ]
//	PROFILE[POL_DOL,POL_INNE]=[
//                              TP_RamaStala_TON4_RamaDoFasady_T50
//				  ]
//        PROFILE[POL_SRODEK]=[
//                               TP_RamyStala_PoprzeczkaPion,
//                               TP_RamyStala_PoprzeczkaPoziom
//                            ]
//        DOZWOLONE_SKRZYDLA=[
//                             TS_Szyba
//                           ]
//      >	  
//**********************************************************************
    TYP_SKRZYDLA[TS_Fasada_RamaOps1]=
      <
        NAZWA='ФО) ОПС-1 - окно полуструктурное в фасад'
        OPIS='ОПС-1 - окно полуструктурное в фасад'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
        RYSUNEK='okna_OPS1.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_ZG
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RAMASTALA_RAMADOFASADY_OPS1
                            ]
	    PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RAMASTALA_RAMADOFASADY_OPS1
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
	>
//***********************************************************************	
    TYP_SKRZYDLA[TS_Fasada_RamaHOP]=
      <
        NAZWA='ФО) ХОП - окно холодное в фасад'
        OPIS='ХОП - окно холодное в фасад'
        KATEGORIA='2) Фасадные окна'
        TYP=SK_PRZEJSCIE
        RYSUNEK='okna_HOP.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_ZG
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaStala_RamaDoFasady_HOP
                            ]
	    PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaStala_RamaDoFasady_HOP
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamyStala_PoprzeczkaPion,
                               TP_RamyStala_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
	>
//***********************************************************************	
//    TYP_SKRZYDLA[TS_Fasada_RamaStala_dach]=
//      <
//        NAZWA=' OK) Okno-dachowe dla dachуw 5050'
//        OPIS='Okno-dachowe dla dachуw 5050'
//        KATEGORIA='Okna strukturalne'
//        TYP=SK_PRZEJSCIE
//        RYSUNEK='fas_st.bmp'
//        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
//        PROFILE[POL_LEWO,
//                POL_PRAWO,
//                POL_GORA,
//                POL_DOL,
//                POL_INNE ]= [
//                              TP_RamaStala_RamaDoFasady
//                            ]
//	PROFILE[POL_DOL,POL_INNE]=[
//                                     TP_RamaStala_RamaDoFasady
//				  ]
//        PROFILE[POL_SRODEK]=[
//                               TP_RamyStala_PoprzeczkaPion,
//                               TP_RamyStala_PoprzeczkaPoziom
//                            ]
//        DOZWOLONE_SKRZYDLA=[
//                             TS_Szyba
//                           ]
//      >
//
    TYP_SKRZYDLA[TS_Fasada_RamaOkienna]=
      <
        NAZWA='ОФТ) Окна и балконные двери "теплые"'
        OPIS='Рама оконная'
        KATEGORIA='1) Окна/Балконные двери в фасад'
        TYP=SK_PRZEJSCIE
        RYSUNEK='C67_okno.jpg'	
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego,							   
                               TP_RamaUniw_PoprzeczkaPion,
                               TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
                             TS_RamaOkienna_OW2,
                             TS_RamaOkienna_OW3,
							 TS_RamaOkienna_T38,
							 TS_RamaOkienna_OUP1,
							 TS_RamaOkienna_OUP2,
							 TS_RamaOkienna_OUP3,
							 TS_RamaOkienna_SkrzydloWentylacyjne
                           ]
      >
	  
    TYP_SKRZYDLA[TS_Fasada_RamaOkiennaWentylacyjne]=
      <
        NAZWA='ОФВ) Вентиляционная створка'
        OPIS='Рама оконная'
        KATEGORIA='1) Окна/Балконные двери в фасад'
        TYP=SK_PRZEJSCIE
        RYSUNEK='C67_okno.jpg'	
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego,							   
                               TP_RamaUniw_PoprzeczkaPion,
                               TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,				
							 TS_RamaOkienna_SkrzydloWentylacyjne
                           ]
      >	  
	  
    TYP_SKRZYDLA[TS_Fasada_RamaOkienna_PVC]=
      <
        NAZWA_HTML='ОФТПП) Окна "теплые" с ПВХ-пазом'
        OPIS='Рама оконная с ПВХ-пазом'
        KATEGORIA='1) Окна/Балконные двери в фасад'
        TYP=SK_PRZEJSCIE
        RYSUNEK='TS65P.jpg'	
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego,
							   
                      TP_RamaUniw_PoprzeczkaPion,
                      TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_RamaOkienna_PVC_OW1
							 //,
							 //TS_RamaOkienna_T38,
							 //TS_RamaOkienna_OUP1,
							 //TS_RamaOkienna_OUP2,
							 //TS_RamaOkienna_OUP3							 
                           ]
      >	
	  
    TYP_SKRZYDLA[TS_Fasada_RamaRigelOkienna]=
      <
        NAZWA_HTML='ОФТРР) Окна "теплые" рама-ригель'
        OPIS='Рама-ригель оконная'
        KATEGORIA='1) Окна/Балконные двери в фасад'
        TYP=SK_PRZEJSCIE
        MOZNA_NAROZA=NIE // зачеканка под 45, для фасада НЕТ		
        RYSUNEK='TS65RR.jpg'	
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_INNE ]= [
                               TP_RamaOkienna_RamaDoFasady,
							   
							   TP_RamaRigelOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_GORA,POL_DOL]=[
                               TP_RamaRigelOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego,
							   
                      TP_RamaUniw_PoprzeczkaPion,
                      TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OW2,
                             TS_RamaOkienna_OW3
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_Vent_Reshetki_TBR1]=
      <
        NAZWA='ТВР1) Вентиляционные решетки'
        OPIS='Вентиляционные решетки'
        KATEGORIA='6) Вентиляционные решетки в фасад'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='fas_okno.bmp'
        RYSUNEK='TBP1.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
	    STALE_SZKLO=SZYBA_00_TBR2,EBrakSzyby00
		JAKIE_PRZEKROJE=2
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                             TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                             TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                             TP_RamaOkienna_PoprzeczkaPion,
                             TP_RamaOkienna_PoprzeczkaPoziom,
                             TP_RamaOkienna_RuchomySlupek,
                             TP_RamaOkienna_RuchomySlupekVirtualny,
                             TP_RamaOkienna_PodzialOknaPodawczego,
							 
                             TP_RamaUniw_PoprzeczkaPion,
                             TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba					 
                           ]
      >  	  
    TYP_SKRZYDLA[TS_Fasada_Vent_Reshetki_TBR2]=
      <
        NAZWA='ТВР2) Вентиляционные решетки'
        OPIS='Вентиляционные решетки'
        KATEGORIA='6) Вентиляционные решетки в фасад'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='fas_okno.bmp'
        RYSUNEK='TBP2.jpg'		
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
	    STALE_SZKLO=SZYBA_00_TBR2,EBrakSzyby00
		JAKIE_PRZEKROJE=2
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                             TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                             TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                             TP_RamaOkienna_PoprzeczkaPion,
                             TP_RamaOkienna_PoprzeczkaPoziom,
                             TP_RamaOkienna_RuchomySlupek,
                             TP_RamaOkienna_RuchomySlupekVirtualny,
                             TP_RamaOkienna_PodzialOknaPodawczego,
							 
                             TP_RamaUniw_PoprzeczkaPion,
                             TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba					 
                           ]
      >	  
    TYP_SKRZYDLA[TS_Dveri_Vent_Reshetki_TBR2]=
      <
        NAZWA='ТВР2) Вентиляционные решетки ТВР2'
        OPIS='Вентиляционные решетки'
        KATEGORIA='6) Вентиляционные решетки в дверь (окно)'
        TYP=SK_PRZEJSCIE
    //    TYP=SK_SKRZYDLO	
        RYSUNEK='TBP2.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
	    STALE_SZKLO=SZYBA_00_TBR2,EBrakSzyby00
		JAKIE_PRZEKROJE=2
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                             TP_RamaVentReschetki_RamaDoOkna
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                             TP_RamaVentReschetki_RamaDoOkna
				  ]
                PROFILE[POL_SRODEK]=[
                             TP_RamaOkienna_PoprzeczkaPion,
                             TP_RamaOkienna_PoprzeczkaPoziom,
                             TP_RamaOkienna_RuchomySlupek,
                             TP_RamaOkienna_RuchomySlupekVirtualny,
                             TP_RamaOkienna_PodzialOknaPodawczego,
							 
                             TP_RamaUniw_PoprzeczkaPion,
                             TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba					 
                           ]
      >	  	  
    TYP_SKRZYDLA[TS_Dveri_Vent_Reshetki_TBR1]=
      <
        NAZWA='ТВР1) Вентиляционные решетки ТВР1'
        OPIS='Вентиляционные решетки'
        KATEGORIA='6) Вентиляционные решетки в дверь (окно)'
     //   TYP=SK_SRODEK	
        TYP=SK_PRZEJSCIE	 
        RYSUNEK='TBP1.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
	    STALE_SZKLO=SZYBA_00_TBR2,EBrakSzyby00
		JAKIE_PRZEKROJE=2
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                             TP_RamaVentReschetki_RamaDoOkna
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                             TP_RamaVentReschetki_RamaDoOkna
				  ]
                PROFILE[POL_SRODEK]=[
                             TP_RamaOkienna_PoprzeczkaPion,
                             TP_RamaOkienna_PoprzeczkaPoziom,
                             TP_RamaOkienna_RuchomySlupek,
                             TP_RamaOkienna_RuchomySlupekVirtualny,
                             TP_RamaOkienna_PodzialOknaPodawczego,
							 
                             TP_RamaUniw_PoprzeczkaPion,
                             TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba					 
                           ]
      >	  	 	

    TYP_SKRZYDLA[TS_LEER_TB50]=
      <
        NAZWA='ТВ50) Леер'
        OPIS='Леер'
        KATEGORIA='6) Леер'
        TYP=SK_PRZEJSCIE
        RYSUNEK='0.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
	    STALE_SZKLO=SZYBA_00_LEER,EBrakSzyby00
		JAKIE_PRZEKROJE=2
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                             TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                             TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                             TP_RamaOkienna_PoprzeczkaPion,
                             TP_RamaOkienna_PoprzeczkaPoziom,
                             TP_RamaOkienna_RuchomySlupek,
                             TP_RamaOkienna_RuchomySlupekVirtualny,
                             TP_RamaOkienna_PodzialOknaPodawczego,
							 
                             TP_RamaUniw_PoprzeczkaPion,
                             TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba					 
                           ]
	            GDY_PARAMETR='TYP_BALUSTRADA_TB50=3'						   
      >  	
	  
    TYP_SKRZYDLA[TS_LEER_TB50_T5]=
      <
        NAZWA='ТВ50) Леер TYPE5'
        OPIS='Леер'
        KATEGORIA='6) Леер'
        TYP=SK_PRZEJSCIE
        RYSUNEK='0.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
	    STALE_SZKLO=SZYBA_00_LEER_T5,EBrakSzyby00
        DOZWOLONE_WARIANTY=[WAR_DEFAULT]
        SYSTEMY=[]		
		JAKIE_PRZEKROJE=2
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                             TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                             TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                             TP_RamaOkienna_PoprzeczkaPion,
                             TP_RamaOkienna_PoprzeczkaPoziom,
                             TP_RamaOkienna_RuchomySlupek,
                             TP_RamaOkienna_RuchomySlupekVirtualny,
                             TP_RamaOkienna_PodzialOknaPodawczego,
							 
                             TP_RamaUniw_PoprzeczkaPion,
                             TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba					 
                           ]
	            GDY_PARAMETR='TYP_BALUSTRADA_TB50=5'						   
      >  		  
	  
    TYP_SKRZYDLA[TS_Fasada_RamaOkienna_Holod]=
      <
        NAZWA='ОФХ) Окна и балконные двери "холодные"'
        OPIS='Рама оконная'
        KATEGORIA='1) Окна/Балконные двери в фасад'
        TYP=SK_PRZEJSCIE
        RYSUNEK='Dwer_odno_hol.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaUniw_PoprzeczkaPion,
                               TP_RamaUniw_PoprzeczkaPoziom,							   
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_RamaOkienna_OW1,
                  //           TS_RamaOkienna_OW2,
                  //           TS_RamaOkienna_OW3,
				  		     TS_Szyba,					 
							 TS_RamaOkienna_OBW1,
							 TS_RamaOkienna_OBW2,
							 TS_RamaOkienna_OBW3							 
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_RamaOkienna_TBM]=
      <
        NAZWA='ОР) Рама оконная'
        OPIS='Рама оконная'
        KATEGORIA='1) Окна'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='fas_okno.bmp'
        RYSUNEK='C67_okno.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego,
                               TP_RamaUniw_PoprzeczkaPion,
                               TP_RamaUniw_PoprzeczkaPoziom								   
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OW2,
                             TS_RamaOkienna_OW3,

							TS_RamaOkienna_OUP1,
							TS_RamaOkienna_OUP2,
							TS_RamaOkienna_OUP3    							 
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_RamaOkienna_T38]=
      <
        NAZWA=     'ОФ) Т38 - "холодное" в фасад'
        OPIS=      'Рама оконная'
        KATEGORIA= '1) Окна'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
							 TS_RamaOkienna_T38						 
                           ]
      >
    TYP_SKRZYDLA[TS_Peregorodka_RamaOkienna_T38]=
      <
        NAZWA=     'Окна открываемые наружу Т38'
        OPIS=      'Рама оконная'
        KATEGORIA= 'Окна Т38'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
							 TS_RamaOkienna_T38						 
                           ]
      >	  
	  
    TYP_SKRZYDLA[TS_Fasada_RamaBalkonna]=
      <
        NAZWA='ДБ) Рама балконная'
        OPIS='Рама балконная'
        KATEGORIA='5) Балконные двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='C67_okno.jpg'	
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OBW1,
                             TS_RamaOkienna_OBW2,
                             TS_RamaOkienna_OBW3
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaBalkonna_TBM]=
      <
        NAZWA='ДБ) Рама балконная'
        OPIS='Рама балконная'
        KATEGORIA='5) Балконные двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OBW1,
                             TS_RamaOkienna_OBW2,
                             TS_RamaOkienna_OBW3
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaUniwers]=
      <
        NAZWA='OK) Рама оконная универсальная'
        OPIS='Rama okienna (szklenie stale, skrzydla okienne i drzwiowe)'
        KATEGORIA='Окна открываемые внутрь'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaUniw_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaUniw_RamaDoFasady           ,
                                     TP_RamaOkienna_SzczelinaBalkonu    ,
                                     TP_RamaDrzwiowa_ProgDZ             ,
                                     TP_RamaDrzwiowa_ProgDW             ,
                                     TP_RamaDrzwiowa_ProgDH             ,
                                     TP_RamaDrzwiowa_ProgDWZ            ,
                                     TP_RamaDrzwiowa_ProgDZBezp         ,
                                     TP_RamaDrzwiowa_ProgDWBezp         ,
                                     TP_RamaDrzwiowa_SzczotkaDZ         ,
                                     TP_RamaDrzwiowa_SzczotkaDW         ,
                                     TP_RamaDrzwiowa_SzczotkaDH         ,
                                     TP_RamaDrzwiowa_SzczotkaDWZ        ,
                                     TP_RamaDrzwiowa_SzczotkaDZBezp     ,
                                     TP_RamaDrzwiowa_SzczotkaDWBezp     ,
                                     TP_RamaDrzwiowa_Prog2DZ            ,
                                     TP_RamaDrzwiowa_Prog2DW            ,
                                     TP_RamaDrzwiowa_Prog2DH            ,
                                     TP_RamaDrzwiowa_Prog2DWZ           ,
                                     TP_RamaDrzwiowa_Prog2DWBezp        ,
                                     TP_RamaDrzwiowa_Prog2DZBezp        ,
                                     TP_RamaDrzwiowa_ProgS
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaUniw_PoprzeczkaPion,
                               TP_RamaUniw_PoprzeczkaPoziom,
                               TP_RamaUniw_Poprzeczka_O_DW,
                               TP_RamaUniw_Poprzeczka_O_DZ,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego,
                               TP_RamaDrzwiowa_PodzialDZ,
                               TP_RamaDrzwiowa_PodzialDW,
                               TP_RamaDrzwiowa_PodzialDH,
                               TP_RamaDrzwiowa_PodzialDWZ,
                               TP_RamaDrzwiowa_PodzialDZBezp,
                               TP_RamaDrzwiowa_PodzialDWBezp,
                               TP_RamaDrzwiowa_RuchomySlupekDZ,
                               TP_RamaDrzwiowa_RuchomySlupekDW,
                               TP_SkrzydloSzklane_Podzial
                            ]
       STANDARDOWE_SKRZYDLO=TS_RamaOkienna_OW1
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OW2,
                             TS_RamaOkienna_OW3,
                             TS_RamaOkienna_OW2v,
                             TS_RamaOkienna_OW3v,
                             TS_RamaOkienna_OUP1,
                             TS_RamaOkienna_OUP2,
                             TS_RamaOkienna_OUP3,
                             //TS_RamaOkienna_OZ1,
                             //TS_RamaOkienna_OZ2,
                             //TS_RamaOkienna_OZ3,
                             //TS_RamaOkienna_Obrotowe,
                             //TS_RamaOkienna_SkrzydloHarmonijkowe,
                             //TS_RamaOkienna_SkrzydloO1Posz,
                             //TS_RamaOkienna_SkrzydloO2Posz,
                             //TS_RamaOkienna_SkrzydloO3Posz,
                             //TS_RamaOkienna_PodawczePionStale,
                             //TS_RamaOkienna_PodawczePionRuch,
                             //TS_RamaOkienna_PodawczePoziomStale,
                             //TS_RamaOkienna_PodawczePoziomRuch,
                             TS_RamaOkienna_OBW1,
                             TS_RamaOkienna_OBW2,
                             TS_RamaOkienna_OBW3,
                             //TS_RamaOkienna_OBZ1,
                             //TS_RamaOkienna_OBZ2,
                             //TS_RamaOkienna_OBZ3,
                             TS_Drzwi_DW1       ,
                             TS_Drzwi_DW2       ,
                             TS_Drzwi_DW3       ,
                             TS_Drzwi_DW3v       ,
                             TS_Drzwi_DZ1       ,
                             TS_Drzwi_DZ2       ,
                             TS_Drzwi_DZ3       ,
                             TS_Drzwi_DZ3v       
                             //TS_Drzwi_DH1       ,
                             //TS_Drzwi_DH2       ,
                             //TS_Drzwi_DH3       ,
                             //TS_Drzwi_DWZ_W     ,
                             //TS_Drzwi_DWZ_Z     ,
                             //TS_Drzwi_DW1b      ,
                             //TS_Drzwi_DW2b      ,
                             //TS_Drzwi_DW3b      ,
                             //TS_Drzwi_DZ1b      ,
                             //TS_Drzwi_DZ2b      ,
                             //TS_Drzwi_DZ3b
                             //TS_Tafla1          ,
                             //TS_Tafla2          ,
                             //TS_Tafla3
                           ]

      >
    TYP_SKRZYDLA[TS_Fasada_RamaOkiennaZ]=
      <
        NAZWA='OZ) Рама оконная для окна открываемого наружу'
        OPIS='Рама оконная (только створка открываемая наружу)'
        KATEGORIA='Окна открываемые наружу'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkiennaZ_RamaDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaOkiennaZ_RamaDoFasady
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkiennaZ_Poprzeczka,
                               TP_RamaOkiennaZ_RuchomySlupek
                            ]
        DOZWOLONE_SKRZYDLA=[
                        
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_OZ2,
                             TS_RamaOkienna_OZ3
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDW]=
      <
        NAZWA='ДВТ) Двери открываемые внутрь'
        OPIS='Двери открываемые внутрь (для фасада)'
        KATEGORIA='3) Двери "теплые"'
        TYP=SK_PRZEJSCIE
        RYSUNEK='Dwer_odno_vn1.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DWDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDW             ,
                                     TP_RamaDrzwiowa_SzczotkaDW         ,
                                     TP_RamaDrzwiowa_Prog2DW
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDW,
                               TP_RamaDrzwiowa_RuchomySlupekDW
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DW1       ,
                             TS_Drzwi_DW2       ,
                             TS_Drzwi_DW3       ,
                             TS_Drzwi_DW3v
                           ]
      >
   TYP_SKRZYDLA[TS_Fasada_RamaDW_TBM]=
      <
        NAZWA='ДВТ) Двери открываемые внутрь'
        OPIS='Двери открываемые внутрь (для фасада)'
        KATEGORIA='3) Двери "теплые"'
        TYP=SK_PRZEJSCIE
        RYSUNEK='Dwer_odno_vn1.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DWDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDW             ,
                                     TP_RamaDrzwiowa_SzczotkaDW         ,
                                     TP_RamaDrzwiowa_Prog2DW
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDW,
                               TP_RamaDrzwiowa_RuchomySlupekDW
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DW1       ,
                             TS_Drzwi_DW2       ,
                             //TS_Drzwi_DW3       ,
                             TS_Drzwi_DW3v
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_RamaDZ]=
      <
        NAZWA='ДНТ) Двери открываемые наружу'
        OPIS='Двери открываемые наружу (для фасада)'
        KATEGORIA='3) Двери "теплые"'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='Dwer_odno_nar.jpg'
        RYSUNEK='C67_nar.jpg'		
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DZDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDZ             ,
                                     TP_RamaDrzwiowa_SzczotkaDZ         ,
                                     TP_RamaDrzwiowa_Prog2DZ
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDZ,
                               TP_RamaDrzwiowa_RuchomySlupekDZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DZ1       ,
                             TS_Drzwi_DZ2       ,
                             TS_Drzwi_DZ3       ,
                             TS_Drzwi_DZ3v
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDZ_TBM]=
      <
        NAZWA='ДНТ) Двери открываемые наружу'
        OPIS='Двери открываемые наружу (для фасада)'
        KATEGORIA='3) Двери "теплые"'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='Dwer_odno_nar.jpg'
        RYSUNEK='C67_nar.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DZDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDZ             ,
                                     TP_RamaDrzwiowa_SzczotkaDZ         ,
                                     TP_RamaDrzwiowa_Prog2DZ
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDZ,
                               TP_RamaDrzwiowa_RuchomySlupekDZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DZ1       ,
                             TS_Drzwi_DZ2       ,
                             //TS_Drzwi_DZ3       ,
                             TS_Drzwi_DZ3v
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_RamaDZ_D40]=
      <
        NAZWA='ДНХ) Двери открываемые наружу'
        OPIS='Двери открываемые наружу (холодные)'
        KATEGORIA='4) Двери "холодные"'
        TYP=SK_PRZEJSCIE
        RYSUNEK='Dwer_odno_nar_hol.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DZDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDZ             ,
                                     TP_RamaDrzwiowa_SzczotkaDZ         ,
                                     TP_RamaDrzwiowa_Prog2DZ
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDZ,
                               TP_RamaDrzwiowa_RuchomySlupekDZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                           ]
      >	  
    TYP_SKRZYDLA[TS_Fasada_RamaDW_D40]=
      <
        NAZWA='ДВХ) Двери открываемые внутрь'
        OPIS='Двери открываемые внутрь (холодные)'
        KATEGORIA='4) Двери "холодные"'
        TYP=SK_PRZEJSCIE
//        RYSUNEK='Dwer_odno_vn.jpg'
        RYSUNEK='Dveri_D40W.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DWDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDW             ,
                                     TP_RamaDrzwiowa_SzczotkaDW         ,
                                     TP_RamaDrzwiowa_Prog2DW
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDW,
                               TP_RamaDrzwiowa_RuchomySlupekDW
                            ]
        DOZWOLONE_SKRZYDLA=[
                           ]
      >	  	  
	    TYP_SKRZYDLA[TS_Peregorodka_RamaDZ]=
      <
        NAZWA='ДНХ) Двери открываемые наружу (в перегородку)'
        OPIS='Двери открываемые наружу (в перегородку)'
        KATEGORIA='Двери Д40'
        TYP=SK_PRZEJSCIE
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DZDoPeregorodka
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDZ             ,
                                     TP_RamaDrzwiowa_SzczotkaDZ         ,
                                     TP_RamaDrzwiowa_Prog2DZ
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDZ,
                               TP_RamaDrzwiowa_RuchomySlupekDZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                           ]
      >	 
    TYP_SKRZYDLA[TS_Peregorodka_RamaDW]=
      <
        NAZWA='ДВХ) Двери открываемые внутрь (в перегородку)'
        OPIS='Двери открываемые внутрь (в перегородку)'
        KATEGORIA='Двери Д40'
        TYP=SK_PRZEJSCIE
        RYSUNEK='Dwer_odno_vn.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DWDoPeregorodka
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDW             ,
                                     TP_RamaDrzwiowa_SzczotkaDW         ,
                                     TP_RamaDrzwiowa_Prog2DW
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDW,
                               TP_RamaDrzwiowa_RuchomySlupekDW
                            ]
        DOZWOLONE_SKRZYDLA=[
                           ]
      >	  
	    TYP_SKRZYDLA[TS_Peregorodka_RamaOZ]=
      <
        NAZWA='ОНХ) Окна открываемые наружу (в перегородку)'
        OPIS='Окна открываемые наружу (в перегородку)'
        KATEGORIA='Окна Д40'
        TYP=SK_PRZEJSCIE
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_ZEWN
        PROFILE[POL_LEWO ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_PRAWO]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_GORA ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_DOL  ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_INNE ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
							 TS_RamaOkienna_OBW1
                           ]
      > 	
    TYP_SKRZYDLA[TS_Peregorodka_RamaOW]=
      <
        NAZWA='ОВХ) Окна открываемые внутрь (в перегородку)'
        OPIS='Окна открываемые внутрь (в перегородку)'
        KATEGORIA='Окна Д40'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_UR
        PROFILE[POL_LEWO ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_PRAWO]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_GORA ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_DOL  ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_INNE ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                          //   TS_RamaOkienna_OW1,
							 TS_RamaOkienna_OBW1
                           ]
      > 
    TYP_SKRZYDLA[TS_Peregorodka2_RamaOW]=
      <
        NAZWA='ОВХ) Окна открываемые внутрь (в перегородку)'
        OPIS='Окна открываемые внутрь (в перегородку)'
        KATEGORIA='Окна Д40'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_UR
        PROFILE[POL_LEWO ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_PRAWO]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_GORA ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_DOL  ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_INNE ]= [ TP_RamaOkienna_RamaDoFasady ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,
                               TP_RamaOkienna_RuchomySlupek,
                               TP_RamaOkienna_RuchomySlupekVirtualny,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
//                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_OBW1
                           ]
      > 		  
    TYP_SKRZYDLA[TS_Fasada_RamaDH]=
      <
        NAZWA='DH) Drzwi wahadlowe'
        OPIS='Drzwi wahadlowe'
        KATEGORIA='Двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_dh.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD

        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DHK,TP_RamaDrzwiowa_DHZ ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DHK,TP_RamaDrzwiowa_DHZ ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DHG ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DHG ]
        PROFILE[ POL_DOL,
                 POL_INNE
                            ] = [
                                   TP_RamaDrzwiowa_ProgDH,
                                   TP_RamaDrzwiowa_Prog2DH,
                                   TP_RamaDrzwiowa_SzczotkaDH
                                ]


//        PROFILE[POL_LEWO,
//                POL_PRAWO,
//                POL_GORA,
//                POL_INNE ]= [
//                              TP_RamaDrzwiowa_DHDoFasady
//                            ]
//	PROFILE[POL_DOL,POL_INNE]=[
//                                     TP_RamaDrzwiowa_ProgDH             ,
//                                     TP_RamaDrzwiowa_SzczotkaDH         ,
//                                     TP_RamaDrzwiowa_Prog2DH
//				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDH
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DH1       ,
                             TS_Drzwi_DH2       ,
                             TS_Drzwi_DH3
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDWZ]=
      <
        NAZWA='DWZ) Drzwi naprzemienne'
        OPIS='Drzwi naprzemienne do fasady'
        KATEGORIA='Двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_dw.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DWZDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDWZ             ,
                                     TP_RamaDrzwiowa_SzczotkaDWZ         ,
                                     TP_RamaDrzwiowa_Prog2DWZ
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDWZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DWZ_Z       ,
                             TS_Drzwi_DWZ_W
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDWBezp]=
      <
        NAZWA='DWB) Двери открываемые внутрь (безопасные)'
        OPIS='Двери открываемые внутрь (безопасные) для фасада'
        KATEGORIA='3) Двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_dw.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DWBezpDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDWBezp             ,
                                     TP_RamaDrzwiowa_SzczotkaDWBezp         ,
                                     TP_RamaDrzwiowa_Prog2DWBezp
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDWBezp
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DW1b       ,
                             TS_Drzwi_DW2b       ,
                             TS_Drzwi_DW3b
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDZBezp]=
      <
        NAZWA='DZB) Двери открываемые наружу (безопасные)'
        OPIS='Двери открываемые наружу (безопасные) для фасада'
        KATEGORIA='3) Двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='fas_dz.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                              TP_RamaDrzwiowa_DZBezpDoFasady
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_RamaDrzwiowa_ProgDZBezp             ,
                                     TP_RamaDrzwiowa_SzczotkaDZBezp         ,
                                     TP_RamaDrzwiowa_Prog2DZBezp
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaDrzwiowa_PodzialDZBezp
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Drzwi_DZ1b       ,
                             TS_Drzwi_DZ2b       ,
                             TS_Drzwi_DZ3b
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDAuto2]=
      <
        NAZWA='A2) Drzwi automatyczne 2 szyny'
        OPIS='Drzwi automatyczne - dwie szyny'
        KATEGORIA='Двери'
        TYP=SK_PRZEJSCIE
        RYSUNEK='dp2.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_AUTOMAT_ZK
        PROFILE[POL_LEWO ]= [ TP_RamaAuto2_Bok ]
        PROFILE[POL_PRAWO]= [ TP_RamaAuto2_Bok ]
        PROFILE[POL_GORA ]= [ TP_RamaAuto2_Gora ]
        PROFILE[POL_DOL  ]= [ TP_RamaAuto2_Dol1,TP_RamaAuto2_Dol2 ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaAuto2_Podzial12,
                               TP_RamaAuto2_Podzial11,
                               TP_RamaAuto2_Podzial22
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_RamaAutomatu_Skrzydlo12R,
                               TS_RamaAutomatu_Skrzydlo22R,
                               TS_RamaAutomatu_Skrzydlo22R2,
                               TS_RamaAutomatu_Skrzydlo12S
                           ]
      >
    TYP_SKRZYDLA[TS_Fasada_RamaDAuto3]=
      <
        NAZWA='A3) Drzwi automatyczne 3 szyny'
        OPIS='Drzwi automatyczne - trzy szyny'
        KATEGORIA='Drzwi'
        TYP=SK_PRZEJSCIE
        RYSUNEK='dp3.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_AUTOMAT_ZK
        PROFILE[POL_LEWO ]= [ TP_RamaAuto3_Bok ]
        PROFILE[POL_PRAWO]= [ TP_RamaAuto3_Bok ]
        PROFILE[POL_GORA ]= [ TP_RamaAuto3_Gora ]
        PROFILE[POL_DOL  ]= [ TP_RamaAuto3_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[
                               TP_RamaAuto3_Podzial12,
                               TP_RamaAuto3_Podzial23,
                               TP_RamaAuto3_Podzial11,
                               TP_RamaAuto3_Podzial22,
                               TP_RamaAuto3_Podzial33
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_RamaAutomatu_Skrzydlo13R,
                               TS_RamaAutomatu_Skrzydlo23R,
                               TS_RamaAutomatu_Skrzydlo33R,
                               TS_RamaAutomatu_Skrzydlo33R2,
                               TS_RamaAutomatu_Skrzydlo13S
                           ]
      >
    TYP_SKRZYDLA[TS_Struktura_StrukturaSkrzydloStale]=
      <
        NAZWA='SS) Skrzydіo strukturalne staіe'
        OPIS='Skrzydіo strukturalne staіe'
        KATEGORIA='Skrzydіa strukturalne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_st.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Struktura_SkrzydloStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Struktura_SkrzydloStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Struktura_PolStrukturaSkrzydloStale]=
      <
        NAZWA='PS) Skrzydіo pуіstrukturalne staіe'
        OPIS='Skrzydіo pуіstrukturalne staіe'
        KATEGORIA='Skrzydіa pуіstrukturalne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_st.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Struktura_SkrzydloPolStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                      TP_Struktura_SkrzydloPolStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Struktura_StrukturaSkrzydloUchylne]=
      <
        NAZWA='SS) Skrzydіo strukturalne uchylne'
        OPIS='Skrzydіo strukturalne uchylne'
        KATEGORIA='Skrzydіa strukturalne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Struktura_SkrzydloStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                     TP_Struktura_SkrzydloStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_Struktura_PolStrukturaSkrzydloUchylne]=
      <
        NAZWA='PS) Skrzydіo pуіstrukturalne uchylne'
        OPIS='Skrzydіo pуіstrukturalne uchylne'
        KATEGORIA='Skrzydіa pуіstrukturalne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_uch.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_Struktura_SkrzydloPolStruktura
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                      TP_Struktura_SkrzydloPolStruktura
				  ]
        PROFILE[POL_SRODEK]=[
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >


    TYP_SKRZYDLA[TS_RamaOkienna_OW1]=
      <
        NAZWA_HTML='O1) Створка одностворчатого окна <b>(Европаз 20)</b>'
        OPIS='Створка одностворчатого окна'
        KATEGORIA='1) Окно открываемое внутрь(Европаз 20)'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_UR
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                             ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_PVC_OW1]=
      <
        NAZWA_HTML='O1/1) Створка одностворчатого окна <b>(Европаз 16)</b>'
        OPIS='Створка одностворчатого окна'
        KATEGORIA='1.1) Окно открываемое внутрь(Европаз 16)'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_UR
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                             ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
							   TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >	  
    TYP_SKRZYDLA[TS_RamaOkienna_PVC_OW2]=
      <
        NAZWA_HTML='O2/1) Створка без штульпа (активная) <b>(Европаз 16)</b>'	
        OPIS='Створка без штульпа (активная)'
        KATEGORIA='1.1) Окно открываемое внутрь(Европаз 16)'
        TYP=SK_SKRZYDLO
        RYSUNEK='Okno_dv_akt.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_PVC_OW3]=
      <
        NAZWA_HTML='O3/1) Створка со штульпом (пасивная) <b>(Европаз 16)</b>'		
        OPIS='Створка со штульпом (пасивная)'
        KATEGORIA='1.1) Окно открываемое внутрь(Европаз 16)'
        TYP=SK_SKRZYDLO
        RYSUNEK='Okno_dv_pas.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							   TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	    TYP_SKRZYDLA[TS_RamaOkienna_T38]=
      <
        NAZWA='Створка окна T38'
        OPIS='Створка окна T38'
        KATEGORIA='Окно T38'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o1.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_ROZWIERANE
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                             ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OW2]=
      <
        NAZWA_HTML='O2) Створка без штульпа (активная) <b>(Европаз 20)</b>'	
        OPIS='Створка без штульпа (активная)'
        KATEGORIA='1) Окно открываемое внутрь(Европаз 20)'
        TYP=SK_SKRZYDLO
        RYSUNEK='Okno_dv_akt.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OW3]=
      <
        NAZWA_HTML='O3) Створка со штульпом (пасивная) <b>(Европаз 20)</b>'		
        OPIS='Створка со штульпом (пасивная)'
        KATEGORIA='1) Окно открываемое внутрь(Европаз 20)'
        TYP=SK_SKRZYDLO
        RYSUNEK='Okno_dv_pas.jpg'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

	  TYP_SKRZYDLA[TS_RamaOkienna_OWH]=
      <
        NAZWA='OH) Skrzydlo okienne z ruch.slupkiem z dwуch stron'
        OPIS='Skrzydlo okienne z ruchomym slupkiem'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o3.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem,TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem,TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OW2v]=
      <
        NAZWA='O2) Skrzydlo okienne przy wirtualnym slupku'
        OPIS='Skrzydlo okienne przy wirtualnym ruchomym slupku'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o2.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupkuVirtualny ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OW3v]=
      <
        NAZWA='O3) Skrzydlo okienne z wirtualnym slupkiem'
        OPIS='Skrzydlo okienne z wirtualnym ruchomym slupkiem'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o3.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiemVirtualny ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
   TYP_SKRZYDLA[TS_RamaOkienna_OUP1]=
      <
        NAZWA='UP1) Створка паралельно-сдвижная для одностворчатого окна'
        OPIS='Створка паралельно-сдвижная для одностворчатого окна'
        KATEGORIA='6) Окно паралельно-сдвижное'
        TYP=SK_SKRZYDLO
        RYSUNEK='OUP1.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCH_PRZES
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
    >
    TYP_SKRZYDLA[TS_RamaOkienna_OUP2]=
     <
        NAZWA='UP2) Створка паралельно-сдвижная без штульпа (активная)'
        OPIS='Створка паралельно-сдвижная без штульпа (активная)'
        KATEGORIA='6) Окно паралельно-сдвижное'
        TYP=SK_SKRZYDLO
        RYSUNEK='OUP2.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCH_PRZES
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OUP3]=
      <
        NAZWA='UP3) Створка паралельно-сдвижная со штульпом (пасивная)'
        OPIS='Створка паралельно-сдвижная со штульпом (пасивная)'
        KATEGORIA='6) Окно паралельно-сдвижное'
        TYP=SK_SKRZYDLO
        RYSUNEK='OUP3.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_UCH_PRZES
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                              TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                              TS_RamaOkienna_OZ1,
                              TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                              TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OZ1]=
      <
        NAZWA='OZ1) Skrzydlo wychylne poj.'
        OPIS='Skrzydlo okienne wychylne pojedyncze'
        KATEGORIA='Okna otw. na zewn№trz'
       TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_UCHYLNE_Z
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienneZ_O1]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OZ2]=
      <
        NAZWA='OZ2) Skrzydlo wychylne przy ruch.slupku'
        OPIS='Skrzydlo okienne wychylne przy ruchomym slupku'
        KATEGORIA='Okna otw. na zewn№trz'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_ZEWN
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienneZ_O2 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OZ3]=
      <
        NAZWA='OZ3) Skrzydlo wychylne z ruch.slupkiem'
        OPIS='Skrzydlo wychylne z ruchomym slupkiem'
        KATEGORIA='Okna otw. na zewn№trz'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_RP_Z
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienneZ_O3 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_Obrotowe]=
      <
        NAZWA='OBR) Skrzydlo obrotowe'
        OPIS='Skrzydlo obrotowe'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='WING_PIV.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_PIVOT
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_ObrotowePodzielone ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ObrotowePodzielone ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_ObrotoweCale ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_ObrotoweCale ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_ObrotoweCale ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OBW1]=
      <
        NAZWA='OB1) Створка одностворчатой балконной двери'
        OPIS='Створка одностворчатой балконной двери'
        KATEGORIA='2) Балконная дверь'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_W1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_UR
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_PoprzeczkaBalkonowa ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
							   TS_Dveri_Vent_Reshetki_TBR1,
							   TS_Dveri_Vent_Reshetki_TBR2
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OBW3]=
      <
        NAZWA='OB3) Створка двухств. балконной двери (пасивная)'
        OPIS='Створка двухств. балконной двери (пасивная)'
        KATEGORIA='2) Балконная дверь'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_W2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
	    PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
							   TS_Dveri_Vent_Reshetki_TBR1,
							   TS_Dveri_Vent_Reshetki_TBR2
                          //     TS_RamaOkienna_OW1,
                          //     TS_RamaOkienna_OZ1,
                          //     TS_RamaOkienna_PodawczePionStale,
                          //     TS_RamaOkienna_PodawczePionRuch,
                          //     TS_RamaOkienna_PodawczePoziomStale,
                          //     TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OBW2]=
      <
        NAZWA='OB2) Створка двухств. балконной двери (активная)'
        OPIS='Створка двухств. балконной двери (активная)'
        KATEGORIA='2) Балконная дверь'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_W3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_ROZWIERANE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku]		
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]   
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
							   TS_Dveri_Vent_Reshetki_TBR1,
							   TS_Dveri_Vent_Reshetki_TBR2
                          //     TS_RamaOkienna_OW1,
                          //     TS_RamaOkienna_OZ1,
                          //     TS_RamaOkienna_PodawczePionStale,
                          //     TS_RamaOkienna_PodawczePionRuch,
                          //     TS_RamaOkienna_PodawczePoziomStale,
                          //     TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OBZ1]=
      <
        NAZWA='OBZ1) Skrzydlo balkonowe otw.na zewn. poj.'
        OPIS='Skrzydlo okienne balkonowe otwierane na zewnatrz pojedyncze'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_ZEWN
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienneZ_O1]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_PoprzeczkaBalkonowa ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							   TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OBZ2]=
      <
        NAZWA='OBZ2) Skrzydlo balkonowe otw.na zewn. przy ruch.slupku'
        OPIS='Skrzydlo okienne balkonowe otwierane na zewnatrz przy ruchomym slupku'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_ZEWN_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienneZ_O2 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_PoprzeczkaBalkonowa ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OBZ3]=
      <
        NAZWA='OBZ3) Skrzydlo balkonowe otw.na zewn. z ruch.slupkiem'
        OPIS='Skrzydlo balkonowe otwierane na zewnatrz z ruchomym slupkiem'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienneZ_O3 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_PoprzeczkaBalkonowa ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienneZ_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_RamaOkienna_SkrzydloHarmonijkowe]=
      <
        NAZWA='HAR) Skrzydlo okna harmonijkowego'
        OPIS='HAR) Skrzydlo okna harmonijkowego'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='HARMON.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_ZEWN
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias,TP_SkrzydloOkienne_PrzyRuchomymSlupku,TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Zawias,TP_SkrzydloOkienne_PrzyRuchomymSlupku,TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_RamaOkienna_SkrzydloO1Posz]=
      <
        NAZWA='O1P) Skrzydlo okienne poj.posz.'
        OPIS='Skrzydlo okienne pojedyncze poszerzone'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_O1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_UR
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_SkrzydloO2Posz]=
      <
        NAZWA='O2P) Skrzydlo okienne przy ruch.slupku posz.'
        OPIS='Skrzydlo okienne przy ruchomym slupku poszerzone'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_O2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_SkrzydloO3Posz]=
      <
        NAZWA='O3P) Skrzydlo okienne z ruch.slupkiem posz.'
        OPIS='Skrzydlo okienne z ruchomym slupkiem poszerzone'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_O3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkiennePosz_O1 ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_RamaOkienna_PodawczePionStale]=
      <
        NAZWA='PD1A) Skrzydlo podawcze pionowe - czesc stala'
        OPIS='Skrzydlo podawcze pionowe - czesc stala'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='P3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO ]= [ TP_SkrzydloPodawcze_BokStale ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloPodawcze_BokStale ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloPodawcze_DoRamyStale ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloPodawcze_PrzyPodzialeStale ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloPodawcze_BokStale ]
        PROFILE[POL_SRODEK]=[ ]
        DOZWOLONE_SKRZYDLA=[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_PodawczePionRuch]=
      <
        NAZWA='PD2A) Skrzydlo podawcze pionowe - czesc ruchoma'
        OPIS='Skrzydlo podawcze pionowe - czesc ruchoma'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='P4.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_PODAWCZE_RUCHOME_PION
        PROFILE[POL_LEWO ]= [ TP_SkrzydloPodawcze_BokRuchome ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloPodawcze_BokRuchome ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloPodawcze_PrzyPodzialeRuchome ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloPodawcze_DoRamyRuchome ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloPodawcze_BokRuchome ]
        PROFILE[POL_SRODEK]=[ ]
        DOZWOLONE_SKRZYDLA=[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_PodawczePoziomStale]=
      <
        NAZWA='PD1B) Skrzydlo podawcze poziome - czesc stala'
        OPIS='Skrzydlo podawcze poziome - czesc stala'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='P1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO ]= [ TP_SkrzydloPodawcze_DoRamyStale ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloPodawcze_PrzyPodzialeStale ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloPodawcze_BokStale ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloPodawcze_BokStale ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloPodawcze_BokStale ]
        PROFILE[POL_SRODEK]=[ ]
        DOZWOLONE_SKRZYDLA=[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_PodawczePoziomRuch]=
      <
        NAZWA='PD2B) Skrzydlo podawcze poziome - czesc ruchoma'
        OPIS='Skrzydlo podawcze poziome - czesc ruchoma'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='P2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_PODAWCZE_RUCHOME_POZIOM
        PROFILE[POL_LEWO ]= [ TP_SkrzydloPodawcze_PrzyPodzialeRuchome ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloPodawcze_DoRamyRuchome ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloPodawcze_BokRuchome ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloPodawcze_BokRuchome ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloPodawcze_BokRuchome ]
        PROFILE[POL_SRODEK]=[ ]
        DOZWOLONE_SKRZYDLA=[ TS_Szyba ]
      >


//******************************************
//Drzwi
//******************************************
    TYP_SKRZYDLA[TS_Drzwi_DZ_D40]=
      <
        NAZWA='DZ1) Дверь открываемая наружу'
        OPIS='Одностворчатая дверь открываемая наружу'
        KATEGORIA='3) Дверь одностворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_Dveri_Vent_Reshetki_TBR2,
							 TS_Dveri_Vent_Reshetki_TBR1
                           ]
      >

    TYP_SKRZYDLA[TS_Drzwi_DW1]=
      <
        NAZWA='DW1) Дверь открываемая внутрь'
        OPIS='Одностворчатая дверь открываемая внутрь'
        KATEGORIA='3) Дверь одностворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW2]=
      <
        NAZWA='DW2) Двери открываемые внутрь. Активная створка'
        OPIS='Двери духстворчатые открываемые внутрь. Активная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW3]=
      <
        NAZWA='DW3) Дверь открываемая внутрь (без штульпа). Пасивная створка'
        OPIS='Дверь открываемая внутрь. Пасивная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w3.png'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW_D40]=
      <
        NAZWA='DW1) Дверь открываемая внутрь'
        OPIS='Одностворчатая дверь открываемая внутрь'
        KATEGORIA='3) Дверь одностворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                               TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                               TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                               TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_Dveri_Vent_Reshetki_TBR2,
							 TS_Dveri_Vent_Reshetki_TBR1
						//	 TS_Drzwi_DZ_D40,
                        //     TS_RamaOkienna_OW1,
                        //     TS_RamaOkienna_OZ1,
                        //     TS_RamaOkienna_PodawczePionStale,
                        //     TS_RamaOkienna_PodawczePionRuch,
                        //     TS_RamaOkienna_PodawczePoziomStale,
                        //     TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW2_D40]=
      <
        NAZWA='DW2) Двери открываемые внутрь. Активная створка'
        OPIS='Двери духстворчатые открываемые внутрь. Активная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_Dveri_Vent_Reshetki_TBR2,
							 TS_Dveri_Vent_Reshetki_TBR1
                        //     TS_RamaOkienna_OW1,
                        //     TS_RamaOkienna_OZ1,
                        //     TS_RamaOkienna_PodawczePionStale,
                        //     TS_RamaOkienna_PodawczePionRuch,
                        //     TS_RamaOkienna_PodawczePoziomStale,
                        //     TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW3_D40]=
      <
        NAZWA='DW3) Дверь открываемая внутрь. Пасивная створка'
        OPIS='Двери духстворчатые открываемые внутрь. Активная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_Dveri_Vent_Reshetki_TBR2,
							 TS_Dveri_Vent_Reshetki_TBR1
                        //     TS_RamaOkienna_OW1,
                        //     TS_RamaOkienna_OZ1,
                        //     TS_RamaOkienna_PodawczePionStale,
                        //     TS_RamaOkienna_PodawczePionRuch,
                        //     TS_RamaOkienna_PodawczePoziomStale,
                        //     TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >	  
	  

    TYP_SKRZYDLA[TS_Drzwi_DW2b]=
      <
        NAZWA='DW2b) Двери двухстворчатые открываемые внутрь. Активная створка'
        OPIS='Двери двухстворчатые открываемые внутрь. Активная створка'
        KATEGORIA='Дверь двухстворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO ]=[  TP_SkrzydloDrzwiowe_DW2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW3b]=
      <
        NAZWA='DW3b) Двери двухстворчатые открываемые внутрь. Пасивная створка'
        OPIS='Двери двухстворчатые открываемые внутрь. Пасивная створка'
        KATEGORIA='Дверь двухстворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
       PROFILE[POL_LEWO ]=[  TP_SkrzydloDrzwiowe_DW2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_Drzwi_DW4]=
      <
        NAZWA='DW4) Drzwi dwuskrz.otw.do wewnatrz Skrzydіo podwуjnie bierne'
        OPIS='Drzwi dwuskrzydlowe otwierane do wewnatrz. Skrzydіo bierne'
        KATEGORIA='Дверь двухстворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_Drzwi_DW3v]=
      <
        NAZWA='DW3V) Двери открываемые внутрь (со штульпом). Пасивная створка'
        OPIS='Дверь откр. внутрь со штульпом. Пасивная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2v]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

 
    TYP_SKRZYDLA[TS_Drzwi_DZ3v]=
      <
        NAZWA='DZ3V) Дверь открываемая наружу (со штульпом). Пасивная створка'
        OPIS='Дверь двухстворчатая открываемая наружу со штульпом'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3new.EMF'
        SYSTEMY=[]		
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2v]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch,
							 TS_PANEL_RESIDANCE
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW1b]=
      <
        NAZWA='DWB1) Drzwi otw.do wewnatrz bezp.poj.'
        OPIS='Двери одностворчатые открываемые внутрь безопасные'
        KATEGORIA='Двери одностворчатые'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1Bezp
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1BezpPoprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
//    TYP_SKRZYDLA[TS_Drzwi_DW2b]=
//      <
//        NAZWA='DWB2) Двери двухстворчатые открываемые внутрь безопасные с ручкой'
//        OPIS='Двери двухстворчатые открываемые внутрь безопасные. Створка с замком и ручкой'
//        KATEGORIA='Дверь двухстворчатая'
//        TYP=SK_SKRZYDLO
//        RYSUNEK='SKRZ_w2.EMF'
//        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2
//        PROFILE[POL_LEWO,
//                POL_GORA,
//                POL_INNE ]= [
//                               TP_SkrzydloDrzwiowe_DW1Bezp
//                            ]
//        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2Bezp]
//
//	PROFILE[POL_DOL,POL_INNE]=[
//                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaProg1,
//                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaProg2,
//                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaSzczotka
//				  ]
//        PROFILE[POL_SRODEK]=[
//                               TP_SkrzydloDrzwiowe_DW1BezpPoprzeczka,
//                               TP_RamaOkienna_PodzialOknaPodawczego
//                            ]
//        DOZWOLONE_SKRZYDLA=[
//                             TS_Szyba,
//                             TS_RamaOkienna_OW1,
//                             TS_RamaOkienna_OZ1,
//                             TS_RamaOkienna_PodawczePionStale,
//                             TS_RamaOkienna_PodawczePionRuch,
//                             TS_RamaOkienna_PodawczePoziomStale,
//                             TS_RamaOkienna_PodawczePoziomRuch
//                           ]
//      >
//    TYP_SKRZYDLA[TS_Drzwi_DW3b]=
//      <
//        NAZWA='DWB3) Двери двухстворчатые открываемые внутрь безопасные. Створка с ригелем'
//        OPIS='Двери двухстворчатые открываемые внутрь безопасные. Створка с ригелем'
//        KATEGORIA='Дверь двухстворчатая'
//        TYP=SK_SKRZYDLO
//        RYSUNEK='SKRZ_w3.EMF'
//        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
//        PROFILE[POL_LEWO,
//                POL_GORA,
//                POL_INNE ]= [
//                               TP_SkrzydloDrzwiowe_DW1Bezp
//                            ]
//        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3Bezp]
//
//	PROFILE[POL_DOL,POL_INNE]=[
//                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaProg1,
//                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaProg2,
//                                    TP_SkrzydloDrzwiowe_DW1BezpPoprzeczkaDrzwiowaSzczotka
//				  ]
//        PROFILE[POL_SRODEK]=[
//                               TP_SkrzydloDrzwiowe_DW1BezpPoprzeczka,
//                               TP_RamaOkienna_PodzialOknaPodawczego
//                            ]
//        DOZWOLONE_SKRZYDLA=[
//                             TS_Szyba,
//                             TS_RamaOkienna_OW1,
//                             TS_RamaOkienna_OZ1,
//                             TS_RamaOkienna_PodawczePionStale,
//                             TS_RamaOkienna_PodawczePionRuch,
//                             TS_RamaOkienna_PodawczePoziomStale,
//                             TS_RamaOkienna_PodawczePoziomRuch
//                           ]
//      >
//
//

//**************************************************************

    TYP_SKRZYDLA[TS_Drzwi_DW1_CD]=
      <
        NAZWA='DW1) Дверь открываемая внутрь CD'
        OPIS='Одностворчатая дверь открываемая внутрь'
        KATEGORIA='3) Дверь одностворчатая CD'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW2_CD]=
      <
        NAZWA='DW2) Двери открываемые внутрь CD. Активная створка'
        OPIS='Двери духстворчатые открываемые внутрь. Активная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ CD'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DW3_CD]=
      <
        NAZWA='DW3) Дверь открываемая внутрь (без штульпа) CD. Пасивная створка'
        OPIS='Дверь открываемая внутрь. Пасивная створка'
        KATEGORIA='4) Дверь двухстворчатая откр. ВНУТРЬ CD'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w3.png'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

//**************************************************************

    TYP_SKRZYDLA[TS_Drzwi_DZ1b]=
      <
        NAZWA='DZB1) Двери открываемые наружу безопасные'
        OPIS='Двери открываемые наружу безопасные'
        KATEGORIA='Двери одностворчатые'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1Bezp
                            ]
	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1BezpPoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1BezpPoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1BezpPoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1BezpPoprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_Drzwi_DH1]=
      <
        NAZWA='DH1) Swinging door'
        OPIS='Swinging door, single vent'
        KATEGORIA='Swinging door'
        TYP=SK_SKRZYDLO
        RYSUNEK='H1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DH1
                            ]
        PROFILE[ POL_PRAWO ]=[ TP_SkrzydloDrzwiowe_DH1K ]


	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DH1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DH2]=
      <
        NAZWA='DH2) Double door. Active vent'
        OPIS='Double door. Active vent'
        KATEGORIA='Double swinging door'
        TYP=SK_SKRZYDLO
        RYSUNEK='H2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DH1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DH2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DH1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DH3]=
      <
        NAZWA='DH3) Double door. Passive vent'
        OPIS='Double door. Passive vent'
        KATEGORIA='Double swinging door'
        TYP=SK_SKRZYDLO
        RYSUNEK='H3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DH1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DH3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DH1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DH1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DWZ_W]=
      <
        NAZWA='DWZ:W) Drzwi naprzemienne, czesc otw.do wewnatrz'
        OPIS='Drzwi naprzemienne, czesc otw.do wewnatrz'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_w1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WEWN
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DWZ_W1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DWZ_W2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DWZ_Z]=
      <
        NAZWA='DWZ:Z) Drzwi naprzemienne, czesc otw.na zewnatrz'
        OPIS='Drzwi naprzemienne, czesc otw.na zewnatrz'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DWZ_Z1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DWZ_Z2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_Tafla1]=
      <
        NAZWA='TS1) Tafla szkla'
        OPIS='Tafla szkla pojedyncza'
        KATEGORIA='Inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='H1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [TP_SkrzydloSzklane_S1]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloSzklane_S1 ]
	PROFILE[POL_DOL,POL_INNE]=[TP_SkrzydloSzklane_SDol]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA=[TS_Szyba]
      >
    TYP_SKRZYDLA[TS_Tafla2]=
      <
        NAZWA='TS2) Tafla szkla. Czesc z klamka'
        OPIS='Tafla szkla. Skrzydlo z zamkiem i klamka'
        KATEGORIA='Inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='H2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [TP_SkrzydloSzklane_S1]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloSzklane_S2 ]
	PROFILE[POL_DOL,POL_INNE]=[TP_SkrzydloSzklane_SDol]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA=[TS_Szyba]
      >
    TYP_SKRZYDLA[TS_Tafla3]=
      <
        NAZWA='TS3) Tafla szkla. Czesc z ryglem'
        OPIS='Tafla szkla. Skrzydlo z ryglem'
        KATEGORIA='Inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='H3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [TP_SkrzydloSzklane_S1]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloSzklane_S3 ]
	PROFILE[POL_DOL,POL_INNE]=[TP_SkrzydloSzklane_SDol]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA=[TS_Szyba]
      >

//******************************************
//Automaty
//******************************************
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo12R]=
      <
        NAZWA='2RX2) Skrzydlo ruchome - szyna zewnetrzna' //AZR 2
        OPIS='Skrzydlo drzwi przesuwnych ruchome. Zewnetrzna szyna (z dwуch wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='2rx2.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto21_Rama ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto21_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto21_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto22_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo12S]=
      <
        NAZWA='2RQ) Skrzydlo staіe - szyna zewnкtrzna'    //AZS 2
        OPIS='Skrzydlo drzwi przesuwnych stale. Zewnetrzna szyna (z dwуch wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='2rq.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_S
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto21_Rama,TP_SkrzAuto21_PodzialXY ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto21_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto21_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto21_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo22R]=
      <
        NAZWA='2RX1) Skrzydlo ruchome - szyna wewnetrzna' //AWR 2
        OPIS='Skrzydlo drzwi przesuwnych ruchome. Wewnetrzna szyna (z dwуch wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='2rx1.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto22_Rama,TP_SkrzAuto21_PodzialXX ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto22_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto22_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto21_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo22R2]=
      <
        NAZWA='AWRR) Skrzydlo ruchome wewnetrzne dwustronne [2]' //AWRR 2
        OPIS='Skrzydlo drzwi przesuwnych ruchome w dwie strony. Wewnetrzna szyna (z dwуch wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto22_PodzialXY ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto22_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto22_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto21_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >


    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo13R]=
      <
        NAZWA='3RX3) Skrzydlo ruchome - szyna zewnetrzna' //AZR 3
        OPIS='Skrzydlo drzwi przesuwnych ruchome. Zewnetrzna szyna (z trzech wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='3rx3.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto31_Rama ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto31_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto31_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto31_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo13S]=
      <
        NAZWA='3RQ) Skrzydіo staіe - szyna zewnetrzna' //AZR 3
        OPIS='Skrzydlo drzwi przesuwnych stale. Zewnetrzna szyna (z trzech wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='3rq.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_S
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto31_Rama ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto31_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto31_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto31_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo23R]=
      <
        NAZWA='3RX2) Skrzydlo ruchome - szyna њrodkowa' //ASR 3
        OPIS='Skrzydlo drzwi przesuwnych ruchome. Srodkowa szyna (z trzech wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='3rx2.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto32_PodzialXY ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto32_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto32_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto32_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo33R]=
      <
        NAZWA='3RX1) Skrzydlo ruchome - szyna wewnetrzna'    //AWR 3
        OPIS='Skrzydlo drzwi przesuwnych ruchome. Wewnetrzna szyna (z trzech wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='3rx1.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto33_Rama,TP_SkrzAuto33_PodzialXX ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto33_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto33_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto33_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_RamaAutomatu_Skrzydlo33R2]=
      <
        NAZWA='AWR) Skrzydlo ruchome wewnetrzne dwustronnie[3]'
        OPIS='Skrzydlo drzwi przesuwnych ruchome w obie strony. Wewnetrzna szyna (z trzech wszystkich szyn)'
        KATEGORIA='Drzwi inne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_LEWO ]= [ TP_SkrzAuto33_PodzialXY ]
        PROFILE[POL_PRAWO]= [ TP_SkrzAuto33_PodzialXY ]
        PROFILE[POL_GORA ]= [ TP_SkrzAuto33_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzAuto33_Dol ]
        PROFILE[POL_INNE ]= [  ]
        PROFILE[POL_SRODEK]=[ TP_SkrzAuto2_PoprzeczkaPion,TP_SkrzAuto2_PoprzeczkaPoziom ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >



    TYP_SKRZYDLA[TS_AutomatOK_RamaDoFasady]=
      <
        NAZWA='DA) Drzwi automatyczne do fasady'
        OPIS='Rama drzwi automatycznych do fasady'
        KATEGORIA='Drzwi automatyczne'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_LEWO ]= [ TP_RamaAutoOK_DoFasady ]
        PROFILE[POL_PRAWO]= [ TP_RamaAutoOK_DoFasady ]
        PROFILE[POL_GORA ]= [ TP_RamaAutoOK_DoFasady ]
        PROFILE[POL_DOL  ]= [ TP_ProgAutoOK ]
        PROFILE[POL_INNE ]= [ TP_ProgAutoOK,TP_RamaAutoOK_DoFasady ]
        PROFILE[POL_SRODEK]=[ TP_PodzialAutoOK ]
        DOZWOLONE_SKRZYDLA =[ TS_AutomatOK_Skrzydlo1,TS_AutomatOK_Skrzydlo2,TS_AutomatOK_Skrzydlo3 ]
      >

    TYP_SKRZYDLA[TS_AutomatOK_Skrzydlo1]=
      <
        NAZWA='Auto1) Skrzydіo drzwi rozsuwanych (automatycznych) jednoskrzydіowych'
        OPIS='Skrzydіo drzwi rozsuwanych (automatycznych) jednoskrzydіowych'
        KATEGORIA='Drzwi rozsuwane'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_LEWO ]= [ TP_SkrzydloAutoOK_RamaZawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloAutoOK_RamaKlamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloAutoOK_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloAutoOK_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloAutoOK_Gora,TP_SkrzydloAutoOK_Dol ]
        PROFILE[POL_SRODEK]=[
                              TP_RamaUniw_PoprzeczkaPion,
                              TP_RamaUniw_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >

    TYP_SKRZYDLA[TS_AutomatOK_Skrzydlo2]=
      <
        NAZWA='Auto2) Skrzydіo drzwi rozsuwanych (automatycznych) czкњж aktywna'
        OPIS='Skrzydіo drzwi rozsuwanych (automatycznych) czкњж aktywna'
        KATEGORIA='Drzwi rozsuwane'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        PROFILE[POL_PRAWO]= [ TP_SkrzydloAutoOK_RamaZawias ]
        PROFILE[POL_LEWO ]= [ TP_SkrzydloAutoOK_Podzial ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloAutoOK_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloAutoOK_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloAutoOK_Gora,TP_SkrzydloAutoOK_Dol ]
        PROFILE[POL_SRODEK]=[
                              TP_RamaUniw_PoprzeczkaPion,
                              TP_RamaUniw_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >

    TYP_SKRZYDLA[TS_AutomatOK_Skrzydlo3]=
      <
        NAZWA='Auto3) Skrzydіo drzwi rozsuwanych (automatycznych) czкњж pasywna'
        OPIS='Skrzydіo drzwi rozsuwanych (automatycznych) czкњж pasywna'
        KATEGORIA='Drzwi rozsuwane'
        TYP=SK_SKRZYDLO
        RYSUNEK='fas_okno.bmp'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_PRAWO]= [ TP_SkrzydloAutoOK_RamaZawias ]
        PROFILE[POL_LEWO ]= [ TP_SkrzydloAutoOK_Podzial ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloAutoOK_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloAutoOK_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloAutoOK_Gora,TP_SkrzydloAutoOK_Dol ]
        PROFILE[POL_SRODEK]=[
                              TP_RamaUniw_PoprzeczkaPion,
                              TP_RamaUniw_PoprzeczkaPoziom
                            ]
        DOZWOLONE_SKRZYDLA =[ TS_Szyba ]
      >

   //******************************************
   // KONIEC
   //******************************************
   TYP_SKRZYDLA[TS_Drzwi_DZ1]=
      <
        NAZWA='DZ1) Дверь открываемая наружу'
        OPIS='Одностворчатая дверь открываемая наружу'
        KATEGORIA='3) Дверь одностворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
							   TP_SkrzydloDrzwiowe_Proem,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             //TS_RamaOkienna_OW1,
							 //TS_RamaOkienna_PVC_OW1,
                             //TS_RamaOkienna_OZ1,
                             //TS_RamaOkienna_PodawczePionStale,
                             //TS_RamaOkienna_PodawczePionRuch,
                             //TS_RamaOkienna_PodawczePoziomStale,
                             //TS_RamaOkienna_PodawczePoziomRuch,
							 TS_Proem,
							 TS_PANEL_RESIDANCE
                           ]
      >
   TYP_SKRZYDLA[TS_Drzwi_T38_Fasad]=
      <
        NAZWA='DZ1) Дверь открываемая наружу'
        OPIS='Одностворчатая дверь открываемая наружу'
        KATEGORIA='3) Дверь одностворчатая'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >	  
    TYP_SKRZYDLA[TS_Drzwi_DZ2]=
      <
        NAZWA='DZ2) Дверь открываемая наружу. Активная створка'
        OPIS='Двери двухстворчатые открываемые наружу. Активная створка'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2new.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch,
							 TS_PANEL_RESIDANCE
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DZ2_D40]=
      <
        NAZWA=    'DZ2) Дверь открываемая наружу. Активная створка'
        OPIS=     'Двери двухстворчатые открываемые наружу. Активная створка'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                              TP_RamaOkienna_PodzialOknaPodawczego,
							  TP_RamaDrzwiowa_PodzialDZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_Dveri_Vent_Reshetki_TBR2,
							 TS_Dveri_Vent_Reshetki_TBR1						 
                          //   TS_RamaOkienna_OW1,
                          //   TS_RamaOkienna_OZ1,
                          //   TS_RamaOkienna_PodawczePionStale,
                          //   TS_RamaOkienna_PodawczePionRuch,
                          //   TS_RamaOkienna_PodawczePoziomStale,
                          //   TS_RamaOkienna_PodawczePoziomRuch,

                           ]
      >	  
    TYP_SKRZYDLA[TS_Drzwi_DZ3]=
      <
        NAZWA=    'DZ3) Дверь открываемая наружу (без штульпа). Пасивная створка'
        OPIS=     'Двери двухстворчатые открываемые наружу. Пасивная створка'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
							                               ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DZ3_D40]=
      <
        NAZWA=    'DZ3) Дверь открываемая наружу. Пасивная створка'
        OPIS=     'Двери двухстворчатые открываемые наружу. Пасивная створка'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego,
							   TP_RamaDrzwiowa_PodzialDZ
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
							 TS_Dveri_Vent_Reshetki_TBR2,
							 TS_Dveri_Vent_Reshetki_TBR1							 
                        //     TS_RamaOkienna_OW1,
                        //     TS_RamaOkienna_OZ1,
                        //     TS_RamaOkienna_PodawczePionStale,
                        //     TS_RamaOkienna_PodawczePionRuch,
                        //     TS_RamaOkienna_PodawczePoziomStale,
                        //     TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >	  
//*****************************************************************

   TYP_SKRZYDLA[TS_Drzwi_DZ1_CD]=
      <
        NAZWA='DZ1) Дверь открываемая наружу CD'
        OPIS='Одностворчатая дверь открываемая наружу'
        KATEGORIA='3) Дверь одностворчатая CD'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
							   TP_SkrzydloDrzwiowe_Proem,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             //TS_RamaOkienna_OW1,
							 //TS_RamaOkienna_PVC_OW1,
                             //TS_RamaOkienna_OZ1,
                             //TS_RamaOkienna_PodawczePionStale,
                             //TS_RamaOkienna_PodawczePionRuch,
                             //TS_RamaOkienna_PodawczePoziomStale,
                             //TS_RamaOkienna_PodawczePoziomRuch,
							 TS_Proem,
							 TS_PANEL_RESIDANCE
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DZ2_CD]=
      <
        NAZWA='DZ2) Дверь открываемая наружу CD. Активная створка'
        OPIS='Двери двухстворчатые открываемые наружу. Активная створка'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ CD'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2new.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch,
							 TS_PANEL_RESIDANCE
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DZ3_CD]=
      <
        NAZWA=    'DZ3) Дверь открываемая наружу (без штульпа) CD. Пасивная створка'
        OPIS=     'Двери двухстворчатые открываемые наружу. Пасивная створка'
        KATEGORIA='5) Дверь двухстворчатая откр. НАРУЖУ CD'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
							                               ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
//*****************************************************************
    TYP_SKRZYDLA[TS_Drzwi_Db1]=
      <
        NAZWA='DB1'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
   TYP_SKRZYDLA[TS_Drzwi_db2]=
      <
        NAZWA='DB2 '
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >   
 TYP_SKRZYDLA[TS_Drzwi_db3]=
      <
        NAZWA='DB3'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_Drzwi_DB4]=
      <
        NAZWA='DB4'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO  ]=[  TP_SkrzydloDrzwiowe_DZ2,TP_SkrzydloDrzwiowe_DZ1]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3,TP_SkrzydloDrzwiowe_DZ2,TP_SkrzydloDrzwiowe_DZ1]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_Db5]=
      <
        NAZWA='DB5'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
     TYP_SKRZYDLA[TS_Drzwi_Db6]=
      <
        NAZWA='DB6'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO ]=[  TP_SkrzydloDrzwiowe_DZ2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DB7]=
      <
        NAZWA='DB7'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO  ]=[  TP_SkrzydloDrzwiowe_DZ2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	    PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
     TYP_SKRZYDLA[TS_Drzwi_Db8]=
      <
        NAZWA='DB8'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO ]=[  TP_SkrzydloDrzwiowe_DZ2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_Db1a]=
      <
        NAZWA='DB1A'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
   TYP_SKRZYDLA[TS_Drzwi_db3a]=
      <
        NAZWA='DB3A'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_ZEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DZ1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DZ3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DZ1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DZ1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >    



//*****************************************************************
    TYP_SKRZYDLA[TS_Drzwi_Db9]=
      <
        NAZWA='DB9'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_Dw1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_Dw2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_Dw1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_Db9a]=
      <
        NAZWA='DB9A'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
   TYP_SKRZYDLA[TS_Drzwi_db10]=
      <
        NAZWA='DB10'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >   
 TYP_SKRZYDLA[TS_Drzwi_db11]=
      <
        NAZWA='DB11'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
   TYP_SKRZYDLA[TS_Drzwi_db11a]=
      <
        NAZWA='DB11A'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO,POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >    

    TYP_SKRZYDLA[TS_Drzwi_DB12]=
      <
        NAZWA='DB12'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO  ]=[  TP_SkrzydloDrzwiowe_DW2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_Db13]=
      <
        NAZWA='DB13'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2
        PROFILE[POL_LEWO,
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
     TYP_SKRZYDLA[TS_Drzwi_Db14]=
      <
        NAZWA='DB14'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO ]=[  TP_SkrzydloDrzwiowe_DW2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2,TP_SkrzydloDrzwiowe_DW1]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_Drzwi_DB15]=
      <
        NAZWA='DB15'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z3.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2bk
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO  ]=[  TP_SkrzydloDrzwiowe_DW2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW3]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
     TYP_SKRZYDLA[TS_Drzwi_Db16]=
      <
        NAZWA='DB16'
        OPIS=''
        KATEGORIA='Drzwi dwuskrzydіowe'
        TYP=SK_SKRZYDLO
        RYSUNEK='SKRZ_Z2.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_wEWN2
        PROFILE[
                POL_GORA,
                POL_INNE ]= [
                               TP_SkrzydloDrzwiowe_DW1
                            ]
        PROFILE[POL_LEWO ]=[  TP_SkrzydloDrzwiowe_DW2]
        PROFILE[POL_PRAWO ]=[  TP_SkrzydloDrzwiowe_DW2]

	PROFILE[POL_DOL,POL_INNE]=[
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg1,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaProg2,
                                    TP_SkrzydloDrzwiowe_DW1PoprzeczkaDrzwiowaSzczotka
				  ]
        PROFILE[POL_SRODEK]=[
                               TP_SkrzydloDrzwiowe_DW1Poprzeczka,
                               TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba,
                             TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                             TS_RamaOkienna_OZ1,
                             TS_RamaOkienna_PodawczePionStale,
                             TS_RamaOkienna_PodawczePionRuch,
                             TS_RamaOkienna_PodawczePoziomStale,
                             TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
   TYP_SKRZYDLA[TS_RamaOkienna_OH2]=
      <
        NAZWA='FB1A) Skrzydlo HARMONIJKOWE '
        OPIS='Skrzydlo okienne przy ruchomym slupku'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o2.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias,TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku,TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OH3]=
      <
        NAZWA='FB1B) Skrzydlo HARMONIJKOWE'
        OPIS='Skrzydlo okienne z ruchomym slupkiem'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o3.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ,TP_SkrzydloOkienne_ZRuchomymSlupkiem]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem, TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_RamaOkienna_OH4]=
      <
        NAZWA='FB2LUB3) Skrzydlo HARMONIJKOWE'
        OPIS='Skrzydlo okienne z ruchomym slupkiem'
        KATEGORIA='Okna'
        TYP=SK_SKRZYDLO
        RYSUNEK='skrz_o3.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_RP
        PROFILE[POL_LEWO ]= [  TP_SkrzydloOkienne_ZRuchomymSlupkiem, TP_SkrzydloOkienne_PrzyRuchomymSlupku  ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem,  TP_SkrzydloOkienne_PrzyRuchomymSlupku  ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
							 TS_RamaOkienna_PVC_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
    TYP_SKRZYDLA[TS_TPB36_SkrzydloS12]=
      <
        NAZWA='Z) Drzwi na zewnкtrznej szynie skrajne'
        OPIS='Skrzydіo skrajne na zewnкtrznej szynie'
        KATEGORIA='Balkony'
        TYP=SK_SKRZYDLO
        SYSTEMY=[]
        RYSUNEK='skrz_z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO,
                POL_INNE ]= [TP_TPB36_Skrz]
        PROFILE[POL_PRAWO ]=[TP_TPB36_Skrz]
        PROFILE[POL_GORA ]= [TP_TPB36_Skrz]
        PROFILE[POL_DOL]=   [TP_TPB36_Skrz]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA= [TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_TPB36_SkrzydloS21]=
      <
        NAZWA='W1) Drzwi na wewnкtrznej szynie skrajne (tylko w balkonach dwuskrzydіowych)'
        OPIS='Skrzydіo na wewnкtrznej szynie (tylko balkony dwuskrzydіowe)'
        KATEGORIA='Balkony'
        TYP=SK_SKRZYDLO
        SYSTEMY=[]
        RYSUNEK='skrz_z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO,
                POL_INNE ]= [TP_TPB36_Skrz]
        PROFILE[POL_PRAWO ]=[TP_TPB36_Skrz]
        PROFILE[POL_GORA ]= [TP_TPB36_Skrz]
        PROFILE[POL_DOL]=   [TP_TPB36_Skrz]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA= [TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_TPB36_Skrzydlo122_A]=
      <
        NAZWA='W2) Drzwi na wewnкtrznej szynie њrodkowe - czкњж aktywna (tylko balkony czteroskrzydіowe)'
        OPIS='Skrzydіo њrodkowe na wewnкtrznej szynie aktywne (tylko balkony czteroskrzydіowe)'
        KATEGORIA='Balkony'
        TYP=SK_SKRZYDLO
        SYSTEMY=[]
        RYSUNEK='skrz_z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO,
                POL_INNE ]= [TP_TPB36_Skrz]
        PROFILE[POL_PRAWO ]=[TP_TPB36_Skrz]
        PROFILE[POL_GORA ]= [TP_TPB36_Skrz]
        PROFILE[POL_DOL]=   [TP_TPB36_Skrz]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA= [TS_Szyba ]
      >
    TYP_SKRZYDLA[TS_TPB36_Skrzydlo122_B]=
      <
        NAZWA='W3) Drzwi na wewnкtrznej szynie њrodkowe - czкњж bierna (tylko balkony czteroskrzydіowe)'
        OPIS='Skrzydіo њrodkowe na wewnкtrznej szynie bierne (tylko balkony czteroskrzydіowe)'
        KATEGORIA='Balkony'
        TYP=SK_SKRZYDLO
        SYSTEMY=[]
        RYSUNEK='skrz_z1.EMF'
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_P
        PROFILE[POL_LEWO,
                POL_INNE ]= [TP_TPB36_Skrz]
        PROFILE[POL_PRAWO ]=[TP_TPB36_Skrz]
        PROFILE[POL_GORA ]= [TP_TPB36_Skrz]
        PROFILE[POL_DOL]=   [TP_TPB36_Skrz]
        PROFILE[POL_SRODEK]=[]
        DOZWOLONE_SKRZYDLA= [TS_Szyba ]
      >	  
    TYP_SKRZYDLA[TS_11_Skrzydlo1]=
      <
        NAZWA='S21) Створка на первой штанге (вид снаружи)'
        OPIS='Створка на первой штанге (вид снаружи)'
        KATEGORIA='6) Раздвижные створки (двухрельсовая)'
        RYSUNEK              = 'mbslide_s21.jpg'
        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        TYP=SK_PRZEJSCIE
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [TP_11_Skrzydlo1]
        PROFILE[POL_DOL]=   [TP_11_Skrzydlo1]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_11_Skrzydlo2]=
      <
        NAZWA='S22A) Створка на второй штанге (вид снаружи)'
        OPIS='Створка на второй штанге (вид снаружи)'
        KATEGORIA='6) Раздвижные створки (двухрельсовая)'
        RYSUNEK              = 'mbslide_s22a.jpg'

        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        TYP=SK_SKRZYDLO
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [TP_11_Skrzydlo2,TP_11_Skrzydlo2a,TP_11_Skrzydlo2b]
        PROFILE[POL_DOL]=   [TP_11_Skrzydlo2]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >	
    TYP_SKRZYDLA[TS_11_Skrzydlo3]=
      <
        NAZWA='S22B) Створка на второй штанге (вид снаружи) пасивная'
        OPIS='Створка на второй штанге (вид снаружи) пасивная'
        KATEGORIA='6) Раздвижные створки (двухрельсовая)'
        TYP                  = SK_PRZEJSCIE
        SYSTEMY=[]
        RYSUNEK              = 'mbslide_s22b.jpg'
        STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
            PROFILE[POL_LEWO,
                    POL_PRAWO,
                    POL_INNE ]= [TP_11_Skrzydlo3,TP_11_Skrzydlo3a]
            PROFILE[POL_DOL,POL_GORA]=   [TP_11_Skrzydlo1]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA   = [TS_Szyba]
    >	  
    TYP_SKRZYDLA[TS_111_Skrzydlo1]=
      <
        NAZWA=    'S31) Створка на первой штанге (вид снаружи)'
        OPIS=     'Створка на первой штанге (вид снаружи)'
        KATEGORIA='7) Раздвижные створки (трехрельсовая)'
        RYSUNEK              = 'mbslide_s31.jpg'
        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        TYP=SK_PRZEJSCIE
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_INNE ]= [TP_111_Skrzydlo1]
        PROFILE[POL_DOL]=   [TP_111_Skrzydlo1_dol]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >

    TYP_SKRZYDLA[TS_111_Skrzydlo2]=
      <
        NAZWA=    'S32) Створка на второй штанге (вид снаружи)'
        OPIS=     'Створка на второй штанге (вид снаружи)'
        KATEGORIA='7) Раздвижные створки (трехрельсовая)'
        RYSUNEK = 'mbslide_s32.jpg'

        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        TYP=SK_SKRZYDLO
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_INNE ]= [
				             TP_111_Skrzydlo2c,
				             TP_111_Skrzydlo2a,
							 TP_111_Skrzydlo2b]
        PROFILE[POL_DOL,POL_GORA]=   [TP_111_Skrzydlo2]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >	
    TYP_SKRZYDLA[TS_111_Skrzydlo3A]=
      <
        NAZWA='S33A) Створка на третьей штанге (вид снаружи)'
        OPIS='Створка на второй штанге (вид снаружи)'
        KATEGORIA='7) Раздвижные створки (трехрельсовая)'
        RYSUNEK              = 'mbslide_s33a.jpg'

        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_D_PRZESUWNE_R
        TYP=SK_SKRZYDLO
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_INNE ]= [TP_111_Skrzydlo3,TP_111_Skrzydlo3a,TP_111_Skrzydlo3b]
        PROFILE[POL_DOL,POL_GORA]=   [TP_111_Skrzydlo3]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >		  
    TYP_SKRZYDLA[TS_111_Skrzydlo3B]=
      <
        NAZWA='S33B) Створка на второй штанге (вид снаружи) пасивная'
        OPIS='Створка на второй штанге (вид снаружи) пасивная'
        KATEGORIA='7) Раздвижные створки (трехрельсовая)'
        TYP                  = SK_PRZEJSCIE
        SYSTEMY=[]
        RYSUNEK              = 'mbslide_s33b.jpg'
        STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
            PROFILE[POL_LEWO,
                    POL_PRAWO,
                    POL_INNE ]= [TP_111_Skrzydlo4,TP_111_Skrzydlo4a,TP_111_Skrzydlo4b]
            PROFILE[POL_DOL,POL_GORA]=   [TP_111_Skrzydlo3]
        PROFILE[POL_SRODEK]=[TP_11_PoprzeczkaSkrzydla]
        DOZWOLONE_SKRZYDLA   = [TS_Szyba]
    >	 
	  
    TYP_SKRZYDLA[TS_TKP_SK_WAH1]=
      <
        NAZWA=    'H1) Створка одностворчатых маятниковых дверей'
        OPIS=     'Створка маятниковых одностворчатых дверей'
        KATEGORIA='B) Двери маятниковые'
        RYSUNEK='h1.emf'
        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD
        TYP=SK_SKRZYDLO
        PROFILE[POL_LEWO]  = [TP_Skrzydlo_DH]
        PROFILE[POL_PRAWO] = [TP_Skrzydlo_DH]
        PROFILE[POL_GORA]  = [TP_Skrzydlo_DH]
        PROFILE[POL_DOL]   = [TP_KopniakDrzwi]
        PROFILE[POL_INNE]  = [TP_Skrzydlo_DH]
        PROFILE[POL_SRODEK]= [TP_Skrzydlo_DH]
        DOZWOLONE_SKRZYDLA = [TS_Szyba]
        DOZWOLONE_WARIANTY=[
                           ]
      >	
    TYP_SKRZYDLA[TS_TKP_SK_WAH2]=
      <
        NAZWA=    'H2) Створка двухстворчатых маятниковых дверей (активная)'
        OPIS=     'Створка маятниковых двухстворчатых дверей'
        KATEGORIA='B) Двери маятниковые'
        RYSUNEK='h2.emf'
        SYSTEMY=[]
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD
        TYP=SK_SKRZYDLO
        PROFILE[POL_LEWO]  = [TP_Skrzydlo_DH]
        PROFILE[POL_PRAWO] = [TP_Skrzydlo_DHprzyRP]
        PROFILE[POL_GORA]  = [TP_Skrzydlo_DH]
        PROFILE[POL_DOL]   = [TP_KopniakDrzwi]
        PROFILE[POL_INNE]  = [TP_Skrzydlo_DH]
        PROFILE[POL_SRODEK]= [TP_Skrzydlo_DH]
        DOZWOLONE_SKRZYDLA = [TS_Szyba]
        DOZWOLONE_WARIANTY=[
                           ]
      >

    TYP_SKRZYDLA[TS_TKP_SK_WAH3]=
      <
        NAZWA=    'H3) Створка двухстворчатых маятниковых дверей (пасивная)'
        OPIS=     'Створка маятниковых двухстворчатых дверей'
        KATEGORIA='B) Двери маятниковые'
        RYSUNEK='h3.emf'
        STANDARDOWE_OTWARCIE=OKUCIE_D_WAHD
        SYSTEMY=[]
        TYP=SK_SKRZYDLO
        PROFILE[POL_LEWO]  = [TP_Skrzydlo_DH]
        PROFILE[POL_PRAWO] = [TP_Skrzydlo_DHRP]
        PROFILE[POL_GORA]  = [TP_Skrzydlo_DH]
        PROFILE[POL_DOL]   = [TP_KopniakDrzwi]
        PROFILE[POL_INNE]  = [TP_Skrzydlo_DH]
        PROFILE[POL_SRODEK]= [TP_Skrzydlo_DH]
        DOZWOLONE_SKRZYDLA = [TS_Szyba]
        DOZWOLONE_WARIANTY=[
                           ]
      >	 	 

//Skrzydіa SLIDE

  TYP_SKRZYDLA[TS_SLIDE_S21]=
  <
    NAZWA                = 'S21) Створка крайняя (активная), рельса 1'
    OPIS                 = 'Створка подвижная'
    TYP                  = SK_PRZEJSCIE
    //TYP                  = SK_SKRZYDLO
    KATEGORIA            = 'Двухрельсовые'
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s21.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_BRAK //OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_DOL   ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_1      ,
      TP_PAN_WING_12       ,
      TP_PAN_WING_12_PION
      ]
    PROFILE[
      POL_GORA  ,
      POL_INNE
      ]   = [
     // TP_SLIDE_WING_1         ,
      TP_PAN_WING_12_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  TYP_SKRZYDLA[TS_SLIDE_S21_FIX, TS_SLIDE_S21_FIX2, TS_SLIDE_S21_FIX3]=
  <
    NAZWA                = 'S21) Створка крайняя (активная), рельса 1 (FIX)'
    OPIS                 = 'Створка подвижная'
    TYP                  = SK_PRZEJSCIE
    //TYP                  = SK_SKRZYDLO
    KATEGORIA            = 'Двухрельсовые'
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s21.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_BRAK //OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_DOL   ,
      POL_INNE
      ]   = [
      TP_PAN_WING_12_FIX       ,
      TP_PAN_WING_12_PION_FIX
      ]
    PROFILE[
      POL_GORA  ,
      POL_INNE
      ]   = [
      //TP_PAN_WING_12_GORA,
      TP_PAN_WING_12_GORA_FIX //*	  
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >  
  
  TYP_SKRZYDLA[TS_SLIDE_S31]=
  <
    NAZWA=    'S31) Створка на первой рельсе (вид снаружи)'
    OPIS=     'Створка на первой рельсе (вид снаружи)'
    KATEGORIA='7) Раздвижные створки (трехрельсовая)'
    TYP                  = SK_PRZEJSCIE
    //TYP                  = SK_SKRZYDLO
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s31.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_BRAK //OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_DOL   ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_1      ,
      TP_PAN_WING_13       ,
      TP_PAN_WING_13_PION
      ]
    PROFILE[
      POL_GORA  ,
      POL_INNE
      ]   = [
     // TP_SLIDE_WING_1         ,
      TP_PAN_WING_13_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  
  TYP_SKRZYDLA[TS_SLIDE_S31_FIX]=
  <
    NAZWA=    'S31) Створка на первой рельсе (вид снаружи). Фиксированная'
    OPIS=     'Створка на первой рельсе (вид снаружи)'
    KATEGORIA='7) Раздвижные створки (трехрельсовая)'
    TYP                  = SK_PRZEJSCIE
    //TYP                  = SK_SKRZYDLO
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s31.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_BRAK //OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_DOL   ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_1      ,
      TP_PAN_WING_13       ,
      TP_PAN_WING_13_PION
      ]
    PROFILE[
      POL_GORA  ,
      POL_INNE
      ]   = [
     // TP_SLIDE_WING_1         ,
      TP_PAN_WING_13_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  
  TYP_SKRZYDLA[TS_SLIDE_S22A]=
  <
    NAZWA                = 'S22A) Створка активная, рельса 2'
    OPIS                 = 'Створка подвижная'
    TYP                  = SK_PRZEJSCIE
    KATEGORIA            = 'Двухрельсовые'
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s22a.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_DOL   ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_2A       ,
      TP_PAN_WING_22A
      ]
    PROFILE[
      POL_GORA  ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_2A       ,
      TP_PAN_WING_22A_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  TYP_SKRZYDLA[TS_SLIDE_S22B]=
  <
    NAZWA                = 'S22B) Створка пасивная, рельса 2'
    OPIS                 = 'Створка подвижная'
    TYP                  = SK_PRZEJSCIE
    KATEGORIA            = 'Двухрельсовые'
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s22b.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_DOL   ,
      POL_INNE
      ]   = [
     // TP_SLIDE_WING_2B,
      TP_PAN_WING_22B
	  //,
      //TP_PAN_WING_22B_GORA
      ]
    PROFILE[
      POL_GORA  ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_2B,
      TP_PAN_WING_22B_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  //
  TYP_SKRZYDLA[TS_SLIDE_S32]=
  <
    NAZWA=    'S32) Створка на второй рельсе (вид снаружи)'
    OPIS=     'Створка на второй рельсе (вид снаружи)'
    KATEGORIA='7) Раздвижные створки (трехрельсовая)'
    TYP                  = SK_PRZEJSCIE
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s32.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_GORA  ,
      POL_DOL   ,
      POL_INNE
      ]   = [
     // TP_SLIDE_WING_2B,
      TP_PAN_WING_23B ,
      TP_PAN_WING_23B_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  TYP_SKRZYDLA[TS_SLIDE_S33A]=
  <
    NAZWA='S33A) Створка на третьей рельсе (вид снаружи)'
    OPIS='Створка на второй рельсе (вид снаружи)'
    KATEGORIA='7) Раздвижные створки (трехрельсовая)'
    TYP                  = SK_PRZEJSCIE
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s33a.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_GORA  ,
      POL_DOL   ,
      POL_INNE
      ]   = [
     // TP_SLIDE_WING_3A,
      TP_PAN_WING_33A ,
      TP_PAN_WING_33A_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >
  TYP_SKRZYDLA[TS_SLIDE_S33B]=
  <
    NAZWA                = 'S33B) Skrzydіo bierne, szyna 3'
    OPIS                 = 'Skrzydіo przesuwne'
    TYP                  = SK_PRZEJSCIE
    KATEGORIA            = 'Szyna potrуjna'
    SYSTEMY              = []
    RYSUNEK              = 'mbslide_s33b.jpg'
    STANDARDOWE_OTWARCIE = OKUCIE_D_PRZESUWNE_P
    PROFILE[
      POL_LEWO  ,
      POL_PRAWO ,
      POL_GORA  ,
      POL_DOL   ,
      POL_INNE
      ]   = [
      //TP_SLIDE_WING_3B,
	  TP_PAN_WING_33B ,
      TP_PAN_WING_33B_GORA
      ]
    PROFILE[POL_SRODEK]  = [TP_Stala_poprzeczka]
    DOZWOLONE_SKRZYDLA   = [TS_Szyba]
  >	  

    TYP_SKRZYDLA[TS_PANEL_RESIDANCE]=
      <
        NAZWA='P) Панель RESIDANCE'
        OPIS='Панель RESIDANCE'
        KATEGORIA='P) Панель RESIDANCE'
        TYP=SK_PRZEJSCIE
        RYSUNEK='Panel.jpg'	
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA,
                POL_DOL,
                POL_INNE ]= [
                              TP_RamaOkienna_RamaDoFasady
                            ]
	            PROFILE[POL_DOL,POL_INNE]=[
                              TP_RamaOkienna_RamaDoFasady
				  ]
                PROFILE[POL_SRODEK]=[
                               TP_RamaOkienna_PoprzeczkaPion,
                               TP_RamaOkienna_PoprzeczkaPoziom,						   
                               TP_RamaUniw_PoprzeczkaPion,
                               TP_RamaUniw_PoprzeczkaPoziom							   
                            ]
                DOZWOLONE_SKRZYDLA=[
                             TS_Szyba
                           ]
      >  
//********************************************************
//		HARMONIJKI
//********************************************************
	  
	  
    TYP_SKRZYDLA[TS_RamaHarm_Skrz_Pojedyncze]=
      <
        NAZWA='HR1) Створка распашная - см. рисунок справа и описание'
        OPIS='Створка распашная активная'
        KATEGORIA='Створка "гармошки" распашная'
        TYP=SK_SKRZYDLO
        RYSUNEK='HR1.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >

    TYP_SKRZYDLA[TS_RamaHarm_ZRuchomym_PrzySzynie]=
      <
        NAZWA='H1) Створка сдвижная - см. рисунок справа и описание'
        OPIS='Створка активного сегмента гармошки с ручкой'	
        KATEGORIA='Створка "гармошки" сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='H1.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Ruchomy ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloHarm_PrzyRuchomymSlupku_Szyna ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	  
	  
   TYP_SKRZYDLA[TS_RamaHarm_ZSzyna_PrzyRuchomym]=
      <
        NAZWA='H2) Створка сдвижная - см. рисунок справа и описание'
        OPIS='Створка пасивного сегмента гармошки при стене'		
        KATEGORIA='Створка "гармошки" сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='H2.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Szyna ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloHarm_PrzyRuchomymSlupku_Ruchomy ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	  
   TYP_SKRZYDLA[TS_RamaHarm_Rama_PrzyRuchomym]=
      <
        NAZWA='H3) Створка сдвижная - см. рисунок справа и описание'
        OPIS='Створка сегмента гармошки при стене'		
        KATEGORIA='Створка "гармошки" сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='H3.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloHarm_PrzyRuchomymSlupku_Ruchomy ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	  
	  
  TYP_SKRZYDLA[TS_RamaHarm_ZRuchomym_Rama]=
      <
        NAZWA='H4) Створка сдвижная - см. рисунок справа и описание'
        OPIS='Створка сдвижная с ручкой при стене'
        KATEGORIA='Створка "гармошки" сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='H4.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Ruchomy ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	  
	  
TYP_SKRZYDLA[TS_RamaHarm_ZRuchomym_RrzyRCHS]=
      <
        NAZWA='H5) Створка сдвижная - см. рисунок справа и описание'
        OPIS='Створка сдвижная при штульпе (активная)'
        KATEGORIA='Створка "гармошки" сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='H5.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Ruchomy ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	  
	  
TYP_SKRZYDLA[TS_RamaHarm_ZRuchomym_zRCHS]=
      <
        NAZWA='H6) Створка сдвижная - см. рисунок справа и описание'
        OPIS='Створка сдвижная при штульпе (пасивная)'
        KATEGORIA='Створка "гармошки" сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='H6.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Ruchomy ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
TYP_SKRZYDLA[TS_RamaHarm_ZSzyna_RrzyRCHS]=
      <
        NAZWA='HRP1) Створка распашно-сдвижная - см. рисунок справа и описание'
        OPIS='Створка распашно-сдвижная активная со штупьпом с ручкой'		
        KATEGORIA='Створка "гармошки" распашно-сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='HRP1.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Szyna ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_PrzyRuchomymSlupku ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
	  
	  
TYP_SKRZYDLA[TS_RamaHarm_ZSzyna_zRCHS]=
      <
        NAZWA='HRP2) Створка распашно-сдвижная - см. рисунок справа и описание'
        OPIS='Створка распашно-сдвижная пасивная при штупьпе без ручки'		
        KATEGORIA='Створка "гармошки" распашно-сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='HRP2.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Szyna ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_ZRuchomymSlupkiem ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >
  TYP_SKRZYDLA[TS_RamaHarm_ZSzyna_Rama]=
      <
        NAZWA='HRP3) Створка распашно-сдвижная - см. рисунок справа и описание'
        OPIS='Створка распашно-сдвижная активная при стене с ручкой'
        KATEGORIA='Створка "гармошки" распашно-сдвижная'
        TYP=SK_SKRZYDLO
        RYSUNEK='HRP3.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloHarm_ZRuchomymSlupkiem_Szyna ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >	  
  TYP_SKRZYDLA[TS_RamaHarm_Skrz_Pojedyncze2]=
      <
        NAZWA='HR2) Створка распашная - см. рисунок справа и описание'
        OPIS='Створка распашная активная'
        KATEGORIA='Створка "гармошки" распашная'
        TYP=SK_SKRZYDLO
        RYSUNEK='HR2.BMP'
        STANDARDOWE_OTWARCIE=OKUCIE_UR_RP
        PROFILE[POL_LEWO ]= [ TP_SkrzydloOkienne_Zawias ]
        PROFILE[POL_PRAWO]= [ TP_SkrzydloOkienne_Klamka ]
        PROFILE[POL_GORA ]= [ TP_SkrzydloOkienne_Gora ]
        PROFILE[POL_DOL  ]= [ TP_SkrzydloOkienne_Dol ]
        PROFILE[POL_INNE ]= [ TP_SkrzydloOkienne_Inne ]
        PROFILE[POL_SRODEK]=[
                              TP_SkrzydloOkienne_PoprzeczkaPionowa,
                              TP_SkrzydloOkienne_PoprzeczkaPozioma,
                              TP_RamaOkienna_PodzialOknaPodawczego
                            ]
        DOZWOLONE_SKRZYDLA=[
                               TS_Szyba,
                               TS_RamaOkienna_OW1,
                               TS_RamaOkienna_OZ1,
                               TS_RamaOkienna_PodawczePionStale,
                               TS_RamaOkienna_PodawczePionRuch,
                               TS_RamaOkienna_PodawczePoziomStale,
                               TS_RamaOkienna_PodawczePoziomRuch
                           ]
      >	    
	  
TYP_SKRZYDLA[TS_RamaOkienna_SkrzydloWentylacyjne]=
	<
	NAZWA				=	'V) Вентиляционная створка'
	OPIS				=	'Вентиляционная створка'
	KATEGORIA_HTML      =	'1.4) Вентиляционная створка <b><font face="verdana" color="clred">NEW</font></b>'
	RYSUNEK				=	'VentilationVent.jpg'
	TYP					=	SK_SKRZYDLO
	STANDARDOWE_OTWARCIE=	OKUCIE_ROZWIERANE
	PROFILE[POL_LEWO]	=	[TP_SkrzydloWentylacyjne]
	PROFILE[POL_PRAWO]	=	[TP_SkrzydloWentylacyjne]
	PROFILE[POL_GORA]	=	[TP_SkrzydloWentylacyjne]
	PROFILE[POL_DOL]	=	[TP_SkrzydloWentylacyjne]
	PROFILE[POL_INNE]	=	[TP_SkrzydloWentylacyjne]
	PROFILE[POL_SRODEK]	=	[]
	DOZWOLONE_SKRZYDLA	=	[TS_Szyba]
	>	 


TYP_SKRZYDLA[TS_SLIDER_WINDOW_SkrzydloDS21 ]=
<
  NAZWA='D) Створка нижняя подвижна на внутренней направляющей'
  OPIS='Нижняя створка на внутренней направляющей'
  KATEGORIA='Вертикально раздвижные створки'
  TYP=SK_SKRZYDLO
  RYSUNEK='slider_window_d.VCT'
  STANDARDOWE_OTWARCIE= OKUCIE_PODAWCZE_RUCHOME_PION
  PROFILE[POL_LEWO]   = [TP_SLIDER_WINDOW_SkrzydloD]
  PROFILE[POL_PRAWO]  = [TP_SLIDER_WINDOW_SkrzydloD]
  PROFILE[POL_GORA]   = [TP_SLIDER_WINDOW_SkrzydloD_L ,
                         TP_SLIDER_WINDOW_SkrzydloD
                        ]
  PROFILE[POL_DOL]    = [TP_SLIDER_WINDOW_SkrzydloD]
  PROFILE[POL_INNE]   = [TP_SLIDER_WINDOW_SkrzydloD]
  PROFILE[POL_SRODEK] = []
  DOZWOLONE_SKRZYDLA  = [TS_Szyba]
>
TYP_SKRZYDLA[TS_SLIDER_WINDOW_SkrzydloGS12 ]=
<
  NAZWA='G) Cтворка верхняя закрепленная на внешней направляющей'
  OPIS='Верхняя створка на внешней направляющей'
  KATEGORIA='Вертикально раздвижные створки'
  TYP=SK_SKRZYDLO
  RYSUNEK='slider_window_g.VCT'
  STANDARDOWE_OTWARCIE= OKUCIE_STALE
  PROFILE[POL_LEWO]   = [TP_SLIDER_WINDOW_SkrzydloG]
  PROFILE[POL_PRAWO]  = [TP_SLIDER_WINDOW_SkrzydloG]
  PROFILE[POL_GORA]   = [TP_SLIDER_WINDOW_SkrzydloG]
  PROFILE[POL_DOL]    = [TP_SLIDER_WINDOW_SkrzydloG_L ,
                         TP_SLIDER_WINDOW_SkrzydloG
                        ]
  PROFILE[POL_INNE]   = [TP_SLIDER_WINDOW_SkrzydloG]
  PROFILE[POL_SRODEK] = []
  DOZWOLONE_SKRZYDLA  = [TS_Szyba]
>	
>
