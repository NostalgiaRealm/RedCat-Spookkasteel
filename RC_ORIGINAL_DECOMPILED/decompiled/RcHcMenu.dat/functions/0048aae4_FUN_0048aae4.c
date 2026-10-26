/*
 * FUN_0048aae4 at 0048aae4
 * undefined __register FUN_0048aae4(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0048aae4-0048ab2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48a7d0 slot 10 for TFKStringProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48a7d0 slot 10 for
   TFKStringProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048aae4(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  VARIANTARG *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_18 = &LAB_0048ab2f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x6c))(param_1,&local_10);
  FUN_004054ac(local_c,local_10);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0048ab36;
  puStack_18 = (undefined1 *)0x48ab2e;
  FUN_00403db0((int *)&local_10);
  return;
}

