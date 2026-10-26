/*
 * FUN_0061b65d at 0061b65d
 * undefined FUN_0061b65d(void)
 * Address ranges: 0061b65d-0061b6a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061b65d(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_007101ec = 1;
                    /* WARNING: Could not recover jumptable at 0x0061b677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_007101ec = 1;
                    /* WARNING: Could not recover jumptable at 0x0061b68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0070fffc;
  }
  DAT_007101ec = (uint)bVar2;
  return param_1;
}

