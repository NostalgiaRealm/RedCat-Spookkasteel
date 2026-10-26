/*
 * FUN_00432858 at 00432858
 * undefined __register FUN_00432858(int param_1, char param_2)
 * Address ranges: 00432858-0043287b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432858(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x89)) {
    *(char *)(param_1 + 0x89) = param_2;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    FUN_00433700(param_1,0xb022,0,0);
  }
  return;
}

