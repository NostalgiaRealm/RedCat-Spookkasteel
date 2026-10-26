/*
 * USER32.DLL::GetKeyboardType at 00402ec4
 * int __stdcall GetKeyboardType(int nTypeFlag)
 * Address ranges: 00402ec4-00402ec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetKeyboardType
 */

int __stdcall GetKeyboardType(int nTypeFlag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardType(nTypeFlag);
  return iVar1;
}

