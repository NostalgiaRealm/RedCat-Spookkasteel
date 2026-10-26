/*
 * FUN_10016ea0 at 10016ea0
 * undefined FUN_10016ea0(void)
 * Address ranges: 10016ea0-10016f9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10016ea0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x14) <= param_2) && (param_2 < 8)) {
    if ((*(int *)(param_1 + 0x28 + param_2 * 4) == 0) &&
       (iVar1 = FUN_10018b50(param_1,param_2,param_2), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_10016b80(param_1,param_3,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28 + param_2 * 4);
      if (*(int *)(param_1 + 0x10) != 0x14) {
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        if (*(int *)(iVar1 + 0x24) != 0) {
          FUN_10019bc0();
        }
        *(int *)(iVar1 + 0x74) = param_1;
        FUN_100161e0();
        iVar2 = FUN_10020410();
        if (((iVar2 == 0) && (*(int *)(param_1 + 0x68) != 0)) &&
           (iVar2 = FUN_10016730(param_2,param_2,2,0,0), iVar2 == 0)) {
          FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x405,&DAT_10265ce0,0);
          FUN_100161f0();
          return 0;
        }
        return iVar1;
      }
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x3f5,&DAT_10265ce0,0);
    }
  }
  return 0;
}

