/*
 * FUN_0046e2a0 at 0046e2a0
 * undefined __register FUN_0046e2a0(int * param_1, VARIANT * param_2, undefined4 param_3)
 * Address ranges: 0046e2a0-0046e30e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4658bc slot 23 for TInterfaceField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4658bc slot 23 for
   TInterfaceField. Original bytes unchanged; names and types still inferred. */

void FUN_0046e2a0(int *param_1,VARIANT *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0046e30f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0046e31c(param_1,&local_8,param_3);
  if (local_8 == 0) {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_0046e31c(param_1,&local_c,extraout_ECX);
    FUN_00405520(param_2,(int *)local_c);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046e316;
  puStack_1c = (undefined1 *)0x46e30e;
  FUN_00404878((VARIANTARG *)&local_c,"\x0f\bIUnknown",2);
  return;
}

