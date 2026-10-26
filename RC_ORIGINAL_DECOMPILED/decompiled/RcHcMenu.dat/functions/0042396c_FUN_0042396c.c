/*
 * FUN_0042396c at 0042396c
 * undefined __register FUN_0042396c(byte param_1, undefined4 param_2, undefined * param_3)
 * Address ranges: 0042396c-00423a2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042396c(byte param_1,undefined4 param_2,undefined *param_3)

{
  LPCSTR lpProcName;
  FARPROC pFVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = (undefined1 *)0x423982;
  local_8 = param_3;
  FUN_004041e4((int)param_3);
  puStack_1c = &LAB_00423a2b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((&DAT_005736e8)[param_1] == '\0') {
    if (DAT_005736e4 == (HMODULE)0x0) {
      pFVar1 = (FARPROC)0x0;
    }
    else {
      puStack_18 = &stack0xfffffffc;
      if (((param_1 == 0) && (puStack_18 = &stack0xfffffffc, DAT_005736f0 == '\0')) &&
         (puStack_18 = &stack0xfffffffc,
         DAT_005736d8 = FUN_0042396c(4,DAT_005736d8,"GetMonitorInfoA"), DAT_005736f0 == '\0')) {
        FUN_00403db0((int *)&local_8);
      }
      lpProcName = FUN_004041f4(local_8);
      pFVar1 = GetProcAddress(DAT_005736e4,lpProcName);
    }
    if ((pFVar1 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_005736f0 = '\x01';
    }
    (&DAT_005736e8)[param_1] = 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00423a32;
  puStack_1c = (undefined1 *)0x423a2a;
  FUN_00403db0((int *)&local_8);
  return;
}

