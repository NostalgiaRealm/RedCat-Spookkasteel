/*
 * FUN_10012670 at 10012670
 * undefined FUN_10012670(void)
 * Address ranges: 10012670-10012755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10012670(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_103df880 = 0;
  iVar2 = (*(int **)(param_1 + 8))[1];
  if (0 < **(int **)(param_1 + 8)) {
    do {
      if (0x3ff < DAT_103df880) {
        (*DAT_1014e358)(s_GetFaceVertIndexNumbers__Max_Tem_10039ff8);
        return 0;
      }
      iVar1 = FUN_10012560(iVar2);
      if (iVar1 == -1) {
        (*DAT_1014e358)(s_GetFaceVertIndexNumbers__Could_n_10039fc8);
        return 0;
      }
      iVar2 = iVar2 + 0xc;
      (&DAT_103de87c)[DAT_103df880] = iVar1;
      DAT_103df880 = DAT_103df880 + 1;
      DAT_103df888 = DAT_103df888 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < **(int **)(param_1 + 8));
  }
  *(int *)(param_1 + 0x34) = DAT_103df880;
  iVar2 = FUN_10014310(DAT_103df880 * 4);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_GetFaceVertIndexNumbers__Out_of_m_1003a02c);
    return 0;
  }
  iVar2 = 0;
  if (0 < DAT_103df880) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) = (&DAT_103de87c)[iVar2];
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_103df880);
  }
  return 1;
}

