/*
 * FUN_10006b10 at 10006b10
 * undefined FUN_10006b10(void)
 * Address ranges: 10006b10-10006bbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006b10(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_1014e280 = DAT_1014e1fc;
  local_18 = DAT_1014e1fc;
  local_20 = 10;
  local_1c = 0x14;
  FUN_10004d50(&local_20,0,param_1);
  iVar3 = 0;
  if (0 < DAT_1014e280) {
    puVar2 = &DAT_1003fe04;
    do {
      local_14 = puVar2[-3];
      local_8 = *puVar2;
      local_10 = puVar2[-2];
      local_4 = puVar2[1];
      local_c = puVar2[-1];
      iVar1 = FUN_10014a20(0x14);
      if (iVar1 != 1) {
        (*DAT_1014e358)(s_SaveGFXPlanes__There_was_an_erro_10037394);
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 5;
    } while (iVar3 < DAT_1014e280);
  }
  return 1;
}

