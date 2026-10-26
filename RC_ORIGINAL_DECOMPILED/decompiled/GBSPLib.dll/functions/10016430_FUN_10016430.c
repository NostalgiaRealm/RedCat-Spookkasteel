/*
 * FUN_10016430 at 10016430
 * undefined FUN_10016430(void)
 * Address ranges: 10016430-100165cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10016430(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x70) == 0)) {
    if (*(int *)(param_1 + 0xac) == 0) {
      if ((*(int *)(param_1 + 0x14) <= param_3) && (param_4 < 8)) {
        if (*(int *)(param_1 + 0x18) < param_4) {
          iVar1 = FUN_10018b50(param_1,*(int *)(param_1 + 0x18),param_4);
          if (iVar1 == 0) {
            return 0;
          }
          *(int *)(param_1 + 0x18) = param_4;
        }
        goto LAB_100164cd;
      }
      uVar3 = 0x19f;
    }
    else {
      if ((*(int *)(param_1 + 0x90) <= param_3) && (param_4 <= *(int *)(param_1 + 0x94))) {
LAB_100164cd:
        if (param_3 <= param_4) {
          iVar1 = param_3 * 4;
          iVar2 = param_3;
          do {
            if (*(int *)(param_1 + 0xac) == 0) {
              uVar3 = FUN_10016ea0(param_1,iVar2,0xffffffff);
            }
            else {
              uVar3 = FUN_10016fa0(param_1,iVar2,0xffffffff);
            }
            *(undefined4 *)(iVar1 + param_3 * -4 + param_2) = uVar3;
            if (*(int *)(iVar1 + param_3 * -4 + param_2) == 0) {
              FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x1b7,&DAT_10265ce0
                           ,0);
              if (iVar2 + -1 < param_3) {
                return 0;
              }
              iVar1 = ((iVar2 + -1) - param_3) + 1;
              do {
                FUN_100161f0();
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
              return 0;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 4;
          } while (iVar2 <= param_4);
        }
        return 1;
      }
      uVar3 = 0x196;
    }
  }
  else {
    uVar3 = 0x18d;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar3,&DAT_10265ce0,0);
  return 0;
}

