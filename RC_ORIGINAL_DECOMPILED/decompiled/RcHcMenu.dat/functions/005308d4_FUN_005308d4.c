/*
 * FUN_005308d4 at 005308d4
 * undefined1 __register FUN_005308d4(int param_1, undefined4 param_2, undefined4 param_3, undefined1 * param_4, undefined1 param_5)
 * Address ranges: 005308d4-00530933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_005308d4(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            undefined1 param_5)

{
  undefined1 local_d;
  
  if (*(char *)(param_1 + 0x2d8) == '\0') {
    *param_4 = 2;
    local_d = FUN_00548cf4(*(int **)(param_1 + 0x2d4),param_3,param_5);
  }
  else {
    *param_4 = 1;
    local_d = FUN_00548cf4(*(int **)(param_1 + 0x2d0),param_3,param_5);
  }
  return local_d;
}

