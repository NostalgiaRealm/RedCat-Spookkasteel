/*
 * FUN_10016730 at 10016730
 * undefined FUN_10016730(void)
 * Address ranges: 10016730-1001685d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_10016730(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_3 < *(int *)(param_1 + 0x14)) || (7 < param_4)) {
    uVar4 = 0x26b;
  }
  else if ((*(int *)(param_1 + 0x6c) < 0) || (*(int *)(param_1 + 0x70) != 0)) {
    uVar4 = 0x271;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x14) {
      if (param_3 <= param_4) {
        iVar3 = param_3 * 4;
        iVar2 = param_3;
        do {
          iVar1 = FUN_10016c70(param_1,iVar2,param_5,param_6,param_7,1);
          *(int *)(iVar3 + param_3 * -4 + param_2) = iVar1;
          if (iVar1 == 0) {
            FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x281,&DAT_10265ce0,0
                        );
            if (iVar2 + -1 < param_3) {
              return 0;
            }
            iVar3 = ((iVar2 + -1) - param_3) + 1;
            do {
              FUN_100161f0();
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 <= param_4);
      }
      return 1;
    }
    uVar4 = 0x277;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar4,&DAT_10265ce0,0);
  return 0;
}

