/*
 * FUN_004c8afc at 004c8afc
 * undefined __register FUN_004c8afc(int param_1)
 * Address ranges: 004c8afc-004c8b49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8afc(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x138) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    local_18 = 0xb018;
    local_14 = *(undefined4 *)(param_1 + 0x138);
    local_c = 0;
    local_10 = param_1;
    local_8 = param_1;
    FUN_004357bc(*(int *)(param_1 + 0x24),(int)&local_18);
  }
  return;
}

