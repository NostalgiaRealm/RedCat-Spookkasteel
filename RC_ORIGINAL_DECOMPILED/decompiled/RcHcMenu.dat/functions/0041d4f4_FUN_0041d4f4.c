/*
 * FUN_0041d4f4 at 0041d4f4
 * int __register FUN_0041d4f4(int param_1, int param_2, int param_3)
 * Address ranges: 0041d4f4-0041d507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0041d4f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 * param_2 + (param_3 - 1U) & ~(param_3 - 1U);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  return (int)uVar1 >> 3;
}

