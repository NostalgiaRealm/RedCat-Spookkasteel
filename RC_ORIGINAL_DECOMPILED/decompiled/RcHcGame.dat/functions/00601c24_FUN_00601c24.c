/*
 * FUN_00601c24 at 00601c24
 * undefined FUN_00601c24(void)
 * Address ranges: 00601c24-00601c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 * __thiscall
FUN_00601c24(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == param_4) {
      return param_3;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_2,*param_3);
    if (cVar1 == '\0') break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

