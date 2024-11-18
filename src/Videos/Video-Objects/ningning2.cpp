#include "Videos/video-objects.h"

/*
67 x 50
round RGB: 1
*/

namespace {

std::vector< std::vector< std::vector<int> > > video = {{
{11188155,10201000,9869466,10263456,9868959,6579309,7764869,10331829,10660538,9343905,11054782,11318212,
9278881,8226704,9214888,9149611,8952493,7571352,7175048,5856868,3947068,1250069,2302756,2039325,1907740,
2368035,2499621,2301987,1907487,3485746,7958899,9920603,8005922,3743004,3223600,9209216,11380126,11051417,
11577760,11972264,11709608,11512486,11117984,10460055,11117729,11051935,11183521,10789020,11117215,9538698,
10263446,10263446,9342344,9342346,9342092,9473679,9539472,8684419,8026746,9736851,9671058,9802644,9408142,
9605778,9671571,9474192,9276813,
},{11977673,11715269,11122360,10198942,10855592,11051434,9933982,9803681,8554385,8357267,11318211,11713483,
9804967,7107197,5988200,5923178,6384243,6845309,6187122,5001045,1776414,1118487,1776158,2697001,3025965,
3354931,3223345,2433829,3223601,4538432,4539203,6775393,5919055,3683638,6052439,11182491,10919832,11445919,
12038055,11906472,11643816,11052191,10723484,11446436,11643559,10920349,11249314,10722713,10920092,9538953,
9934224,9408137,9013123,9539470,9671314,9605265,9671058,8815749,8947591,9868436,10000023,10000279,9605522,
9671571,9605778,9408399,9605778,
},{10727605,10069673,10727860,10990516,11975093,12171443,11907250,11051433,9867417,8618121,10264232,10068396,
10134446,10858427,7896969,6976123,8621207,5396576,4277321,4276805,1184281,1052695,1249816,2236451,3749688,
4276034,5592666,6251369,7895938,5065034,4999755,7499888,10196116,9998479,11182748,11839907,11313820,11774370,
12235178,11578021,10986142,11446949,11775658,11709095,11446179,10657177,10788763,10197396,9934225,9342344,
9605516,9079172,9144709,9473421,9736851,9802642,9802642,9407886,10131608,10000278,9605521,9342349,9408399,
9342606,9276813,9408399,9737364,
},{12830663,11975613,10792623,9937315,10988201,12633273,12567992,12304052,11579049,10787998,10525086,10657958,
10526891,11252415,9410982,6581367,7963022,8818328,5790562,3750205,855829,1052696,1250071,1973278,3618102,
4867915,5395286,9607583,8159368,4802378,6710117,10657181,11116702,11971496,12169129,11708321,11642527,
12234923,11578022,11117728,11512486,12235695,11840937,11380387,11051422,10328212,10328982,10197653,9737102,
9539723,9868688,9408137,9868431,9868433,10065812,9934227,9342349,10131608,10263194,9802898,9342349,9013384,
9013641,9013641,9474192,9671571,9474192,
},{12304837,12567493,12896197,12896455,11580852,10725796,12238771,12699317,13159352,13159096,12238000,11907761,
11183018,10326941,8881294,6776945,7501957,7042173,4803925,3026227,724759,1316637,1381401,2367779,3354674,
6184034,7763832,8423810,5001551,4671047,9539727,11314597,11379871,12103079,12300714,11576991,11905958,
11906730,11183265,11578022,11972780,12235695,11709352,11446436,10985628,10525078,10394262,10394261,9934224,
10263446,10131860,10066067,10328982,10131603,10197653,10131863,9671312,9868691,9737106,9408140,9144970,
9474192,9737364,9803157,10066329,9803157,9605778,
},{14474973,13159631,12172483,12238528,13093319,11974841,9540241,9738127,11974825,13028022,13423548,12634806,
12568250,11973550,10786203,9930127,9801111,8553355,5987684,3091764,592918,856858,1710879,2763566,3684154,
4276547,5593683,3030309,2172705,5920856,10789021,11314082,12102822,12431787,12168871,11774113,12103594,
11511972,12103853,11972267,12169389,12234925,11774886,11511971,11117213,10854041,10722969,10723226,9868431,
10526618,10329239,10658204,10394775,9737102,10065811,9342091,9737105,9934484,9671312,9276555,9736851,
10132122,10329501,10263708,10066330,9737621,10395294,
},{14145235,14080213,13751505,13159115,12764101,11053742,10329760,7369073,6183256,7565674,9343112,11053984,
12304303,12897207,13093818,12171440,11249066,9734803,7038317,4013122,527383,659482,2237480,3290426,3684928,
2500140,3423031,2635552,3751740,8553090,11117728,11774885,12432300,12695216,12169384,11972006,11577765,
11972524,12103853,12169389,12168876,11905703,11972264,11577763,11315104,11117726,10854554,10657177,10262932,
10658204,10592154,10328982,10131347,10000017,10197653,9868690,9671313,9539726,9605519,9408398,10329245,
10921639,11382447,12303292,12895687,12961224,11711150,
},{14737372,14013907,13290696,13356489,13619404,13093320,13093321,12303547,7039336,4209467,4012603,6579039,
6447451,8421496,11185565,11844267,12239030,11646642,9278356,4672079,395798,395542,1711653,3027513,3816772,
3422780,2961970,3620400,6514016,10394519,11511971,12563888,12761009,12695217,11775142,11840935,12104109,
11906473,11774887,11906217,12037546,12037289,12037545,11446433,11249312,11117726,11183520,10130832,11051935,
10723483,10591640,10197139,9933711,9868432,10000275,9802897,9605519,9605519,10395038,11513779,12698052,
12895687,12369343,12895430,12829637,13092809,12632256,
},{15658990,14737631,13816528,14014162,14671836,13685197,13159109,14146262,11119272,5262668,3420466,8026488,
4670787,3749686,7762538,7368554,8026745,10199454,10726826,6778223,461336,135479,397609,1184793,3290937,
5856603,5395024,7302247,10262161,11445664,12037543,13089716,12761267,12103850,11775399,12038314,11972521,
11840679,11709350,11840680,12037288,11839909,11708581,11512229,11512484,11446692,11051935,10459798,11117728,
10788763,10656920,10130577,9998990,10131090,10065813,10395035,9802641,9736849,11579825,12764102,13356238,
13224652,12566465,12106171,11908535,12040121,12632258,
},{16382456,16185078,15987699,15461610,14803681,13553609,14606042,14146259,13224902,8092282,3816251,9145996,
7763569,3223598,7171430,8092283,3750202,6644837,7764606,5791074,1256023,2248355,2047086,2436673,5330261,
6184539,7301479,11050134,11905443,11840164,12893108,13288123,12498608,12235950,11972778,11972521,11643300,
11906472,12300974,12103081,11905445,11840166,11708582,11840937,11512230,11512486,9209988,11183778,10920349,
10657434,10985372,9998477,10261906,9801869,10000021,10526622,9671312,10329243,11777460,12961480,13158859,
13224653,12632258,12303549,12040121,11974327,12763843,
},{16448248,16448249,16448250,16448250,16382457,15790576,14803681,13948368,14343381,13882321,6843240,13225414,
11184548,5526353,6382945,12434363,3091500,5985365,6052968,3227484,3108023,2391777,2976707,4549026,5332337,
3551800,10457745,12431274,12365994,12300458,13156024,12762037,12696244,12169900,11906728,11972264,12168874,
12497839,12300204,12428449,12685201,12352895,11562352,11040373,11374991,11641760,9472388,11182493,10919836,
10854556,10656407,10064783,9933197,9932943,10197145,10197402,9605519,10921638,12369597,12434879,12435136,
12698052,11776947,11776947,10855845,10790565,11119017,
},{16448248,16448249,16448250,16448250,16448250,16382457,16382457,15856370,14409436,14935266,14342613,14474194,
12632248,11513256,12236724,10196627,2498595,3155498,3681077,3619161,4946875,3632048,2382504,5141421,3422537,
4735814,12365739,12891823,12629166,12826803,12826804,12892597,12432559,11972008,12103081,12168874,12432046,
12299690,13212828,14975367,15565448,15106695,13329254,11288641,9973809,9515313,9255226,8799813,8676708,
10717575,10456202,10261905,10064783,10197141,10460572,9868437,9868437,11447469,11842227,11645106,11579314,
11382189,10987431,10132122,9276813,9605778,10263708,
},{16448248,16448249,16448250,16448250,16448250,16382457,16316664,16185078,16316664,16184822,15790320,14935009,
12630453,9075579,5916492,1903891,1115148,984076,721418,591633,1514026,1118756,1382701,3817296,4341058,
9143171,12694446,12957616,12694961,12694961,12826546,12431790,11971495,11971495,12234411,12168874,12300460,
12690594,14649485,15765911,15964317,15569301,14513527,12471629,11221306,10761526,10170675,8398118,6824230,
10304320,12210265,10443872,10191234,10460315,10394780,10065816,10921125,11908020,11315883,10987176,10658467,
10197915,9671571,9868950,9803157,9868950,10329501,
},{16448248,16448249,16448250,16448250,16448250,16382457,16053492,15329768,15790320,16185078,16053490,14998490,
9005420,3940907,1903637,984077,1246992,1180943,852748,524810,393994,262667,328203,788496,2366242,8681592,
11641502,12234155,11247775,9865864,8352368,8615798,9733765,11181466,12102311,12168361,12102311,13209489,
15238541,15700376,15765397,15501194,14510956,12996173,11877694,11089463,10236211,10040115,8070441,9774896,
13906756,12400456,10052456,10657695,10723746,10394781,10921125,10855332,10131609,10066329,10329501,10066329,
9934743,10000536,9737364,10000536,10395294,
},{16448248,16448249,16448250,16448250,16448250,16382457,16185078,15592941,14935011,14408924,13882323,12691373,
7091778,4464938,2495004,1641237,1904153,1641237,1312272,1181198,1312785,1115920,918285,852748,984333,
2365213,3615022,4536124,4338744,6114897,8484211,9273984,9076093,9733508,11378588,12037033,11904931,13595512,
14974853,14974856,15039875,15037816,14311779,12995915,12206401,10892342,9316909,9317423,9581365,8858161,
13119294,14830173,9985636,10197658,10131352,10328731,10460574,10131351,10000536,10460830,10394779,10000279,
10263195,9934230,9868693,10329501,10263708,
},{16448248,16448249,16448250,16448250,16448250,16185078,16251128,16316665,16251128,15461098,8876409,6439244,
5909561,4990514,3611945,2889762,3087398,2496031,2299165,1838871,1246481,983821,983822,1049358,1115407,
1115148,1115405,1246733,2036249,3154214,7891307,11115676,11312540,10259595,10457230,11510432,12092807,
9517379,10767443,12015713,10636371,10700363,12471119,13061968,12601674,11090747,8398631,7085858,8071468,
6890021,11413301,10561842,9392209,9998737,10130837,10262681,10394781,10197657,10197657,10395036,10329242,
10263195,10263195,9934230,10131866,10132122,10263708,
},{16448248,16448249,16448250,16448250,16448250,16382457,16382457,16382458,16382457,14341334,6438220,4598069,
4467765,4269873,3678251,3284520,3022119,2825252,2627616,2035736,1640467,1903380,2429208,3020829,4204071,
4204326,4138277,3086361,1904147,1837327,1640719,2497057,3942960,4731704,4994619,7427674,9060936,4791846,
3479070,3677990,3218721,4070691,7285553,9451066,10435389,10829117,9712437,7020065,5247767,5510940,9643055,
8987431,9980744,11637381,11311506,11050649,11051678,10920865,10789536,10724000,10592414,10789282,10591903,
10328988,10197915,10395294,10395294,
},{16448248,16448249,16448250,16448250,16382457,16382457,16316665,16316665,16316920,12892347,5188925,4794678,
4270387,4535099,4535099,3416619,2365473,2693923,3876392,5255728,6701371,8476494,9463128,8738893,8737865,
9593944,9462361,7029822,3219232,2952982,4461342,1247502,1838612,1903891,2232342,2495513,2888987,2364186,
2298651,2627616,2232855,3217953,4005669,3347738,4857636,5709861,7220272,5841959,3739925,3936792,7478825,
7348261,10245454,14199960,14332062,13740956,13084056,12493980,12232608,11773086,11116956,10789023,10591901,
10065816,10132122,10395294,9737364,
},{16448248,16448249,16448250,16382457,15790320,15856627,16053492,15461355,15395819,11574433,4138806,4663095,
3677481,3153961,3878196,4536125,3417386,5190452,8410447,11040104,12947068,14131599,13474701,11039336,
8870225,8606283,12945529,11039077,6437946,4265244,3873569,1379343,1575951,1181450,1838868,2036246,2101782,
2298650,2824224,2495771,2364441,2363158,2823965,2496027,2430490,2233114,3612710,2955807,1969940,2758432,
3150361,3346710,6437173,10516587,12818054,13542290,13607569,13739158,13608597,13478298,12821658,12098968,
11903130,10918295,10262936,10000023,9605778,
},{16448249,16448250,16448250,15921906,13882579,11844796,15462126,15395819,14211800,9402493,3482160,4203569,
3743530,2233116,2102045,2431264,4534063,9989732,13803668,14725026,14988454,15317678,13672855,10316643,
6441285,9197396,13535609,14455685,11892076,6963261,2693658,2102550,1509386,1508872,1443849,1444622,2036246,
2429978,3086624,3218210,3218723,2298391,2035733,2693920,1969940,2496029,3482409,1707025,1970198,2430749,
2167833,2628383,2102037,2956063,3219490,3942954,3811112,8150101,8938844,7755347,9333608,12161928,14200993,
14465451,13414823,11707039,10131093,
},{16316920,16316665,16251129,15264232,14015194,14607075,16119544,15395819,14408922,9930632,2955557,4071725,
3153190,2496288,2167838,2036508,4861743,11895670,15054508,15516088,15713722,15910845,13803927,9920342,
6243903,10184031,14391946,15509913,14456198,11826794,7817536,7818042,6502958,7875626,8791595,4200477,
2299673,3612191,6434097,7615284,9191744,7619394,6700605,5845300,3546143,3873053,5647664,2625041,2362127,
2952466,2690578,3087136,1508619,1969427,1904146,1970455,2167835,2036247,2891299,4929335,9991277,13740186,
14727334,14924456,15056302,14925746,14071981,
},{16316919,16185334,16185592,15922164,15790579,16316666,15922164,14738145,14079700,11510948,2823454,3218469,
2627619,2496289,2233632,2693923,4993587,11763310,14790819,15450036,15780027,15845564,14462367,11959660,
11367271,13735818,15447203,15511965,14853263,13537662,10446938,10117964,12353890,11823704,12796487,10366775,
4136736,4007464,8864323,11949651,13329762,13400182,13996686,13800078,12939376,13726063,14120048,12475994,
9188664,8135467,7741994,6495524,4329752,3411218,3083024,4069147,5385258,4794921,3481635,2759712,2628126,
6310218,8084826,8677218,10255733,12097679,12887192,
},{16382458,16382458,16382459,16382716,16448252,16250873,15461870,14738144,14342871,13486278,5126461,1970201,
1970460,1970460,2496290,3153961,3876653,8607824,13737357,15252140,15647927,15582389,14856610,14197136,
14394773,15119010,14722707,14195591,14459020,13472895,11696486,9920077,13076582,14590079,14448234,13319748,
10041662,4728361,7223868,13264485,14381421,14317426,15181213,15255993,15119529,15111828,15635349,15435655,
12540768,9251636,8989234,8398124,7413285,6756639,6428189,6887969,7612201,8338485,7421753,5846322,5058609,
2956578,1575701,1444626,1905432,3352105,4272692,
},{16447993,16447994,16447995,16448251,16448251,16250873,15527662,14672865,13882576,13816525,9669000,1839129,
1313043,1576215,2562339,3154473,2628130,4139051,10515303,14462364,15449777,14198680,13210240,14065807,
15252654,15846335,15317679,13604486,13274491,11563109,11496799,11433313,11497555,14524542,15050381,14309979,
13321287,8795706,5582640,11820377,14841712,14907763,15113876,14466732,15651515,15252911,14790057,15051690,
11891317,8204858,9252665,8989491,8332846,7412772,7018784,7346979,7805988,7609890,8535101,9203307,9140601,
7366247,5983569,4734015,3024169,1774102,1314065,
},{16448248,15987954,15987955,16382711,16118764,15920608,15459544,15196632,15066333,15132386,14275793,5327437,
918800,1116434,2036508,2233628,1707285,1575444,4401709,11765370,14067098,9855319,10710626,12684159,15121068,
15385011,15581878,14131859,12681073,9717058,10573644,13208950,11103057,14261371,15250070,15111051,14959438,
11418176,5844527,9917006,14448495,14974068,14849933,12689813,13742753,15585712,15979953,16111795,13808537,
6967889,4533046,8662842,8661811,7872808,7084834,6690589,7346464,6952734,8004648,8733510,9732484,10131865,
10000023,9802643,7561830,4335148,3614505,
},{12555927,13020075,14340303,13880260,14802387,15921643,14801617,14998997,15525342,15525342,15262171,11314337,
2431777,919054,985104,1444372,1312529,1180942,1115149,4204844,8147792,9332063,5980477,11500146,15117729,
15119264,14395285,13474441,12155248,9714233,13141625,13537147,11234899,14196091,15184277,15778222,14961236,
14238799,7615288,7881537,13791594,14450037,14260625,11703691,11638158,13545635,14861232,15452336,12690320,
7034706,7821913,6304570,8989495,7807786,6822688,6231578,6362907,6297117,7872806,8726313,7677228,8208967,
8670033,7225669,5972778,4660002,9405830,
},{9847112,10969188,11432307,12487305,13150889,13747915,13156802,11051936,11775399,12763063,11973292,10393746,
6906719,3288111,1445397,1049612,1180942,1180943,1246736,1246735,3415586,5782843,8937309,12550522,15313567,
15643041,14920345,14526872,11695210,11495005,14065293,11630948,12288613,14263683,15053205,15446943,14893388,
14892363,9254978,6042418,12675684,14384761,13081230,11045763,11309193,11901586,12954270,13743271,11178377,
6639183,7953754,8344410,7219507,7282984,6429217,6035229,5772828,6034718,8003880,9777202,8923179,7478049,
7018785,6494497,5707549,4591126,4858666,
},{10899025,11563122,11174535,12031641,10188667,9993087,8478563,7361880,7956070,10917524,12367795,10592156,
7763055,8683388,6972002,2892069,2036762,1510419,1378833,1509906,1247246,1773072,5123373,9921372,13603723,
14392462,12748666,11432806,12353388,12224117,9726558,9199182,11896430,13935752,14063236,13592932,14037309,
13317442,8794939,4466985,10968922,13930889,11900554,10914176,10782849,11112071,11901586,11902357,11442320,
7232601,5653826,10650232,7952986,6505028,4926512,4006952,3940646,4200221,7612459,10237239,10039860,8463657,
7282210,7479591,7020325,5707038,5903389,
},{10119015,7948620,6698813,7752272,7489871,7819092,7225669,6634303,7883597,8214104,11907248,10591900,7564648,
10393490,9670282,6641751,6376010,5191480,4470583,3154982,3944497,1970708,1772816,3021083,4861487,5979450,
5452591,5254184,10053976,12880243,7226944,5120803,8404282,11817552,12666955,11218483,11217201,9447470,
5251878,3417125,9197908,11635070,11176576,11505540,11440260,12032652,11769995,11836817,11837074,8022115,
5258557,9072220,10258034,7824728,5785922,3419435,2434085,3417895,6372149,8533815,10171701,9449008,7807526,
7873834,8136749,6429473,5968412,
},{11642018,11246747,10127495,9072497,7359055,6303799,7749957,9656152,7095106,4537148,12960452,9736331,9274494,
10393233,7696749,8812911,7036244,5128508,4931901,6971483,9733759,9141622,8023142,6706257,4795181,3413017,
1640716,1443081,3415582,11500652,12879214,5709858,8068392,11744316,11883086,10835533,10441544,5908775,
2693659,2957602,7295561,11241335,10716026,11242369,12097932,12492686,11704197,12691867,11639178,10126198,
4602682,7760226,5391679,3748142,3288362,2827813,1973279,5193269,8938827,8279881,7816255,7352882,8529964,
8398377,8793391,7939883,7280933,
},{12103083,12629427,12826806,12103083,12103596,11707555,11374737,6768457,2365981,5328721,11973554,7169890,
8156272,7367788,5524811,9337966,9338995,5524551,5327431,9537151,11378836,11510423,11378837,11378580,10917516,
10455939,7627614,3022367,1444108,5849662,14527378,12418667,7684411,12681583,14063487,11167315,8997692,
7026480,3218717,2694431,4600624,10912627,10584439,11242112,12031624,12690064,13085594,14138540,12362385,
10060403,5853000,4340799,2565416,2302244,2104609,2038815,2761508,7033927,10253653,10187350,7689802,5126968,
5518388,6630189,8203053,8596270,8003369,
},{10853016,12497841,13418943,13484993,13748679,13024956,7169895,2038557,1511701,2235938,4998728,6049612,
6774107,5262669,6445651,10060915,9995377,7957601,7760227,10456965,11378836,11379093,11247507,11378836,
11509395,11048588,10785415,7232855,3022623,2890782,12096383,15117971,14195585,14196098,13603706,12484458,
9919049,7159091,3415580,2628637,3548710,9795693,10585467,11570818,11767939,12295309,12954013,12033424,
11902095,10454905,8350816,3025452,2170915,2433059,2695460,4207150,10387811,7691857,8019793,8150352,6769989,
7360319,6702646,5914420,7092790,7743787,7085348,
},{11774375,13353150,14274252,14340558,10985374,4999240,1709850,1314835,1248529,1314322,2037787,3877419,
4404534,5129025,7760738,8221034,7234137,6051151,7431261,9930621,11313300,11313300,11379092,11378578,11509139,
10851207,11180427,10259326,9008748,7035478,8283487,15845556,15450025,14593687,13406070,11563612,8671040,
6567727,3087130,2365723,2825759,6573899,10190711,12688267,12031624,11901069,12296599,12231577,11507854,
8416356,4274230,2170659,2367781,3221030,4534574,7820616,10845540,7626321,7363664,7493967,5915968,5060917,
5453872,4796458,5057832,6234914,6428701,
},{12432561,14208459,14142666,9669257,3683380,1447191,1315093,1182738,1248529,1774615,2629410,3286825,4469558,
4864825,5918792,6182224,6182481,4669761,7234398,9667705,11576215,11444630,11707547,11444374,11509138,
10916999,10851719,10522754,10390654,10259329,9467248,16046026,16046281,15978687,14395534,10579030,6172711,
3480601,1839378,2168600,2562588,5585466,10056557,13016975,12492176,11901071,11835540,9074548,8548460,
6510163,3288623,2499109,2498851,3483430,6309437,9398100,8282450,7428686,8480341,9333847,6113087,4404530,
4534573,5649197,6566443,6102815,5838108,
},{14340045,13879492,7893103,2499365,1512471,1446935,1315349,1380627,1511442,2759452,3876395,4862777,4732988,
4734523,5063229,3552305,2894636,3223343,8287084,10193534,12102818,11181461,11510684,11181457,11048585,
10588036,10719876,10588290,10194045,10194049,11105652,15914957,16114131,16112331,14858398,9200724,1771787,
1969166,1511185,2168600,2431257,4795438,9723482,12686467,11835275,10652808,7823458,6114382,7364961,4341054,
3616303,3155237,2563614,3023396,5390651,8413521,8478541,7624779,7165516,8545105,6901570,4995381,6831923,
8933444,7548460,6692641,5575965,
},{13550786,6050642,1578264,1380887,1380887,1907485,3223345,4341824,6709084,7759971,5982539,5389634,4207926,
4012342,3683125,2302502,1118227,4012343,9865856,10390659,12037799,10984599,11248026,10589063,10391429,
10457478,10589060,10522753,10324861,10456450,12083040,15254457,16311511,16112844,15319207,10844772,984839,
852741,787975,1773586,2102807,4268323,9719115,11436406,9402741,4538178,4404279,6047305,4997185,3551538,
4076083,3154466,3482915,3614245,5915454,6770503,10319709,10189150,7297098,8347725,10385498,7030588,8470581,
8928566,7940909,6364451,6364454,
},{4011833,1380885,1381142,1315095,1249816,2302500,3486516,6511964,10853271,12761008,11576735,8682104,4735554,
2894635,2893610,1645094,2037797,5853781,9602945,9997187,11642527,10984600,11049879,10457735,10128509,
10523270,10785670,10456447,9996412,10587780,11685713,14592421,16443102,16178380,15254694,11567976,2362380,
1837580,1313034,1575950,1838609,2954777,8794934,7356998,4075574,2565676,2959406,3879220,3354161,2959402,
3615531,2694685,2760222,3220516,4798517,5390139,7033157,13346693,10913644,7099463,9794388,10385235,7683380,
8335409,7283240,6560290,5118755,
},{1249300,1183763,1183763,1512730,921108,723474,1644571,3749431,6906978,8551543,9735307,10456716,6244937,
6312015,7759981,1250075,1906726,4537672,3814970,5064777,8748668,9866892,10787477,10589066,10456963,10391685,
10193789,10259324,9996669,10588037,11817045,13864077,16443102,16309967,15385768,12751734,6699827,3807770,
2362640,1837838,1838609,1707023,4789790,4855840,3349024,3024170,4536637,3485232,2696229,2498592,3154723,
4402986,5520693,5126452,6310465,6703418,7162942,8939608,9796454,7823438,6442303,5518638,7351594,7152164,
6757153,6563111,5718074,
},{1183763,1117970,986129,855059,526608,921109,1644572,1447448,1907999,2697258,3552053,6835529,9134171,8155251,
7038568,2695974,1118233,3549484,1906201,591886,1974309,3289397,5459793,7366498,9799802,10325892,10194559,
10062972,10128767,10326149,11427683,12543850,16311002,16442068,15912632,15054491,13212806,11042416,8542800,
5518898,2627096,1509904,2034706,2952982,3478040,3282973,4861749,4863543,4469550,4271656,5060144,5520180,
5060145,5520699,7296334,8610644,8347210,5127218,5194555,5785406,4271660,6893103,6955812,6231581,6824230,
8740433,8876380,
},{1117970,1381142,1973279,2433572,2170914,2038815,1709592,1907741,2170657,2302244,1973279,1380630,2761252,
4079172,6710365,5127995,987673,1381661,986903,1446425,591374,197129,657933,3091243,8287081,9931390,10194559,
9931644,10129026,10392457,10454403,11492962,15320512,16309457,16110016,16107958,16042933,15582127,14726306,
13542290,12029825,9531238,6901063,4731697,3350561,2626326,2495769,3020314,4071971,3481634,2562076,1838611,
2036248,2167832,2298646,5126712,4995378,3221027,3090215,5784902,8011842,7153449,5771547,5968669,7486787,
8349534,10191725,
},{1446937,2104865,2894379,3946295,5788241,9866631,10261389,6972256,3486515,3091503,2104608,2037273,4402734,
1315353,658965,1382947,330004,461847,198418,197903,5255981,7753028,3679776,3419692,7695204,9865599,10194560,
9997438,10260870,10458253,9997961,10062983,12228243,15256512,15781310,16109500,16240830,16175293,16108988,
15846072,15385523,14924972,14464164,13872283,13280406,12951701,12754579,12097163,11044733,9598062,7625048,
4271406,2757659,2889243,2626842,1838866,1576977,1839894,3285029,4661027,5117468,4459798,5968159,6886692,
6956336,6569021,7758422,
},{2104863,2631207,3289135,4736065,8156016,11181977,12103334,11511712,11183520,8091251,5524809,2498851,3023911,
2104353,658709,526354,723731,461331,264211,1446424,7621182,10973538,9198669,6310728,6643035,9404795,10523783,
10392454,10392456,10260874,9932167,9735559,9932681,11706007,13348257,14532011,15321270,15452855,15650491,
15782079,15782338,15782082,15583932,15517879,15320244,15056815,14859436,14662312,14596005,14332578,13872286,
12951701,10254706,7159871,6235433,5516334,4401194,2297109,2363672,2100757,2165266,2557713,3279123,4132119,
5181467,5706527,6364452,
},{2762793,3289137,4209980,6577497,9800324,11576477,10787733,9538436,9078145,7235943,3420463,3288365,2565159,
3355446,2827817,4337200,4799546,3814965,2894122,5851200,10186590,11237737,9200471,6772822,6972257,9536894,
10326407,10524042,10392713,10063494,9735045,9867403,9406337,9010807,9075058,10849923,12362647,13936284,
14595753,15058359,15322559,15519682,15650754,15651010,15650753,15584447,15452604,15320759,15254450,14991534,
14859435,14661800,14069665,12029572,8146508,5053985,4462362,3871256,3805721,4133917,3412504,2296850,2233112,
2166549,2231057,2033421,3280148,
},{3091501,3683381,5524812,8616308,11247770,12037542,9209217,9341059,8090738,6971742,6311754,3484972,2894637,
4604738,6706769,6705737,7497309,7103066,6774100,10125940,8547430,10126203,8679273,6182230,7037793,9536639,
10063750,10392201,10326408,9866115,9669251,9735304,9339774,9208187,9010807,9668220,9667965,10386297,10446182,
10317421,12888737,14730169,15255999,15322303,15453632,15453376,15256254,15255739,15321017,15254965,15254963,
15188657,14990507,14397601,12620681,7097159,3022367,2693403,3741726,6495781,6298657,5117214,3609883,2888729,
2298393,1641235,1247502,
},{4077625,5261642,8155502,10392461,11905700,12037288,6775134,5262666,6381148,9140851,9393734,6638148,2960949,
3749945,6181971,4932418,6116434,7563362,7628639,10191472,8087646,8550517,8879739,6643549,7827308,9339516,
10129286,10326408,10260872,9866115,9275007,9077372,9142394,8945272,8748405,9406334,8879222,8813686,8811117,
8942703,9734016,10260101,12298658,13876402,14664887,14992825,14926775,14992567,15123897,15189689,15255734,
15255734,15255220,15056044,14659233,12158588,3285795,2957603,3087391,5315362,6757924,6888998,5839136,
4526104,3672852,4133146,3937307,
},{5196104,7563624,10062725,11576477,12629423,11642786,10458256,11248285,9670539,6249564,6244933,4535604,
1317413,987415,789008,1446425,1775388,2368293,6051919,8614243,6838868,6709855,9275268,8485754,8485495,
9077116,9931910,10326410,10589582,10458255,9274750,8945786,8747892,8353135,8748407,9472387,8747893,8551028,
9011065,9471359,9208187,9602945,9997704,10261390,11707807,13416368,14466740,14597810,14663602,14926774,
15058359,15058360,15189945,15057075,14462111,11501944,3483687,2300443,2234650,2758425,5183521,6495011,
6625824,6888228,6429221,3938335,4005156,
},{5129276,7431259,9010290,11707800,10326922,9998217,11116700,10590613,9473677,4473666,7431519,5262416,3159372,
3288892,4995644,6703176,5126460,789779,1644829,4996923,4143421,6975363,9275267,8683131,8222579,9274495,
10063495,10392458,10392458,10392206,8814200,8879993,8813685,7958890,8551284,9406337,8813686,8353649,8747893,
9010808,9537152,9997703,9931910,10129289,10853013,10984600,12101540,13218473,13677993,13743528,13743272,
13809065,14138029,14203051,12492435,11641243,9735562,4011830,2037784,1972248,2561817,5249569,6953761,
7085092,6232612,3152672,3615788,
},{2630176,3222052,4340272,8615007,9338986,9931128,9865853,8222063,8157044,6971737,7563883,5396085,1711666,
856088,1185572,1251114,2764092,6710114,6118238,3157810,1645611,6647175,9341061,9208961,8353908,9339775,
10129288,10458249,9997443,9800068,8551284,8485492,8550514,8024942,8485492,9142394,8419699,8287856,8747893,
8747636,9471359,9866630,10392203,10063238,10392718,10721942,10919579,11181979,11510427,11839646,11904671,
11444377,9931651,11247768,10327955,11315364,12367795,10394263,4998724,2892579,2826787,3218720,6494754,
6953765,7348008,5512997,4597802,
},{1118484,1052690,1447446,2630689,3551274,4077361,4669753,6379857,7168862,7365983,4342881,3161982,2107723,
1119786,1053474,658454,7632508,11644590,9013127,7236716,6117983,6908526,8486265,7630956,6511962,8551286,
10195338,9997957,9602943,9536895,8221805,8353649,8090733,8090991,8814199,8879222,8222063,8484722,8813430,
8616306,8945015,9931911,10063496,9603202,9931910,10589840,10525073,10787732,10985112,10985369,11708837,
11380128,9868431,9473930,10197654,11381671,12170930,12302772,10459798,6906977,3550766,2892837,4463136,
6888742,7348264,7086118,5773859,
},{1513241,1315863,1184277,1315864,1381400,1315863,2894380,6774365,6971226,6576469,5000556,3228034,4147561,
3159624,724249,1118745,6316130,5592149,6118235,10724000,9801356,7499630,6512991,5657682,3749688,6840927,
9472129,9735043,9668480,9405052,7892585,8419445,7433063,8814458,8945785,8681843,8090734,8484979,8682613,
8814198,9274493,10063239,9931653,9800323,10194825,11509908,9274489,9998730,10590353,11182491,11379873,
11182491,11579049,10789790,9539723,10855840,12303029,12762809,11908014,11710635,9341831,5656911,4537405,
3875111,3807260,6430246,6429735,
},}};

std::vector< std::vector<uint8_t> > videoBuffer = {};

}


VideoInfo ningning2(30, 10, &::video, 160, 120);