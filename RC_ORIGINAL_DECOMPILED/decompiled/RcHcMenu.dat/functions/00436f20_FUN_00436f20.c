/*
 * FUN_00436f20 at 00436f20
 * undefined __register FUN_00436f20(int * param_1)
 * Address ranges: 00436f20-00436f32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436f20(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_00436f70(param_1,extraout_EDX,extraout_ECX);
  return;
}

