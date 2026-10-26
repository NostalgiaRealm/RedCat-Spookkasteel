/*
 * FUN_10003ee0 at 10003ee0
 * undefined FUN_10003ee0(void)
 * Address ranges: 10003ee0-10003fd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003ee0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_1 != -1) {
    FUN_10003ee0(param_1[4]);
    FUN_10003ee0(param_1[5]);
    if ((((*(int *)param_1[4] == -1) && (*(int *)param_1[5] == -1)) &&
        (uVar1 = ((int *)param_1[4])[2], (uVar1 & 1) != 0)) &&
       ((uVar2 = ((int *)param_1[5])[2], (uVar2 & 1) != 0 && (((uVar2 ^ uVar1) & 0xffff0000) == 0)))
       ) {
      if (param_1[3] != 0) {
        (*DAT_1014e358)(s_Node_>Faces_seperating_BSP_CONTE_10036910);
      }
      if ((*(int *)(param_1[4] + 0xc) != 0) || (*(int *)(param_1[5] + 0xc) != 0)) {
        (*DAT_1014e358)(s__Node_>faces_with_children_100368f4);
      }
      *param_1 = -1;
      uVar1 = *(uint *)(param_1[4] + 8);
      param_1[2] = uVar1;
      param_1[2] = *(uint *)(param_1[5] + 8) | uVar1;
      param_1[0x14] = 0;
      if (param_1[0x19] != 0) {
        (*DAT_1014e358)(s_MergeNodes__node_>brushlist_100368d8);
      }
      param_1[0x19] = *(int *)(param_1[5] + 100);
      piVar4 = *(int **)(param_1[4] + 100);
      while (piVar4 != (int *)0x0) {
        piVar3 = (int *)*piVar4;
        *piVar4 = param_1[0x19];
        param_1[0x19] = (int)piVar4;
        piVar4 = piVar3;
      }
      DAT_1014e200 = DAT_1014e200 + 1;
    }
  }
  return;
}

