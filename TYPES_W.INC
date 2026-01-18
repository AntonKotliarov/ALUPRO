
TYPY_SKRZYDEL=
  <		  

    TYP_SKRZYDLA[TS_FASADA_F50]=
      <
        NAZWA_HTML='Ф50 - Фасад'
        OPIS= 'Фасад Ф50 - Система профілів для конструювання фасадів'
        KATEGORIA_HTML=' 1) Система стоечно-ригельная <b>Ф50</b>' 
		jakie_przekroje=2
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_FASADA_F50,WAR_W77]
        SYSTEMY=[DEF_SYS_F50,DEF_SYS_W77]
        RYSUNEK='FASADA_F50.jpg'
        FASADA=TAK
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK 
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=NIE 
        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
        PROFILE[POL_GORA ]= [TP_50_Fasada_Slup,TP_50_Fasada_SlupSciana,TP_50_Fasada_Rygiel,TP_50_Fasada_RygielSciana,TP_Fasada_PodRamaRigel]
        PROFILE[POL_LEWO, 
                POL_PRAWO]= [TP_50_Fasada_Slup,TP_50_Fasada_SlupSciana,TP_50_Fasada_Rygiel,TP_50_Fasada_RygielSciana]				
        PROFILE[POL_INNE ]= [TP_50_Fasada_Slup,TP_50_Fasada_SlupSciana,TP_50_Fasada_Rygiel,TP_50_Fasada_RygielSciana,TP_Fasada_PodProgiem,TP_Fasada_PodRamaRigel]
        PROFILE[POL_DOL,
                POL_INNE]=  [TP_50_Fasada_Slup,TP_50_Fasada_SlupSciana,TP_50_Fasada_Rygiel,TP_50_Fasada_RygielSciana,TP_Fasada_PodProgiem,TP_Fasada_PodRamaRigel]
        PROFILE[POL_SRODEK]=[TP_50_Fasada_Slup,TP_50_Fasada_SlupSciana,TP_50_Fasada_Rygiel,TP_50_Fasada_RygielSciana,TP_Fasada_PodRamaRigel]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba, 
                             TS_Fasada_RamaOkienna,
							 TS_Fasada_RamaDZ,
							 TS_Fasada_RamaDW
                           ]

        DODATKOWE_PARAMETRY=
          <
            WARUNEK=
              <
                KLUCZ       = 'CZY_ZEWN' // параметр отв. конструкция внутри или снаружи, и на наличие деталей отвода кондаенсата
                PYTANIE     = 'Конструкция снаружи здания'
                STANDARDOWO = '1'
                WIDZIANE    = nie //отображение этого параметра
              >
  		   Z_LISTY=
              <
                KATEGORIA      = 'Фасад Ф50'		
                KLUCZ          = 'VARIANT_KREPLENIA_RIGELIA_F50'
                PYTANIE        = 'Варіант стика стійка-ригель:'
                ELEMENT        = 'Стик стійка-ригель SR1.1'                                 
                ELEMENT        = 'Стик стійка-ригель SR1.2'      
                ELEMENT        = 'Стик "ластівчин хвіст"'                                	  
				
                STANDARDOWO    = '0'			  		      
  			    RYSUNEK        = 'VARIANT_KREPLENIA_RIGELIA_F50.vct'
                ROZMIAR_RYSUNKU= 150	
              >					  
  		   Z_LISTY=
              <
                KATEGORIA      = 'Фасад Ф50'		
                KLUCZ          = 'VARIANT_VKLADISH_F50'
                PYTANIE        = 'Які вкладиші використовувати для зєднання зі стійкою:'
                ELEMENT        = 'Вкладиш F50.324'                                 
                //ELEMENT        = 'Вкладиш ПАС-4020 + ПАС-4021'                                	  
                STANDARDOWO    = '0'			  		      
  			    RYSUNEK        = 'VARIANT_VKLADISH_F50.vct'
                ROZMIAR_RYSUNKU= 150	
				
                WLACZONA_KONTROLKA_GDY = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'	
                WIDOCZNA_KONTROLKA_GDY = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'	
                WIDOCZNY_RYSUNEK_GDY   = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'					
              >						
  		   Z_LISTY=
              <
                KATEGORIA   = 'Фасад Ф50'		
                KLUCZ       = 'RIGEL_FROM_PROFILE_F50'
                PYTANIE     = 'Вкладиш для кріплення ригеля:'
                ELEMENT     = 'Деталями'
                ELEMENT     = 'Профілем'
                STANDARDOWO = '0'	
              >		
  		   Z_LISTY=
              <
                KATEGORIA      = 'Фасад Ф50'		
                KLUCZ          = 'END_PART_RIGELA_F50'
                PYTANIE        = 'Деталь заглушки ригеля F50.ZR01:'
                ELEMENT        = 'Так'
                ELEMENT        = 'Ні'
                STANDARDOWO    = '0'
  			    RYSUNEK        = 'END_PART_RIGELA_F50.vct'
                ROZMIAR_RYSUNKU= 150	
				
                WLACZONA_KONTROLKA_GDY = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'	
                WIDOCZNA_KONTROLKA_GDY = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'	
                WIDOCZNY_RYSUNEK_GDY   = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'				
              >		
		  INFORMACJA=
		  	< 
                KATEGORIA      = 'Фасад Ф50'		
		  	    PYTANIE='<font face="verdana" size="8" color="#FF0000"><b>УВАГА!...</b>Окрім ригеля F50.207</font><BR>' 
		  	    WIDOCZNA_KONTROLKA_GDY='END_PART_RIGELA_F50=0'
							
                WLACZONA_KONTROLKA_GDY = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'	
                WIDOCZNA_KONTROLKA_GDY = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'	
                WIDOCZNY_RYSUNEK_GDY   = '(VARIANT_KREPLENIA_RIGELIA_F50#2)'				
		  	> 				  
  		   Z_LISTY=
              <
                KATEGORIA   = 'Фасад Ф50'		
                KLUCZ       = 'GLASS_SUPPORT_PROFILE'
                PYTANIE     = 'Тримач склопакету:'
                ELEMENT     = 'Деталями'
                ELEMENT     = 'Профілем'
                STANDARDOWO = '0'				  
              >					
  		    Z_LISTY=
              <
                KATEGORIA   = 'Дод.опції'			
                KLUCZ       = 'DETAL_KAPELNIKA_F50'
                PYTANIE     = 'Використовувати капельник (деталь відводу конденсата):'
                ELEMENT     = 'F50.D01030 (мах. 54mm)'   // 0 
                ELEMENT     = 'F50.D01040 (мах. 48mm)'   // 1			  
                ELEMENT     = 'Ні'                       // 2 
                STANDARDOWO = '0'	
              >			
  	        Z_LISTY=
              <
                KATEGORIA      = 'Декор. кришки'	
                KLUCZ          = 'PLANKA_DLA_110026'
                PYTANIE        = 'Варіант кришки для поворотної притискної планки:'
                ELEMENT        = 'F50.504/F50.505'
                ELEMENT        = 'F50.506'
                STANDARDOWO    = '0'
							   
  			    RYSUNEK        = 'PLANKA_DLA_PAS_4038.vct'
                ROZMIAR_RYSUNKU=150	
              >		
            Z_LISTY=
              <
                KATEGORIA   = 'Метизи'	
                KLUCZ       = 'METIZ'
                PYTANIE     = 'Використовувати при розрахунках конструкції метизи:'
                ELEMENT     = 'Так (по замовчуванню)'
                ELEMENT     = 'Ні'
                STANDARDOWO = '0'
               >		
            Z_LISTY=
              <
                KATEGORIA      = 'Примикання'			  
                KLUCZ          = 'DYSTANS_SCIANA_F50'
                PYTANIE        = 'Варіант примикання до стіни'
                STANDARDOWO    = '1'
                INDEKS_TO_POZYCJA=TAK
                KOLUMN         = 1
                ELEMENT        = 'Без ущільнювача'
                ELEMENT        = 'З ущільнювачем'
                RYSUNEK        = 'DYSTANS_SCIANA_TF50K.vct'
                ROZMIAR_RYSUNKU=150				
              >			 
            Z_LISTY=
              <
                KATEGORIA   = 'Стрічки'	
                KLUCZ       = 'GIDRO_LENTA'
                PYTANIE     = 'Вид гізроізоляційної стрічки:'
                ELEMENT     = 'Бутилова стрічка'
                ELEMENT     = 'Без стрічки'				  
                STANDARDOWO = '1'			  
              >				  
       >
