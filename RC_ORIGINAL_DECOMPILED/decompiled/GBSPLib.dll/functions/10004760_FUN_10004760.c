/*
 * FUN_10004760 at 10004760
 * undefined FUN_10004760(void)
 * Address ranges: 10004760-100047d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 8) & 1) == 0) && (*(int *)(param_1 + 0x40) != DAT_1014e238)) {
    iVar1 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x40) = DAT_1014e238;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc + iVar3 * 4)) {
      if (*(int *)(iVar1 + 4) == param_1) {
        iVar3 = 0;
      }
      else {
        if (*(int *)(iVar1 + 8) != param_1) {
          (*DAT_1014e358)(s_RemoveOutside2_r__Portal_does_no_10036b04);
          return 0;
        }
        iVar3 = 1;
      }
      iVar2 = FUN_10004760(*(undefined4 *)(iVar1 + 4 + (uint)(iVar3 == 0) * 4));
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

