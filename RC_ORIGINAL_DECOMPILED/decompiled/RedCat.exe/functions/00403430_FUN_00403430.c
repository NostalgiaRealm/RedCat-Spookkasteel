/*
 * FUN_00403430 at 00403430
 * int __cdecl FUN_00403430(int param_1)
 * Address ranges: 00403430-00403479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_00403430(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004080d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040344a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004080d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040345f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004080f8;
  }
  DAT_004080d0 = (uint)bVar2;
  return param_1;
}