>

#IFDEF W77	

   TYP_SKRZYDLA[TS_W77_windows]=
    <
      NAZWA_HTML=    'W77 - Вікна та балконні двері <font face="verdana" color="clblue">(Тестування!)</font>'
      OPIS=          'Вікна та балконні двері. Система W77 (система "тепла")'
      KATEGORIA_HTML=' 2) Система віконна-дверна <b>W77</b>'
      RYSUNEK='W77_windows.jpg'	  
      SYSTEMY=[DEF_SYS_W77]
      DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_W77]
      FASADA=NIE
	  JAKIE_PRZEKROJE=2 
      METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
      TYP=SK_SRODEK
      STANDARDOWE_OTWARCIE=OKUCIE_BRAK
      STANDARDOWA_SZEROKOSC_PROFILI=50
      MOZNA_NAROZA=TAK
      PROFILE[ POL_LEWO   ] = [ TP_RamaUniw_RamaPion,TP_RamaUniw_PoprzeczkaPion,TP_RamaOkienna_RamaPion]
      PROFILE[ POL_PRAWO  ] = [ TP_RamaUniw_RamaPion,TP_RamaUniw_PoprzeczkaPion,TP_RamaOkienna_RamaPion]
      PROFILE[ POL_GORA   ] = [ TP_RamaUniw_RamaGora,TP_RamaUniw_PoprzeczkaPoziom,TP_PoprzeczkaAutoOK,TP_RamaOkienna_RamaGora ]

      PROFILE[ POL_DOL,
               POL_INNE   ] = [
			                     TP_RamaOkienna_RamaDol,
				                 TP_RamaOkienna_RamaInna,
                                 TP_RamaUniw_RamaDol,
                                 TP_RamaUniw_RamaInna,
                                 TP_RamaOkienna_SzczelinaBalkonu,
                                 TP_RamaOkienna_SzczelinaOknaPodawczego,
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
                                 TP_RamaDrzwiowa_ProgS              ,
                                 TP_RamaUniw_PoprzeczkaPion         ,
                                 TP_RamaUniw_PoprzeczkaPoziom       ,
                                 TP_RamaUniw_Poprzeczka_O_DW,
                                 TP_RamaUniw_Poprzeczka_O_DZ,
                                 TP_ProgAutoOK
                              ]
      PROFILE[ POL_SRODEK ] = [
                                TP_RamaUniw_PoprzeczkaPion,  
                                TP_RamaUniw_PoprzeczkaPoziom,
                                TP_RamaOkienna_PoprzeczkaPion,
                                TP_RamaOkienna_PoprzeczkaPoziom,
                                TP_RamaOkienna_PoprzeczkaPion,
                                TP_RamaOkienna_PoprzeczkaPoziom,
                                TP_RamaUniw_Poprzeczka_O_DW,
                                TP_RamaUniw_Poprzeczka_O_DZ,
                                TP_RamaOkienna_RuchomySlupek,
								TP_RamaOkienna_RuchomySlupek_PVC,
                                TP_RamaOkienna_RuchomySlupekVirtualny,
                                TP_SkrzydloSzklane_Podzial,
                                TP_RamaDrzwiowa_PodzialDZ      ,
                                TP_RamaDrzwiowa_PodzialDW      ,
                                TP_RamaDrzwiowa_RuchomySlupekDW,
                                TP_RamaDrzwiowa_RuchomySlupekDZ,
                                TP_RamaDrzwiowa_PodzialDH      ,
                                TP_RamaDrzwiowa_PodzialDWZ     ,
                                TP_RamaDrzwiowa_PodzialDZBezp  ,
                                TP_RamaDrzwiowa_PodzialDWBezp  ,
                                TP_RamaDrzwiowa_RuchomySlupekDZ,
                                TP_RamaDrzwiowa_RuchomySlupekDW,
                                TP_PodzialAutoOK               ,
                                TP_RamaAutoOK_Zawias           ,
                                TP_RamaAutoOK_Klamka           ,
                                TP_RamaAutoOK_ZawiasJakoPoprzeczka,
                                TP_RamaAutoOK_KlamkaJakoPoprzeczka,
                                TP_PoprzeczkaAutoOK,
                                TP_RamaUniw_Poprzeczka_O_DW,
                                TP_RamaUniw_Poprzeczka_O_DZ,
                                TP_RamaOkienna_Poprzeczka1Skrz,
                                TP_RamaOkienna_Poprzeczka2Skrz
                              ]
      DOZWOLONE_SKRZYDLA=[
                            TS_Szyba,
                            TS_RamaOkienna_OW1                    ,
                            TS_RamaOkienna_OW2                    ,
                            TS_RamaOkienna_OW3                    ,
                            TS_RamaOkienna_PVC_OW1                ,
                            TS_RamaOkienna_PVC_OW2                ,
                            TS_RamaOkienna_PVC_OW3                ,							
                            TS_Drzwi_DZ1                          ,
                            TS_Drzwi_DZ2                          ,
                            TS_Drzwi_DZ3                          ,							
                            TS_Drzwi_DZ3v                         ,
                            TS_Drzwi_DW1                          ,
                            TS_Drzwi_DW2                          ,
                            TS_Drzwi_DW3						  ,
                            TS_Drzwi_DW3v								
                         ]
      DODATKOWE_PARAMETRY=
        <
          WARUNEK=
            <
              KATEGORIA   = 'Окна W77'			  
              KLUCZ       = 'CZY_ZEWN'
              PYTANIE     = 'Конструкция внешнняя (с учетом статики)'
              STANDARDOWO = '0'
              WIDZIANE    = TAK
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Окна W77'
              KLUCZ       = 'TYPE_TERMO_W77'
              PYTANIE     = 'Варіант теплоізоляції системи:'
              ELEMENT     = 'Standart' 			  
              ELEMENT     = 'HI'
              STANDARDOWO = '0'

              RYSUNEK     = 'TYPE_TERMO_W77.vct'
              ROZMIAR_RYSUNKU=135
            >				
          Z_LISTY=
            <
              KATEGORIA   = 'Окна W77'
              KLUCZ       = 'UTEPLITEL_GLASS_W77'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_W77.vct'
              ROZMIAR_RYSUNKU=135
            >		
          Z_LISTY=
            <
              KATEGORIA   = 'Окна W77'
              KLUCZ       = 'DETAIL_CENTR_GASK_W77'
              PYTANIE     = 'Використовувати деталь центрального ущільнювача:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'DETAIL_CENTR_GASK_W77.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Окна W77'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_W77'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Доп. опції'
              KLUCZ       = 'OKAPNIK_W77'
              PYTANIE     = 'Використовувати капельник С.819:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '0'

              RYSUNEK     = 'C_819.vct'
              ROZMIAR_RYSUNKU=135		  
            >				
        >
  >

    TYP_SKRZYDLA[TS_W77_RamaDZ]=
      <  
        NAZWA_HTML=    'W77 - Двері зовнішнього відкривання <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS=          'Двери наружного открывания. Система W77 (система "тепла")'
        KATEGORIA_HTML=' 2) Система віконна-дверна <b>W77</b>'
        SYSTEMY=[DEF_SYS_W77]
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_W77]
        RYSUNEK='W77_RamaDZ.vct'
	    JAKIE_PRZEKROJE=2 
        FASADA=NIE
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=TAK
        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_DOL    ] = [
                                   TP_RamaDrzwiowa_ProgDZ,
                                   TP_RamaDrzwiowa_Prog2DZ,
                                   TP_RamaDrzwiowa_SzczotkaDZ							
                                ]
        PROFILE[ POL_SRODEK ] = [
                                  TP_RamaDrzwiowa_PodzialDZ,
                                  TP_RamaDrzwiowa_RuchomySlupekDZ
                                ]
        DOZWOLONE_SKRZYDLA=[
                                TS_Drzwi_DZ1,
                                TS_Drzwi_DZ2,
                                TS_Drzwi_DZ3,
                                TS_Drzwi_DZ3v                
                           ]

        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA

        DODATKOWE_PARAMETRY=
          <
           WARUNEK=
              <
              KLUCZ       = 'RAMA_DRZWIOWA'
              PYTANIE     = 'rama drzwiowa'
              STANDARDOWO = '1'
              WIDZIANE    = NIE
              >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері W77'
              KLUCZ       = 'TYPE_TERMO_W77'
              PYTANIE     = 'Варіант теплоізоляції системи:'
              ELEMENT     = 'Standart' 			  
              ELEMENT     = 'HI'
              STANDARDOWO = '0'

              RYSUNEK     = 'TYPE_TERMO_W77.vct'
              ROZMIAR_RYSUNKU=135
            >					  
          Z_LISTY=
            <
              KATEGORIA   = 'Двері W77'
              KLUCZ       = 'UTEPLITEL_GLASS_W77'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_W77.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері W77'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_W77'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >				
           >
         >
    TYP_SKRZYDLA[TS_W77_RamaDW]=
      <		  
        NAZWA_HTML=    'W77 - Двері внутрішнього відкривання <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS=          'Двері внутрішнього відкривання. Система W77 (система "тепла")'
        KATEGORIA_HTML=' 2) Система віконна-дверна <b>W77</b>'
        SYSTEMY=[DEF_SYS_W77]
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_W77]
        RYSUNEK='W77_RamaDW.vct'		
	    JAKIE_PRZEKROJE=2
        FASADA=NIE
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=TAK
        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_DOL    ] = [
                                   TP_RamaDrzwiowa_ProgDW,
                                   TP_RamaDrzwiowa_Prog2DW,
                                   TP_RamaDrzwiowa_SzczotkaDW
                                ]
        PROFILE[ POL_SRODEK ] = [
                                  TP_RamaDrzwiowa_PodzialDW,
                                  TP_RamaDrzwiowa_RuchomySlupekDW
                                ]
        DOZWOLONE_SKRZYDLA=[
                                TS_Drzwi_DW1,
                                TS_Drzwi_DW2,
                                TS_Drzwi_DW3,
                                TS_Drzwi_DW3v
                           ]

        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA

        DODATKOWE_PARAMETRY=
          <
           WARUNEK=
              <
              KLUCZ       = 'RAMA_DRZWIOWA'
              PYTANIE     = 'rama drzwiowa'
              STANDARDOWO = '1'
              WIDZIANE    = NIE
              >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері W77'
              KLUCZ       = 'TYPE_TERMO_W77'
              PYTANIE     = 'Варіант теплоізоляції системи:'
              ELEMENT     = 'Standart' 			  
              ELEMENT     = 'HI'
              STANDARDOWO = '0'

              RYSUNEK     = 'TYPE_TERMO_W77.vct'
              ROZMIAR_RYSUNKU=135
            >				  
          Z_LISTY=
            <
              KATEGORIA   = 'Двері W77'
              KLUCZ       = 'UTEPLITEL_GLASS_W77'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_W77.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері W77'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_W77'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >				
           >
         >
