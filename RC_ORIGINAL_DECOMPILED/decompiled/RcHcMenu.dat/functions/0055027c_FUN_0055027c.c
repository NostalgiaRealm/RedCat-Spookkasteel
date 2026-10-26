/*
 * FUN_0055027c at 0055027c
 * undefined __register FUN_0055027c(int * param_1, int * param_2)
 * Address ranges: 0055027c-00550316
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550198 slot 5 for TSaveGameHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550198 slot 5 for
   TSaveGameHeader. Original bytes unchanged; names and types still inferred. */

void FUN_0055027c(int *param_1,int *param_2)

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
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_11c = &LAB_00550317;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  FUN_004a3b4c(local_c,local_8 + 2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403dd4(&local_14,2);
  return;
}

