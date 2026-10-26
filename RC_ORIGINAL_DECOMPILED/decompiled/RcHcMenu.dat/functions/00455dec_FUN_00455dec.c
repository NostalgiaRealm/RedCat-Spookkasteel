/*
 * FUN_00455dec at 00455dec
 * undefined __register FUN_00455dec(int param_1)
 * Address ranges: 00455dec-00455e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455dec(int param_1)

{
  int local_c;
  int local_8;
  
  *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) ^ 1;
  FUN_0041160c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),&local_c);
  if ((byte)(*(char *)(param_1 + 0x4b) - 3U) < 2) {
    local_c = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x16c);
  }
  else {
    local_8 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x16c);
  }
  PatBlt(*(HDC *)(param_1 + 0x140),local_c,local_8,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c)
         ,0x5a0049);
  return;
}

