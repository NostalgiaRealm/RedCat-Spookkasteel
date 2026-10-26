/*
 * FUN_10006c20 at 10006c20
 * undefined FUN_10006c20(void)
 * Address ranges: 10006c20-10006c75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006c20(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_1014e2a8;
  local_c = 0xe;
  local_8 = 0xc;
  iVar1 = FUN_10004d50(&local_c,DAT_1014e248,param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_There_was_an_error_writing_the_v_100373cc);
    return 0;
  }
  return 1;
}

