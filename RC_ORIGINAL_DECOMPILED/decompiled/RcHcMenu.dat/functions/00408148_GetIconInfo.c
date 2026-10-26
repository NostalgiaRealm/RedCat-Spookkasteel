/*
 * USER32.DLL::GetIconInfo at 00408148
 * BOOL __stdcall GetIconInfo(HICON hIcon, PICONINFO piconinfo)
 * Address ranges: 00408148-0040814d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetIconInfo
 */

BOOL __stdcall GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetIconInfo(hIcon,piconinfo);
  return BVar1;
}

