/*
 * FUN_00599540 at 00599540
 * undefined FUN_00599540(void)
 * Address ranges: 00599540-0059959e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00599540(int param_1,int param_2)

{
  *(int *)(param_1 + 100) = param_2;
  switch(param_2 % 5) {
  case 0:
    FUN_0059b270();
    return;
  case 1:
    FUN_0059b240();
    return;
  case 2:
    FUN_0059b250();
    return;
  case 3:
    FUN_0059b290();
    return;
  case 4:
    FUN_0059b2b0();
    return;
  default:
    FUN_0059b2c0();
    return;
  }
}

