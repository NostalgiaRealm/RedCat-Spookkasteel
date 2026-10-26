/*
 * FUN_00601cdf at 00601cdf
 * undefined FUN_00601cdf(void)
 * Address ranges: 00601cdf-00601d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 * __thiscall FUN_00601cdf(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_00600dfa(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

