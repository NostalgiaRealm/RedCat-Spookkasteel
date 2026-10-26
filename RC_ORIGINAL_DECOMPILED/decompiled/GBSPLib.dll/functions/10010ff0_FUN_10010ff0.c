/*
 * FUN_10010ff0 at 10010ff0
 * undefined FUN_10010ff0(void)
 * Address ranges: 10010ff0-10011024
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10010ff0(int param_1,int *param_2)

{
  if (*param_2 == 0x400) {
    (*DAT_1014e358)(s_TriPatch_>NumPoints____MAX_TRI_P_10039a08);
    return 0;
  }
  param_2[*param_2 + 0x100004] = param_1;
  *param_2 = *param_2 + 1;
  return 1;
}

