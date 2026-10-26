/*
 * FUN_0042f948 at 0042f948
 * LRESULT __register FUN_0042f948(UINT param_1, WPARAM param_2, LPARAM param_3)
 * Address ranges: 0042f948-0042f96e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_0042f948(UINT param_1,WPARAM param_2,LPARAM param_3)

{
  LRESULT LVar1;
  
  if (*(HWND *)(*(int *)PTR_DAT_005723fc + 0x24) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(*(int *)PTR_DAT_005723fc + 0x24),param_1,param_2,param_3);
    return LVar1;
  }
  return 0;
}

