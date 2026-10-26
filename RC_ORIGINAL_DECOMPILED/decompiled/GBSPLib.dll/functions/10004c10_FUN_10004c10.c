/*
 * FUN_10004c10 at 10004c10
 * undefined FUN_10004c10(void)
 * Address ranges: 10004c10-10004d44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004c10(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  (*DAT_1014e35c)(s_____Remove_Hidden_Leafs_____10036d14);
  DAT_10312ffc = param_2;
  iVar2 = *(int *)(*(int *)(param_2 + 0x34) + 4);
  DAT_1014e234 = 0;
  iVar1 = FUN_10004690(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  DAT_1014e23c = 0;
  DAT_1014e230 = 0;
  DAT_1014e238 = 1;
  iVar2 = FUN_100047e0(*(undefined4 *)
                        (*(int *)(DAT_10312ffc + 0x34) + 4 + (uint)(iVar2 == param_2) * 4),0,1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (DAT_1014e23c != 0) {
    (*DAT_1014e35c)(s__________________________________10036ce8);
    (*DAT_1014e35c)(s_______LEAK_______10036cbc);
    (*DAT_1014e35c)(s___Level_is_NOT_sealed____10036c90);
    (*DAT_1014e35c)(s___Optimal_removal_will_not_be_pe_10036c64);
    (*DAT_1014e35c)(s__________________________________10036ce8);
    FUN_100049b0(&DAT_10036c5c,DAT_1014e230,param_2);
    return 0xffffffff;
  }
  DAT_1014e238 = 2;
  iVar2 = FUN_100048b0(param_1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  FUN_10004710(param_1);
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_Removed_Leafs____5i_10036c3c,DAT_1014e234);
  }
  return DAT_1014e234;
}

