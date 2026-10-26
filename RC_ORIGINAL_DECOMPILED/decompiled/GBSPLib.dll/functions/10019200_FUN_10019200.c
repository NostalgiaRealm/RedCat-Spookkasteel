/*
 * FUN_10019200 at 10019200
 * undefined FUN_10019200(void)
 * Address ranges: 10019200-10019419
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10019200(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte local_a;
  byte local_9;
  uint local_4;
  
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_10016140();
  if (iVar1 == 0) {
    return 0;
  }
  if (local_4 == 0x6d426547) {
    iVar2 = FUN_10014a00(1);
    if (iVar2 != 0) {
      if ((local_9 & 0xf0) == 0x40) {
        iVar2 = FUN_10019670(iVar1,param_1);
        if (iVar2 != 0) {
          if (*(int *)(iVar1 + 0x24) != 0) {
            *(undefined4 *)(iVar1 + 0x24) = 0;
            uVar3 = FUN_1001a380();
            *(undefined4 *)(iVar1 + 0x24) = uVar3;
            if (*(int *)(iVar1 + 0x24) == 0) goto LAB_1001926c;
          }
          if (*(int *)(iVar1 + 0x10) == 0x14) {
            FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0xdd1,&DAT_10265ce0,0
                        );
          }
          else {
            iVar2 = FUN_10014a00(1);
            if (iVar2 == 0) goto LAB_1001926c;
            while (uVar4 = local_a & 0xf, (int)uVar4 <= *(int *)(iVar1 + 0x18)) {
              iVar2 = FUN_100162f0(iVar1,uVar4);
              if (iVar2 == 0) goto LAB_1001926c;
              if ((local_a & 0x10) == 0) {
                uVar3 = FUN_10018c10();
                iVar2 = FUN_10014a00(uVar3);
                if (iVar2 == 0) goto LAB_1001926c;
              }
              if ((local_a & 0x20) != 0) {
                FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0xe07,
                             &DAT_10265ce0,0);
                return 0;
              }
              *(undefined4 *)(iVar1 + 0x48 + uVar4 * 4) = 1;
              iVar2 = FUN_10014a00(1);
              if (iVar2 == 0) {
                FUN_100161f0();
                return 0;
              }
            }
          }
          if (*(int *)(iVar1 + 0x68) == 0) {
            return iVar1;
          }
          uVar3 = FUN_10019200();
          *(undefined4 *)(iVar1 + 0x68) = uVar3;
          if (*(int *)(iVar1 + 0x68) != 0) {
            return iVar1;
          }
        }
      }
      else {
        FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0xdc1,&DAT_10265ce0,0);
      }
    }
  }
  else {
    iVar2 = FUN_10014a40(0);
    if (((iVar2 != 0) && ((local_4 & 0xffff) == 0x4d42)) &&
       (iVar2 = FUN_10019420(iVar1,param_1), iVar2 != 0)) {
      return iVar1;
    }
  }
LAB_1001926c:
  FUN_100161f0();
  return 0;
}

