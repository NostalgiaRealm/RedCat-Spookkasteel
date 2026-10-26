/*
 * FUN_100168d0 at 100168d0
 * undefined FUN_100168d0(void)
 * Address ranges: 100168d0-10016a90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100168d0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = true;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x70);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x6c);
      iVar4 = 0;
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          *(int *)(iVar3 + 0x6c) = iVar1 + 1;
          if (param_2 != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x48 + *(int *)(param_1 + 0x14) * 4) = 1;
            iVar3 = *(int *)(param_1 + 0xa0);
            if (iVar3 == 0) {
              iVar3 = *(int *)(param_1 + 0x24);
            }
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x70);
              if ((*(int *)(iVar3 + 0xa0) == 0) && (*(int *)(iVar3 + 0x24) == 0)) {
                FUN_10016350(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x24) + 8),
                             *(undefined4 *)(iVar3 + 0xa8));
              }
              FUN_10019090();
            }
          }
          if ((*(int *)(*(int *)(param_1 + 0x70) + 0x6c) == 0) && (param_2 != 0)) {
            if (*(int *)(param_1 + 0xb4) == 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
              *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xb8) = 1;
            }
          }
        }
      }
      else {
        *(int *)(iVar3 + 0x6c) = iVar1 + -1;
      }
      if ((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
        iVar3 = (**(code **)(*(int *)(param_1 + 0xa8) + 0x40))();
        if (iVar3 == 0) {
          FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x2eb,&DAT_10265ce0,0);
        }
        bVar2 = iVar3 != 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar3 = FUN_10016aa0();
        if (iVar3 == 0) {
          bVar2 = false;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      if ((((iVar4 != 0) && (iVar4 < 1)) && (*(int *)(*(int *)(param_1 + 0x70) + 0xac) != 0)) &&
         (iVar3 = FUN_10017a00(*(int *)(param_1 + 0x70)), iVar3 == 0)) {
        bVar2 = false;
      }
      FUN_100161f0();
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    FUN_100161f0();
    return bVar2;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x2b0,&DAT_10265ce0,0);
  return false;
}

