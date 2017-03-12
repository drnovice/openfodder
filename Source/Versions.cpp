/*
 *  Cannon Fodder
 *  ------------------------
 *
 *  Copyright (C) 2008-2017 Robert Crossfield
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "stdafx.hpp"

const sFile mDosFiles[] = {
	{ "CF_ENG.DAT", "EEB82D5A6B14E7E59C8F7B5169BFCD55" },
	{ 0 }
};

const sFile mDos2Files[] = {
	{ "CF_ENG.DAT",		"8A3EB9B9F134B2997E6534D4C39B23D6" },
	{ "BIRD.SMP",		"EFE57BF26BBA0C7AC35720EB86AE37EA" },
	{ "DIE1.SMP",		"124EFA03F13669D59EB03F1812A71624" },
	{ "DIE2.SMP",		"902E437B8257231D1494535170A9ED22" },
	{ "DIE3.SMP",		"4426AE305E6908FD6A933A3522681CEC" },
	{ "DUCK.SMP",		"331F9DA882304EC428DD84051B7EA003" },
	{ "ENGINE.SMP",		"AB3EB80B15DF9AD87FC6AB23E5C8ADAF" },
	{ "EXPLOSN.SMP",	"18151D71549006032F3099EC1457699C" },
	{ "GAMEOVER.AMF",	"0AA5D2C3849D9522C54F24B4900755CA" },
	{ "GRENADE.SMP",	"3CA15373E824CEF8622216B2B6835C26" },
	{ "GUN.SMP",		"1312B6A5D43BF1D3137CD29D5CE5403A" },
	{ "HELI.SMP",		"26E2FAE3C85E728EDFC94B5CF9EA98C0" },
	{ "HELIANIM.AMF",	"C70228BF18B4789796132E2B7B5676C7" },
	{ "LOADER.AMF",		"23BBA2B5C1863488071515ED0E7B13B1" },
	{ "MENU.AMF",		"9C58F6A8E4C79388994C34B6155E2FBA" },
	{ "MGUN.SMP",		"16688E86D89D80F9B5F956BE9FC63C65" },
	{ "MISSILE.SMP",	"C7625E6E1A6FEA368A104646390AB243" },
	{ "ROOK.SMP",		"16233C3D4D205D32720A3F65A224190F" },
	{ "SHEEP.SMP",		"99D397E27FCACD3EF7D0ABC42233A558" },
	{ "TITLE.AMF",		"7831A09310004BB0F2F6754BA52D0AD5" },
	{ "WINLEVEL.AMF",	"1E61F47CE71D24828F2A1E1656786978" },
	{ "WINZONE.AMF",	"B9333DBB4BD65AEF6E3BA801D4FDABED" },
	{ 0 }
};

const sFile mAmigaFiles[] = {
	{ "1.RAW", "2F00447802B86510784ECC8D1134C942" },
	{ "2.RAW", "540BA4FAEB4F8CE75391EF4ED2CDBA6A" },
	{ "3.RAW", "4533919895685A4AE9D0A6D6E0DEE2DF" },
	{ "4.RAW", "4345942CFF1477A075024F1E39C4DE9D" },
	{ "5.RAW", "2FE63C2D4607BE2EDC59AA33E6A79678" },
	{ "6.RAW", "CB9F7DF63AF62943F3C54A43A26BEB21" },
	{ "7.RAW", "9DA3438B683276274941720CFD949053" },
	{ "8.RAW", "E55133FF1B7D53D0D0FE52DC3D1D907E" },
	{ "CFTITLE.RAW", "0BDEBDC8A9693C289A2EB1C8D5CA63E9" },
	{ "desarmy.lbm", "6E20EC4F2361EC5E2AF1AD7801607B90" },
	{ "desbase.bht", "1ADDFEE98A6CC1D949F62433EE2BBDEE" },
	{ "DESBASE.BLK", "89AEA1251756F2D0AB770B71A998E63D" },
	{ "desbase.hit", "1B90B2C0213541AB2A7828C3EE033D96" },
	{ "DESBASE.INS", "F786A62F8050FAD8F3D7583FC7D6B7EE" },
	{ "desbase.pal", "0EFBECDB69D7FF6F95E147B6C38E5607" },
	{ "DESBASE.SNG", "83541523FFD2AD12AFD7F98E53D4203A" },
	{ "desbase.swp", "D63F1CE753077B74A5F543DE8CC37209" },
	{ "descopt.lbm", "C51CB1A3AD430D309B389C92839B63CA" },
	{ "desfgn2.pl8", "AAB7E80C2F38D183081224070CA5D596" },
	{ "desfgnd.pl8", "A343A151C4B644751BEA4A46DA9E1E95" },
	{ "desheli.pal", "21913E3B4F89DC81CDA083A0FAFD86B3" },
	{ "desmid.pl8", "EE7745F6B5711B8EF7D653400C13AA1F" },
	{ "desplay.lbm", "6976107F99E8509C6569DCE432C55472" },
	{ "dessky.pl8", "784C1CBDD7BF70B770B0A5857EF4F7B6" },
	{ "dessub0.bht", "6FBF3782A8A16DECBAF3E34ECA5C6701" },
	{ "DESSUB0.BLK", "C1B808192E53C314980C4CF03F1196FA" },
	{ "dessub0.hit", "02079C848FB86EBFA87FC621A1BAF20D" },
	{ "dessub0.swp", "3659C67526E293D2F134234B53069244" },
	{ "font.pl8", "20331E3A2140B307F7749207F7A7B073" },
	{ "FONT.RAW", "DF00FE92FA66EF15FDFB66A66110520D" },
	{ "grave32.pal", "5DD21FA5759C74D26363BAB1CE08321D" },
	{ "hills.lbm", "1411AACCEC4B4605CE664D18C0EB738D" },
	{ "icearmy.lbm", "D998F6677275711FD56C0027504F8BCF" },
	{ "icebase.bht", "C896E00F924B40780094202F7435D99A" },
	{ "ICEBASE.BLK", "EEDF2742BA789E29E23A0F00D749164A" },
	{ "icebase.hit", "DC376A162D23E763AE308D1EA877860F" },
	{ "ICEBASE.INS", "A98080C06B186461FAEED944E540CEFE" },
	{ "icebase.pal", "7EA341E95E1974422106E040F20F9DF2" },
	{ "ICEBASE.SNG", "BC82E70E22DE7A66448AA5CA852A31D5" },
	{ "icebase.swp", "49BAB52FC9F634ED0163FB17CD9EF027" },
	{ "icecopt.lbm", "408D680145CB92BD9D851462D31BC1FE" },
	{ "icefgn2.pl8", "996BB60A8D8962C81A3D5237F1DA8C1B" },
	{ "icefgnd.pl8", "EF37E499906F6C33C601A4F5C598079E" },
	{ "iceheli.pal", "2D30AA172BF7525053ADF1702D614B2C" },
	{ "icemid.pl8", "6ABCCDE1D22965D54612EA18B2B664D9" },
	{ "iceplay.lbm", "D07952805584A1195049E58C6CB8A948" },
	{ "icesky.pl8", "AADBAB45A7878D40AB427E2DA89BBE29" },
	{ "icesub0.bht", "7DDD2F85761C8D243E9737FAAE31A234" },
	{ "ICESUB0.BLK", "4234FCFACDEFA50A5F76BC60BC39E7BC" },
	{ "icesub0.hit", "C54F4B86420271D5B4D3013700EA0C44" },
	{ "icesub0.swp", "1459837D4F3D5E96209F7F781988B854" },
	{ "intarmy.lbm", "2782EC87708BEC4CB3C8E552428FB157" },
	{ "intbase.bht", "78009ED2010DC94E18316B1486A916C6" },
	{ "INTBASE.BLK", "627CCC83737AAE16AF5353BA5556F799" },
	{ "intbase.hit", "2D899A1689858558C16596F48AAADB64" },
	{ "INTBASE.INS", "5639D17E6724488BA77E24DCC3BE869A" },
	{ "intbase.pal", "F7ECD7AFDFF722214BD3361386279C89" },
	{ "INTBASE.SNG", "B49AFDA5EE1AA0DEB106DC7CD8D247BA" },
	{ "intbase.swp", "676739A5A800B24951677850DE407052" },
	{ "intcopt.lbm", "4A9860049923AF09FEC0932592E976F2" },
	{ "intfgn2.pl8", "6E6DE3D59C8DD0D63E671591A20F6804" },
	{ "intfgnd.pl8", "742DC99D7D1B901D46AD7DC868907776" },
	{ "intheli.pal", "21913E3B4F89DC81CDA083A0FAFD86B3" },
	{ "intmid.pl8", "46F0F1CD0E01DFFAF9D2AE245D3374BB" },
	{ "intplay.lbm", "9C9F0516DF10164B995B171FD777350F" },
	{ "intsky.pl8", "9ECB00FD609A624D449C7EB99301BBFC" },
	{ "intsub0.bht", "45621B2A6EB37A2907767D1D5903DEC9" },
	{ "INTSUB0.BLK", "D8E8F106648D1D3B7BDF6D1CA3753905" },
	{ "intsub0.hit", "C44E7E4BFBF2E94655B5900A05E54DFC" },
	{ "intsub0.swp", "CB1DBA7D0009538701C00F50CAA0A2D8" },
	{ "JON.INS", "B4E1B5C2980A4DC1A3A91E7F8C68C68F" },
	{ "JON.SNG", "34C83D7DD0F429EB8BF436C1037DD6A9" },
	{ "junarmy.lbm", "F67D7D3C2B96A588BFB0AAE33FE1E186" },
	{ "junbase.bht", "91AE45498B1E72AB8C147890CCFA1F15" },
	{ "JUNBASE.BLK", "B1023928A64C59D8F49CAF7E28A17624" },
	{ "junbase.hit", "D49E276228C93539C12857D18568CFAC" },
	{ "JUNBASE.INS", "BBF9C7852AB0EF958496642B15D39BB1" },
	{ "junbase.pal", "27DA36F06898A9549A1E4AF4CAC4D8B7" },
	{ "JUNBASE.SNG", "B96327898322E13315EA9B1BFCE4D527" },
	{ "junbase.swp", "D07A8EA9D22C37F7252993AA9B941427" },
	{ "juncopt.lbm", "44BE34CE48631669760CE3439C44DBF8" },
	{ "junfgn2.pl8", "93DDAFDE77A0A69420FDF690EB19AFE8" },
	{ "junfgnd.pl8", "6341A7652D5C9EF689013DC429DEAD74" },
	{ "junheli.pal", "159FE0477094B6DE51D71A977A5E4AED" },
	{ "junmid.pl8", "19F1ACED260C1E6F481AD064AF7CC31F" },
	{ "junplay.lbm", "27EC1DEB8BC5B6FE4CC47144DC344E60" },
	{ "junsky.pl8", "CC35E8634CB2F72FB3220F0378FA41AA" },
	{ "junsub0.bht", "4803076EB9656961B23DDDD31D9683BC" },
	{ "JUNSUB0.BLK", "17DAA7C0CDCAFC5095B1118EBBAE6963" },
	{ "junsub0.hit", "AB61F44685F9C025C27422819C0F46D4" },
	{ "junsub0.swp", "AE0181B3EE4997C67F89B5A6E1FA685B" },
	{ "junsub1.bht", "E4373BFC0E241714C61FA77DAA9E5A19" },
	{ "JUNSUB1.BLK", "BA57F9ECDEB89DD3E27588BA2D1D540F" },
	{ "junsub1.hit", "7C7603BD2ADFFC57F514A504D1867FD1" },
	{ "junsub1.swp", "F4804ABDD08599E1AFEA6E14ED30863C" },
	{ "mapm1.map", "87CFEDC0E35228FE3FC6A8115714671F" },
	{ "mapm1.spt", "9363F391620A6CE069F72BA36BB56C83" },
	{ "mapm10.map", "0249D6621BE91724EA42B5009649A927" },
	{ "mapm10.spt", "67B47EA4940B3A992A4B88EE243FF477" },
	{ "mapm11.map", "9AACDF92D838AFDEF2A6D0E84AC63171" },
	{ "mapm11.spt", "81C801E7F15C0A4A5069E320049D7598" },
	{ "mapm12.map", "30F13EFB9491BC2C87FEB933ED4E1C32" },
	{ "mapm12.spt", "EA6CB4B5455796F7C0FD7B98E57BA8A5" },
	{ "mapm13.map", "83DF412981AB0FAE7E81D5540E3BF9BB" },
	{ "mapm13.spt", "1D58DA489B23A90CCE59F2223112304C" },
	{ "mapm14.map", "588976C8C9DD6B1E230FFE9EDD483422" },
	{ "mapm14.spt", "6927DF8B1857C592D92ECA3C6C404895" },
	{ "mapm15.map", "08D6F085A46275346ED368CE85A3ABB5" },
	{ "mapm15.spt", "30A540544787A4E7316550CAE2DAEBE4" },
	{ "mapm16.map", "9DE544AB20328243D5D7BE377B22ADCF" },
	{ "mapm16.spt", "1C0F82079ED39EB5FAA5239DE9336437" },
	{ "mapm17.map", "56BC8A7A24B0E40B997E457392DF7557" },
	{ "mapm17.spt", "9FBEF790F49274752C1E0DD4A7865769" },
	{ "mapm18.map", "83BF5512CC08EEA27F960D181CB547F7" },
	{ "mapm18.spt", "F1A3307D7312D23F32DD260A0A660C46" },
	{ "mapm19.map", "75FA184B8C04CB62E7B3A266E7ED0C2D" },
	{ "mapm19.spt", "F1B55CCDDC3FE33CCAE6B584FC395E5D" },
	{ "mapm2.map", "BFD5C98299D6BCAD35C05EDCC21E2B6A" },
	{ "mapm2.spt", "85E5488C763E1F27F03BA5222EA6B0ED" },
	{ "mapm20.map", "26E8414699A942DD4BA570C7E057DCCA" },
	{ "mapm20.spt", "1AFD66AA9BFBB67D77C0D516E07979BE" },
	{ "mapm21.map", "E9D88E934E586C8F04F92DE63E0FD217" },
	{ "mapm21.spt", "1557B44DCCC70573CE264B299485BF17" },
	{ "mapm22.map", "FD8D578D2B6707CA85336A99D4CBB961" },
	{ "mapm22.spt", "D9636125D5C38022D98EB3522D4A30CE" },
	{ "mapm23.map", "76E47CDF17AD4E7F897CCC9F06302BD9" },
	{ "mapm23.spt", "50465FF35F7C9AE530DAF6080D3A4EDC" },
	{ "mapm24.map", "F42697404B27F5718C6E11792293CEFD" },
	{ "mapm24.spt", "FCE2966FE1D8BA8865F2DCA709481E24" },
	{ "mapm25.map", "E3397B21A1F2B89AC939589AC51CCC8C" },
	{ "mapm25.spt", "A614496AB7AE932B5DD2756466CAB415" },
	{ "mapm26.map", "237E2D5DA9097CD9DF44DAF4B2D9E7D7" },
	{ "mapm26.spt", "3BFB3A08366B10A4C23AD8054B4CCDD9" },
	{ "mapm27.map", "13500D082D6674EF8AD62380C7F37EFD" },
	{ "mapm27.spt", "3BCE6C34EE3DE7CDCA1D49BA9AC181DF" },
	{ "mapm28.map", "E30CA20BDBCCD041B5D648AA25F90D2B" },
	{ "mapm28.spt", "05CCCE033154982B3820FE907B4DF4A2" },
	{ "mapm29.map", "249F80C064DA3C749529775C1B6DE6DB" },
	{ "mapm29.spt", "3C762E5286BA3FAF845E29DB455A29E0" },
	{ "mapm3.map", "0338E1163FC61D5033B1730DED2C7E9A" },
	{ "mapm3.spt", "B70E042F02CF17986223E935BEEFE698" },
	{ "mapm30.map", "0818B093C13C14D1A08D8A22EBA12DEA" },
	{ "mapm30.spt", "A59AA6A87F8A2C25176AC4CF7A952C56" },
	{ "mapm31.map", "A15CAB7A4429B45550B5F807BEE17139" },
	{ "mapm31.spt", "FBFD9BF5CA7FE1B353F300739E4B89D8" },
	{ "mapm32.map", "A0FEEA41BCDD44502ACE29B0D3B678D1" },
	{ "mapm32.spt", "87E83FBC6B72846666AB61246D42D790" },
	{ "mapm33.map", "44AC7495D20AB2F9F71E7AA641DD2763" },
	{ "mapm33.spt", "AB9EF2E58F0D052AAEBF09B8D9FC4555" },
	{ "mapm34.map", "1BF79B2F821365586FD3A0EF6FAE8746" },
	{ "mapm34.spt", "54ADA3E4D5B8519D277D5C0DA1988B0D" },
	{ "mapm35.map", "47B9D9400454BA2EC101AFE3D2E6C158" },
	{ "mapm35.spt", "C94BDE0F65082BAA0E398CECCBDC17DA" },
	{ "mapm36.map", "22617DDB6184D707FC51BC24B4BDFCAB" },
	{ "mapm36.spt", "856B5F249B2B907077C326EEAA31C072" },
	{ "mapm37.map", "1D2F6C95F87CC7F4ECFF4DEEBEA8464E" },
	{ "mapm37.spt", "F95CF8C30BEEEAC5D086D85E1319D40E" },
	{ "mapm38.map", "F973679325C690160E0688049279AEB0" },
	{ "mapm38.spt", "D68BCC332C9533342CAC59987E80069B" },
	{ "mapm39.map", "1B8FFE6130055C7F8C1A923E171D1BD9" },
	{ "mapm39.spt", "C8C1D44B54438B1C53598FAC6A875C70" },
	{ "mapm4.map", "888FA41C0108A002CA689C17E5824D68" },
	{ "mapm4.spt", "FB66076B935AA5790357E6B826C63D05" },
	{ "mapm40.map", "6F3C062295A7CFFE37D8F5ADCC192BBE" },
	{ "mapm40.spt", "226DFF3CB2B6356BF89EA757FEE18DF7" },
	{ "mapm41.map", "96DDC8D0B6D3CD82754D15337F1A8371" },
	{ "mapm41.spt", "7F80ABF519A9212B0299D41D11270FE9" },
	{ "mapm42.map", "26FFF77E96DF989EBEE95396A322AEEB" },
	{ "mapm42.spt", "2FB8016EE02ED9D0E2BD96AAB2201854" },
	{ "mapm43.map", "04E3FCC880BA41EF3D661F04BF0BA3B2" },
	{ "mapm43.spt", "05DFAD6C1AA019EB72BFAE876DEED236" },
	{ "mapm44.map", "70AFD59D7E2D04D019D059F684F33CB8" },
	{ "mapm44.spt", "7D2E1A248DC43D297F5350B7A75526F8" },
	{ "mapm45.map", "3550423155A252C0B0DF348B66E84962" },
	{ "mapm45.spt", "72C300FE0049340BEF058F29C7DE0365" },
	{ "mapm46.map", "8E4CB53449163B4C035D372F4AB0FE53" },
	{ "mapm46.spt", "48DEAA4F058862025BC522BEF8877A4E" },
	{ "mapm47.map", "099A09E90331A674AE2CC17D4A14B127" },
	{ "mapm47.spt", "6BBCFBE72B4983C53A262096F93036BE" },
	{ "mapm48.map", "0DE73FC8B2FC6E1F9C7802FC4616674C" },
	{ "mapm48.spt", "33924B560BF0A23FF6524857DAFA83D1" },
	{ "mapm49.map", "2E3969EF5B1F7AFBB753A7EB31541318" },
	{ "mapm49.spt", "D3FBE2D7546DBEA57D9E442C5A23A397" },
	{ "mapm5.map", "5E8A8B47D967D9C88C04641B1D8CBCEC" },
	{ "mapm5.spt", "CF2B3091B2E53042BA18F7AEFEA6E77E" },
	{ "mapm50.map", "AEF2A6B134C3DC589FCE6467D5BEE613" },
	{ "mapm50.spt", "7D336918CEB91D7DBC46A7580B85DF4F" },
	{ "mapm51.map", "3070E54E04C3FAE83767C3C72C39AB6D" },
	{ "mapm51.spt", "6A463306D48DE011359CAE0184451628" },
	{ "mapm52.map", "58FC41C65DBDC2F2686E3DBA92E4CBE1" },
	{ "mapm52.spt", "39149BC04E1CD7E7A58C16ED5D7154FC" },
	{ "mapm53.map", "80FF3FE22C0280634F25273938C4227E" },
	{ "mapm53.spt", "4096775C0AE5BEF068A50BDE33B1B555" },
	{ "mapm54.map", "DCB661ADBBF868C9557ABAABB523B007" },
	{ "mapm54.spt", "0D2FEC9E890584B6B0B42A7AC7A0003D" },
	{ "mapm55.map", "2D67F46A4BA41902CFC787C552DB554B" },
	{ "mapm55.spt", "2F94BFF8B9F0227AA611367710342C0F" },
	{ "mapm56.map", "9DC185057091C9E611E4C461625DAC20" },
	{ "mapm56.spt", "8CD2D33B779A8226DBAFBB2FEA1C5FE5" },
	{ "mapm57.map", "9DFF279E5904D5CFF201C7CB39A7E697" },
	{ "mapm57.spt", "1FB22FF561DEE32CAC432D67BE9368B1" },
	{ "mapm58.map", "334E8C2C1EAE6E99D29213F27C19706A" },
	{ "mapm58.spt", "B711D11EA40FEB4C7C64B1D92E2732EF" },
	{ "mapm59.map", "1826DE04606F2257DED0F5B009BC0FC9" },
	{ "mapm59.spt", "CC87EC1B714B13C8DFA716F29EDF9088" },
	{ "mapm6.map", "C2DC1784ADE8A3818FB031159E395014" },
	{ "mapm6.spt", "EA45BD73E655E982C7B12E11A4CE7507" },
	{ "mapm60.map", "5764F806A19670734699534B3DCD42E7" },
	{ "mapm60.spt", "51E1447FDDA120C414F9432C709E8460" },
	{ "mapm61.map", "69926D0AC87B9325300E920BFB962140" },
	{ "mapm61.spt", "77E3DE1F0B266C237EBB83B19AF8ABD9" },
	{ "mapm62.map", "BE188016E2DD05F6C671A1BD616D15E2" },
	{ "mapm62.spt", "1F3342FA6A0EF5631FDCDE7BCDE0D7A5" },
	{ "mapm63.map", "B3BC25BA6FAB70D95CA3EED66674F56D" },
	{ "mapm63.spt", "64B72EC4366E2FEF84A4E317DE54EECC" },
	{ "mapm64.map", "A0C888D26882BAB5B2CAB1F6C582610B" },
	{ "mapm64.spt", "FE858138E27CC0F75EE51C8CBBC4C7FF" },
	{ "mapm65.map", "BEFC6E4A7269BFEA1A4E98E8AC858CD5" },
	{ "mapm65.spt", "3D298C2FB7966C8035634051B5EFD170" },
	{ "mapm66.map", "B0E47F3F1C2A80EBB30D5DBFC58D3D90" },
	{ "mapm66.spt", "9222B6481597354CE4A15027B0D287A7" },
	{ "mapm67.map", "E4AA847974367B2DC2A25CE34D66AEDD" },
	{ "mapm67.spt", "A3C59E08649D7F78689C3FA74E64ED13" },
	{ "mapm68.map", "05C70402A051DEC7C476168A51FFD223" },
	{ "mapm68.spt", "9727CE0DCCBF72736082F390B059B669" },
	{ "mapm69.map", "60A765ADB3AB58B89051B3B8729A5DFC" },
	{ "mapm69.spt", "D8CB71B1231BF7EFF466673666444721" },
	{ "mapm7.map", "ACC9CBE4A6C4ABD62721B706D39B03AE" },
	{ "mapm7.spt", "71618692E2F2F087D2AECE67E643575E" },
	{ "mapm70.map", "6B2C02F29F986ED88335406603F80658" },
	{ "mapm70.spt", "5E3574665AD8064B74B06D84D2396625" },
	{ "mapm71.map", "A4EDE77A00634BCDC2A526D5DC3EAB9D" },
	{ "mapm71.spt", "94FCCC5DEE72A1B8E0B31D60F6FB8433" },
	{ "mapm72.map", "65F8FF7E214408056158040790F7CF52" },
	{ "mapm72.spt", "B63F6C9877D868025E7B097A13B3F2C6" },
	{ "mapm8.map", "0BDCE811AF3A847A9A1FE36C4DAAF958" },
	{ "mapm8.spt", "F4D89F63802D1499112F2C9E15B1B2AB" },
	{ "mapm9.map", "633FC6B3B68C6AE4EDD2F04AE01B7B78" },
	{ "mapm9.spt", "B8BC1235DFBF3B1FFC9C690E482D29E7" },
	{ "morarmy.lbm", "D4C26CBC51831989D14E7F8800A244B3" },
	{ "morbase.bht", "101778281E4BF9E895747D5ADFDDF713" },
	{ "MORBASE.BLK", "63C071D813DADB06698E17F6C69109FC" },
	{ "morbase.hit", "88D4B6F6CC22D2FB079B1FDCAECEA853" },
	{ "MORBASE.INS", "F35199AA121B4726CBB3C083D02C23CC" },
	{ "morbase.pal", "11707A9B16854E4F837DE5339956C76C" },
	{ "MORBASE.SNG", "F8AC4FBE0DA3EE886014073D99FB6D4E" },
	{ "morbase.swp", "3F0C27B6D245D281F1CC2A9649E3496B" },
	{ "morcopt.lbm", "B34FCED0AE047064CA8188F0D1ED4F1D" },
	{ "morfgn2.pl8", "92B2D26F7234286774D879782DBA90EC" },
	{ "morfgnd.pl8", "431A05EABCD4D878C99D636FC7E6E5CC" },
	{ "morheli.pal", "21913E3B4F89DC81CDA083A0FAFD86B3" },
	{ "mormid.pl8", "6D866F0D805946D10AF69685F6F77498" },
	{ "morphbig.lbm", "5251D2E85C658EB460C1BF2087DEA290" },
	{ "morplay.lbm", "8CB3340414CF5D3AA0AC4CF115D8B452" },
	{ "morsky.pl8", "469EDCB987F33163B11903A3B85A8874" },
	{ "morsub0.bht", "E6561BBB836B98EC0D226D5A29C57E55" },
	{ "MORSUB0.BLK", "EA8F0B8D2DADB6394FA2E53A29D3D52B" },
	{ "morsub0.hit", "0639E578C6A8457A6FEB1D3F66D7C804" },
	{ "morsub0.swp", "E44E572475F0E4E70D3B4EDE5DAA856A" },
	{ "pstuff.lbm", "827C5CF8E0C162700FE5D6778AE13DDE" },
	{ "rankfont.lbm", "2894B5CA8746799AA126CAA5734C2CF2" },
	{ "SENSPROD.RAW", "2724B5C909CC2FCB5ADF012EAE2DDE9A" },
	{ "VIRGPRES.RAW", "BA0A0431E88574BD4D726A52EB2991DA" },
	{ "WARX1.INS", "CCE4AB1491AFC0A69BDF4D1451270C86" },
	{ "WARX4.SNG", "189EB4A63C441A024173F24F089420E4" },
	{ "WON.RAW", "2A8D87B71856865220376E38287AF2F9" },
	{ 0 }
};

const sFile mAmigaCD32Files[] = {
	{ "1.RAW",	"2F00447802B86510784ECC8D1134C942" },
	{ "2.RAW",	"540BA4FAEB4F8CE75391EF4ED2CDBA6A" },
	{ "3.RAW",	"4533919895685A4AE9D0A6D6E0DEE2DF" },
	{ "4.RAW",	"4345942CFF1477A075024F1E39C4DE9D" },
	{ "5.RAW",	"2FE63C2D4607BE2EDC59AA33E6A79678" },
	{ "6.RAW",	"CB9F7DF63AF62943F3C54A43A26BEB21" },
	{ "7.RAW",	"9DA3438B683276274941720CFD949053" },
	{ "8.RAW",	"E55133FF1B7D53D0D0FE52DC3D1D907E" },
	{ "CFTITLE.RAW",	"0BDEBDC8A9693C289A2EB1C8D5CA63E9" },
	{ "desarmy.lbm",	"6E20EC4F2361EC5E2AF1AD7801607B90" },
	{ "desbase.bht",	"7DBD1FF9EFB89C85EEF91CE68B0F6C4D" },
	{ "DESBASE.BLK",	"89AEA1251756F2D0AB770B71A998E63D" },
	{ "desbase.hit",	"1B90B2C0213541AB2A7828C3EE033D96" },
	{ "DESBASE.INS",	"F786A62F8050FAD8F3D7583FC7D6B7EE" },
	{ "desbase.pal",	"0EFBECDB69D7FF6F95E147B6C38E5607" },
	{ "DESBASE.SNG",	"83541523FFD2AD12AFD7F98E53D4203A" },
	{ "desbase.swp",	"D63F1CE753077B74A5F543DE8CC37209" },
	{ "descopt.lbm",	"C51CB1A3AD430D309B389C92839B63CA" },
	{ "desfgn2.pl8",	"AAB7E80C2F38D183081224070CA5D596" },
	{ "desfgnd.pl8",	"A343A151C4B644751BEA4A46DA9E1E95" },
	{ "desheli.pal",	"21913E3B4F89DC81CDA083A0FAFD86B3" },
	{ "desmid.pl8",		"EE7745F6B5711B8EF7D653400C13AA1F" },
	{ "desplay.lbm",	"6976107F99E8509C6569DCE432C55472" },
	{ "dessky.pl8",		"784C1CBDD7BF70B770B0A5857EF4F7B6" },
	{ "dessub0.bht",	"6FBF3782A8A16DECBAF3E34ECA5C6701" },
	{ "DESSUB0.BLK",	"C1B808192E53C314980C4CF03F1196FA" },
	{ "dessub0.hit",	"02079C848FB86EBFA87FC621A1BAF20D" },
	{ "dessub0.swp",	"3659C67526E293D2F134234B53069244" },
	{ "font.pl8",		"20331E3A2140B307F7749207F7A7B073" },
	{ "FONT.RAW",		"DF00FE92FA66EF15FDFB66A66110520D" },
	{ "grave32.pal",	"5DD21FA5759C74D26363BAB1CE08321D" },
	{ "hills.lbm",		"1411AACCEC4B4605CE664D18C0EB738D" },
	{ "icearmy.lbm",	"D998F6677275711FD56C0027504F8BCF" },
	{ "icebase.bht",	"C896E00F924B40780094202F7435D99A" },
	{ "ICEBASE.BLK",	"EEDF2742BA789E29E23A0F00D749164A" },
	{ "icebase.hit",	"DC376A162D23E763AE308D1EA877860F" },
	{ "ICEBASE.INS",	"A98080C06B186461FAEED944E540CEFE" },
	{ "icebase.pal",	"7EA341E95E1974422106E040F20F9DF2" },
	{ "ICEBASE.SNG",	"BC82E70E22DE7A66448AA5CA852A31D5" },
	{ "icebase.swp",	"49BAB52FC9F634ED0163FB17CD9EF027" },
	{ "icecopt.lbm",	"408D680145CB92BD9D851462D31BC1FE" },
	{ "icefgn2.pl8",	"996BB60A8D8962C81A3D5237F1DA8C1B" },
	{ "icefgnd.pl8",	"EF37E499906F6C33C601A4F5C598079E" },
	{ "iceheli.pal",	"2D30AA172BF7525053ADF1702D614B2C" },
	{ "icemid.pl8",		"6ABCCDE1D22965D54612EA18B2B664D9" },
	{ "iceplay.lbm",	"D07952805584A1195049E58C6CB8A948" },
	{ "icesky.pl8",		"AADBAB45A7878D40AB427E2DA89BBE29" },
	{ "icesub0.bht",	"7DDD2F85761C8D243E9737FAAE31A234" },
	{ "ICESUB0.BLK",	"4234FCFACDEFA50A5F76BC60BC39E7BC" },
	{ "icesub0.hit",	"C54F4B86420271D5B4D3013700EA0C44" },
	{ "icesub0.swp",	"1459837D4F3D5E96209F7F781988B854" },
	{ "intarmy.lbm",	"2782EC87708BEC4CB3C8E552428FB157" },
	{ "intbase.bht",	"78009ED2010DC94E18316B1486A916C6" },
	{ "INTBASE.BLK",	"627CCC83737AAE16AF5353BA5556F799" },
	{ "intbase.hit",	"2D899A1689858558C16596F48AAADB64" },
	{ "INTBASE.INS",	"5639D17E6724488BA77E24DCC3BE869A" },
	{ "intbase.pal",	"F7ECD7AFDFF722214BD3361386279C89" },
	{ "INTBASE.SNG",	"B49AFDA5EE1AA0DEB106DC7CD8D247BA" },
	{ "intbase.swp",	"676739A5A800B24951677850DE407052" },
	{ "intcopt.lbm",	"4A9860049923AF09FEC0932592E976F2" },
	{ "intfgn2.pl8",	"6E6DE3D59C8DD0D63E671591A20F6804" },
	{ "intfgnd.pl8",	"742DC99D7D1B901D46AD7DC868907776" },
	{ "intheli.pal",	"21913E3B4F89DC81CDA083A0FAFD86B3" },
	{ "intmid.pl8",		"46F0F1CD0E01DFFAF9D2AE245D3374BB" },
	{ "intplay.lbm",	"9C9F0516DF10164B995B171FD777350F" },
	{ "intsky.pl8",		"9ECB00FD609A624D449C7EB99301BBFC" },
	{ "intsub0.bht",	"45621B2A6EB37A2907767D1D5903DEC9" },
	{ "INTSUB0.BLK",	"D8E8F106648D1D3B7BDF6D1CA3753905" },
	{ "intsub0.hit",	"C44E7E4BFBF2E94655B5900A05E54DFC" },
	{ "intsub0.swp",	"CB1DBA7D0009538701C00F50CAA0A2D8" },
	{ "JON.INS",		"B4E1B5C2980A4DC1A3A91E7F8C68C68F" },
	{ "JON.SNG",		"34C83D7DD0F429EB8BF436C1037DD6A9" },
	{ "junarmy.lbm",	"F67D7D3C2B96A588BFB0AAE33FE1E186" },
	{ "junbase.bht",	"91AE45498B1E72AB8C147890CCFA1F15" },
	{ "JUNBASE.BLK",	"B1023928A64C59D8F49CAF7E28A17624" },
	{ "junbase.hit",	"D49E276228C93539C12857D18568CFAC" },
	{ "JUNBASE.INS",	"BBF9C7852AB0EF958496642B15D39BB1" },
	{ "junbase.pal",	"27DA36F06898A9549A1E4AF4CAC4D8B7" },
	{ "JUNBASE.SNG",	"B96327898322E13315EA9B1BFCE4D527" },
	{ "junbase.swp",	"D07A8EA9D22C37F7252993AA9B941427" },
	{ "juncopt.lbm",	"44BE34CE48631669760CE3439C44DBF8" },
	{ "junfgn2.pl8",	"93DDAFDE77A0A69420FDF690EB19AFE8" },
	{ "junfgnd.pl8",	"6341A7652D5C9EF689013DC429DEAD74" },
	{ "junheli.pal",	"159FE0477094B6DE51D71A977A5E4AED" },
	{ "junmid.pl8",		"19F1ACED260C1E6F481AD064AF7CC31F" },
	{ "junplay.lbm",	"27EC1DEB8BC5B6FE4CC47144DC344E60" },
	{ "junsky.pl8",		"CC35E8634CB2F72FB3220F0378FA41AA" },
	{ "junsub0.bht",	"4803076EB9656961B23DDDD31D9683BC" },
	{ "JUNSUB0.BLK",	"17DAA7C0CDCAFC5095B1118EBBAE6963" },
	{ "junsub0.hit",	"AB61F44685F9C025C27422819C0F46D4" },
	{ "junsub0.swp",	"AE0181B3EE4997C67F89B5A6E1FA685B" },
	{ "junsub1.bht",	"E4373BFC0E241714C61FA77DAA9E5A19" },
	{ "JUNSUB1.BLK",	"BA57F9ECDEB89DD3E27588BA2D1D540F" },
	{ "junsub1.hit",	"7C7603BD2ADFFC57F514A504D1867FD1" },
	{ "junsub1.swp",	"F4804ABDD08599E1AFEA6E14ED30863C" },
	{ "mapm1.map",	"87CFEDC0E35228FE3FC6A8115714671F" },
	{ "mapm1.spt",	"9363F391620A6CE069F72BA36BB56C83" },
	{ "mapm10.map",	"0249D6621BE91724EA42B5009649A927" },
	{ "mapm10.spt",	"67B47EA4940B3A992A4B88EE243FF477" },
	{ "mapm11.map",	"9AACDF92D838AFDEF2A6D0E84AC63171" },
	{ "mapm11.spt",	"81C801E7F15C0A4A5069E320049D7598" },
	{ "mapm12.map",	"30F13EFB9491BC2C87FEB933ED4E1C32" },
	{ "mapm12.spt",	"EA6CB4B5455796F7C0FD7B98E57BA8A5" },
	{ "mapm13.map",	"83DF412981AB0FAE7E81D5540E3BF9BB" },
	{ "mapm13.spt",	"1D58DA489B23A90CCE59F2223112304C" },
	{ "mapm14.map",	"588976C8C9DD6B1E230FFE9EDD483422" },
	{ "mapm14.spt",	"6927DF8B1857C592D92ECA3C6C404895" },
	{ "mapm15.map",	"08D6F085A46275346ED368CE85A3ABB5" },
	{ "mapm15.spt",	"30A540544787A4E7316550CAE2DAEBE4" },
	{ "mapm16.map",	"9DE544AB20328243D5D7BE377B22ADCF" },
	{ "mapm16.spt",	"1C0F82079ED39EB5FAA5239DE9336437" },
	{ "mapm17.map",	"56BC8A7A24B0E40B997E457392DF7557" },
	{ "mapm17.spt",	"9FBEF790F49274752C1E0DD4A7865769" },
	{ "mapm18.map",	"83BF5512CC08EEA27F960D181CB547F7" },
	{ "mapm18.spt",	"F1A3307D7312D23F32DD260A0A660C46" },
	{ "mapm19.map",	"75FA184B8C04CB62E7B3A266E7ED0C2D" },
	{ "mapm19.spt",	"F1B55CCDDC3FE33CCAE6B584FC395E5D" },
	{ "mapm2.map",	"BFD5C98299D6BCAD35C05EDCC21E2B6A" },
	{ "mapm2.spt",	"85E5488C763E1F27F03BA5222EA6B0ED" },
	{ "mapm20.map",	"26E8414699A942DD4BA570C7E057DCCA" },
	{ "mapm20.spt",	"1AFD66AA9BFBB67D77C0D516E07979BE" },
	{ "mapm21.map",	"E9D88E934E586C8F04F92DE63E0FD217" },
	{ "mapm21.spt",	"1557B44DCCC70573CE264B299485BF17" },
	{ "mapm22.map",	"FD8D578D2B6707CA85336A99D4CBB961" },
	{ "mapm22.spt",	"D9636125D5C38022D98EB3522D4A30CE" },
	{ "mapm23.map",	"76E47CDF17AD4E7F897CCC9F06302BD9" },
	{ "mapm23.spt",	"50465FF35F7C9AE530DAF6080D3A4EDC" },
	{ "mapm24.map",	"F42697404B27F5718C6E11792293CEFD" },
	{ "mapm24.spt",	"FCE2966FE1D8BA8865F2DCA709481E24" },
	{ "mapm25.map",	"E3397B21A1F2B89AC939589AC51CCC8C" },
	{ "mapm25.spt",	"A614496AB7AE932B5DD2756466CAB415" },
	{ "mapm26.map",	"237E2D5DA9097CD9DF44DAF4B2D9E7D7" },
	{ "mapm26.spt",	"3BFB3A08366B10A4C23AD8054B4CCDD9" },
	{ "mapm27.map",	"13500D082D6674EF8AD62380C7F37EFD" },
	{ "mapm27.spt",	"3BCE6C34EE3DE7CDCA1D49BA9AC181DF" },
	{ "mapm28.map",	"E30CA20BDBCCD041B5D648AA25F90D2B" },
	{ "mapm28.spt",	"05CCCE033154982B3820FE907B4DF4A2" },
	{ "mapm29.map",	"249F80C064DA3C749529775C1B6DE6DB" },
	{ "mapm29.spt",	"3C762E5286BA3FAF845E29DB455A29E0" },
	{ "mapm3.map",	"0338E1163FC61D5033B1730DED2C7E9A" },
	{ "mapm3.spt",	"B70E042F02CF17986223E935BEEFE698" },
	{ "mapm30.map",	"0818B093C13C14D1A08D8A22EBA12DEA" },
	{ "mapm30.spt",	"A59AA6A87F8A2C25176AC4CF7A952C56" },
	{ "mapm31.map",	"A15CAB7A4429B45550B5F807BEE17139" },
	{ "mapm31.spt",	"FBFD9BF5CA7FE1B353F300739E4B89D8" },
	{ "mapm32.map",	"A0FEEA41BCDD44502ACE29B0D3B678D1" },
	{ "mapm32.spt",	"87E83FBC6B72846666AB61246D42D790" },
	{ "mapm33.map",	"44AC7495D20AB2F9F71E7AA641DD2763" },
	{ "mapm33.spt",	"AB9EF2E58F0D052AAEBF09B8D9FC4555" },
	{ "mapm34.map",	"1BF79B2F821365586FD3A0EF6FAE8746" },
	{ "mapm34.spt",	"54ADA3E4D5B8519D277D5C0DA1988B0D" },
	{ "mapm35.map",	"47B9D9400454BA2EC101AFE3D2E6C158" },
	{ "mapm35.spt",	"C94BDE0F65082BAA0E398CECCBDC17DA" },
	{ "mapm36.map",	"22617DDB6184D707FC51BC24B4BDFCAB" },
	{ "mapm36.spt",	"856B5F249B2B907077C326EEAA31C072" },
	{ "mapm37.map",	"1D2F6C95F87CC7F4ECFF4DEEBEA8464E" },
	{ "mapm37.spt",	"70D5529303250520AFC235A3FAD06198" },
	{ "mapm38.map",	"F973679325C690160E0688049279AEB0" },
	{ "mapm38.spt",	"D68BCC332C9533342CAC59987E80069B" },
	{ "mapm39.map",	"1B8FFE6130055C7F8C1A923E171D1BD9" },
	{ "mapm39.spt",	"C8C1D44B54438B1C53598FAC6A875C70" },
	{ "mapm4.map",	"888FA41C0108A002CA689C17E5824D68" },
	{ "mapm4.spt",	"FB66076B935AA5790357E6B826C63D05" },
	{ "mapm40.map",	"6F3C062295A7CFFE37D8F5ADCC192BBE" },
	{ "mapm40.spt",	"226DFF3CB2B6356BF89EA757FEE18DF7" },
	{ "mapm41.map",	"96DDC8D0B6D3CD82754D15337F1A8371" },
	{ "mapm41.spt",	"7F80ABF519A9212B0299D41D11270FE9" },
	{ "mapm42.map",	"26FFF77E96DF989EBEE95396A322AEEB" },
	{ "mapm42.spt",	"2FB8016EE02ED9D0E2BD96AAB2201854" },
	{ "mapm43.map",	"04E3FCC880BA41EF3D661F04BF0BA3B2" },
	{ "mapm43.spt",	"05DFAD6C1AA019EB72BFAE876DEED236" },
	{ "mapm44.map",	"70AFD59D7E2D04D019D059F684F33CB8" },
	{ "mapm44.spt",	"7D2E1A248DC43D297F5350B7A75526F8" },
	{ "mapm45.map",	"3550423155A252C0B0DF348B66E84962" },
	{ "mapm45.spt",	"72C300FE0049340BEF058F29C7DE0365" },
	{ "mapm46.map",	"8E4CB53449163B4C035D372F4AB0FE53" },
	{ "mapm46.spt",	"48DEAA4F058862025BC522BEF8877A4E" },
	{ "mapm47.map",	"099A09E90331A674AE2CC17D4A14B127" },
	{ "mapm47.spt",	"6BBCFBE72B4983C53A262096F93036BE" },
	{ "mapm48.map",	"0DE73FC8B2FC6E1F9C7802FC4616674C" },
	{ "mapm48.spt",	"33924B560BF0A23FF6524857DAFA83D1" },
	{ "mapm49.map",	"2E3969EF5B1F7AFBB753A7EB31541318" },
	{ "mapm49.spt",	"D3FBE2D7546DBEA57D9E442C5A23A397" },
	{ "mapm5.map",	"5E8A8B47D967D9C88C04641B1D8CBCEC" },
	{ "mapm5.spt",	"CF2B3091B2E53042BA18F7AEFEA6E77E" },
	{ "mapm50.map",	"AEF2A6B134C3DC589FCE6467D5BEE613" },
	{ "mapm50.spt",	"7D336918CEB91D7DBC46A7580B85DF4F" },
	{ "mapm51.map",	"3070E54E04C3FAE83767C3C72C39AB6D" },
	{ "mapm51.spt",	"6A463306D48DE011359CAE0184451628" },
	{ "mapm52.map",	"58FC41C65DBDC2F2686E3DBA92E4CBE1" },
	{ "mapm52.spt",	"39149BC04E1CD7E7A58C16ED5D7154FC" },
	{ "mapm53.map",	"80FF3FE22C0280634F25273938C4227E" },
	{ "mapm53.spt",	"4096775C0AE5BEF068A50BDE33B1B555" },
	{ "mapm54.map",	"DCB661ADBBF868C9557ABAABB523B007" },
	{ "mapm54.spt",	"0D2FEC9E890584B6B0B42A7AC7A0003D" },
	{ "mapm55.map",	"2D67F46A4BA41902CFC787C552DB554B" },
	{ "mapm55.spt",	"2F94BFF8B9F0227AA611367710342C0F" },
	{ "mapm56.map",	"9DC185057091C9E611E4C461625DAC20" },
	{ "mapm56.spt",	"8CD2D33B779A8226DBAFBB2FEA1C5FE5" },
	{ "mapm57.map",	"9DFF279E5904D5CFF201C7CB39A7E697" },
	{ "mapm57.spt",	"1FB22FF561DEE32CAC432D67BE9368B1" },
	{ "mapm58.map",	"334E8C2C1EAE6E99D29213F27C19706A" },
	{ "mapm58.spt",	"B711D11EA40FEB4C7C64B1D92E2732EF" },
	{ "mapm59.map",	"1826DE04606F2257DED0F5B009BC0FC9" },
	{ "mapm59.spt",	"CC87EC1B714B13C8DFA716F29EDF9088" },
	{ "mapm6.map",	"C2DC1784ADE8A3818FB031159E395014" },
	{ "mapm6.spt",	"EA45BD73E655E982C7B12E11A4CE7507" },
	{ "mapm60.map",	"5764F806A19670734699534B3DCD42E7" },
	{ "mapm60.spt",	"51E1447FDDA120C414F9432C709E8460" },
	{ "mapm61.map",	"69926D0AC87B9325300E920BFB962140" },
	{ "mapm61.spt",	"77E3DE1F0B266C237EBB83B19AF8ABD9" },
	{ "mapm62.map",	"BE188016E2DD05F6C671A1BD616D15E2" },
	{ "mapm62.spt",	"1F3342FA6A0EF5631FDCDE7BCDE0D7A5" },
	{ "mapm63.map",	"B3BC25BA6FAB70D95CA3EED66674F56D" },
	{ "mapm63.spt",	"64B72EC4366E2FEF84A4E317DE54EECC" },
	{ "mapm64.map",	"A0C888D26882BAB5B2CAB1F6C582610B" },
	{ "mapm64.spt",	"FE858138E27CC0F75EE51C8CBBC4C7FF" },
	{ "mapm65.map",	"BEFC6E4A7269BFEA1A4E98E8AC858CD5" },
	{ "mapm65.spt",	"3D298C2FB7966C8035634051B5EFD170" },
	{ "mapm66.map",	"B0E47F3F1C2A80EBB30D5DBFC58D3D90" },
	{ "mapm66.spt",	"9222B6481597354CE4A15027B0D287A7" },
	{ "mapm67.map",	"E4AA847974367B2DC2A25CE34D66AEDD" },
	{ "mapm67.spt",	"A3C59E08649D7F78689C3FA74E64ED13" },
	{ "mapm68.map",	"05C70402A051DEC7C476168A51FFD223" },
	{ "mapm68.spt",	"9727CE0DCCBF72736082F390B059B669" },
	{ "mapm69.map",	"60A765ADB3AB58B89051B3B8729A5DFC" },
	{ "mapm69.spt",	"D8CB71B1231BF7EFF466673666444721" },
	{ "mapm7.map",	"ACC9CBE4A6C4ABD62721B706D39B03AE" },
	{ "mapm7.spt",	"71618692E2F2F087D2AECE67E643575E" },
	{ "mapm70.map",	"6B2C02F29F986ED88335406603F80658" },
	{ "mapm70.spt",	"5E3574665AD8064B74B06D84D2396625" },
	{ "mapm71.map",	"A4EDE77A00634BCDC2A526D5DC3EAB9D" },
	{ "mapm71.spt",	"94FCCC5DEE72A1B8E0B31D60F6FB8433" },
	{ "mapm72.map",	"65F8FF7E214408056158040790F7CF52" },
	{ "mapm72.spt",	"B63F6C9877D868025E7B097A13B3F2C6" },
	{ "mapm8.map",	"0BDCE811AF3A847A9A1FE36C4DAAF958" },
	{ "mapm8.spt",	"F4D89F63802D1499112F2C9E15B1B2AB" },
	{ "mapm9.map",	"633FC6B3B68C6AE4EDD2F04AE01B7B78" },
	{ "mapm9.spt",	"B8BC1235DFBF3B1FFC9C690E482D29E7" },
	{ "morarmy.lbm",	"D4C26CBC51831989D14E7F8800A244B3" },
	{ "morbase.bht",	"101778281E4BF9E895747D5ADFDDF713" },
	{ "MORBASE.BLK",	"63C071D813DADB06698E17F6C69109FC" },
	{ "morbase.hit",	"88D4B6F6CC22D2FB079B1FDCAECEA853" },
	{ "MORBASE.INS",	"F35199AA121B4726CBB3C083D02C23CC" },
	{ "morbase.pal",	"11707A9B16854E4F837DE5339956C76C" },
	{ "MORBASE.SNG",	"F8AC4FBE0DA3EE886014073D99FB6D4E" },
	{ "morbase.swp",	"3F0C27B6D245D281F1CC2A9649E3496B" },
	{ "morcopt.lbm",	"B34FCED0AE047064CA8188F0D1ED4F1D" },
	{ "morfgn2.pl8",	"92B2D26F7234286774D879782DBA90EC" },
	{ "morfgnd.pl8",	"431A05EABCD4D878C99D636FC7E6E5CC" },
	{ "morheli.pal",	"21913E3B4F89DC81CDA083A0FAFD86B3" },
	{ "mormid.pl8",		"6D866F0D805946D10AF69685F6F77498" },
	{ "morphbig.lbm", 	"5251D2E85C658EB460C1BF2087DEA290" },
	{ "morplay.lbm",	"8CB3340414CF5D3AA0AC4CF115D8B452" },
	{ "morsky.pl8",		"469EDCB987F33163B11903A3B85A8874" },
	{ "morsub0.bht",	"E6561BBB836B98EC0D226D5A29C57E55" },
	{ "MORSUB0.BLK",	"EA8F0B8D2DADB6394FA2E53A29D3D52B" },
	{ "morsub0.hit",	"0639E578C6A8457A6FEB1D3F66D7C804" },
	{ "morsub0.swp",	"E44E572475F0E4E70D3B4EDE5DAA856A" },
	{ "pstuff.lbm",		"827C5CF8E0C162700FE5D6778AE13DDE" },
	{ "rankfont.lbm", 	"2894B5CA8746799AA126CAA5734C2CF2" },
	{ "SENSPROD.RAW", 	"2724B5C909CC2FCB5ADF012EAE2DDE9A" },
	{ "VIRGPRES.RAW", 	"BA0A0431E88574BD4D726A52EB2991DA" },
	{ "WARX1.INS",		"CCE4AB1491AFC0A69BDF4D1451270C86" },
	{ "WARX4.SNG",		"189EB4A63C441A024173F24F089420E4" },
	{ "WON.RAW",		"E9ABF124FB366BF45E77A04CEC40532F" },
	{ 0 }
};

const sFile mAmigaFormatFiles[] = {
	{ "afxarmy.lbm", "0B5D60F527DB05B2444681522AC41FA3" },
	{ "afxbase.bht", "4035396EB20D9576AA3F3A4F31C874F9" },
	{ "AFXBASE.BLK", "69D55DB3B2EDE64FB936808488D0B960" },
	{ "afxbase.hit", "A8C9E63D92E18DFA0BAD6FA7D5F8FA3A" },
	{ "AFXBASE.INS", "A98080C06B186461FAEED944E540CEFE" },
	{ "afxbase.pal", "1B668D3C7167EE1DA6A39A77E488A200" },	
	{ "AFXBASE.SNG", "BC82E70E22DE7A66448AA5CA852A31D5" },
	{ "afxbase.swp", "6FC0E6A0D87C495CD7DB9E9EDA7AD1FC" },
	{ "afxcopt.lbm", "CCA8D9286932ACCC81C57FACF35F1AA2" },
	{ "afxsub0.bht", "5257A7FA47A4E9F950B6DFC375B1EEB5" },
	{ "AFXSUB0.BLK", "D7AE1DBFD2E2F7639498A26294132CC4" },
	{ "afxsub0.hit", "05D394733EA7804BA1276D874448CFDC" },
	{ "afxsub0.swp", "24166B1967AA51468AFB5590BEFB3736" },
	{ "apmenu.lbm", "C89B3459C95114A434F67BB921E42854" },
	{ "mapm1.map", "83B834ACDF20012FFF32497C0AB5D41F" },
	{ "mapm1.spt", "8955555248BAB5EFBED5E561BB02FA22" },
	{ "mapm2.map", "E1EB8D9F2E3F868633CC66AF8B9F0BFB" },
	{ "mapm2.spt", "4E2DA0890E5E3C3A7AC34039B654ECA6" },
	{ "pstuff.lbm", "631BA67C90A5502391226A30A3849DC5" },
	{ 0 }
};

const sFile mPlusFiles[] = {
	{ "junbase.bht", "1D1AEA8B3B2EF9D0CD886DC7F39588D4" },
	{ "junsub1.bht", "A7B6F71467FA2006D97DB67C43741694" },
	{ "junbase.blk", "0D3C72390ADF47647339331A7736AC16" },
	{ "junsub1.blk", "70E25A00B8EA9BE9E2C1748A3026AEF2" },
	{ "junbase.hit", "9974819A29D70D7ED1B7D89665C22290" },
	{ "junsub1.hit", "293CA1C5EB584F8D432A2BE60801D37E" },
	{ "junbase.ins", "C7AC0BA709C8446239F95878BB4DCE65" },
	{ "1.lbm", "913D9A8557FFF6B346CF779BBDEA1CD9" },
	{ "2.lbm", "F846A614A3A5CCA95ED43B47AD8CFEEA" },
	{ "3.lbm", "17D5386978C5FCBFBD05BC391F9F5A55" },
	{ "4.lbm", "3A44F62EC8283B3E7ECEFD5BCAB7A3EB" },
	{ "5.lbm", "459DEC92F89E3BB54AC9B54FFC43C45D" },
	{ "6.lbm", "E985757E42925A6250F3624A3761818A" },
	{ "7.lbm", "ACEFFCBB87A64432720CB137E9295990" },
	{ "8.lbm", "7F017C5075505764E571474C299BE9DA" },
	{ "9.lbm", "4289FA75B3ACFD0D248D0AC2D4C15222" },
	{ "10.lbm", "921C5CC0FFB15F48F73E3A9737590BA7" },
	{ "11.lbm", "059ACB5A8B3FF6B9AF9A35CE728897BE" },
	{ "apmenu.lbm", "13C9FF4C69772353173FA4DD4FBC8C6C" },
	{ "junarmy.lbm", "A84F78AF89C87F068541A583B7254CFC" },
	{ "juncopt.lbm", "08DFA50E3C18E57C4A0E7F8749F36526" },
	{ "pstuff.lbm", "DC04FD82E27E5BACD46D5AF2A617127F" },
	{ "mapm1.map", "E4FBB58267378F7115EA5031FB619814" },
	{ "mapm1.spt", "A4924EB5445CA87B0B9D6F0512B31B5A" },
	{ "mapm2.map", "1B07CF4F3575C34CA73E41BDC286379A" },
	{ "mapm2.spt", "51AAA7F17411C8479E4499BB8B3F1E07" },
	{ "mapm3.map", "A881B3BDD3A37D594BDCD774D8C3D967" },
	{ "mapm3.spt", "4D115E6A0EF74E9ED37AE4127825C33B" },
	{ "mapm4.map", "A881B3BDD3A37D594BDCD774D8C3D967" },
	{ "mapm4.spt", "B569E610AF4D404DE794F0FDB60F2962" },
	{ "junbase.pal", "27DA36F06898A9549A1E4AF4CAC4D8B7" },
	{ "junbase.sng", "6C2ACFA3FA1B5012DB5DD9BF17980C81" },
	{ "junbase.swp", "768E479D6895E64E61F1502021D3E4D6" },
	{ "junsub1.swp", "C551471A99FFF0B02FF7FE11163C63EE" },
	{ 0 }
};

const sFile mCustomFiles[] = {
    { "Maps/Segras First.map" ,"5D2004402C69B91EE9F24DA26B469616" },
    { "Maps/Segras First.spt", "0EC285AF23C6A8A86E19C740A6B279C2" },
    { 0 }
};

const sVersion Versions[] = {

    { "Dos",							eGame::CF1, eVersion::Dos_CD,		ePlatform::PC,		eRelease::Retail,	&mMissionData_Retail,		mIntroText_PC,		"Dos_CD",			mDosFiles },
    { "2 Dos",							eGame::CF2, eVersion::Dos2_CD,		ePlatform::PC,		eRelease::Retail,	&mMissionData_Retail2,		mIntroText_PC2,		"Dos2_CD",			mDos2Files },
    { "Amiga",							eGame::CF1, eVersion::Amiga_Disk,	ePlatform::Amiga,	eRelease::Retail,	&mMissionData_Retail,		mIntroText_Amiga,	"Amiga",			mAmigaFiles },
    { "Amiga CD32",						eGame::CF1, eVersion::Amiga_CD,		ePlatform::Amiga,	eRelease::Retail,	&mMissionData_Retail,		mIntroText_Amiga,	"Amiga_CD",			mAmigaCD32Files },
    { "Amiga Format Christmas Special", eGame::CF1, eVersion::AmigaFormat,	ePlatform::Amiga,	eRelease::Demo,		&mMissionData_AmigaFormat,	mIntroText_Amiga,	"AmigaFormat_XMAS", mAmigaFormatFiles },
    { "Plus",							eGame::CF1, eVersion::AmigaPlus,	ePlatform::Amiga,	eRelease::Demo,		&mMissionData_Plus,			mIntroText_Amiga,	"Plus",				mPlusFiles },
    { "Custom",                         eGame::CF1, eVersion::Custom,       ePlatform::PC,      eRelease::Demo,		&mMissionData_Custom,       mIntroText_PC,      "Custom",           mCustomFiles },
	{ 0 }
};

std::vector<const sVersion*> FindFodderVersions() {
	std::vector<const sVersion*> AvailableVersions;

	// Loop all versions
	for (uint16 x = 0; Versions[x].mName != 0; ++x) {
	 	int16 FileCount = 0, FileMatches = 0, FileFound = 0;

		//Count the number of files
		for (uint16 FileNo = 0; Versions[x].mFiles[FileNo].mName != 0; ++FileNo)
			++FileCount;
		
		// Loop each file in this version
		for (uint16 FileNo = 0; Versions[x].mFiles[FileNo].mName != 0; ++FileNo) {
				
	 		std::string MD5 = local_FileMD5( Versions[x].mFiles[FileNo].mName, Versions[x].mDataPath );
			
			if (MD5 != Versions[x].mFiles[FileNo].mChecksum) {
				//std::cout << Versions[x].mName << ": " << Versions[x].mFiles[FileNo].mName;

				if (MD5.length() == 0) {
					//std::cout << Versions[x].mName << ": " << Versions[x].mFiles[FileNo].mName;
					//std::cout << " File not found\n";
				}
				else {
					std::cout << Versions[x].mName << ": " << Versions[x].mFiles[FileNo].mName;
					std::cout << " Unknown MD5: " << MD5 << "\n";
					++FileMatches;
				}
			} else
				++FileMatches;
		
		}

        // Ensure we atleast have found 1 file, and we have atleast the reuqired number of files, or every file with an MD5 match
        if (FileCount > 0 && (FileCount == FileMatches || FileCount == FileFound)) {

            // A very hacky method for ensuring the DOS_CD version is available, before allowing Customs
            if (Versions[x].mVersion == eVersion::Custom) {

                // This works because Dos_CD should always be first added to the list
                if (AvailableVersions.size() && AvailableVersions[0]->mVersion != eVersion::Dos_CD)
                    continue;
            }
            AvailableVersions.push_back( &Versions[x] );
        }
	}

	return AvailableVersions;
}
