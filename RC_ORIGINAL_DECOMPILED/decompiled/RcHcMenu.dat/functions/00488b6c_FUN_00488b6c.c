/*
 * FUN_00488b6c at 00488b6c
 * undefined __register FUN_00488b6c(int * param_1)
 * Address ranges: 00488b6c-00488b9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00488b6c(int *param_1)

{
  (**(code **)(*param_1 + 0x270))();
  if ((char)param_1[0x93] == '\0') {
    FUN_0047fc9c(param_1[0x5b],0x60010,-(uint)((char)param_1[0x95] != '\0'));
  }
  return;
}

