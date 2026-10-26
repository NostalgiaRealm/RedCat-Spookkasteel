/*
 * FUN_0055debc at 0055debc
 * undefined __register FUN_0055debc(int * param_1, undefined4 param_2)
 * Address ranges: 0055debc-0055e16e;0055e183-0055e35e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot published:FormShow for TfrmQuickPlay. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot
   published:FormShow for TfrmQuickPlay. Original bytes unchanged; names and types still inferred.
    */

void FUN_0055debc(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  uint **ppuVar3;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  int local_150;
  byte *local_14c;
  undefined1 local_148;
  int local_144;
  undefined1 local_140;
  uint *local_13c;
  byte local_138 [36];
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_154 = &stack0xfffffffc;
  local_13c = (uint *)0x0;
  local_150 = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_158 = &LAB_0055e35f;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar2 = local_10;
  uVar1 = FUN_004a418c();
  FUN_004a48b8(uVar1,puVar2,0);
  FUN_005530c0((int)local_8);
  FUN_00432744(local_8[0xbc],*(uint **)(PTR_DAT_00572404 + 0xb0));
  FUN_00432744(local_8[0xc2],*(uint **)(PTR_DAT_00572404 + 0xd0));
  FUN_00432744(local_8[0xc3],*(uint **)(PTR_DAT_00572404 + 0xd4));
  FUN_00432744(local_8[0xc4],*(uint **)(PTR_DAT_00572404 + 0xd8));
  FUN_00432744(local_8[0xc5],*(uint **)(PTR_DAT_00572404 + 0xdc));
  FUN_00432744(local_8[0xc6],*(uint **)(PTR_DAT_00572404 + 0xe0));
  FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_138);
  if (local_138[0] == 0) {
    FUN_00432744(local_8[199],(uint *)0x0);
  }
  else {
    ppuVar3 = &local_13c;
    FUN_00565978(*(int *)(*(int *)PTR_DAT_00572108 + 0x118),local_138);
    local_14c = local_138;
    local_148 = 4;
    FUN_00432714(local_8[0xb8],&local_150);
    local_144 = local_150;
    local_140 = 0xb;
    FUN_0040a894(*(byte **)(PTR_DAT_00572404 + 8),&local_14c,1,(int *)ppuVar3);
    FUN_00432744(local_8[199],local_13c);
  }
  (**(code **)(*(int *)local_8[0xc2] + 0xbc))((int *)local_8[0xc2],0);
  (**(code **)(*(int *)local_8[0xc3] + 0xbc))((int *)local_8[0xc3],0);
  (**(code **)(*(int *)local_8[0xc4] + 0xbc))((int *)local_8[0xc4],0);
  (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],0);
  (**(code **)(*(int *)local_8[0xc6] + 0xbc))((int *)local_8[0xc6],0);
  (**(code **)(*(int *)local_8[0xc2] + 0x5c))((int *)local_8[0xc2],0);
  (**(code **)(*(int *)local_8[0xc3] + 0x5c))((int *)local_8[0xc3],0);
  (**(code **)(*(int *)local_8[0xc4] + 0x5c))((int *)local_8[0xc4],0);
  (**(code **)(*(int *)local_8[0xc5] + 0x5c))((int *)local_8[0xc5],0);
  (**(code **)(*(int *)local_8[0xc6] + 0x5c))((int *)local_8[0xc6],0);
  switch(*(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 0xc)) {
  case 0:
    (**(code **)(*(int *)local_8[0xc2] + 0xbc))((int *)local_8[0xc2],1);
    break;
  case 1:
    (**(code **)(*(int *)local_8[0xc3] + 0xbc))((int *)local_8[0xc3],1);
    break;
  case 2:
    (**(code **)(*(int *)local_8[0xc4] + 0xbc))((int *)local_8[0xc4],1);
    break;
  case 3:
    (**(code **)(*(int *)local_8[0xc5] + 0xbc))((int *)local_8[0xc5],1);
    break;
  case 4:
    (**(code **)(*(int *)local_8[0xc6] + 0xbc))((int *)local_8[0xc6],1);
  }
  if (*(char *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x38) == '\0') {
    if (-1 < *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc)) {
      (**(code **)(*(int *)local_8[0xc2] + 0x5c))((int *)local_8[0xc2],1);
    }
    if (0 < *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc)) {
      (**(code **)(*(int *)local_8[0xc3] + 0x5c))((int *)local_8[0xc3],1);
    }
    if (1 < *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc)) {
      (**(code **)(*(int *)local_8[0xc4] + 0x5c))((int *)local_8[0xc4],1);
    }
    if (2 < *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc)) {
      (**(code **)(*(int *)local_8[0xc5] + 0x5c))((int *)local_8[0xc5],1);
    }
    if (4 < *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 0xc)) {
      (**(code **)(*(int *)local_8[0xc6] + 0x5c))((int *)local_8[0xc6],1);
    }
  }
  else {
    (**(code **)(*(int *)local_8[0xc2] + 0x5c))((int *)local_8[0xc2],1);
    (**(code **)(*(int *)local_8[0xc3] + 0x5c))((int *)local_8[0xc3],1);
    (**(code **)(*(int *)local_8[0xc4] + 0x5c))((int *)local_8[0xc4],1);
    (**(code **)(*(int *)local_8[0xc5] + 0x5c))((int *)local_8[0xc5],1);
    (**(code **)(*(int *)local_8[0xc6] + 0x5c))((int *)local_8[0xc6],1);
  }
  uVar1 = FUN_004a418c();
  FUN_004a49b0(uVar1);
  *in_FS_OFFSET = "FormShow";
  FUN_00403db0(&local_150);
  FUN_00403db0((int *)&local_13c);
  FUN_00403dd4(&local_14,2);
  return;
}