#ENDIF	


#IFDEF C50	

   TYP_SKRZYDLA[TS_C50_windows]=
    <
      NAZWA_HTML=    'C50 - Вікна та балконні двері <font face="verdana" color="clblue">(Тестування!)</font>'
      OPIS=          'Вікна та балконні двері. Система C50 (система "тепла")'
      KATEGORIA_HTML=' 4) Система віконна-дверна <b>C50</b>'
      RYSUNEK='C50_windows.jpg'	  
      SYSTEMY=[DEF_SYS_C50,DEF_SYS_C50_CD]
      DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_C50,WAR_C50_CD,WAR_C50_SKRZ_BK]
      FASADA=NIE
	  JAKIE_PRZEKROJE=2 
      METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
      TYP=SK_SRODEK
      STANDARDOWE_OTWARCIE=OKUCIE_BRAK
      STANDARDOWA_SZEROKOSC_PROFILI=52
      MOZNA_NAROZA=TAK
      PROFILE[ POL_LEWO   ] = [ TP_RamaUniw_RamaPion,TP_RamaUniw_PoprzeczkaPion,TP_RamaOkienna_RamaPion]
      PROFILE[ POL_PRAWO  ] = [ TP_RamaUniw_RamaPion,TP_RamaUniw_PoprzeczkaPion,TP_RamaOkienna_RamaPion]
      PROFILE[ POL_GORA   ] = [ TP_RamaUniw_RamaGora,TP_RamaUniw_PoprzeczkaPoziom,TP_PoprzeczkaAutoOK,TP_RamaOkienna_RamaGora ]

      PROFILE[ POL_DOL,
               POL_INNE   ] = [
			                     TP_RamaOkienna_RamaDol,
				                 TP_RamaOkienna_RamaInna,
                                 TP_RamaUniw_RamaDol,
                                 TP_RamaUniw_RamaInna,
                                 TP_RamaOkienna_SzczelinaBalkonu,
								 TP_RamaOkienna_SzczelinaBalkonu0,
                                 TP_RamaOkienna_SzczelinaOknaPodawczego,
                                 TP_RamaDrzwiowa_ProgDZ             ,
                                 TP_RamaDrzwiowa_ProgDW             ,
                                 TP_RamaDrzwiowa_ProgDZ0            ,
                                 TP_RamaDrzwiowa_ProgDW0            ,								 
                                 TP_RamaDrzwiowa_ProgDZ_CD          ,
                                 TP_RamaDrzwiowa_ProgDW_CD          ,								 
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
                                 TP_RamaDrzwiowa_ProgS              ,
                                 TP_RamaUniw_PoprzeczkaPion         ,
                                 TP_RamaUniw_PoprzeczkaPoziom       ,
                                 TP_RamaUniw_Poprzeczka_O_DW,
                                 TP_RamaUniw_Poprzeczka_O_DZ,
                                 TP_ProgAutoOK
                              ]
      PROFILE[ POL_SRODEK ] = [
                                TP_RamaUniw_PoprzeczkaPion,  
                                TP_RamaUniw_PoprzeczkaPoziom,
                                TP_RamaOkienna_PoprzeczkaPion,
                                TP_RamaOkienna_PoprzeczkaPoziom,
                                TP_RamaOkienna_PoprzeczkaPion,
                                TP_RamaOkienna_PoprzeczkaPoziom,
                                TP_RamaUniw_Poprzeczka_O_DW,
                                TP_RamaUniw_Poprzeczka_O_DZ,
                                TP_RamaOkienna_RuchomySlupek,
								TP_RamaOkienna_RuchomySlupek_PVC,
                                TP_RamaOkienna_RuchomySlupekVirtualny,
                                TP_SkrzydloSzklane_Podzial,
                                TP_RamaDrzwiowa_PodzialDZ      ,
                                TP_RamaDrzwiowa_PodzialDW      ,
                                TP_RamaDrzwiowa_RuchomySlupekDW,
                                TP_RamaDrzwiowa_RuchomySlupekDZ,
                                TP_RamaDrzwiowa_PodzialDH      ,
                                TP_RamaDrzwiowa_PodzialDWZ     ,
                                TP_RamaDrzwiowa_PodzialDZBezp  ,
                                TP_RamaDrzwiowa_PodzialDWBezp  ,
                                TP_RamaDrzwiowa_RuchomySlupekDZ,
                                TP_RamaDrzwiowa_RuchomySlupekDW,
                                TP_PodzialAutoOK               ,
                                TP_RamaAutoOK_Zawias           ,
                                TP_RamaAutoOK_Klamka           ,
                                TP_RamaAutoOK_ZawiasJakoPoprzeczka,
                                TP_RamaAutoOK_KlamkaJakoPoprzeczka,
                                TP_PoprzeczkaAutoOK,
                                TP_RamaUniw_Poprzeczka_O_DW,
                                TP_RamaUniw_Poprzeczka_O_DZ,
                                TP_RamaOkienna_Poprzeczka1Skrz,
                                TP_RamaOkienna_Poprzeczka2Skrz
                              ]
      DOZWOLONE_SKRZYDLA=[
                            TS_Szyba,
                            TS_RamaOkienna_OW1                    ,
                            TS_RamaOkienna_OW2                    ,
                            TS_RamaOkienna_OW3                    ,	
                            TS_RamaOkienna_OBW1                   ,							
                            TS_Drzwi_DZ1                          ,
                            TS_Drzwi_DZ2                          ,
                            TS_Drzwi_DZ3                          ,							
                            TS_Drzwi_DW1                          ,
                            TS_Drzwi_DW2                          ,
                            TS_Drzwi_DW3						  ,
                            TS_Drzwi_DZ1_CD                       ,
                            TS_Drzwi_DW1_CD                       							
                         ]
      DODATKOWE_PARAMETRY=
        <
          WARUNEK=
            <
              KATEGORIA   = 'Окна C50'			  
              KLUCZ       = 'CZY_ZEWN'
              PYTANIE     = 'Конструкция внешнняя (с учетом статики)'
              STANDARDOWO = '0'
              WIDZIANE    = TAK
            >	
            Z_LISTY=
              <
              KATEGORIA   = 'Доп. опции'
              KLUCZ       = 'SBORKA_UGLOW_C50'
              PYTANIE     = 'Способ зборки кутів'
              ELEMENT     = 'Зачеканка'
              ELEMENT     = 'Заштифтовка'
              STANDARDOWO = '0'
              >				
          Z_LISTY=
            <
              KATEGORIA   = 'Окна C50'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_C50'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Доп. опції'
              KLUCZ       = 'OKAPNIK_C50'
              PYTANIE     = 'Використовувати капельник С.819:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '0'

              RYSUNEK     = 'C_819.vct'
              ROZMIAR_RYSUNKU=135		  
            >				
        >
  >

    TYP_SKRZYDLA[TS_C50_RamaDZ]=
      <  
        NAZWA_HTML=    'C50 - Двері зовнішнього відкривання <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS=          'Двери наружного открывания. Система C50 (система "тепла")'
        KATEGORIA_HTML=' 4) Система віконна-дверна <b>C50</b>'
        SYSTEMY=[DEF_SYS_C50]
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_C50]
        RYSUNEK='C50_RamaDZ.vct'
	    JAKIE_PRZEKROJE=2 
        FASADA=NIE
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=TAK
        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_DOL    ] = [
                                   TP_RamaDrzwiowa_ProgDZ,
								   TP_RamaDrzwiowa_ProgDZ0,
                                   TP_RamaDrzwiowa_Prog2DZ,
                                   TP_RamaDrzwiowa_SzczotkaDZ							
                                ]
        PROFILE[ POL_SRODEK ] = [
                                  TP_RamaDrzwiowa_PodzialDZ,
                                  TP_RamaDrzwiowa_RuchomySlupekDZ
                                ]
        DOZWOLONE_SKRZYDLA=[
                                TS_Drzwi_DZ1,
                                TS_Drzwi_DZ2,
                                TS_Drzwi_DZ3             
                           ]

        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA

        DODATKOWE_PARAMETRY=
          <
           WARUNEK=
              <
              KLUCZ       = 'RAMA_DRZWIOWA'
              PYTANIE     = 'rama drzwiowa'
              STANDARDOWO = '1'
              WIDZIANE    = NIE
              >		
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'UTEPLITEL_GLASS_C50'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_C50.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_C50'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >	
            Z_LISTY=
              <
              KATEGORIA   = 'Доп. опции'
              KLUCZ       = 'SBORKA_UGLOW_C50'
              PYTANIE     = 'Способ зборки кутів'
              ELEMENT     = 'Зачеканка'
              ELEMENT     = 'Заштифтовка'
              STANDARDOWO = '0'
              >				
           >
         >
    TYP_SKRZYDLA[TS_C50_RamaDW]=
      <		  
        NAZWA_HTML=    'C50 - Двері внутрішнього відкривання <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS=          'Двері внутрішнього відкривання. Система C50 (система "тепла")'
        KATEGORIA_HTML=' 4) Система віконна-дверна <b>C50</b>'
        SYSTEMY=[DEF_SYS_C50]
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_C50]
        RYSUNEK='C50_RamaDW.vct'		
	    JAKIE_PRZEKROJE=2
        FASADA=NIE
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=TAK
        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_DOL    ] = [
                                   TP_RamaDrzwiowa_ProgDW,
								   TP_RamaDrzwiowa_ProgDW0,
                                   TP_RamaDrzwiowa_Prog2DW,
                                   TP_RamaDrzwiowa_SzczotkaDW
                                ]
        PROFILE[ POL_SRODEK ] = [
                                  TP_RamaDrzwiowa_PodzialDW,
                                  TP_RamaDrzwiowa_RuchomySlupekDW
                                ]
        DOZWOLONE_SKRZYDLA=[
                                TS_Drzwi_DW1,
                                TS_Drzwi_DW2,
                                TS_Drzwi_DW3
                           ]

        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA

        DODATKOWE_PARAMETRY=
          <
           WARUNEK=
              <
              KLUCZ       = 'RAMA_DRZWIOWA'
              PYTANIE     = 'rama drzwiowa'
              STANDARDOWO = '1'
              WIDZIANE    = NIE
              >		
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'UTEPLITEL_GLASS_C50'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_C50.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_C50'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >	
            Z_LISTY=
              <
              KATEGORIA   = 'Доп. опции'
              KLUCZ       = 'SBORKA_UGLOW_C50'
              PYTANIE     = 'Способ зборки кутів'
              ELEMENT     = 'Зачеканка'
              ELEMENT     = 'Заштифтовка'
              STANDARDOWO = '0'
              >				
           >
         >
		 	 
    TYP_SKRZYDLA[TS_C50_RamaDZ_CD]=
      <  
        NAZWA_HTML=    'C50 - Двері зовнішнього відкривання CD <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS=          'Двери наружного открывания. Система C50 (система "тепла")'
        KATEGORIA_HTML=' 4) Система віконна-дверна <b>C50</b>|<b>Clamped doors</b>'
        SYSTEMY=[DEF_SYS_C50_CD]
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_C50_CD]
        RYSUNEK='C50_RamaDZ.vct'
	    JAKIE_PRZEKROJE=2 
        FASADA=NIE
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=TAK
        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DZ ]
        PROFILE[ POL_DOL    ] = [
                                   TP_RamaDrzwiowa_ProgDZ_CD,
								   TP_RamaDrzwiowa_ProgDZ0,
                                   TP_RamaDrzwiowa_Prog2DZ,
                                   TP_RamaDrzwiowa_SzczotkaDZ							
                                ]
        PROFILE[ POL_SRODEK ] = [
                                  TP_RamaDrzwiowa_PodzialDZ,
                                  TP_RamaDrzwiowa_RuchomySlupekDZ
                                ]
        DOZWOLONE_SKRZYDLA=[
                                TS_Drzwi_DZ1_CD,
                                TS_Drzwi_DZ2_CD,
                                TS_Drzwi_DZ3_CD             
                           ]

        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA

        DODATKOWE_PARAMETRY=
          <
           WARUNEK=
              <
              KLUCZ       = 'RAMA_DRZWIOWA'
              PYTANIE     = 'rama drzwiowa'
              STANDARDOWO = '1'
              WIDZIANE    = NIE
              >		
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'UTEPLITEL_GLASS_C50'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_C50.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_C50'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >				
           >
         >
    TYP_SKRZYDLA[TS_C50_RamaDW_CD]=
      <		  
        NAZWA_HTML=    'C50 - Двері внутрішнього відкривання CD <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS=          'Двері внутрішнього відкривання. Система C50 (система "тепла")'
        KATEGORIA_HTML=' 4) Система віконна-дверна <b>C50</b>|<b>Clamped doors</b>'
        SYSTEMY=[DEF_SYS_C50_CD]
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,WAR_C50_CD]
        RYSUNEK='C50_RamaDW.vct'		
	    JAKIE_PRZEKROJE=2
        FASADA=NIE
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=50
        MOZNA_NAROZA=TAK
        PROFILE[ POL_LEWO   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_PRAWO  ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_GORA   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_INNE   ] = [ TP_RamaDrzwiowa_DW ]
        PROFILE[ POL_DOL    ] = [
                                   TP_RamaDrzwiowa_ProgDW_CD,
								   TP_RamaDrzwiowa_ProgDW0,
                                   TP_RamaDrzwiowa_Prog2DW,
                                   TP_RamaDrzwiowa_SzczotkaDW
                                ]
        PROFILE[ POL_SRODEK ] = [
                                  TP_RamaDrzwiowa_PodzialDW,
                                  TP_RamaDrzwiowa_RuchomySlupekDW
                                ]
        DOZWOLONE_SKRZYDLA=[
                                TS_Drzwi_DW1_CD,
                                TS_Drzwi_DW2_CD,
                                TS_Drzwi_DW3_CD
                           ]

        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA

        DODATKOWE_PARAMETRY=
          <
           WARUNEK=
              <
              KLUCZ       = 'RAMA_DRZWIOWA'
              PYTANIE     = 'rama drzwiowa'
              STANDARDOWO = '1'
              WIDZIANE    = NIE
              >		
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'UTEPLITEL_GLASS_C50'
              PYTANIE     = 'Використовувати утеплювач фальця склопакету:'
              ELEMENT     = 'Ні' 			  
              ELEMENT     = 'Так'
              STANDARDOWO = '1'

              RYSUNEK     = 'UTEPLITEL_GLASS_C50.vct'
              ROZMIAR_RYSUNKU=135
            >	
          Z_LISTY=
            <
              KATEGORIA   = 'Двері C50'
              KLUCZ       = 'CORNER_ELEMENT_PROFILE_C50'
              PYTANIE     = 'Як рахувати кутові елементи:'
              ELEMENT     = 'Деталями' 			  
              ELEMENT     = 'Профілем'
              STANDARDOWO = '1'
            >				
           >
         >		 
