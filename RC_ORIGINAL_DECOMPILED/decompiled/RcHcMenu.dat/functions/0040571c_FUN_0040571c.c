/*
 * FUN_0040571c at 0040571c
 * undefined __register FUN_0040571c(uint * param_1, uint * param_2, undefined4 param_3)
 * Address ranges: 0040571c-00405786;004057a8-004057af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040571c(uint *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*param_1 & 0xfff);
  puVar3 = (undefined4 *)(*param_2 & 0xfff);
  if ((undefined4 *)0x11 < puVar1) {
    puVar2 = puVar1;
    if (puVar1 != (undefined4 *)0x100) goto LAB_00405778;
    puVar1 = (undefined4 *)0x8;
  }
  if ((undefined4 *)0x11 < puVar3) {
    puVar2 = puVar3;
    if (puVar3 != (undefined4 *)0x100) {
LAB_00405778:
      if (puVar2 != (undefined4 *)0x101) {
        thunk_FUN_00402874((uint)puVar2);
        return;
      }
      FUN_00405698((short *)0x101,puVar3,param_3);
      return;
    }
    puVar3 = (undefined4 *)0x8;
  }
  (**(code **)(&UNK_00405787 +
              (uint)*(byte *)(CONCAT31((int3)((uint)puVar3 >> 8),*(undefined1 *)(puVar3 + 0x15bc1b))
                              + 0x56f080 +
                             CONCAT31((int3)((uint)puVar1 >> 8),*(undefined1 *)(puVar1 + 0x15bc1b))
                             * 8) * 4))();
  return;
}

