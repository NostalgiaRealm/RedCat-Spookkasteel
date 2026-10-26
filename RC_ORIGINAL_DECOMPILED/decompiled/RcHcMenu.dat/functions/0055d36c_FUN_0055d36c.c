/*
 * FUN_0055d36c at 0055d36c
 * undefined __register FUN_0055d36c(int * param_1, undefined4 param_2)
 * Address ranges: 0055d36c-0055d632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot published:FormShow for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot
   published:FormShow for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
    */

void FUN_0055d36c(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  uint **ppuVar4;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  byte local_14c [36];
  byte *local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  uint *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_150 = &stack0xfffffffc;
  local_118 = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_154 = &LAB_0055d633;
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
  FUN_00432744(local_8[0xbc],*(uint **)(PTR_DAT_00572404 + 0x98));
  ppuVar4 = &local_118;
  FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_14c);
  local_128 = local_14c;
  local_124 = 4;
  local_120 = *(undefined4 *)(PTR_DAT_00572404 + 0xb8);
  local_11c = 0xb;
  FUN_0040a894(*(byte **)(PTR_DAT_00572404 + 0x2c),&local_128,1,(int *)ppuVar4);
  FUN_00432744(local_8[0xc2],local_118);
  FUN_00432744(local_8[0xc3],*(uint **)(PTR_DAT_00572404 + 0xc0));
  FUN_00432744(local_8[0xc4],*(uint **)(PTR_DAT_00572404 + 0xc4));
  FUN_00432744(local_8[0xc5],*(uint **)(PTR_DAT_00572404 + 200));
  (**(code **)(*(int *)local_8[0xc3] + 0xbc))((int *)local_8[0xc3],0);
  (**(code **)(*(int *)local_8[0xc4] + 0xbc))((int *)local_8[0xc4],0);
  (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],0);
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x02') {
    cVar1 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 8);
    if (cVar1 == '\0') {
      (**(code **)(*(int *)local_8[0xc3] + 0xbc))((int *)local_8[0xc3],1);
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*(int *)local_8[0xc4] + 0xbc))((int *)local_8[0xc4],1);
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],1);
    }
  }
  else if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    cVar1 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 8);
    if (cVar1 == '\0') {
      (**(code **)(*(int *)local_8[0xc3] + 0xbc))((int *)local_8[0xc3],1);
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*(int *)local_8[0xc4] + 0xbc))((int *)local_8[0xc4],1);
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],1);
    }
  }
  if (DAT_005748ac == 0) {
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn30");
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403db0((int *)&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

