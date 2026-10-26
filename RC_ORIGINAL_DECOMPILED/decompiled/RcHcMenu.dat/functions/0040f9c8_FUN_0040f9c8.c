/*
 * FUN_0040f9c8 at 0040f9c8
 * uint __register FUN_0040f9c8(int * param_1, int param_2)
 * Address ranges: 0040f9c8-0040f9f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0040f9c8(int *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_2 + 0xc);
  if (((uint)pcVar2 & 0xffffff00) != 0) {
    if (*(byte *)(param_2 + 0xf) < 0xfe) {
      uVar1 = (*pcVar2)(param_1,*(undefined4 *)(param_2 + 0x10));
      return uVar1;
    }
    if (*(byte *)(param_2 + 0xf) != 0xff) {
      uVar1 = (**(code **)((int)(short)pcVar2 + *param_1))();
      return uVar1;
    }
    pcVar2 = (code *)(uint)*(byte *)((int)param_1 + ((uint)pcVar2 & 0xffffff));
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(char)pcVar2);
}

