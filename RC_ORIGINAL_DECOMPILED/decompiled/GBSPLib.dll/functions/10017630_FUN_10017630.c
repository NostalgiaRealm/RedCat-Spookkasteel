/*
 * FUN_10017630 at 10017630
 * undefined FUN_10017630(void)
 * Address ranges: 10017630-100177f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10017630(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x74) == 0)) &&
     (*(int *)(param_1 + 0x6c) == 0)) {
    if ((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xa8) == param_2)) {
      return 1;
    }
    iVar2 = FUN_10017860();
    if (iVar2 == 0) {
      uVar6 = 0x5bc;
    }
    else {
      iVar2 = param_3;
      if ((param_3 == 0) && (iVar2 = *(int *)(param_1 + 0xa4), iVar2 == 0)) {
        iVar2 = 2;
      }
      if (param_2 == 0) {
        return 1;
      }
      iVar3 = *(int *)(param_1 + 0x18) + 1;
      param_3 = *(int *)(param_1 + 0x7c);
      if (*(int *)(param_1 + 0x7c) <= iVar3) {
        param_3 = iVar3;
      }
      uVar6 = *(undefined4 *)(param_1 + 8);
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar4 = FUN_100175e0();
      iVar3 = FUN_10020410();
      if (iVar3 != 0) {
        uVar4 = 1;
      }
      iVar3 = FUN_10017480(param_2,uVar1,uVar6,param_3,*(undefined4 *)(param_1 + 0x78),
                           *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),uVar4,
                           *(int *)(param_1 + 0x68) != 0,iVar2);
      if (iVar3 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0xac) = iVar3;
      *(int *)(param_1 + 0xa4) = iVar2;
      *(int *)(param_1 + 0xa8) = param_2;
      puVar5 = (undefined4 *)(param_1 + 0x80);
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar2 = FUN_10018ca0(param_1,0,(undefined4 *)(param_1 + 0x80));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(int *)(param_1 + 0x94) = param_3 + -1;
        iVar2 = FUN_10017a00(param_1);
        if (iVar2 != 0) {
          return 1;
        }
        FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x600,&DAT_10265ce0,0);
        (**(code **)(param_2 + 0x38))();
        *(undefined4 *)(param_1 + 0xac) = 0;
        return 0;
      }
      uVar6 = 0x5f5;
    }
  }
  else {
    uVar6 = 0x5b0;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar6,&DAT_10265ce0,0);
  return 0;
}

