/*
 * FUN_004ca4a8 at 004ca4a8
 * uint __register FUN_004ca4a8(int * param_1)
 * Address ranges: 004ca4a8-004ca4e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004ca4a8(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004129d0(param_1[0x1e]);
  if (*(int *)(param_1[0x1e] + 4) <= (int)uVar1) {
    uVar1 = FUN_0043e6bc(param_1,(int *)0x0,(int *)0x0);
    FUN_004128e8(param_1[0x1e],uVar1 + 1);
  }
  FUN_0041298c(param_1[0x1e],uVar1,'\x01');
  return uVar1;
}

