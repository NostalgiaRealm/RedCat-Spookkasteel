/*
 * FUN_00459f84 at 00459f84
 * uint __register FUN_00459f84(int param_1, int param_2)
 * Address ranges: 00459f84-00459fa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00459f84(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - param_1;
  if (SBORROW4(param_2,param_1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  return uVar1;
}

