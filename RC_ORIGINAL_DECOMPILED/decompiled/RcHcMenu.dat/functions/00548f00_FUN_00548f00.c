/*
 * FUN_00548f00 at 00548f00
 * undefined __register FUN_00548f00(int * param_1)
 * Address ranges: 00548f00-00548f66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 31 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 31 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_00548f00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x548f14;
  local_8 = param_1;
  local_c = (int *)FUN_0049206c((int *)param_1[7]);
  puStack_14 = &LAB_00548f67;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  iVar2 = FUN_00549b48((int)local_8);
  piVar1 = *(int **)(iVar2 + 0x18);
  piVar3 = (int *)FUN_00549b80((int)local_8);
  FUN_004935cc(local_c,piVar3,piVar1);
  FUN_00548cf4(local_8,local_c,0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00548f6e;
  puStack_14 = (undefined1 *)0x548f66;
  FUN_00403094(local_c);
  return;
}

