/*
 * FUN_0049801c at 0049801c
 * undefined __register FUN_0049801c(uint param_1, int * param_2)
 * Address ranges: 0049801c-00498048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049801c(uint param_1,int *param_2)

{
  int extraout_ECX;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 0) {
    thunk_FUN_00402874(param_1);
    iVar1 = extraout_ECX;
  }
  FUN_0041483c(param_2,*(undefined4 *)(param_1 + 0x28),iVar1);
  return;
}

