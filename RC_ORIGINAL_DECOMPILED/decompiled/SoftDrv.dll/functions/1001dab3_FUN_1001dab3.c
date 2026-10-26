/*
 * FUN_1001dab3 at 1001dab3
 * undefined FUN_1001dab3(void)
 * Address ranges: 1001dab3-1001dafc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001dab3(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10025e6c = 1;
                    /* WARNING: Could not recover jumptable at 0x1001dacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10025e6c = 1;
                    /* WARNING: Could not recover jumptable at 0x1001dae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10025ea0;
  }
  DAT_10025e6c = (uint)bVar2;
  return param_1;
}

