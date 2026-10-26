/*
 * FUN_00545968 at 00545968
 * undefined __register FUN_00545968(int * param_1, char param_2)
 * Address ranges: 00545968-00545975
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot -1 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot -1 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00545968(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *piStack_8;
  
  puStack_10 = (undefined1 *)0x545973;
  piStack_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_005459d5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)piStack_8[0x22]);
  piStack_8[0x22] = 0;
  FUN_00403094((int *)piStack_8[0x21]);
  piStack_8[0x21] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005459dc;
  puStack_14 = (undefined1 *)0x5459d4;
  FUN_005475bc(piStack_8,local_9 & 0xfc);
  return;
}

