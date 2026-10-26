/*
 * FUN_5f002c40 at 5f002c40
 * bool __stdcall FUN_5f002c40(void)
 * Address ranges: 5f002c40-5f002c86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_5f002c40(void)

{
  int iVar1;
  HWND in_stack_00000014;
  WCHAR local_20 [16];
  
  if ((0x35e < DAT_5f005260) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameW(in_stack_00000014,local_20,0x10);
    iVar1 = lstrcmpW(local_20,L"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}

