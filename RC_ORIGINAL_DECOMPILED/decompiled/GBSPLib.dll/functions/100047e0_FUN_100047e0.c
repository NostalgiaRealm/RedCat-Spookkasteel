/*
 * FUN_100047e0 at 100047e0
 * undefined FUN_100047e0(void)
 * Address ranges: 100047e0-100048a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100047e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(uint *)(param_1 + 8) & 1) == 0) && (*(int *)(param_1 + 0x40) != DAT_1014e238)) {
    *(int *)(param_1 + 0x40) = DAT_1014e238;
    *(int *)(param_1 + 0x48) = param_3;
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x44) != 0) {
        DAT_1014e23c = 1;
        DAT_1014e230 = param_1;
        DAT_1014e240 = *(undefined4 *)(param_1 + 0x44);
        return 1;
      }
    }
    else {
      *(uint *)(param_1 + 8) = CONCAT31((uint3)(*(uint *)(param_1 + 8) >> 8) & 0xffff00,1);
    }
    for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc + iVar3 * 4)) {
      if (*(int *)(iVar1 + 4) == param_1) {
        iVar3 = 0;
      }
      else {
        if (*(int *)(iVar1 + 8) != param_1) {
          (*DAT_1014e358)(s_FillLeafs_r__Portal_does_not_loo_10036b40);
          return 0;
        }
        iVar3 = 1;
      }
      iVar2 = FUN_100047e0(*(undefined4 *)(iVar1 + 4 + (uint)(iVar3 == 0) * 4),param_2,param_3 + 1);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

