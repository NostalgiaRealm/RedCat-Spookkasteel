/*
 * FUN_0046cc2c at 0046cc2c
 * undefined __register FUN_0046cc2c(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0046cc2c-0046cc6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 23 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 23 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046cc2c(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046cc6f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + 0x58))(param_1,&local_8);
  FUN_004054ac(param_2,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046cc76;
  puStack_18 = (undefined1 *)0x46cc6e;
  FUN_00403db0((int *)&local_8);
  return;
}

