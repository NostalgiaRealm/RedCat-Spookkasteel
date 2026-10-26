/*
 * FUN_5f002c90 at 5f002c90
 * bool __stdcall FUN_5f002c90(void)
 * Address ranges: 5f002c90-5f002cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_5f002c90(void)

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

