/*
 * FUN_005378cc at 005378cc
 * undefined __register FUN_005378cc(int * param_1, int param_2)
 * Address ranges: 005378cc-00537902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005378cc(int *param_1,int param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  uVar1 = *(int *)(param_2 + 0xc) - param_1[0x81];
  if (SBORROW4(*(int *)(param_2 + 0xc),param_1[0x81])) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  *(uint *)(param_2 + 4) = uVar1;
  return;
}

