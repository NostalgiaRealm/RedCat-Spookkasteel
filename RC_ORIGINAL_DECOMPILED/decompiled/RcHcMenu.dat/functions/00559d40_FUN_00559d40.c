/*
 * FUN_00559d40 at 00559d40
 * undefined __register FUN_00559d40(int * param_1, undefined4 param_2)
 * Address ranges: 00559d40-00559ee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x559960 slot published:GDIFormShow for TfrmKeyConfig. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x559960 slot
   published:GDIFormShow for TfrmKeyConfig. Original bytes unchanged; names and types still
   inferred. */

void FUN_00559d40(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_11c = &LAB_00559eea;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,1);
  FUN_0054ee68((int)local_8);
  FUN_00432744(local_8[0xc0],*(uint **)(PTR_DAT_00572404 + 0x6c));
  FUN_00432744(local_8[0xd3],*(uint **)(PTR_DAT_00572404 + 0x74));
  FUN_00432744(local_8[0xca],*(uint **)(PTR_DAT_00572404 + 0x104));
  FUN_00432744(local_8[0xc9],*(uint **)(PTR_DAT_00572404 + 0x34));
  FUN_00432744(local_8[0xcc],*(uint **)(PTR_DAT_00572404 + 0x48));
  FUN_00432744(local_8[0xcd],*(uint **)(PTR_DAT_00572404 + 0x4c));
  FUN_00432744(local_8[0xce],*(uint **)(PTR_DAT_00572404 + 0x50));
  FUN_00432744(local_8[0xcf],*(uint **)(PTR_DAT_00572404 + 0x54));
  FUN_00432744(local_8[0xd0],*(uint **)(PTR_DAT_00572404 + 0x58));
  FUN_00432744(local_8[0xd1],*(uint **)(PTR_DAT_00572404 + 0x5c));
  FUN_00432744(local_8[0xd2],*(uint **)(PTR_DAT_00572404 + 0x60));
  FUN_0055a1a8((int)local_8);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403dd4(&local_14,2);
  return;
}

