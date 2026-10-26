/*
 * FUN_100078f0 at 100078f0
 * undefined FUN_100078f0(void)
 * Address ranges: 100078f0-100079dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100078f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar1 = *(int *)(param_1 + 0x34);
        *(int *)(param_1 + 0x58) = param_2;
        for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc + uVar2 * 4)) {
          uVar2 = (uint)(*(int *)(iVar1 + 8) == param_1);
          iVar3 = FUN_100078f0(*(undefined4 *)(iVar1 + 4 + (uint)(uVar2 == 0) * 4),param_2);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
    }
    else {
      iVar1 = FUN_10007880(param_1);
      if (iVar1 == 0) {
        (*DAT_1014e358)(s_FillAreas_r__No_model_for_leaf__100378f8);
        return 0;
      }
      if ((*(int *)(iVar1 + 0xdc) != param_2) && (*(int *)(iVar1 + 0xe0) != param_2)) {
        if (*(int *)(iVar1 + 0xdc) == 0) {
          *(int *)(iVar1 + 0xdc) = param_2;
          return 1;
        }
        if (*(int *)(iVar1 + 0xe0) == 0) {
          *(int *)(iVar1 + 0xe0) = param_2;
          return 1;
        }
        (*DAT_1014e35c)(s__WARNING__FillAreas_r__Area_Port_100378b8);
        return 1;
      }
    }
  }
  return 1;
}

