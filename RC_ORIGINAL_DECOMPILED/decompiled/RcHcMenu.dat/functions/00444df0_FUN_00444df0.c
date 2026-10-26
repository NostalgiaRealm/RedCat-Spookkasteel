/*
 * FUN_00444df0 at 00444df0
 * undefined __register FUN_00444df0(int * param_1)
 * Address ranges: 00444df0-00444e14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444df0(int *param_1)

{
  HANDLE pvVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    pvVar1 = FUN_0042f92c((HWND)param_1[0xb]);
    if (pvVar1 != (HANDLE)0x0) {
      FUN_00444dcc(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}

