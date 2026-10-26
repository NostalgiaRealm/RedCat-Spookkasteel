/*
 * FUN_0041253c at 0041253c
 * undefined __register FUN_0041253c(undefined4 * param_1, int param_2)
 * Address ranges: 0041253c-00412575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041253c(undefined4 *param_1,int param_2)

{
  if ((param_2 < (int)param_1[2]) || (0x7ffffff < param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_00572378,param_2);
  }
  if (param_2 != param_1[3]) {
    FUN_00402818(param_1 + 1,param_2 << 2);
    param_1[3] = param_2;
  }
  return;
}

