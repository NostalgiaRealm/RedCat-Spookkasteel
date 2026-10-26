/*
 * FUN_0048e9f8 at 0048e9f8
 * undefined __register FUN_0048e9f8(int * param_1, char param_2)
 * Address ranges: 0048e9f8-0048ea4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e2a4 slot -1 for TAppModel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e2a4 slot -1 for
   TAppModel. Original bytes unchanged; names and types still inferred. */

void FUN_0048e9f8(int *param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x48ea03;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0048ea4b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  uVar1 = FUN_00403094((int *)local_8[1]);
  piVar2 = (int *)FUN_00497394(uVar1,extraout_EDX,extraout_ECX);
  FUN_0049774c(piVar2,(int)local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0048ea52;
  puStack_14 = (undefined1 *)0x48ea4a;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

