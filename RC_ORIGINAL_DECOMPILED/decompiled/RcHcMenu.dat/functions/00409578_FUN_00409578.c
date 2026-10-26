/*
 * FUN_00409578 at 00409578
 * undefined __register FUN_00409578(uint param_1, uint param_2, undefined2 * param_3, undefined2 * param_4)
 * Address ranges: 00409578-00409593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409578(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}

