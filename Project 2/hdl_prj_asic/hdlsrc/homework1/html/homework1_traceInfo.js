function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["homework1:308"] = "HDL_Complex_Multiplier.v:145,146,147,148,149,150";
	/* <S1>/Bit Concat */
	this.urlHashMap["homework1:310"] = "HDL_Complex_Multiplier.v:159";
	/* <S1>/Bit Slice */
	this.urlHashMap["homework1:299"] = "HDL_Complex_Multiplier.v:100";
	/* <S1>/Bit Slice1 */
	this.urlHashMap["homework1:305"] = "HDL_Complex_Multiplier.v:103";
	/* <S1>/Bit Slice2 */
	this.urlHashMap["homework1:309"] = "HDL_Complex_Multiplier.v:156";
	/* <S1>/Bitwise
Operator */
	this.urlHashMap["homework1:296"] = "HDL_Complex_Multiplier.v:139";
	/* <S1>/Bitwise
Operator1 */
	this.urlHashMap["homework1:297"] = "HDL_Complex_Multiplier.v:142";
	/* <S1>/Bitwise
Operator2 */
	this.urlHashMap["homework1:298"] = "HDL_Complex_Multiplier.v:119";
	/* <S1>/Constant */
	this.urlHashMap["homework1:311"] = "HDL_Complex_Multiplier.v:153";
	/* <S1>/Delay */
	this.urlHashMap["homework1:288"] = "HDL_Complex_Multiplier.v:106,107,108,109,110,111,112,113,114,115,116";
	/* <S1>/Delay1 */
	this.urlHashMap["homework1:291"] = "HDL_Complex_Multiplier.v:126,127,128,129,130,131,132,133,134,135,136";
	/* <S1>/Delay2 */
	this.urlHashMap["homework1:312"] = "HDL_Complex_Multiplier.v:87,88,89,90,91,92,93,94,95,96,97";
	/* <S1>/Delay3 */
	this.urlHashMap["homework1:293"] = "HDL_Complex_Multiplier.v:172,173,174,175,176,177,178,179,180,181,182";
	/* <S1>/Multiport
Switch */
	this.urlHashMap["homework1:303"] = "HDL_Complex_Multiplier.v:122,123";
	/* <S1>/Multiport
Switch1 */
	this.urlHashMap["homework1:304"] = "HDL_Complex_Multiplier.v:166,167,168,169";
	/* <S2>/Bit Concat2 */
	this.urlHashMap["homework1:310:2"] = "msg=rtwMsg_notTraceable&block=homework1:310:2";
	/* <S3>/DTProp1 */
	this.urlHashMap["homework1:299:1698"] = "msg=rtwMsg_notTraceable&block=homework1:299:1698";
	/* <S3>/Reinterp_As_Unsigned_Integer */
	this.urlHashMap["homework1:299:1700"] = "msg=rtwMsg_notTraceable&block=homework1:299:1700";
	/* <S4>/DTProp1 */
	this.urlHashMap["homework1:305:1698"] = "msg=rtwMsg_notTraceable&block=homework1:305:1698";
	/* <S4>/Reinterp_As_Unsigned_Integer */
	this.urlHashMap["homework1:305:1700"] = "msg=rtwMsg_notTraceable&block=homework1:305:1700";
	/* <S5>/DTProp1 */
	this.urlHashMap["homework1:309:1698"] = "msg=rtwMsg_notTraceable&block=homework1:309:1698";
	/* <S5>/Reinterp_As_Unsigned_Integer */
	this.urlHashMap["homework1:309:1700"] = "msg=rtwMsg_notTraceable&block=homework1:309:1700";
	/* <S6>/bit_concat */
	this.urlHashMap["homework1:310:2:106"] = "msg=rtwMsg_notTraceable&block=homework1:310:2:106";
	/* <S7>:1 */
	this.urlHashMap["homework1:310:2:106:1"] = "msg=rtwMsg_optimizedSfObject&block=homework1:310:2:106:1";
	/* <S8>/DTProp1 */
	this.urlHashMap["homework1:299:1703:2"] = "msg=rtwMsg_notTraceable&block=homework1:299:1703:2";
	/* <S8>/DTProp2 */
	this.urlHashMap["homework1:299:1703:3"] = "msg=rtwMsg_notTraceable&block=homework1:299:1703:3";
	/* <S8>/Extract Desired Bits */
	this.urlHashMap["homework1:299:1703:4"] = "msg=rtwMsg_notTraceable&block=homework1:299:1703:4";
	/* <S8>/Modify Scaling Only */
	this.urlHashMap["homework1:299:1703:5"] = "msg=rtwMsg_notTraceable&block=homework1:299:1703:5";
	/* <S9>/DTProp1 */
	this.urlHashMap["homework1:305:1703:2"] = "msg=rtwMsg_notTraceable&block=homework1:305:1703:2";
	/* <S9>/DTProp2 */
	this.urlHashMap["homework1:305:1703:3"] = "msg=rtwMsg_notTraceable&block=homework1:305:1703:3";
	/* <S9>/Extract Desired Bits */
	this.urlHashMap["homework1:305:1703:4"] = "msg=rtwMsg_notTraceable&block=homework1:305:1703:4";
	/* <S9>/Modify Scaling Only */
	this.urlHashMap["homework1:305:1703:5"] = "msg=rtwMsg_notTraceable&block=homework1:305:1703:5";
	/* <S10>/DTProp1 */
	this.urlHashMap["homework1:309:1703:2"] = "msg=rtwMsg_notTraceable&block=homework1:309:1703:2";
	/* <S10>/DTProp2 */
	this.urlHashMap["homework1:309:1703:3"] = "msg=rtwMsg_notTraceable&block=homework1:309:1703:3";
	/* <S10>/Extract Desired Bits */
	this.urlHashMap["homework1:309:1703:4"] = "msg=rtwMsg_notTraceable&block=homework1:309:1703:4";
	/* <S10>/Modify Scaling Only */
	this.urlHashMap["homework1:309:1703:5"] = "msg=rtwMsg_notTraceable&block=homework1:309:1703:5";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "homework1"};
	this.sidHashMap["homework1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "homework1:192"};
	this.sidHashMap["homework1:192"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "homework1:193"};
	this.sidHashMap["homework1:193"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/In3"] = {sid: "homework1:289"};
	this.sidHashMap["homework1:289"] = {rtwname: "<S1>/In3"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "homework1:308"};
	this.sidHashMap["homework1:308"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Bit Concat"] = {sid: "homework1:310"};
	this.sidHashMap["homework1:310"] = {rtwname: "<S1>/Bit Concat"};
	this.rtwnameHashMap["<S1>/Bit Slice"] = {sid: "homework1:299"};
	this.sidHashMap["homework1:299"] = {rtwname: "<S1>/Bit Slice"};
	this.rtwnameHashMap["<S1>/Bit Slice1"] = {sid: "homework1:305"};
	this.sidHashMap["homework1:305"] = {rtwname: "<S1>/Bit Slice1"};
	this.rtwnameHashMap["<S1>/Bit Slice2"] = {sid: "homework1:309"};
	this.sidHashMap["homework1:309"] = {rtwname: "<S1>/Bit Slice2"};
	this.rtwnameHashMap["<S1>/Bitwise Operator"] = {sid: "homework1:296"};
	this.sidHashMap["homework1:296"] = {rtwname: "<S1>/Bitwise Operator"};
	this.rtwnameHashMap["<S1>/Bitwise Operator1"] = {sid: "homework1:297"};
	this.sidHashMap["homework1:297"] = {rtwname: "<S1>/Bitwise Operator1"};
	this.rtwnameHashMap["<S1>/Bitwise Operator2"] = {sid: "homework1:298"};
	this.sidHashMap["homework1:298"] = {rtwname: "<S1>/Bitwise Operator2"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "homework1:311"};
	this.sidHashMap["homework1:311"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "homework1:288"};
	this.sidHashMap["homework1:288"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Delay1"] = {sid: "homework1:291"};
	this.sidHashMap["homework1:291"] = {rtwname: "<S1>/Delay1"};
	this.rtwnameHashMap["<S1>/Delay2"] = {sid: "homework1:312"};
	this.sidHashMap["homework1:312"] = {rtwname: "<S1>/Delay2"};
	this.rtwnameHashMap["<S1>/Delay3"] = {sid: "homework1:293"};
	this.sidHashMap["homework1:293"] = {rtwname: "<S1>/Delay3"};
	this.rtwnameHashMap["<S1>/Multiport Switch"] = {sid: "homework1:303"};
	this.sidHashMap["homework1:303"] = {rtwname: "<S1>/Multiport Switch"};
	this.rtwnameHashMap["<S1>/Multiport Switch1"] = {sid: "homework1:304"};
	this.sidHashMap["homework1:304"] = {rtwname: "<S1>/Multiport Switch1"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "homework1:194"};
	this.sidHashMap["homework1:194"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/u1"] = {sid: "homework1:310:31"};
	this.sidHashMap["homework1:310:31"] = {rtwname: "<S2>/u1"};
	this.rtwnameHashMap["<S2>/u2"] = {sid: "homework1:310:32"};
	this.sidHashMap["homework1:310:32"] = {rtwname: "<S2>/u2"};
	this.rtwnameHashMap["<S2>/Bit Concat2"] = {sid: "homework1:310:2"};
	this.sidHashMap["homework1:310:2"] = {rtwname: "<S2>/Bit Concat2"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "homework1:310:34"};
	this.sidHashMap["homework1:310:34"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/u"] = {sid: "homework1:299:1697"};
	this.sidHashMap["homework1:299:1697"] = {rtwname: "<S3>/u"};
	this.rtwnameHashMap["<S3>/DTProp1"] = {sid: "homework1:299:1698"};
	this.sidHashMap["homework1:299:1698"] = {rtwname: "<S3>/DTProp1"};
	this.rtwnameHashMap["<S3>/Extract Bits"] = {sid: "homework1:299:1703"};
	this.sidHashMap["homework1:299:1703"] = {rtwname: "<S3>/Extract Bits"};
	this.rtwnameHashMap["<S3>/Reinterp_As_Unsigned_Integer"] = {sid: "homework1:299:1700"};
	this.sidHashMap["homework1:299:1700"] = {rtwname: "<S3>/Reinterp_As_Unsigned_Integer"};
	this.rtwnameHashMap["<S3>/y"] = {sid: "homework1:299:1701"};
	this.sidHashMap["homework1:299:1701"] = {rtwname: "<S3>/y"};
	this.rtwnameHashMap["<S4>/u"] = {sid: "homework1:305:1697"};
	this.sidHashMap["homework1:305:1697"] = {rtwname: "<S4>/u"};
	this.rtwnameHashMap["<S4>/DTProp1"] = {sid: "homework1:305:1698"};
	this.sidHashMap["homework1:305:1698"] = {rtwname: "<S4>/DTProp1"};
	this.rtwnameHashMap["<S4>/Extract Bits"] = {sid: "homework1:305:1703"};
	this.sidHashMap["homework1:305:1703"] = {rtwname: "<S4>/Extract Bits"};
	this.rtwnameHashMap["<S4>/Reinterp_As_Unsigned_Integer"] = {sid: "homework1:305:1700"};
	this.sidHashMap["homework1:305:1700"] = {rtwname: "<S4>/Reinterp_As_Unsigned_Integer"};
	this.rtwnameHashMap["<S4>/y"] = {sid: "homework1:305:1701"};
	this.sidHashMap["homework1:305:1701"] = {rtwname: "<S4>/y"};
	this.rtwnameHashMap["<S5>/u"] = {sid: "homework1:309:1697"};
	this.sidHashMap["homework1:309:1697"] = {rtwname: "<S5>/u"};
	this.rtwnameHashMap["<S5>/DTProp1"] = {sid: "homework1:309:1698"};
	this.sidHashMap["homework1:309:1698"] = {rtwname: "<S5>/DTProp1"};
	this.rtwnameHashMap["<S5>/Extract Bits"] = {sid: "homework1:309:1703"};
	this.sidHashMap["homework1:309:1703"] = {rtwname: "<S5>/Extract Bits"};
	this.rtwnameHashMap["<S5>/Reinterp_As_Unsigned_Integer"] = {sid: "homework1:309:1700"};
	this.sidHashMap["homework1:309:1700"] = {rtwname: "<S5>/Reinterp_As_Unsigned_Integer"};
	this.rtwnameHashMap["<S5>/y"] = {sid: "homework1:309:1701"};
	this.sidHashMap["homework1:309:1701"] = {rtwname: "<S5>/y"};
	this.rtwnameHashMap["<S6>/u1"] = {sid: "homework1:310:2:104"};
	this.sidHashMap["homework1:310:2:104"] = {rtwname: "<S6>/u1"};
	this.rtwnameHashMap["<S6>/u2"] = {sid: "homework1:310:2:105"};
	this.sidHashMap["homework1:310:2:105"] = {rtwname: "<S6>/u2"};
	this.rtwnameHashMap["<S6>/bit_concat"] = {sid: "homework1:310:2:106"};
	this.sidHashMap["homework1:310:2:106"] = {rtwname: "<S6>/bit_concat"};
	this.rtwnameHashMap["<S6>/y"] = {sid: "homework1:310:2:107"};
	this.sidHashMap["homework1:310:2:107"] = {rtwname: "<S6>/y"};
	this.rtwnameHashMap["<S7>:1"] = {sid: "homework1:310:2:106:1"};
	this.sidHashMap["homework1:310:2:106:1"] = {rtwname: "<S7>:1"};
	this.rtwnameHashMap["<S8>/u"] = {sid: "homework1:299:1703:1"};
	this.sidHashMap["homework1:299:1703:1"] = {rtwname: "<S8>/u"};
	this.rtwnameHashMap["<S8>/DTProp1"] = {sid: "homework1:299:1703:2"};
	this.sidHashMap["homework1:299:1703:2"] = {rtwname: "<S8>/DTProp1"};
	this.rtwnameHashMap["<S8>/DTProp2"] = {sid: "homework1:299:1703:3"};
	this.sidHashMap["homework1:299:1703:3"] = {rtwname: "<S8>/DTProp2"};
	this.rtwnameHashMap["<S8>/Extract Desired Bits"] = {sid: "homework1:299:1703:4"};
	this.sidHashMap["homework1:299:1703:4"] = {rtwname: "<S8>/Extract Desired Bits"};
	this.rtwnameHashMap["<S8>/Modify Scaling Only"] = {sid: "homework1:299:1703:5"};
	this.sidHashMap["homework1:299:1703:5"] = {rtwname: "<S8>/Modify Scaling Only"};
	this.rtwnameHashMap["<S8>/y"] = {sid: "homework1:299:1703:6"};
	this.sidHashMap["homework1:299:1703:6"] = {rtwname: "<S8>/y"};
	this.rtwnameHashMap["<S9>/u"] = {sid: "homework1:305:1703:1"};
	this.sidHashMap["homework1:305:1703:1"] = {rtwname: "<S9>/u"};
	this.rtwnameHashMap["<S9>/DTProp1"] = {sid: "homework1:305:1703:2"};
	this.sidHashMap["homework1:305:1703:2"] = {rtwname: "<S9>/DTProp1"};
	this.rtwnameHashMap["<S9>/DTProp2"] = {sid: "homework1:305:1703:3"};
	this.sidHashMap["homework1:305:1703:3"] = {rtwname: "<S9>/DTProp2"};
	this.rtwnameHashMap["<S9>/Extract Desired Bits"] = {sid: "homework1:305:1703:4"};
	this.sidHashMap["homework1:305:1703:4"] = {rtwname: "<S9>/Extract Desired Bits"};
	this.rtwnameHashMap["<S9>/Modify Scaling Only"] = {sid: "homework1:305:1703:5"};
	this.sidHashMap["homework1:305:1703:5"] = {rtwname: "<S9>/Modify Scaling Only"};
	this.rtwnameHashMap["<S9>/y"] = {sid: "homework1:305:1703:6"};
	this.sidHashMap["homework1:305:1703:6"] = {rtwname: "<S9>/y"};
	this.rtwnameHashMap["<S10>/u"] = {sid: "homework1:309:1703:1"};
	this.sidHashMap["homework1:309:1703:1"] = {rtwname: "<S10>/u"};
	this.rtwnameHashMap["<S10>/DTProp1"] = {sid: "homework1:309:1703:2"};
	this.sidHashMap["homework1:309:1703:2"] = {rtwname: "<S10>/DTProp1"};
	this.rtwnameHashMap["<S10>/DTProp2"] = {sid: "homework1:309:1703:3"};
	this.sidHashMap["homework1:309:1703:3"] = {rtwname: "<S10>/DTProp2"};
	this.rtwnameHashMap["<S10>/Extract Desired Bits"] = {sid: "homework1:309:1703:4"};
	this.sidHashMap["homework1:309:1703:4"] = {rtwname: "<S10>/Extract Desired Bits"};
	this.rtwnameHashMap["<S10>/Modify Scaling Only"] = {sid: "homework1:309:1703:5"};
	this.sidHashMap["homework1:309:1703:5"] = {rtwname: "<S10>/Modify Scaling Only"};
	this.rtwnameHashMap["<S10>/y"] = {sid: "homework1:309:1703:6"};
	this.sidHashMap["homework1:309:1703:6"] = {rtwname: "<S10>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
