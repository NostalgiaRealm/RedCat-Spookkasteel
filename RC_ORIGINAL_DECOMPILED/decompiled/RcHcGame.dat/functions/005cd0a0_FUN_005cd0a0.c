/*
 * FUN_005cd0a0 at 005cd0a0
 * undefined FUN_005cd0a0(void)
 * Address ranges: 005cd0a0-005cd1ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall
FUN_005cd0a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 unaff_EBP;
  
  iVar2 = FUN_005cd010();
  if ((((iVar2 != 0) && (param_2 != 0)) && (param_2 <= DAT_006cc5b8)) &&
     (iVar2 = FUN_005cd1d0(), iVar2 != 0)) {
    if ((param_1 == 0) && (param_2 == 3)) {
      iVar2 = FUN_005cd0a0(param_3,0,param_5 & 0xfffffff7);
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      iVar2 = 0;
    }
    iVar1 = *(int *)(DAT_006cc5d8 + -4 + param_2 * 4);
    iVar3 = (**(code **)(iVar1 + 0x10))(param_4,param_5);
    if (iVar3 == 0) {
      if (iVar2 != 0) {
        FUN_005cd320();
        return (undefined4 *)0x0;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_005cf3b0(0x30);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = unaff_EBP;
        puVar4[1] = iVar1;
        puVar4[2] = iVar3;
        piVar5 = (int *)FUN_005cf3b0(8);
        puVar4[4] = piVar5;
        puVar4[0xb] = iVar2;
        if (piVar5 == (int *)0x0) {
          if (iVar2 != 0) {
            FUN_005cd320();
          }
          FUN_005cf400(puVar4);
          _DAT_007203c0 = 0;
          (**(code **)(iVar1 + 0x2c))();
          return (undefined4 *)0x0;
        }
        *piVar5 = (int)puVar4;
        *(undefined4 *)(puVar4[4] + 4) = 0;
        return puVar4;
      }
      if (iVar2 != 0) {
        FUN_005cd320();
      }
      (**(code **)(iVar1 + 0x2c))();
    }
  }
  return (undefined4 *)0x0;
}

