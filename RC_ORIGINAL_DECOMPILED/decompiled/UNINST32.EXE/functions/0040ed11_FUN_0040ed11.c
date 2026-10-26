/*
 * FUN_0040ed11 at 0040ed11
 * int __cdecl FUN_0040ed11(int param_1)
 * Address ranges: 0040ed11-0040ed5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_0040ed11(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00413674 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040ed2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00413674 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0041354c;
  }
  DAT_00413674 = (uint)bVar2;
  return param_1;
}

