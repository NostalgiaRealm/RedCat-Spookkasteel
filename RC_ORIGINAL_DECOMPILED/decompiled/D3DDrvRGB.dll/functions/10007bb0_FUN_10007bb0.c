/*
 * FUN_10007bb0 at 10007bb0
 * undefined4 __fastcall FUN_10007bb0(int * param_1)
 * Address ranges: 10007bb0-10007cf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10007bb0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  
  if ((((param_1[0xe] != 0) && (*param_1 != 1)) && (param_1[3] != 0)) &&
     (iVar2 = FUN_10007840(), iVar2 != 0)) {
    uVar1 = FUN_10007d00(0x77);
    if ((CONCAT22(extraout_var,uVar1) != 0) &&
       (uVar1 = FUN_10007d00(0x11), CONCAT22(extraout_var_00,uVar1) != 0)) {
      uVar1 = FUN_10007d00(0x77);
      iVar2 = CONCAT22(extraout_var_01,uVar1);
      while (iVar2 != 0) {
        uVar1 = FUN_10007d00(0x77);
        iVar2 = CONCAT22(extraout_var_02,uVar1);
      }
      DAT_100ec130 = (uint)(DAT_100ec130 == 0);
    }
    if (DAT_100ec130 == 0) {
      (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,8,3);
    }
    else {
      (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,8,2);
    }
    FUN_10001b50((uint)((*(byte *)(param_1 + 2) & 4) == 0));
    FUN_10001b10((uint)((*(byte *)(param_1 + 2) & 8) == 0));
    FUN_10001a70(0,(uint)((*(byte *)(param_1 + 2) & 0x10) == 0));
    FUN_100019f0(5,6);
    iVar2 = FUN_10008430(0,param_1[3],0);
    if (iVar2 != 0) {
      (**(code **)(*DAT_1001bcd0 + 0x68))
                (DAT_1001bcd0,4,0x1c4,param_1[0xc],param_1[0xe],param_1[5],param_1[7],0x18);
      FUN_10001b10(1);
      FUN_10001b50(1);
      FUN_10007950((int)param_1);
      return 1;
    }
  }
  return 0;
}

