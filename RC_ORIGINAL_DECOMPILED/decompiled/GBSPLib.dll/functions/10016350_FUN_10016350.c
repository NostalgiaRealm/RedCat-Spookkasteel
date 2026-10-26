/*
 * FUN_10016350 at 10016350
 * undefined FUN_10016350(void)
 * Address ranges: 10016350-1001642d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10016350(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x80;
  if (param_3 == 0) {
    iVar3 = param_1 + 4;
  }
  FUN_10020430();
  if (*(int *)(iVar3 + 0x20) == 0) {
    if (param_3 == 0) {
      uVar2 = FUN_10019ae0();
    }
    else {
      uVar2 = FUN_10019be0(0x100);
    }
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
  }
  iVar1 = *(int *)(iVar3 + 0x20);
  if (iVar1 != 0) {
    if (*(int *)(iVar3 + 0x18) != 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(iVar1 + 0x10) = 1;
        *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0x14) = 1;
      }
      *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0x18) = *(undefined4 *)(iVar3 + 0x1c);
    }
    if ((param_3 != 0) && (iVar3 = (**(code **)(param_3 + 0x44))(), iVar3 == 0)) {
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x16f,&DAT_10265ce0,0);
      return 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar2 = FUN_10019cc0();
      *(undefined4 *)(param_1 + 0x24) = uVar2;
    }
    return 1;
  }
  return 0;
}

