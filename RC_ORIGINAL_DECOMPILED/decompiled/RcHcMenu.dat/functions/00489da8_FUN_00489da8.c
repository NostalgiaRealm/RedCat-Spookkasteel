/*
 * FUN_00489da8 at 00489da8
 * undefined __register FUN_00489da8(int * param_1, undefined4 * param_2)
 * Address ranges: 00489da8-00489e1a;00489eb2-00489ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 13 for TStringProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 13 for
   TStringProp. Original bytes unchanged; names and types still inferred. */

void FUN_00489da8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  int local_38 [4];
  int local_28;
  VARIANT local_24;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = 0;
  local_10 = 0;
  pVVar2 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_148 = (undefined1 *)0x489dd9;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_14c = &LAB_00489ee5;
  uStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_150;
  puStack_158 = &LAB_00489e1b;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puStack_154 = &stack0xfffffffc;
  puStack_148 = &stack0xfffffffc;
  FUN_004052a4(&local_28,&local_24);
  local_9 = (**(code **)(*local_8 + 0x70))(local_8,local_28);
  *in_FS_OFFSET = uStack_15c;
  *in_FS_OFFSET = uStack_150;
  puStack_148 = &LAB_00489eec;
  puStack_14c = (undefined1 *)0x489ecc;
  FUN_00403dd4(local_38,2);
  puStack_14c = (undefined1 *)0x489ed4;
  FUN_00403db0(&local_28);
  puStack_14c = (undefined1 *)0x489edc;
  FUN_00405bcc(&local_24);
  puStack_14c = (undefined1 *)0x489ee4;
  FUN_00403db0(&local_10);
  return;
}

