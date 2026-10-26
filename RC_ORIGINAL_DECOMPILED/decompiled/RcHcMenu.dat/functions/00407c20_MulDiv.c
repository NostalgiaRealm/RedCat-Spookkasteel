/*
 * KERNEL32.DLL::MulDiv at 00407c20
 * int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator)
 * Address ranges: 00407c20-00407c25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::MulDiv
 */

int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}

