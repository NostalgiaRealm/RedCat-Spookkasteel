/*
 * FUN_1000f790 at 1000f790
 * undefined FUN_1000f790(void)
 * Address ranges: 1000f790-1000f810
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000f790(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_1000c250(param_1[1]);
  iVar4 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 0xc;
      iVar2 = *(int *)(DAT_1014e314 + (*param_1 + iVar4) * 4) * 0xc;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(iVar1 + 4) + -0xc + iVar3) = *(undefined4 *)(iVar2 + DAT_1014e248);
      *(undefined4 *)(*(int *)(iVar1 + 4) + -8 + iVar3) = *(undefined4 *)(iVar2 + 4 + DAT_1014e248);
      *(undefined4 *)(*(int *)(iVar1 + 4) + -4 + iVar3) = *(undefined4 *)(iVar2 + 8 + DAT_1014e248);
    } while (iVar4 < param_1[1]);
  }
  FUN_1000d500(iVar1);
  return iVar1;
}

