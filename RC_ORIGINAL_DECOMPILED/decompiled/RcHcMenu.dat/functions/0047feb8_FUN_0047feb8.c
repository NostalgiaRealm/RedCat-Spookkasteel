/*
 * FUN_0047feb8 at 0047feb8
 * undefined __register FUN_0047feb8(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0047feb8-0047fee1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047feb8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_4 + -4) + 0x50))(*(int **)(param_4 + -4),param_1);
    if (iVar1 == -1) {
      (**(code **)(**(int **)(param_4 + -4) + 0x34))(*(int **)(param_4 + -4),param_1);
    }
  }
  return;
}

