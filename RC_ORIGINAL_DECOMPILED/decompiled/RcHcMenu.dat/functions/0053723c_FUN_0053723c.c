/*
 * FUN_0053723c at 0053723c
 * undefined __register FUN_0053723c(int * param_1, char param_2)
 * Address ranges: 0053723c-0053728b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5369bc slot -1 for TOAGridColumn. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5369bc slot -1 for
   TOAGridColumn. Original bytes unchanged; names and types still inferred. */

void FUN_0053723c(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x537247;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0053728c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  piVar1 = (int *)FUN_005372a8(local_8);
  uVar2 = FUN_005374a4(piVar1);
  FUN_005394e4(uVar2,(int)local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00537293;
  puStack_14 = (undefined1 *)0x53728b;
  FUN_0051c790(local_8,local_9 & 0xfc);
  return;
}

