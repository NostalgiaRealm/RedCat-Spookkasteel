/*
 * FUN_10010578 at 10010578
 * int __cdecl FUN_10010578(int param_1)
 * Address ranges: 10010578-100105c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10010578(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100ec320 = 1;
                    /* WARNING: Could not recover jumptable at 0x10010592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100ec320 = 1;
                    /* WARNING: Could not recover jumptable at 0x100105a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100ec36c;
  }
  DAT_100ec320 = (uint)bVar2;
  return param_1;
}

