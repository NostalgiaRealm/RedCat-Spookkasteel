/*
 * FUN_1000e0fc at 1000e0fc
 * int __cdecl FUN_1000e0fc(int param_1)
 * Address ranges: 1000e0fc-1000e145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000e0fc(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_101c38dc = 1;
                    /* WARNING: Could not recover jumptable at 0x1000e116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_101c38dc = 1;
                    /* WARNING: Could not recover jumptable at 0x1000e12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_101c3928;
  }
  DAT_101c38dc = (uint)bVar2;
  return param_1;
}

