/*
 * FUN_00565978 at 00565978
 * undefined __register FUN_00565978(int param_1, byte * param_2)
 * Address ranges: 00565978-005659c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00565978(int param_1,byte *param_2)

{
  byte local_30 [36];
  byte *local_c;
  int local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = 0;
  }
  else {
    local_c = param_2;
    local_8 = param_1;
    FUN_004028e8((byte *)(*(int *)(param_1 + 8) + 8),1,0x12,local_30);
    FUN_00402bd8(local_c,local_30,0x20);
  }
  return;
}

