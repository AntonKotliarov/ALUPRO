/*
PARAMETRY DO ZG£OSZENIA OBRÓBKI
{!}'OBROBKA'               //Jaka obróbkê wykonaæ gdy ten element liczony|=OBR_ZAWIAS
{!}'POZYCJA'               //Po³o¿enie gdzie makro ma siê znajdowaæ. X - to standardowe po³o¿enie. Np. wysokoœæ klamki. Jak ma byæ wiêcej obróbek polecenie mo¿na powtórzyæ.|='X-100'
{!}'OD'                    //Je¿eli obróbka ma siê powtrzaæ mo¿na wykorzystaæ t¹ komendê ³¹cznie z DO i CO|='100'
{!}'DO'                    //Je¿eli obróbka ma siê powtrzaæ mo¿na wykorzystaæ t¹ komendê ³¹cznie z OD i CO|='100'
{!}'CO'                    //Je¿eli obróbka ma siê powtrzaæ mo¿na wykorzystaæ t¹ komendê ³¹cznie z DO i OD|='250'
{!}'PROFIL1'               //Czy obróbka wystêpuje na profilu poprzeczki w po³¹czeniu typu "T"|=TAK
{!}'PROFIL2'               //Czy obróbka wystêpuje na profilu oœcie¿nicy/skrzyd³a w po³¹czeniu typu "T"|=TAK
{!}'POLOZENIE'             //Gdy obróbka wstawiona do skrzyd³a - informacja na którym profilu ma byæ|=POL_PRAWO
{!}'DO_DRUGIEGO_SKRZYDLA'  //Czy wstawiæ t¹ obróbkê do drugiego skrzyd³a w drzwiach/oknach dwuskrzyd³owych. Np. obróbka pod zaczep zg³oszona na skrzydle aktywnym ale powinna byæ na biernym|=TAK
{!}'RODZAJ'                //Sk¹d braæ pozycje obróbek. Standardowo z poleceñ typu POZYCJA, OD. Jednak mo¿e to byæ te¿ wysokoœæ klamki lub zawias|=CNC_RODZAJ_ZAWIAS
{!}'GDY_PARAMETR'			//Warunek (<>0) jaki musi byæ spe³niony aby wstawiæ obróbek|={-}'DODATKOWY_ZAMEK=1'
{!}'NAZWA_WYMIAR'			//Nazwa wymiaru - do przesuwania innych obróbek|='SZYLD'
{!}'WARTOSC_WYMIARU'		//Wartoœæ wymiaru - do przesuwania innych obróbek|=20
{!}'PRZESUNIECIE_OBROBKI'	//O ile przesunac obróbke w stosunku do wysokosci np. klamki|='SZYLD'
{!}'PRZESUNIECIE_OBROBKI_Y'	//O ile przesun¹æ obróbkê w kierunku Y
{!}'NAZWA_WYMIAR_TXT'		//Nazwa wymiaru (wzór tekstowy)- do przesuwania innych obróbek|='SZYLD'
{!}'WARTOSC_WYMIARU_TXT'	//Wartoœæ wymiaru (wzór tekstowy)- do przesuwania innych obróbek|='20+H/2'
{!}'CSV_PARAMETR_NAZWA'
{!}'CSV_PARAMETR_WARTOSC'

PARAMETRY DO DEFINICJI OBRÓBKI
{!}'MAKRO'                             	//Kod obróbki. Mo¿e zawieraæ ró¿ne makra. Np. $SYS$ - kod systemu. $PCODE$ - kod profila na którym jest zawias. $ACODE$ - kod akcesoria które wywo³a³o obróbek |={-}'ZAWIAS_$PCODE$_$ACODE$'
{!}'TYP'                               	//Dla jakich typów profili program ma wstawiaæ t¹ obróbkê. Mo¿na powtarzaæ je¿eli dla kilku typów.|={-}'OKNA'
{!}'INFORMACJE_O_STRONIE'              	//Do nazwy obróbki dodawaæ informacje o stronie profila po której jest obróbka. Nale¿y podaæ nazwy stron przedzielone œrednikiem|={-}'_A;_B'
{!}'INFORMACJE_O_SKRZYDLE'             	//Do nazwy obróbki dodawaæ inforamcje o tym czy obróbka jest na skrzydle czy na ramie. Nale¿y podawaæ nazwy przedzielone œrednikiem|={-}'_RAMA;_SKRZ'
{!}'INFORMACJE_O_KIERUNKU'             	//Informacje o kierunku (pierwsze dwa parametry to drzwi lewe, drzwi prawe i dwa kolejne to klamka z lewej i klamka z prawej w widoku od wewn¹trz. Jak potrzebne tylko dwa pierwsze to {-}'_L;_R' jak potrzebne tylko 2 ostatnie to {-}';;_L;_R'|={-}'_LEWE;_PRAWE;_KL;_KP'
{!}'DODAJ_DO_MAKRA'                    	//Dodatkowy tekst dodany do kodu obróbki. Komendê mo¿na powtarzaæ. Wystêpuje razem z DODAJ_GDY_PARAMETR.|={-}'_NITY'
{!}'DODAJ_GDY_PARAMETR'                	//Warunek kiedy dodaæ dodatkowy tekst do obróbki (DODAJ_DO_MAKRA). |={-}'ZAWIASY_Z_NITAMI=1'
{!}'WYKONAJ_DLA_SKRZYDLA'              	//Czy obróbka ma wyst¹piæ na profilach skrzyde³ (standardowo i na skrzyd³ach i na ramach) Patrz te¿: WYKONAJ_DLA_RAMY|=TAK
{!}'WYKONAJ_DLA_RAMY'                  	//Czy obróbka ma wyst¹piæ na profilach ram (standardowo i na skrzyd³ach i na ramach). Patrz te¿ WYKONAJ_DLA_SKRZYDLA|=TAK
{!}'DLA_PROFILI'                       	//X
{!}'DLA_PROFILI2'                      	//X
{!}'INFORMACJE_KONIEC_POCZATEK_PROFILU'	//Do nazwy obróbki (po³¹czenia profili) dodaæ informacje z której strony profila jest to po³¹czenie|={-}'_L;_P'
{!}'INFORMACJE_WEWN_ZEWN'              	//Do nazwy obróbki dodawaæ inforamcje o tym skrzyd³o otwierane do wewn. czy na zewn.|={-}'_W;_Z'
{!}'INFORMACJE_STRONA_KOLORU'          	//Do nazwy obróbki dodawaæ inforamcje o tym czy element po wewnêtrznej czêsci skrzyd³a czy zewnêtrznej.|={-}'_IN;_OUT'
{!}'ROZBIJAJ_OBUSTRONNE_NA_2_MAKRA'    	//Czy gdy INFORMACJE_STRONA_KOLORU to obustronny kolor rozbijaæ na 2 makra (wewnêtrzne i zewnêtrzne)|=NIE
{!}'ODWROC_H_GDY_STRONA'				fRotateYInSide:=TVectSide(readTLInteger(tl));
{!}'BLOKUJ_PRZECIWNE_KOLORY'			fFlags:=fFlags or cCncDefFlagLockColorZewnWewn;
*/

