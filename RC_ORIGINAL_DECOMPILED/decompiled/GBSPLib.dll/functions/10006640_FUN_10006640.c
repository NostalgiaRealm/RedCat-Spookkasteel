/*
 * FUN_10006640 at 10006640
 * undefined FUN_10006640(void)
 * Address ranges: 10006640-1000678c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10006640(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != -1) {
    iVar2 = FUN_10006640(param_1[4],param_2);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = FUN_10006640(param_1[5],param_2);
    return iVar2 != 0;
  }
  iVar2 = 0;
  if (0 < param_1[0xe]) {
    do {
      iVar1 = *(int *)(param_1[0xf] + iVar2 * 4);
      if ((*(char *)(iVar1 + 0x24) != '\0') && (0 < *(int *)(iVar1 + 0x34))) {
        *(undefined4 *)(DAT_1014e2b8 + DAT_1014e29c * 4) = *(undefined4 *)(iVar1 + 0x28);
        DAT_1014e29c = DAT_1014e29c + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0xe]);
  }
  DAT_1014e364 = DAT_1014e364 + 0x3c;
  iVar2 = FUN_10014a20(0x3c);
  if (iVar2 != 1) {
    (*DAT_1014e358)(s_SaveGFXLeafs_r__There_was_an_err_10037298);
    return false;
  }
  return true;
}

