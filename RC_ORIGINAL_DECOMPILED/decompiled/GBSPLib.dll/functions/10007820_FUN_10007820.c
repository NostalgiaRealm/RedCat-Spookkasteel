/*
 * FUN_10007820 at 10007820
 * undefined FUN_10007820(void)
 * Address ranges: 10007820-1000787e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007820(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_____Create_Leaf_Sides_____10037870);
  }
  iVar1 = FUN_10007700(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_Num_Leaf_Sides____5i_10037854,DAT_1014e628);
    (*DAT_1014e35c)(s_Num_Leaf_Bevels____5i_10037838,DAT_102487c8);
  }
  return 1;
}

