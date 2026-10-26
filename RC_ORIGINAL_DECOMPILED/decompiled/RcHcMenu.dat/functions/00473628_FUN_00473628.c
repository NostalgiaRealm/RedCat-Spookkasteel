/*
 * FUN_00473628 at 00473628
 * undefined __register FUN_00473628(int * param_1, int param_2)
 * Address ranges: 00473628-0047365e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473628(int *param_1,int param_2)

{
  if (param_2 < 1) {
    if (*(char *)((int)param_1 + 0x8d) == '\n') {
      FUN_0047114c(param_1,'\x01');
    }
  }
  else {
    (**(code **)(*param_1 + 0x84))();
    FUN_0047114c(param_1,'\n');
  }
  param_1[0x1c] = param_2;
  return;
}

