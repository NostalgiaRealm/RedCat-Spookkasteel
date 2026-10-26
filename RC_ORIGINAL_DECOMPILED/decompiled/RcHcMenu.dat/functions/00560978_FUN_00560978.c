/*
 * FUN_00560978 at 00560978
 * undefined __register FUN_00560978(int * param_1, undefined4 param_2)
 * Address ranges: 00560978-00560c25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot published:FormShow for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot
   published:FormShow for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
    */

void FUN_00560978(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  uint **ppuVar4;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  byte *local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  uint *local_13c;
  byte local_138 [36];
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_150 = &stack0xfffffffc;
  local_13c = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_154 = &LAB_00560c26;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar3 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar3,0);
  FUN_005530c0((int)local_8);
  FUN_00432744(local_8[0xc4],*(uint **)(PTR_DAT_00572404 + 0xa4));
  FUN_00432744(local_8[0xc3],*(uint **)(PTR_DAT_00572404 + 0xa8));
  FUN_00432744(local_8[0xc5],*(uint **)(PTR_DAT_00572404 + 0xac));
  FUN_00432744(local_8[0xc6],*(uint **)(PTR_DAT_00572404 + 0xb0));
  FUN_00432744(local_8[199],*(uint **)(PTR_DAT_00572404 + 0xb4));
  FUN_0043262c((int *)local_8[0xb7],0,extraout_ECX);
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\0') {
    *(undefined1 *)(*(int *)PTR_DAT_00572108 + 0x100) = 2;
  }
  (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],0);
  (**(code **)(*(int *)local_8[0xc6] + 0xbc))((int *)local_8[0xc6],0);
  (**(code **)(*(int *)local_8[199] + 0xbc))((int *)local_8[199],0);
  cVar1 = *(char *)(*(int *)PTR_DAT_00572108 + 0x100);
  if (cVar1 == '\x01') {
    (**(code **)(*(int *)local_8[0xc6] + 0xbc))((int *)local_8[0xc6],1);
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],1);
  }
  else if (cVar1 == '\x03') {
    (**(code **)(*(int *)local_8[199] + 0xbc))((int *)local_8[199],1);
  }
  FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_138);
  if (local_138[0] == 0) {
    FUN_00432744(local_8[0xc2],(uint *)0x0);
  }
  else {
    ppuVar4 = &local_13c;
    FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_138);
    local_14c = local_138;
    local_148 = 4;
    local_144 = *(undefined4 *)(PTR_DAT_00572404 + 0xb8);
    local_140 = 0xb;
    FUN_0040a894(*(byte **)(PTR_DAT_00572404 + 0x20),&local_14c,1,(int *)ppuVar4);
    FUN_00432744(local_8[0xc2],local_13c);
  }
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn9");
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403db0((int *)&local_13c);
  FUN_00403dd4(&local_14,2);
  return;
}

