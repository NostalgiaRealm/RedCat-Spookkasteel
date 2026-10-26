/*
 * FUN_004749b4 at 004749b4
 * undefined __register FUN_004749b4(int * param_1, undefined4 * param_2)
 * Address ranges: 004749b4-00474a52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 13 for TContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 13 for
   TContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_004749b4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  byte local_124 [256];
  int local_24;
  int local_20;
  VARIANT local_1c;
  undefined1 local_9;
  int *local_8;
  
  local_20 = 0;
  local_24 = 0;
  pVVar2 = &local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_130 = (undefined1 *)0x4749de;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_134 = &LAB_00474a53;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_130 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_124);
  FUN_00403fd4(&local_24,local_124);
  FUN_004040f0(&local_20,3);
  FUN_00459bd4(local_20);
  local_9 = 0;
  *in_FS_OFFSET = "Not supported";
  FUN_00403dd4(&local_24,2);
  FUN_00405bcc(&local_1c);
  return;
}

