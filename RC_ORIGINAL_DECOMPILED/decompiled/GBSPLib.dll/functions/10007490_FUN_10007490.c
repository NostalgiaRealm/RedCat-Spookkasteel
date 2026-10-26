/*
 * FUN_10007490 at 10007490
 * undefined FUN_10007490(void)
 * Address ranges: 10007490-100074e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007490(undefined4 param_1)

{
  int iVar1;
  
  (*DAT_1014e35c)(s_____CreateLeafClusters_____100376f0);
  iVar1 = FUN_10007420(param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_CreateLeafClusters__Failed_to_fi_100376bc);
    return 0;
  }
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_Num_Clusters____5i_100376a0,DAT_1014e62c);
  }
  return 1;
}

