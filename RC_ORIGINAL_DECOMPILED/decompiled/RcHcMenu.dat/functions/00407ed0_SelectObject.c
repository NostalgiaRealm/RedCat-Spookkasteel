/*
 * GDI32.DLL::SelectObject at 00407ed0
 * HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
 * Address ranges: 00407ed0-00407ed5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SelectObject
 */

HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}