#DEFINE	OBROBKA_LACZENIE_L90			1
#DEFINE	OBROBKA_LACZENIE_L				2
#DEFINE	OBROBKA_DEKOMPRESJA				3
#DEFINE	OBROBKA_ODWODNIENIE_DOD			4
#DEFINE OBROBKA_EUROROWEK				5
#DEFINE OBROBKA_LACZENIE_KLEJ			6
#DEFINE DODATKOWA_OBROBKA_LACZENIE_L90	7
#DEFINE OBROBKA_LACZENIE_T90			8
#DEFINE OBROBKA_LACZENIE_T90_ZNAK		9
#DEFINE OBROBKA_LACZENIE_T90_TYP2		10
#DEFINE OBROBKA_LACZENIE_T90_TYP3		11
#DEFINE OBROBKA_LACZENIE_T90_TYP4		12
#DEFINE OBROBKA_LACZENIE_T90_DOD		13
#DEFINE OBROBKA_LACZENIE_L90_CUT		14
#DEFINE OBROBKA_POL_T90_FASADA_PROF1	15
#DEFINE OBROBKA_POL_T90_FASADA_PROF2	16
#DEFINE OBROBKA_LACZENIE_T90_PAR		17
#DEFINE OBROBKA_DODATKOWA				18
#DEFINE OBROBKA_MASKOWNICA				19
#DEFINE OBROBKA_POLCIOS					20
#DEFINE OBROBKA_LACZENIE_KAT3D			21


