/*
 * FUN_0053b6dc at 0053b6dc
 * undefined __register FUN_0053b6dc(int * param_1, char param_2)
 * Address ranges: 0053b6dc-0053b766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot -1 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot -1 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053b6dc(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x53b6e7;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0053b767;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *(undefined1 *)(local_8 + 0x21) = 0;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x20]);
  local_8[0x20] = 0;
  if (local_8[0x22] != 0) {
    FUN_0053d4cc((int)local_8);
    FUN_00403094((int *)local_8[0x22]);
    local_8[0x22] = 0;
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053b76e;
  puStack_14 = (undefined1 *)0x53b766;
  FUN_005475bc(local_8,local_9 & 0xfc);
  return;
}

