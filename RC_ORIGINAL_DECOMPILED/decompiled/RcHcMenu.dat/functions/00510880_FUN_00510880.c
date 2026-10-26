/*
 * FUN_00510880 at 00510880
 * undefined __register FUN_00510880(int param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 00510880-0051090d;0051092f-00510944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 71 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 71 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00510880(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  longlong lVar2;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_c;
  int local_8;
  
  puStack_24 = (undefined1 *)0x51089a;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_28 = &LAB_00510945;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (local_c == (undefined4 *)0x0) {
    puStack_30 = (undefined1 *)0x5108c0;
    puStack_24 = &stack0xfffffffc;
    iVar1 = FUN_00403224(param_3,(int)&PTR_FUN_0050fc3c);
    puStack_30 = (undefined1 *)0x5108c5;
    FUN_00501074(iVar1);
  }
  else {
    puStack_34 = &LAB_0051090e;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    puStack_24 = &stack0xfffffffc;
    FUN_004e7ea8(local_c,(undefined4 *)(local_8 + 0x27c));
    lVar2 = (longlong)ROUND(in_ST0);
    iVar1 = FUN_00403224(param_3,(int)&PTR_FUN_0050fc3c);
    FUN_00510144(iVar1,extraout_EDX,extraout_ECX,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    *in_FS_OFFSET = uStack_38;
  }
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_0051094c;
  puStack_28 = (undefined1 *)0x510944;
  FUN_00403db0((int *)&local_c);
  return;
}

