function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["tutorial1_1:174"] = "HDL_Complex_Multiplier.v:217,218,219";
	/* <S1>/Add1 */
	this.urlHashMap["tutorial1_1:190"] = "HDL_Complex_Multiplier.v:269,270,271";
	/* <S1>/Complex to
Real-Imag */
	this.urlHashMap["tutorial1_1:171"] = "HDL_Complex_Multiplier.v:97,98,99,100,101,102,103,104,105,106,107,108,109";
	/* <S1>/Complex to
Real-Imag1 */
	this.urlHashMap["tutorial1_1:189"] = "HDL_Complex_Multiplier.v:126,127,128,129,130,131,132,133,134,135,136,137,138";
	/* <S1>/Delay */
	this.urlHashMap["tutorial1_1:170"] = "HDL_Complex_Multiplier.v:97,98,99,100,101,102,103,104,105,106,107,108,109";
	/* <S1>/Delay1 */
	this.urlHashMap["tutorial1_1:178"] = "HDL_Complex_Multiplier.v:126,127,128,129,130,131,132,133,134,135,136,137,138";
	/* <S1>/Delay3 */
	this.urlHashMap["tutorial1_1:180"] = "HDL_Complex_Multiplier.v:235";
	/* <S1>/Delay4 */
	this.urlHashMap["tutorial1_1:181"] = "HDL_Complex_Multiplier.v:252";
	/* <S1>/Delay5 */
	this.urlHashMap["tutorial1_1:182"] = "HDL_Complex_Multiplier.v:287,288,289,290,291,292,293,294,295,296,297,298,299";
	/* <S1>/Delay6 */
	this.urlHashMap["tutorial1_1:183"] = "HDL_Complex_Multiplier.v:200";
	/* <S1>/Delay7 */
	this.urlHashMap["tutorial1_1:184"] = "HDL_Complex_Multiplier.v:155";
	/* <S1>/Delay8 */
	this.urlHashMap["tutorial1_1:185"] = "HDL_Complex_Multiplier.v:274,275,276,277,278,279,280,281,282,283,284";
	/* <S1>/Delay9 */
	this.urlHashMap["tutorial1_1:186"] = "HDL_Complex_Multiplier.v:222,223,224,225,226,227,228,229,230,231,232";
	/* <S1>/Product */
	this.urlHashMap["tutorial1_1:173"] = "HDL_Complex_Multiplier.v:200";
	/* <S1>/Product1 */
	this.urlHashMap["tutorial1_1:175"] = "HDL_Complex_Multiplier.v:155";
	/* <S1>/Product2 */
	this.urlHashMap["tutorial1_1:187"] = "HDL_Complex_Multiplier.v:235";
	/* <S1>/Product3 */
	this.urlHashMap["tutorial1_1:188"] = "HDL_Complex_Multiplier.v:252";
	/* <S1>/Real-Imag to
Complex */
	this.urlHashMap["tutorial1_1:172"] = "HDL_Complex_Multiplier.v:222,223,224,225,226,227,228,229,230,231,232";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "tutorial1_1"};
	this.sidHashMap["tutorial1_1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "tutorial1_1:192"};
	this.sidHashMap["tutorial1_1:192"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "tutorial1_1:193"};
	this.sidHashMap["tutorial1_1:193"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "tutorial1_1:174"};
	this.sidHashMap["tutorial1_1:174"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Add1"] = {sid: "tutorial1_1:190"};
	this.sidHashMap["tutorial1_1:190"] = {rtwname: "<S1>/Add1"};
	this.rtwnameHashMap["<S1>/Complex to Real-Imag"] = {sid: "tutorial1_1:171"};
	this.sidHashMap["tutorial1_1:171"] = {rtwname: "<S1>/Complex to Real-Imag"};
	this.rtwnameHashMap["<S1>/Complex to Real-Imag1"] = {sid: "tutorial1_1:189"};
	this.sidHashMap["tutorial1_1:189"] = {rtwname: "<S1>/Complex to Real-Imag1"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "tutorial1_1:170"};
	this.sidHashMap["tutorial1_1:170"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Delay1"] = {sid: "tutorial1_1:178"};
	this.sidHashMap["tutorial1_1:178"] = {rtwname: "<S1>/Delay1"};
	this.rtwnameHashMap["<S1>/Delay3"] = {sid: "tutorial1_1:180"};
	this.sidHashMap["tutorial1_1:180"] = {rtwname: "<S1>/Delay3"};
	this.rtwnameHashMap["<S1>/Delay4"] = {sid: "tutorial1_1:181"};
	this.sidHashMap["tutorial1_1:181"] = {rtwname: "<S1>/Delay4"};
	this.rtwnameHashMap["<S1>/Delay5"] = {sid: "tutorial1_1:182"};
	this.sidHashMap["tutorial1_1:182"] = {rtwname: "<S1>/Delay5"};
	this.rtwnameHashMap["<S1>/Delay6"] = {sid: "tutorial1_1:183"};
	this.sidHashMap["tutorial1_1:183"] = {rtwname: "<S1>/Delay6"};
	this.rtwnameHashMap["<S1>/Delay7"] = {sid: "tutorial1_1:184"};
	this.sidHashMap["tutorial1_1:184"] = {rtwname: "<S1>/Delay7"};
	this.rtwnameHashMap["<S1>/Delay8"] = {sid: "tutorial1_1:185"};
	this.sidHashMap["tutorial1_1:185"] = {rtwname: "<S1>/Delay8"};
	this.rtwnameHashMap["<S1>/Delay9"] = {sid: "tutorial1_1:186"};
	this.sidHashMap["tutorial1_1:186"] = {rtwname: "<S1>/Delay9"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "tutorial1_1:173"};
	this.sidHashMap["tutorial1_1:173"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Product1"] = {sid: "tutorial1_1:175"};
	this.sidHashMap["tutorial1_1:175"] = {rtwname: "<S1>/Product1"};
	this.rtwnameHashMap["<S1>/Product2"] = {sid: "tutorial1_1:187"};
	this.sidHashMap["tutorial1_1:187"] = {rtwname: "<S1>/Product2"};
	this.rtwnameHashMap["<S1>/Product3"] = {sid: "tutorial1_1:188"};
	this.sidHashMap["tutorial1_1:188"] = {rtwname: "<S1>/Product3"};
	this.rtwnameHashMap["<S1>/Real-Imag to Complex"] = {sid: "tutorial1_1:172"};
	this.sidHashMap["tutorial1_1:172"] = {rtwname: "<S1>/Real-Imag to Complex"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "tutorial1_1:194"};
	this.sidHashMap["tutorial1_1:194"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
