/*
 * FUN_1000efc0 at 1000efc0
 * undefined FUN_1000efc0(void)
 * Address ranges: 1000efc0-1000eff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000efc0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 == -1) {
    return param_1[2];
  }
  uVar1 = FUN_1000efc0(param_1[4]);
  uVar2 = FUN_1000efc0(param_1[5]);
  uVar3 = uVar2 | uVar1;
  if (((uVar1 & 1) == 0) || ((uVar2 & 1) == 0)) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  return uVar3;
}

