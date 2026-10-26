/*
 * FUN_0043ab9c at 0043ab9c
 * undefined __register FUN_0043ab9c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0043ab9c-0043abd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043ab9c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_ECX;
  int iVar1;
  
  (**(code **)(param_4 + 8))(*(undefined4 *)(param_4 + 0xc),param_1);
  iVar1 = extraout_ECX;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = param_4;
    FUN_0043ab9c(*(int *)(param_1 + 0xc),param_4,extraout_ECX,param_4);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0043ab9c(*(int *)(param_1 + 8),param_4,iVar1,param_4);
  }
  return;
}