#ENDIF	




#IFDEF NVF 

    TYP_SKRZYDLA[TS_NVF_KERAM_KLIAM]=
      <
        NAZWA_HTML='Плити керамограніту на кляймерах <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS='Система НВФ'
        KATEGORIA=' 3) СИСТЕМА НАВІСНИХ ВЕНТИЛЬОВАНИХ ФАСАДІВ'
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,
                            WAR_NVF_KERAM_KLIAM,WAR_W77
                           ]
        SYSTEMY=[DEF_SYS_NVF_KERAM_KLIAM,DEF_SYS_W77]
        RYSUNEK='NVF_KERAM_KLIAM.vct'		
        FASADA=TAK
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=70
        MOZNA_NAROZA=NIE
        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana]
        PROFILE[POL_INNE ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_DOL,
                POL_INNE]=  [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_SRODEK]=[TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_RamaDoFasadyWentylowanej,TP_RamaDoFasadyWentylowanej_PION]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba, 
                             TS_W77_windows
                           ]

        SPRAWDZAC_PRZESUWNE_I_STALE_OKUCIA=NIE
        DODATKOWE_PARAMETRY=
          <
            WARUNEK=
              <
                KLUCZ       = 'CZY_ZEWN'
                PYTANIE     = 'Zabudowa zewnкtrzna'
                STANDARDOWO = '1'
                WIDZIANE    = NIE
              >			  
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_TOP'
                PYTANIE     = 'Відстань між рамою і проємом зверху'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOTTOM'
                PYTANIE     = 'Відстань між рамою і проємом внизу'
                STANDARDOWO = '40'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOK'
                PYTANIE     = 'Відстань між рамою і проємом збоку'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_DEEP'
                PYTANIE     = 'Глибина встанволення вікна відносно фасаду'
                STANDARDOWO = '10'
              >			  
            Z_LISTY=
              <
                KATEGORIA   = 'Відображення'
                KLUCZ       = 'SHOW_KLIAMER'
                PYTANIE     = 'Показувати зображення кляймера:'
                ELEMENT     = 'Ні' 			  
                ELEMENT     = 'Так'
                STANDARDOWO = '0'
              >				  
         >
  >
  
    TYP_SKRZYDLA[TS_NVF_KERAM_GLUE]=
      <
        NAZWA_HTML='Плити керамограніту/HPL-панелі на клею <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS='Система НВФ'
        KATEGORIA=' 3) СИСТЕМА НАВІСНИХ ВЕНТИЛЬОВАНИХ ФАСАДІВ'
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,
                            WAR_NVF_KERAM_GLUE,WAR_W77
                           ]
        SYSTEMY=[DEF_SYS_NVF_KERAM_GLUE,DEF_SYS_W77]
        RYSUNEK='NVF_KERAM_GLUE.vct'		
        FASADA=TAK
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=70
        MOZNA_NAROZA=NIE
        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana]
        PROFILE[POL_INNE ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_DOL,
                POL_INNE]=  [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_SRODEK]=[TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_RamaDoFasadyWentylowanej,TP_RamaDoFasadyWentylowanej_PION]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba, 
                             TS_W77_windows
                           ]

        SPRAWDZAC_PRZESUWNE_I_STALE_OKUCIA=NIE
        DODATKOWE_PARAMETRY=
          <
            WARUNEK=
              <
                KLUCZ       = 'CZY_ZEWN'
                PYTANIE     = 'Zabudowa zewnкtrzna'
                STANDARDOWO = '1'
                WIDZIANE    = NIE
              >			  
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_TOP'
                PYTANIE     = 'Відстань між рамою і проємом зверху'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOTTOM'
                PYTANIE     = 'Відстань між рамою і проємом внизу'
                STANDARDOWO = '40'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOK'
                PYTANIE     = 'Відстань між рамою і проємом збоку'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_DEEP'
                PYTANIE     = 'Глибина встанволення вікна відносно фасаду'
                STANDARDOWO = '10'
              >			  		  
        >
  >  
  
    TYP_SKRZYDLA[TS_NVF_AKP]=
      <
        NAZWA_HTML='Касети з АКП <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS='Система НВФ'
        KATEGORIA=' 3) СИСТЕМА НАВІСНИХ ВЕНТИЛЬОВАНИХ ФАСАДІВ'
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,
                            WAR_NVF_AKP,WAR_W77
                           ]
        SYSTEMY=[DEF_SYS_NVF_AKP,DEF_SYS_W77]
        RYSUNEK='NVF_AKP.vct'		
        FASADA=TAK
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=70
        MOZNA_NAROZA=NIE
        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana]
        PROFILE[POL_INNE ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_DOL,
                POL_INNE]=  [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_SRODEK]=[TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_RamaDoFasadyWentylowanej,TP_RamaDoFasadyWentylowanej_PION]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba, 
                             TS_W77_windows
                           ]

        SPRAWDZAC_PRZESUWNE_I_STALE_OKUCIA=NIE
        DODATKOWE_PARAMETRY=
          <
            WARUNEK=
              <
                KLUCZ       = 'CZY_ZEWN'
                PYTANIE     = 'Zabudowa zewnкtrzna'
                STANDARDOWO = '1'
                WIDZIANE    = NIE
              >		
	 	   Z_LISTY=
               <
                KATEGORIA   = 'Доп.опции'	
                KLUCZ       = 'VARIANT_NVF_AKP'
                PYTANIE     = 'Варіант виконання:'
                ELEMENT     = 'Кріплення АКП на заклепки'
                ELEMENT     = 'Кріплення АКП без заклепки'
                STANDARDOWO = '0'	
	      
                RYSUNEK     = 'VARIANT_NVF_AKP.vct'
                ROZMIAR_RYSUNKU=135			  
               >				  
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_TOP'
                PYTANIE     = 'Відстань між рамою і проємом зверху'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOTTOM'
                PYTANIE     = 'Відстань між рамою і проємом внизу'
                STANDARDOWO = '40'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOK'
                PYTANIE     = 'Відстань між рамою і проємом збоку'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_DEEP'
                PYTANIE     = 'Глибина встанволення вікна відносно фасаду'
                STANDARDOWO = '10'
              >			  		  
        >
  >    
  
    TYP_SKRZYDLA[TS_NVF_HPL_PANEL]=
      <
        NAZWA_HTML=' HPL-панелі на заклепках <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS='Система НВФ'
        KATEGORIA=' 3) СИСТЕМА НАВІСНИХ ВЕНТИЛЬОВАНИХ ФАСАДІВ'
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,
                            WAR_NVF_HPL_PANEL,WAR_W77
                           ]
        SYSTEMY=[DEF_SYS_NVF_HPL_PANEL,DEF_SYS_W77]
        RYSUNEK='NVF_HPL_PANEL.vct'		
        FASADA=TAK
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=70
        MOZNA_NAROZA=NIE
        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana]
        PROFILE[POL_INNE ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_DOL,
                POL_INNE]=  [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_SRODEK]=[TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_RamaDoFasadyWentylowanej,TP_RamaDoFasadyWentylowanej_PION]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba, 
							 TS_Proem,
                             TS_W77_windows
                           ]

        SPRAWDZAC_PRZESUWNE_I_STALE_OKUCIA=NIE
        DODATKOWE_PARAMETRY=
          <
            WARUNEK=
              <
                KLUCZ       = 'CZY_ZEWN'
                PYTANIE     = 'Zabudowa zewnкtrzna'
                STANDARDOWO = '1'
                WIDZIANE    = NIE
              >			  
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_TOP'
                PYTANIE     = 'Відстань між рамою і проємом зверху'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOTTOM'
                PYTANIE     = 'Відстань між рамою і проємом внизу'
                STANDARDOWO = '40'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOK'
                PYTANIE     = 'Відстань між рамою і проємом збоку'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_DEEP'
                PYTANIE     = 'Глибина встанволення вікна відносно фасаду'
                STANDARDOWO = '10'
              >			  
            Z_LISTY=
              <
                KATEGORIA   = 'Відображення'
                KLUCZ       = 'SHOW_KLIAMER'
                PYTANIE     = 'Показувати зображення кляймера:'
                ELEMENT     = 'Ні' 			  
                ELEMENT     = 'Так'
                STANDARDOWO = '0'
              >				  
        >
  >  
  
    TYP_SKRZYDLA[TS_NVF_FZP]=
      <
        NAZWA_HTML='Плити з натурального каменю на FZP анкерах <font face="verdana" color="clblue">(Тестування!)</font>'
        OPIS='Система НВФ'
        KATEGORIA=' 3) СИСТЕМА НАВІСНИХ ВЕНТИЛЬОВАНИХ ФАСАДІВ'
        DOZWOLONE_WARIANTY=[WAR_DEFAULT,
                            WAR_NVF_FZP, WAR_W77
                           ]
        SYSTEMY=[DEF_SYS_NVF_FZP, DEF_SYS_W77]
        RYSUNEK='NVF_FZP.vct'		
        FASADA=TAK
        TYP=SK_SRODEK
        STANDARDOWE_OTWARCIE=OKUCIE_BRAK
        STANDARDOWA_SZEROKOSC_PROFILI=70
        MOZNA_NAROZA=NIE
        METODA_OBLICZEN_CIEPLNYCH=METODA_OKIENNA
        PROFILE[POL_LEWO,
                POL_PRAWO,
                POL_GORA ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana]
        PROFILE[POL_INNE ]= [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_DOL,
                POL_INNE]=  [TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_Fasada_PodProgiem]
        PROFILE[POL_SRODEK]=[TP_Fasada_Slup,TP_Fasada_SlupSciana,TP_Fasada_Rygiel,TP_Fasada_RygielSciana,TP_RamaDoFasadyWentylowanej,TP_RamaDoFasadyWentylowanej_PION]
        DOZWOLONE_SKRZYDLA=[
                             TS_Szyba, 
                             TS_W77_windows
                           ]

        SPRAWDZAC_PRZESUWNE_I_STALE_OKUCIA=NIE
		
        DODATKOWE_PARAMETRY=
          <
            WARUNEK=
              <
                KLUCZ       = 'CZY_ZEWN'
                PYTANIE     = 'Zabudowa zewnкtrzna'
                STANDARDOWO = '1'
                WIDZIANE    = NIE
              >			  
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_TOP'
                PYTANIE     = 'Відстань між рамою і проємом зверху'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOTTOM'
                PYTANIE     = 'Відстань між рамою і проємом внизу'
                STANDARDOWO = '40'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_BOK'
                PYTANIE     = 'Відстань між рамою і проємом збоку'
                STANDARDOWO = '10'
              >
            LICZBA_RZECZYWISTA=
              <
                KATEGORIA   = 'Положення рами вікна в проємі'
                KLUCZ       = 'FRAME_DEEP'
                PYTANIE     = 'Глибина встанволення вікна відносно фасаду'
                STANDARDOWO = '10'
              >			  
            Z_LISTY=
              <
                KATEGORIA   = 'Відображення'
                KLUCZ       = 'SHOW_KLIAMER'
                PYTANIE     = 'Показувати зображення кляймера:'
                ELEMENT     = 'Ні' 			  
                ELEMENT     = 'Так'
                STANDARDOWO = '0'
              >				  
        >
  >  
  
#ENDIF	  
//***********************************************************************************************************
// Parametry konstrukcji -  rodzaj szyby
//**********************************************************************************************************		
	
// szyba 24 mm

TYP_SKRZYDLA[			
         TS_FASADA_F50		 
			]=
      <      	
		DODATKOWE_PARAMETRY=
          <
		   LICZBA_CALKOWITA=
              <
                KLUCZ       = 'NUMER_SZYBY'
                PYTANIE     = 'Jakie szkіo'
                STANDARDOWO = '0'
                WIDZIANE    = NIE				
              >	
	      >
	  >
	  
	  
// szyba 50 mm

TYP_SKRZYDLA[			
         TS_W77_windows,
         TS_W77_RamaDZ,
         TS_W77_RamaDW  		 
			]=
      <      	
		DODATKOWE_PARAMETRY=
          <
		   LICZBA_CALKOWITA=
              <
                KLUCZ       = 'NUMER_SZYBY'
                PYTANIE     = 'Jakie szkіo'
                STANDARDOWO = '1'
                WIDZIANE    = NIE				
              >	
	      >
	  >	  
 
>
