/*
 * FUN_10006990 at 10006990
 * undefined FUN_10006990(void)
 * Address ranges: 10006990-10006a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10006990(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 == -1) {
    return true;
  }
  puVar1 = (undefined4 *)param_1[3];
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = FUN_10006990(param_1[4],param_2);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_10006990(param_1[5],param_2);
      return iVar2 != 0;
    }
    if ((((*(char *)(puVar1 + 9) != '\0') && (puVar1[0x11] == 0)) && (puVar1[0xf] == 0)) &&
       (((puVar1[0x10] == 0 && (0 < (int)puVar1[0xd])) && (iVar2 = FUN_10014a20(0x24), iVar2 != 1)))
       ) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  (*DAT_1014e358)(s_SaveGFXFace_r__There_was_an_erro_1003735c);
  return false;
}

