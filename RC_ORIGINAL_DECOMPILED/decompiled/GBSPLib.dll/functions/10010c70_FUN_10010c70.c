/*
 * FUN_10010c70 at 10010c70
 * undefined FUN_10010c70(void)
 * Address ranges: 10010c70-10010c9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10010c70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0x7ff < iVar1) {
    (*DAT_1014e358)(s_TriPatch_>NumTris_>__MAX_TRI_TRI_1003995c);
    return 0;
  }
  *(int *)(param_1 + 8) = iVar1 + 1;
  return param_1 + (iVar1 * 3 + 0x10ac04) * 4;
}

