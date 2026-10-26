/*
 * FUN_0047114c at 0047114c
 * undefined __register FUN_0047114c(int * param_1, char param_2)
 * Address ranges: 0047114c-00471175
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047114c(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x8d)) {
    *(char *)((int)param_1 + 0x8d) = param_2;
    *(undefined1 *)((int)param_1 + 0x92) = 0;
    (**(code **)(*param_1 + 0xac))(param_1,6,0);
  }
  return;
}

