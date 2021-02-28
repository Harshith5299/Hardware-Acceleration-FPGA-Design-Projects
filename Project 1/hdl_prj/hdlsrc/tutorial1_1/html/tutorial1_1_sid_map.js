function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["tutorial1_1:192"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:193"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:174"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:190"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:171"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:189"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:170"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:178"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:180"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:181"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:182"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:183"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:184"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:185"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:186"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:173"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:175"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:187"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:188"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:172"] = "tutorial1_1:191";
    this.sidParentMap["tutorial1_1:194"] = "tutorial1_1:191";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
