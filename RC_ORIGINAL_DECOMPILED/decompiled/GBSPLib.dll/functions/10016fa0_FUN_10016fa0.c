/*
 * FUN_10016fa0 at 10016fa0
 * undefined FUN_10016fa0(void)
 * Address ranges: 10016fa0-100170bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10016fa0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xa8) != 0)) &&
      (*(int *)(param_1 + 0xb0) == 0)) &&
     ((*(int *)(param_1 + 0x90) <= param_2 && (param_2 <= *(int *)(param_1 + 0x94))))) {
    puVar1 = (undefined4 *)FUN_10016b80(param_1,param_3,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0x2c] = param_2;
      puVar1[0x2b] = *(undefined4 *)(param_1 + 0xac);
      puVar1[0x1d] = param_1;
      FUN_100161e0();
      puVar1[0x28] = *(undefined4 *)(param_1 + 0xa0);
      iVar2 = FUN_10018ca0(puVar1,param_2,puVar1 + 0x20);
      if (iVar2 != 0) {
        puVar3 = puVar1 + 0x20;
        puVar4 = puVar1;
        for (iVar2 = 9; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
        }
        if (puVar1[0x28] != 0) {
          FUN_10019bc0();
        }
        if (puVar1[9] != 0) {
          FUN_10019bc0();
        }
        return puVar1;
      }
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x42b,&DAT_10265ce0,0);
      FUN_100161f0();
    }
  }
  return (undefined4 *)0x0;
}

