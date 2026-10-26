/*
 * FUN_0048135c at 0048135c
 * uint __register FUN_0048135c(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 0048135c-0048138f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0048135c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint local_8;
  
  if (*(short *)(param_1 + 0xba) == 0) {
    local_8 = param_3;
    uVar1 = FUN_0047cacc(param_1);
    local_8 = uVar1 & 0xff;
  }
  else {
    local_8 = param_3 & 0xffffff00;
    uVar1 = (**(code **)(param_1 + 0xb8))(*(undefined4 *)(param_1 + 0xbc),param_1,&local_8);
  }
  return CONCAT31((int3)(uVar1 >> 8),(undefined1)local_8);
}

