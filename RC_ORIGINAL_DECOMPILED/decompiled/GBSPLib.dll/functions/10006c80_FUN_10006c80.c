/*
 * FUN_10006c80 at 10006c80
 * undefined FUN_10006c80(void)
 * Address ranges: 10006c80-10006cd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006c80(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_1014e27c;
  local_c = 0xd;
  local_8 = 4;
  iVar1 = FUN_10004d50(&local_c,DAT_1014e314,param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_SaveGFXvertIndexList__There_was_a_100373f4);
    return 0;
  }
  return 1;
}

