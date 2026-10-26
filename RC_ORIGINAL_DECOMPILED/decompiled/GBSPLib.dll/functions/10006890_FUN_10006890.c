/*
 * FUN_10006890 at 10006890
 * undefined FUN_10006890(void)
 * Address ranges: 10006890-10006916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006890(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  DAT_1014e2e4 = DAT_1014e62c;
  local_4 = DAT_1014e62c;
  local_c = 5;
  local_8 = 4;
  FUN_10004d50(&local_c,0,param_1);
  iVar2 = 0;
  if (0 < DAT_1014e2e4) {
    do {
      iVar1 = FUN_10014a20(4);
      if (iVar1 != 1) {
        (*DAT_1014e358)(s_SaveGFXClusters__There_was_an_er_10037320);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_1014e2e4);
  }
  return 1;
}

