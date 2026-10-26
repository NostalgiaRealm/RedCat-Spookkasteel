/*
 * FUN_0053e894 at 0053e894
 * undefined __register FUN_0053e894(int * param_1, char param_2)
 * Address ranges: 0053e894-0053e953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot -1 for TAppObjGridBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot -1 for
   TAppObjGridBox. Original bytes unchanged; names and types still inferred. */

void FUN_0053e894(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x53e89f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0053e954;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if ((local_8[0x85] != 0) &&
     (puStack_10 = &stack0xfffffffc, *(char *)(local_8[0x85] + 0x18) != '\0')) {
    puStack_10 = &stack0xfffffffc;
    FUN_00549a9c((int *)local_8[0x85]);
  }
  FUN_00403094((int *)local_8[0x85]);
  FUN_00403094((int *)local_8[0x86]);
  FUN_00403094((int *)local_8[0xf0]);
  FUN_00403094((int *)local_8[0xef]);
  local_8[0x84] = 0;
  local_8[0x87] = 0;
  FUN_00403094((int *)local_8[0xf1]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053e95b;
  puStack_14 = (undefined1 *)0x53e953;
  FUN_004f88d4(local_8,local_9 & 0xfc);
  return;
}

