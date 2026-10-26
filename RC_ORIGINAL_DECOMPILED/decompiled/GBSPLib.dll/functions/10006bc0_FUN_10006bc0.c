/*
 * FUN_10006bc0 at 10006bc0
 * undefined FUN_10006bc0(void)
 * Address ranges: 10006bc0-10006c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006bc0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 8;
  local_8 = 8;
  local_4 = DAT_1014e2a0;
  iVar1 = FUN_10004d50(&local_c,DAT_1014e2ac,param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_There_was_an_error_writing_the_v_100373cc);
    return 0;
  }
  return 1;
}

