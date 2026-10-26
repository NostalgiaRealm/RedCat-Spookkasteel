/*
 * FUN_0050091c at 0050091c
 * undefined __register FUN_0050091c(int * param_1, int param_2)
 * Address ranges: 0050091c-00500953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050091c(int *param_1,int param_2)

{
  uint uVar1;
  uint extraout_EDX;
  
  uVar1 = param_2 - 1;
  if (3 < uVar1) {
    thunk_FUN_00402874((uint)param_1);
    uVar1 = extraout_EDX;
  }
  FUN_004c88fc((int *)param_1[0x88],(char)uVar1 + 1);
  (**(code **)(*param_1 + 0xe0))();
  return;
}

