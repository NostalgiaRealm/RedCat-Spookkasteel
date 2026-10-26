/*
 * FUN_00471664 at 00471664
 * undefined __register FUN_00471664(int * param_1)
 * Address ranges: 00471664-004716ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471664(int *param_1)

{
  (**(code **)(*param_1 + 0x180))(param_1,0);
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  (**(code **)(*param_1 + 0x10c))();
  (**(code **)(*param_1 + 0x90))();
  FUN_00472a0c(param_1,0);
  (**(code **)(*param_1 + 0x1c4))();
  param_1[0x10] = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  return;
}

