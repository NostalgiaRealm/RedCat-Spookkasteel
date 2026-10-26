/*
 * FUN_00402ea4 at 00402ea4
 * undefined __register FUN_00402ea4(undefined1 * param_1, undefined1 * param_2, uint param_3)
 * Address ranges: 00402ea4-00402ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402ea4(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  
  for (uVar1 = param_3 & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  cVar2 = (char)(param_3 >> 8);
  for (uVar1 = (uint)(byte)(cVar2 - (char)param_3); uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = (uint)(byte)(0x20 - cVar2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  return;
}