OBROBKI=
	<
	OBROBKA[OBROBKA_LACZENIE_L90]=
		<
		//Domyœlnie pozycja 0 jest na przeciêciu osi profili
		NAZWA			= 'Po³¹czenie L90'
		OPIS			= 'Obróbka do po³¹czenia typu L90 dla profila: $PCODE$'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_L90'
		DLA_PROFILI		= 'DRZWI'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU='_L;_R'
		>
	OBROBKA[OBROBKA_LACZENIE_L90_CUT]=
		<
		//Domyœlnie pozycja 0 jest na przeciêciu osi profili
		NAZWA			= 'Po³¹czenie L90 - ruchomy s³upek'
		OPIS			= 'Obróbka do po³¹czenia zintegrowanego ruchomego s³upka typu L90 dla profila: $PCODE2$'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= 'POL_NAROZE_90_$PCODE2$'
		DLA_PROFILI		= 'DRZWI'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU='_L;_R'
		>
	OBROBKA[OBROBKA_LACZENIE_L]=
		<
		NAZWA			= 'Po³¹czenie L'
		OPIS			= 'Obróbka do po³¹czenia typu L90 dla profila: $PCODE$'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_L'
		DLA_PROFILI		= 'DRZWI'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU='_L;_R'
		>
	OBROBKA[OBROBKA_DEKOMPRESJA]=
		<
		NAZWA			= 'Obróbka odpowietrzenia'
		OPIS			= 'Obróbka do dekompresji dla profilu $PCODE$'
		KATEGORIA		= 'Obróbki Q'
		MAKRO			= '$PCODE2$_DEKOMPRESJA'
		DLA_PROFILI		= 'DRZWI'
		DLA_PROFILI		= 'OKNA'
		>
	OBROBKA[OBROBKA_ODWODNIENIE_DOD]=
		<
		NAZWA			= 'Obróbka dodatkowego odwodnienia'
		OPIS			= 'Obróbka do dekompresji dla profilu $PCODE$'
		KATEGORIA		= 'Obróbki Q'
		MAKRO			= '$PCODE2$_ODWODNIENIE_DODATKOWE'
		DLA_PROFILI		= 'OKNA'
		>
	OBROBKA[OBROBKA_EUROROWEK]=
		<
		NAZWA			= 'Obróbka pod euro rowek'
		OPIS			= 'Obróbka do otwarcia rowka w profilu $PCODE$'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE$_POPYCHACZ'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
	OBROBKA[OBROBKA_LACZENIE_KLEJ]=
		<
		NAZWA			= 'Obróbka pod klej'
		OPIS			= 'Obróbka do po³¹czeñ profili - do wprowadzenia kleju dla profilu $PCODE$'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_L90_KLEJ'
		DLA_PROFILI		= 'OKNA'
		WYKONAJ_DLA_RAMY= TAK
		WYKONAJ_DLA_SKRZYDLA = TAK
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
	OBROBKA[DODATKOWA_OBROBKA_LACZENIE_L90]=
		<
		NAZWA			= 'Dodatkowa obróbka na po³¹czeniu L90'
		OPIS			= 'Obróbka do po³¹czeñ profili L90 - operacje na profilu $PCODE$'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE$_L90_PODCIECIE'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_T90]=
		<
		NAZWA			= 'Obróbka T90 PCODE3 - mocowanie poprzeczki, obróbka na ramie'
		OPIS			= 'Obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90_MOCOWANIE'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_T90_TYP2]=
		<
		NAZWA			= 'Obróbka T90 PCODE3 - mocowanie poprzeczki, obróbka na ramie'
		OPIS			= 'Obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90_MOCOWANIE_TYP2'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_T90_TYP3]=
		<
		NAZWA			= 'Obróbka T90 PCODE3 - mocowanie poprzeczki, obróbka na ramie'
		OPIS			= 'Obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90_MOCOWANIE_TYP3'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_T90_TYP4]=
		<
		NAZWA			= 'Obróbka T90 PCODE3 - mocowanie poprzeczki, obróbka na ramie'
		OPIS			= 'Obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90_MOCOWANIE_TYP4'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_T90_DOD]=
		<
		NAZWA			= 'Dodatkowa obróbka T90 PCODE3 - mocowanie poprzeczki, obróbka na ramie'
		OPIS			= 'Dodatkowa obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90_MOCOWANIE_DOD'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_T90_ZNAK]=
		<
		NAZWA			= 'Obróbka T90 - znakowanie po³o¿enia na ramie'
		OPIS			= 'Obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90_ZNAKOWANIE'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_O_SKRZYDLE = '_RAMA;_SKRZ'
		>
