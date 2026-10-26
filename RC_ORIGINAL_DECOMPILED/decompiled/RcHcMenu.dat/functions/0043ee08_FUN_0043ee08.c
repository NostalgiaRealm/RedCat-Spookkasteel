/*
 * FUN_0043ee08 at 0043ee08
 * undefined __register FUN_0043ee08(int * param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 0043ee08-0043ee53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043ee08(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  
  bVar1 = FUN_0043e3b4((int)param_1);
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))
              (param_1,param_5,param_2,
               CONCAT31((int3)((*(uint *)(&DAT_0056f8cc + (uint)*(byte *)(param_1 + 0xd) * 4) |
                               *(uint *)(&DAT_0056f8dc + (uint)*(byte *)((int)param_1 + 0x37) * 4))
                              >> 8),param_4),
               *(uint *)(&DAT_0056f8cc + (uint)*(byte *)(param_1 + 0xd) * 4) |
               *(uint *)(&DAT_0056f8dc + (uint)*(byte *)((int)param_1 + 0x37) * 4),param_6,param_3);
  }
  return;
}

