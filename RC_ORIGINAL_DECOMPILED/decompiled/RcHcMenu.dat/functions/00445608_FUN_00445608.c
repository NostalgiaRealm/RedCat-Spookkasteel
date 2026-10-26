/*
 * FUN_00445608 at 00445608
 * undefined __register FUN_00445608(int * param_1)
 * Address ranges: 00445608-0044564e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00445608(int *param_1)

{
  HANDLE pvVar1;
  
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)((int)param_1 + 0x35) != '\0')) {
    pvVar1 = FUN_004407fc((POINT *)(param_1 + 0x12));
    if (pvVar1 == (HANDLE)0x0) {
      FUN_00444dcc(param_1,*(char *)(*(int *)PTR_DAT_005723fc + 0x28));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
    else {
      FUN_00444dcc(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}

