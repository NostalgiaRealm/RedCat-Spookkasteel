/*
 * FUN_100302c8 at 100302c8
 * undefined FUN_100302c8(void)
 * Address ranges: 100302c8-10030311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100302c8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1052a5b8 = 1;
                    /* WARNING: Could not recover jumptable at 0x100302e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1052a5b8 = 1;
                    /* WARNING: Could not recover jumptable at 0x100302f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1052a5e8;
  }
  DAT_1052a5b8 = (uint)bVar2;
  return param_1;
}

