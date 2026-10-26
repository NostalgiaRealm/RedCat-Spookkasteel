/*
 * FUN_00504ac0 at 00504ac0
 * undefined __register FUN_00504ac0(int * param_1, char param_2)
 * Address ranges: 00504ac0-00504ac0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x50499c slot -1 for TIndexedLookupPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x50499c
   slot -1 for TIndexedLookupPropDesc. Original bytes unchanged; names and types still inferred. */

void FUN_00504ac0(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte bStack_9;
  int *piStack_8;
  
  puStack_10 = (undefined1 *)0x504acb;
  piStack_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00504b06;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  bStack_9 = extraout_DL;
  FUN_00403094((int *)piStack_8[0x12]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00504b0d;
  puStack_14 = (undefined1 *)0x504b05;
  FUN_0045b45c(piStack_8,bStack_9 & 0xfc);
  return;
}

