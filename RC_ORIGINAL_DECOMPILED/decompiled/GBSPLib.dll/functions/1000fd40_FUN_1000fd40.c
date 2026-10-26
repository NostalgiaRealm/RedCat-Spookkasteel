/*
 * FUN_1000fd40 at 1000fd40
 * undefined FUN_1000fd40(void)
 * Address ranges: 1000fd40-1000fdfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000fd40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1000fe00();
  *(undefined4 *)(DAT_1031303c + param_1 * 4) = uVar1;
  iVar2 = *(int *)(DAT_1031303c + param_1 * 4);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_BuildPatch__Could_not_allocate_p_100395e0);
    return 0;
  }
  FUN_10011440(param_1,iVar2);
  uVar1 = FUN_1000f790(DAT_1014e288 + param_1 * 0x24);
  *(undefined4 *)(*(int *)(DAT_1031303c + param_1 * 4) + 4) = uVar1;
  iVar2 = FUN_1000f6f0(*(undefined4 *)(DAT_1031303c + param_1 * 4));
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_BuildPatch__Could_not_calculate_p_100395b0);
    return 0;
  }
  uVar1 = FUN_1000f960(*(undefined4 *)(DAT_1031303c + param_1 * 4));
  *(undefined4 *)(DAT_1031303c + param_1 * 4) = uVar1;
  if (*(int *)(DAT_1031303c + param_1 * 4) == 0) {
    (*DAT_1014e358)(s_BuildPatch__Could_not_subdivide_p_10039584);
    return 0;
  }
  return 1;
}

