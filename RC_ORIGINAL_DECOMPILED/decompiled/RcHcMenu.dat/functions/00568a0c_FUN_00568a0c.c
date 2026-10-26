/*
 * FUN_00568a0c at 00568a0c
 * undefined __register FUN_00568a0c(int * param_1, undefined4 param_2)
 * Address ranges: 00568a0c-00568c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x567c30 slot published:DataDestroy for TData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x567c30 slot
   published:DataDestroy for TData. Original bytes unchanged; names and types still inferred. */

void FUN_00568a0c(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_120 = &LAB_00568c06;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  if ((char)local_8[0x49] == '\0') {
    *(undefined1 *)(local_8 + 0x40) = 0;
  }
  else if ((char)local_8[0x40] != '\0') {
    FUN_00567344((int *)local_8[0x46]);
  }
  if (local_8[0x46] != 0) {
    FUN_005693e8(local_8);
  }
  FUN_0040407c((int *)&local_118,(undefined4 *)local_8[0x44],(undefined4 *)"settings\\menu.ini");
  FUN_004a5208((int *)local_8[0x47],local_118);
  piVar3 = (int *)(**(code **)(*(int *)local_8[0x47] + 8))();
  iVar4 = FUN_004a418c();
  FUN_004a4afc(iVar4,0x568c5c,piVar3);
  FUN_0040e4b4(local_8 + 0x42);
  FUN_0040e4b4(local_8 + 0x43);
  FUN_0040e4b4(local_8 + 0x41);
  FUN_0040e4b4(local_8 + 0x46);
  FUN_0040e4b4(local_8 + 0x47);
  FUN_0040e4b4(local_8 + 0x48);
  FUN_0040e4b4(local_8 + 0x3e);
  FUN_0040e4b4(local_8 + 0x4a);
  FUN_0040e4b4(local_8 + 0x4b);
  FUN_0040e4b4(local_8 + 0x4c);
  FUN_0040e4b4(local_8 + 0x4d);
  FUN_0040e4b4(local_8 + 0x4e);
  FUN_0040e4b4(local_8 + 0x4f);
  FUN_0040e4b4(local_8 + 0x50);
  iVar4 = FUN_004a418c();
  FUN_004a4c44(iVar4);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "DataDestroy";
  FUN_00403db0((int *)&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

