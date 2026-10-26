/*
 * FUN_00601bf8 at 00601bf8
 * undefined FUN_00601bf8(void)
 * Address ranges: 00601bf8-00601c23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 * __thiscall
FUN_00601bf8(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == param_4) {
      return param_3;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_2,*param_3);
    if (cVar1 != '\0') break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

