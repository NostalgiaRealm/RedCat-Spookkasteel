/*
 * FUN_10009a56 at 10009a56
 * int __cdecl FUN_10009a56(int param_1)
 * Address ranges: 10009a56-10009a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10009a56(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100e3c4c = 1;
                    /* WARNING: Could not recover jumptable at 0x10009a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100e3c4c = 1;
                    /* WARNING: Could not recover jumptable at 0x10009a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100e3c84;
  }
  DAT_100e3c4c = (uint)bVar2;
  return param_1;
}