OBROBKA[OBROBKA_LACZENIE_T90_PAR]=
		<
		NAZWA			= 'Obróbka T90 - obróbka na ramie, mo¿liwoœæ dopisywania zmiennej w wywo³aniu obróbki'
		OPIS			= 'Obróbka do po³¹czeñ profili T90 - operacje na profilu 2'
		KATEGORIA		= 'Po³¹czenia profili - metoda standardowa'
		MAKRO			= '$PCODE2$_T90$CSV_NAME1$'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_POL_T90_FASADA_PROF1]=
		<
		NAZWA				=	'Obróbka po³¹czenia rygiel/s³up - obróbka na ryglu'
		OPIS				=	'Obróbka na profilu do³¹czanym'
		KATEGORIA			=	'Po³¹czenia profili - metoda standardowa'
		MAKRO				=	'$PCODE2$_RYG2'
		DLA_PROFILI			=	'FASADA'

		DODAJ_GDY_PARAMETR	=	'USZCZELKA_RYG_SLUP=0'
		DODAJ_DO_MAKRA		=	'_SUWLIWE'

		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_POL_T90_FASADA_PROF2]=
		<
		NAZWA				=	'Obróbka po³¹czenia rygiel/s³up - obróbka na s³upie'
		OPIS				=	'Obróbka na profilu do którego krêcimy - PCODE3'
		KATEGORIA			=	'Po³¹czenia profili - metoda standardowa'
		MAKRO				=	'$PCODE$_MCW90_#CNC_PAR1#_TYPA'
		DLA_PROFILI			=	'FASADA'
		INFORMACJE_O_STRONIE=	'_A;_B'
		>
OBROBKA[OBROBKA_DODATKOWA]=
		<
		NAZWA				=	'Dodatkowa obróbka na profilu'
		OPIS				=	''
		KATEGORIA			=	'Po³¹czenia profili - metoda standardowa'
		MAKRO				=	'$PCODE$_DODATKOWA'
		DLA_PROFILI			=	'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_MASKOWNICA]=
		<
		NAZWA				=	'Obróbka listewki'
		KATEGORIA			=	'Makra ze zrodel - REYNAERS'
		MAKRO				=	'$PCODE$_MASKOWNICA$CSV_NAME1$'
		DLA_PROFILI			=	'MASKOWNICA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		//WYKONAJ_DLA_RAMY	=	TAK - Wg. Filipa od 17/01 ma to dzia³aæ i obróbka pojawi sie na ramie gdy wywo³am j¹ na skrzydle
		>
OBROBKA[OBROBKA_POLCIOS]=
		<
		NAZWA				=	'Obróbka polcios'
		KATEGORIA			=	'Makra ze zrodel - REYNAERS'
		MAKRO				=	'$PCODE2$_POLCIOS'
		DLA_PROFILI			=	'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU = '_L;_R'
		>
OBROBKA[OBROBKA_LACZENIE_KAT3D]=
		<
		NAZWA			= 'Po³¹czenie L - 3D'
		OPIS			= 'Obróbka do po³¹czenia typu L90 dla profila: $PCODE$'
		KATEGORIA		=	'Makra ze zrodel - REYNAERS'
		MAKRO			= '$PCODE2$_L$CSV_NAME1$'
		DLA_PROFILI		= 'OKNA'
		INFORMACJE_KONIEC_POCZATEK_PROFILU='_L;_R'
		>
	>