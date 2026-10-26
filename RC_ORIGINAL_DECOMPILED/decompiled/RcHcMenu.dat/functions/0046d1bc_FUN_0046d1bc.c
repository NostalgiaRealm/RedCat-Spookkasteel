/*
 * FUN_0046d1bc at 0046d1bc
 * undefined __register FUN_0046d1bc(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0046d1bc-0046d201
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 47 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 47 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046d1bc(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0046d202;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004052a4(&local_8,param_2);
  (**(code **)(*param_1 + 0xa0))(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046d209;
  puStack_18 = (undefined1 *)0x46d201;
  FUN_00403db0(&local_8);
  return;
}

